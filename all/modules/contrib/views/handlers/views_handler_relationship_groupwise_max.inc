<?php

/**
 * @file
 * Definition of views_handler_relationship_groupwise_max.
 */

/**
 * Relationship handler that allows a groupwise maximum of the linked in table.
 *
 * For a definition, see:
 * http://dev.mysql.com/doc/refman/5.0/en/example-maximum-column-group-row.html
 * In lay terms, instead of joining to get all matching records in the linked
 * table, we get only one record, a 'representative record' picked according
 * to a given criteria.
 *
 * Example:
 * Suppose we have a term view that gives us the terms: Horse, Cat, Aardvark.
 * We wish to show for each term the most recent node of that term.
 * What we want is some kind of relationship from term to node.
 * But a regular relationship will give us all the nodes for each term,
 * giving the view multiple rows per term. What we want is just one
 * representative node per term, the node that is the 'best' in some way:
 * eg, the most recent, the most commented on, the first in alphabetical order.
 *
 * This handler gives us that kind of relationship from term to node.
 * The method of choosing the 'best' implemented with a sort
 * that the user selects in the relationship settings.
 *
 * So if we want our term view to show the most commented node for each term,
 * add the relationship and in its options, pick the 'Comment count' sort.
 *
 * Relationship definition
 *  - 'outer field': The outer field to substitute into the correlated subquery.
 *       This must be the full field name, not the alias.
 *       Eg: 'term_data.tid'.
 *  - 'argument table',
 *    'argument field': These options define a views argument that the subquery
 *     must add to itself to filter by the main view.
 *     Example: the main view shows terms, this handler is being used to get to
 *     the nodes base table. Your argument must be 'term_node', 'tid', as this
 *     is the argument that should be added to a node view to filter on terms.
 *
 * A note on performance:
 * This relationship uses a correlated subquery, which is expensive.
 * Subsequent versions of this handler could also implement the alternative way
 * of doing this, with a join -- though this looks like it could be pretty messy
 * to implement. This is also an expensive method, so providing both methods and
 * allowing the user to choose which one works fastest for their data might be
 * the best way.
 * If your use of this relationship handler is likely to result in large
 * data sets, you might want to consider storing statistics in a separate table,
 * in the same way as node_comment_statistics.
 *
 * @ingroup views_relationship_handlers
 */
class views_handler_relationship_groupwise_max extends views_handler_relationship {

  /**
   * Defines default values for options.
   */
  public function option_definition() {
    $options = parent::option_definition();

    $options['subquery_sort'] = array('default' => NULL);
    // Descending more useful.
    $options['subquery_order'] = array('default' => 'DESC');
    $options['subquery_regenerate'] = array('default' => FALSE, 'bool' => TRUE);
    $options['subquery_view'] = array('default' => FALSE);
    $options['subquery_namespace'] = array('default' => FALSE);

    return $options;
  }

  /**
   * Extends the relationship's basic options.
   *
   * Allows the user to pick a sort and an order for it.
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Get the sorts that apply to our base.
    $sorts = views_fetch_fields($this->definition['base'], 'sort');
    foreach ($sorts as $sort_id => $sort) {
      $sort_options[$sort_id] = "$sort[group]: $sort[title]";
    }
    $base_table_data = views_fetch_data($this->definition['base']);

    $form['subquery_sort'] = array(
      '#type' => 'select',
      '#title' => t('Representative sort criteria'),
      // Provide the base field as the default sort option.
      '#default_value' => !empty($this->options['subquery_sort']) ? $this->options['subquery_sort'] : $this->definition['base'] . '.' . $base_table_data['table']['base']['field'],
      '#options' => $sort_options,
      '#description' => theme('advanced_help_topic', array('module' => 'views', 'topic' => 'relationship-representative')) .
      t("The sort criteria is applied to the data brought in by the relationship to determine how a representative item is obtained for each row. For example, to show the most recent node for each user, pick 'Content: Updated date'."),
    );

    $form['subquery_order'] = array(
      '#type' => 'radios',
      '#title' => t('Representative sort order'),
      '#description' => t("The ordering to use for the sort criteria selected above."),
      '#options' => array('ASC' => t('Ascending'), 'DESC' => t('Descending')),
      '#default_value' => $this->options['subquery_order'],
    );

    $form['subquery_namespace'] = array(
      '#type' => 'textfield',
      '#title' => t('Subquery namespace'),
      '#description' => t('Advanced. Enter a namespace for the subquery used by this relationship.'),
      '#default_value' => $this->options['subquery_namespace'],
    );

    // WIP: This stuff doesn't work yet: namespacing issues.
    // A list of suitable views to pick one as the subview.
    $views = array('' => '<none>');
    $all_views = views_get_all_views();
    foreach ($all_views as $view) {
      // Only get views that are suitable:
      // - base must the base that our relationship joins towards
      // - must have fields.
      if ($view->base_table == $this->definition['base'] && !empty($view->display['default']->display_options['fields'])) {
        // @todo check the field is the correct sort?
        // or let users hang themselves at this stage and check later?
        if ($view->type == 'Default') {
          $views[t('Default Views')][$view->name] = $view->name;
        }
        else {
          $views[t('Existing Views')][$view->name] = $view->name;
        }
      }
    }

    $form['subquery_view'] = array(
      '#type' => 'select',
      '#title' => t('Representative view'),
      '#default_value' => $this->options['subquery_view'],
      '#options' => $views,
      '#description' => t('Advanced. Use another view to generate the relationship subquery. This allows you to use filtering and more than one sort. If you pick a view here, the sort options above are ignored. Your view must have the ID of its base as its only field, and should have some kind of sorting.'),
    );

    $form['subquery_regenerate'] = array(
      '#type' => 'checkbox',
      '#title' => t('Generate subquery each time view is run.'),
      '#default_value' => $this->options['subquery_regenerate'],
      '#description' => t('Will re-generate the subquery for this relationship every time the view is run, instead of only when these options are saved. Use for testing if you are making changes elsewhere. WARNING: seriously impairs performance.'),
    );
  }

  /**
   * Helper function to create a pseudo view.
   *
   * We use this to obtain our subquery SQL.
   */
  public function get_temporary_view() {
    views_include('view');
    $view = new view();
    // @todo What's this?
    $view->vid = 'new';
    $view->base_table = $this->definition['base'];
    $view->add_display('default');
    return $view;
  }

  /**
   * When the form is submitted, take sure to clear the subquery string cache.
   */
  public function options_form_submit(&$form, &$form_state) {
    $cid = 'views_relationship_groupwise_max:' . $this->view->name . ':' . $this->view->current_display . ':' . $this->options['id'];
    cache_clear_all($cid, 'cache_views_data');
  }

  /**
   * Generate a subquery given the user options, as set in the options.
   * These are passed in rather than picked up from the object because we
   * generate the subquery when the options are saved, rather than when the view
   * is run. This saves considerable time.
   *
   * @param array $options
   *   An array of options that contains the following items:
   *   - subquery_sort: the id of a views sort.
   *   - subquery_order: either ASC or DESC.
   *
   * @return string
   *   The subquery SQL string, ready for use in the main query.
   */
  public function left_query($options) {
    // Either load another view, or create one on the fly.
    if ($options['subquery_view']) {
      $temp_view = views_get_view($options['subquery_view']);
      // Remove all fields from default display.
      unset($temp_view->display['default']->display_options['fields']);
    }
    else {
      // Create a new view object on the fly, which we use to generate a query
      // object and then get the SQL we need for the subquery.
      $temp_view = $this->get_temporary_view();

      // Add the sort from the options to the default display.
      list($sort_table, $sort_field) = explode('.', $options['subquery_sort']);
      $sort_options = array('order' => $options['subquery_order']);
      $temp_view->add_item('default', 'sort', $sort_table, $sort_field, $sort_options);
    }

    // Get the namespace string.
    $temp_view->namespace = (!empty($options['subquery_namespace'])) ? '_' . $options['subquery_namespace'] : '_INNER';
    $this->subquery_namespace = (!empty($options['subquery_namespace'])) ? '_' . $options['subquery_namespace'] : 'INNER';

    // The value we add here does nothing, but doing this adds the right tables
    // and puts in a WHERE clause with a placeholder we can grab later.
    $temp_view->args[] = '**CORRELATED**';

    // Add the base table ID field.
    $temp_view->add_item('default', 'field', $this->definition['base'], $this->definition['field']);

    // Add the correct argument for our relationship's base ie the "how to get
    // back to base" argument; the relationship definition defines which one to
    // use.
    $temp_view->add_item(
      'default',
      'argument',
      // For example, 'term_node'.
      $this->definition['argument table'],
      // For example, 'tid'.
      $this->definition['argument field']
    );

    // Build the view. The creates the query object and produces the query
    // string but does not run any queries.
    $temp_view->build();

    // Now take the SelectQuery object the View has built and massage it
    // somewhat so we can get the SQL query from it.
    $subquery = $temp_view->build_info['query'];

    // Workaround until http://drupal.org/node/844910 is fixed.
    // Remove all fields from the SELECT except the base id.
    $fields =& $subquery->getFields();
    foreach (array_keys($fields) as $field_name) {
      // The base id for this subquery is stored in our definition.
      if ($field_name != $this->definition['field']) {
        unset($fields[$field_name]);
      }
    }

    // Make every alias in the subquery safe within the outer query by appending
    // a namespace to it, '_inner' by default.
    $tables =& $subquery->getTables();
    foreach (array_keys($tables) as $table_name) {
      $tables[$table_name]['alias'] .= $this->subquery_namespace;
      // Namespace the join on every table.
      if (isset($tables[$table_name]['condition'])) {
        $tables[$table_name]['condition'] = $this->condition_namespace($tables[$table_name]['condition']);
      }
    }
    // Namespace fields.
    foreach (array_keys($fields) as $field_name) {
      $fields[$field_name]['table'] .= $this->subquery_namespace;
      $fields[$field_name]['alias'] .= $this->subquery_namespace;
    }
    // Namespace conditions.
    $where =& $subquery->conditions();
    $this->alter_subquery_condition($subquery, $where);
    // Not sure why, but our sort order clause doesn't have a table.
    // @todo The call to add_item() above to add the sort handler is probably
    // wrong -- needs attention from someone who understands it.
    // In the meantime, this works, but with a leap of faith.
    $orders =& $subquery->getOrderBy();
    $orders_tmp = array();
    foreach ($orders as $order_key => $order) {
      // Until http://drupal.org/node/844910 is fixed, $order_key is a field
      // alias from SELECT. De-alias it using the View object.
      $sort_table = $temp_view->query->fields[$order_key]['table'];
      $sort_field = $temp_view->query->fields[$order_key]['field'];
      $orders_tmp[$sort_table . $this->subquery_namespace . '.' . $sort_field] = $order;
    }
    $orders = $orders_tmp;

    // The query we get doesn't include the LIMIT, so add it here.
    $subquery->range(0, 1);
    // Clone the query object to force recompilation of the underlying where and
    // having objects on the next step.
    $subquery = clone $subquery;

    // Add in Views Query Substitutions such as ***CURRENT_TIME***.
    views_query_views_alter($subquery);

    // Extract the SQL the temporary view built.
    $subquery_sql = $subquery->__toString();

    // Replace subquery argument placeholders.
    $quoted = $subquery->getArguments();
    $connection = Database::getConnection();
    foreach ($quoted as $key => $val) {
      if (is_array($val)) {
        $quoted[$key] = implode(', ', array_map(array($connection, 'quote'), $val));
      }
      // If the correlated placeholder has been located, replace it with the
      // outer field name.
      elseif ($val === '**CORRELATED**') {
        $quoted[$key] = $this->definition['outer field'];
      }
      else {
        $quoted[$key] = $connection->quote($val);
      }
    }
    $subquery_sql = strtr($subquery_sql, $quoted);

    return $subquery_sql;
  }

  /**
   * Recursive helper to add a namespace to conditions.
   *
   * Similar to _views_query_tag_alter_condition().
   *
   * (Though why is the condition we get in a simple query 3 levels deep???)
   */
  public function alter_subquery_condition(QueryAlterableInterface $query, &$conditions) {
    foreach ($conditions as $condition_id => &$condition) {
      // Skip the #conjunction element.
      if (is_numeric($condition_id)) {
        if (is_string($condition['field'])) {
          $condition['field'] = $this->condition_namespace($condition['field']);
        }
        elseif (is_object($condition['field'])) {
          $sub_conditions =& $condition['field']->conditions();
          $this->alter_subquery_condition($query, $sub_conditions);
        }
      }
    }
    unset($condition);
  }

  /**
   * Helper function to namespace query pieces.
   *
   * Turns 'foo.bar' into 'foo_NAMESPACE.bar'.
   */
  public function condition_namespace($string) {
    return str_replace('.', $this->subquery_namespace . '.', $string);
  }

  /**
   * Called to implement a relationship in a query.
   * This is mostly a copy of our parent's query() except for this bit with
   * the join class.
   */
  public function query() {
    // Figure out what base table this relationship brings to the party.
    $table_data = views_fetch_data($this->definition['base']);
    $base_field = empty($this->definition['base field']) ? $table_data['table']['base']['field'] : $this->definition['base field'];

    $this->ensure_my_table();

    $def = $this->definition;
    $def['table'] = $this->definition['base'];
    $def['field'] = $base_field;
    $def['left_table'] = $this->table_alias;
    $def['left_field'] = $this->field;
    if (!empty($this->options['required'])) {
      $def['type'] = 'INNER';
    }

    if ($this->options['subquery_regenerate']) {
      // For testing only, regenerate the subquery each time.
      $def['left_query'] = $this->left_query($this->options);
    }
    else {
      // Get the stored subquery SQL string.
      $cid = 'views_relationship_groupwise_max:' . $this->view->name . ':' . $this->view->current_display . ':' . $this->options['id'];
      $cache = cache_get($cid, 'cache_views_data');
      if (isset($cache->data)) {
        $def['left_query'] = $cache->data;
      }
      else {
        $def['left_query'] = $this->left_query($this->options);
        cache_set($cid, $def['left_query'], 'cache_views_data');
      }
    }

    if (!empty($def['join_handler']) && class_exists($def['join_handler'])) {
      $join = new $def['join_handler']();
    }
    else {
      $join = new views_join_subquery();
    }

    $join->definition = $def;
    $join->construct();
    $join->adjusted = TRUE;

    // Use a short alias for this.
    $alias = $def['table'] . '_' . $this->table;

    $this->alias = $this->query->add_relationship($alias, $join, $this->definition['base'], $this->relationship);
  }

}
