<?php

/**
 * @file
 * Definition of views_handler_filter_term_node_tid.
 */

/**
 * Filter by term id.
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_term_node_tid extends views_handler_filter_many_to_one {

  /**
   * Stores the exposed input for this filter.
   */
  public $validated_exposed_input = NULL;

  /**
   * {@inheritdoc}
   */
  public function init(&$view, &$options) {
    parent::init($view, $options);
    if (!empty($this->definition['vocabulary'])) {
      $this->options['vocabulary'] = $this->definition['vocabulary'];
    }

    // Convert legacy vid option to machine name vocabulary.
    if (isset($this->options['vid']) && !empty($this->options['vid']) & empty($this->options['vocabulary'])) {
      $vocabularies = taxonomy_get_vocabularies();
      $vid = $this->options['vid'];
      if (isset($vocabularies[$vid], $vocabularies[$vid]->machine_name)) {
        $this->options['vocabulary'] = $vocabularies[$vid]->machine_name;
      }
    }
  }

  /**
   * {@inheritdoc}
   */
  public function has_extra_options() {
    return TRUE;
  }

  /**
   * {@inheritdoc}
   */
  public function get_value_options() {
    // Don't overwrite the value options.
  }

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();

    $options['type'] = array('default' => 'textfield');
    $options['limit'] = array('default' => TRUE, 'bool' => TRUE);
    $options['vocabulary'] = array('default' => 0);
    $options['hierarchy'] = array('default' => 0);
    $options['error_message'] = array('default' => TRUE, 'bool' => TRUE);
    $options['optgroups'] = array('default' => 0);

    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function extra_options_form(&$form, &$form_state) {
    $vocabularies = taxonomy_get_vocabularies();
    $options = array();
    foreach ($vocabularies as $voc) {
      $options[$voc->machine_name] = check_plain($voc->name);
    }

    if ($this->options['limit']) {
      // We only do this when the form is displayed.
      if (empty($this->options['vocabulary'])) {
        $first_vocabulary = reset($vocabularies);
        $this->options['vocabulary'] = $first_vocabulary->machine_name;
      }

      if (empty($this->definition['vocabulary'])) {
        $form['vocabulary'] = array(
          '#type' => 'radios',
          '#title' => t('Vocabulary'),
          '#options' => $options,
          '#description' => t('Select which vocabulary to show terms for in the regular options.'),
          '#default_value' => $this->options['vocabulary'],
        );
      }
    }

    $form['type'] = array(
      '#type' => 'radios',
      '#title' => t('Selection type'),
      '#options' => array('select' => t('Dropdown'), 'textfield' => t('Autocomplete')),
      '#default_value' => $this->options['type'],
    );

    $form['hierarchy'] = array(
      '#type' => 'checkbox',
      '#title' => t('Show hierarchy in dropdown'),
      '#default_value' => !empty($this->options['hierarchy']),
      '#dependency' => array('radio:options[type]' => array('select')),
    );

    $form['optgroups'] = array(
      '#type' => 'checkbox',
      '#title' => t('Show groups in dropdown'),
      '#default_value' => !empty($this->options['optgroups']),
      '#dependency' => array('radio:options[type]' => array('select')),
    );

  }

  /**
   * {@inheritdoc}
   */
  public function value_form(&$form, &$form_state) {
    $vocabulary = taxonomy_vocabulary_machine_name_load($this->options['vocabulary']);
    if (empty($vocabulary) && $this->options['limit']) {
      $form['markup'] = array(
        '#markup' => '<div class="form-item">' . t('An invalid vocabulary is selected. Please change it in the options.') . '</div>',
      );
      return;
    }

    if ($this->options['type'] == 'textfield') {
      $default = '';
      if ($this->value) {
        $result = taxonomy_term_load_multiple($this->value);
        foreach ($result as $entity_term) {
          if ($default) {
            $default .= ', ';
          }
          $default .= entity_label('taxonomy_term', $entity_term);
        }
      }

      $form['value'] = array(
        '#title' => $this->options['limit'] ? t('Select terms from vocabulary @voc', array('@voc' => $vocabulary->name)) : t('Select terms'),
        '#type' => 'textfield',
        '#default_value' => $default,
      );

      if ($this->options['limit']) {
        $form['value']['#autocomplete_path'] = 'admin/views/ajax/autocomplete/taxonomy/' . $vocabulary->vid;
      }
    }
    else {
      $options = array();
      if (!empty($this->options['hierarchy']) && $this->options['limit']) {
        $tree = taxonomy_get_tree($vocabulary->vid, 0, NULL, TRUE);
        $options = array();
        if (!empty($tree)) {
          if (!empty($this->options['optgroups'])) {
            foreach ($tree as $term) {
              $term_name = entity_label('taxonomy_term', $term);
              if ($term->parents[0] == 0) {
                $parent_name = $term_name;
              }
              else {
                $options[$parent_name][$term->tid] = str_repeat('-', $term->depth - 1) . $term_name;
              }
            }
          }
          else {
            foreach ($tree as $term) {
              $options[$term->tid] = str_repeat('-', $term->depth) . entity_label('taxonomy_term', $term);
            }
          }
        }
      }
      else {
        $query = db_select('taxonomy_term_data', 'td');
        $query->innerJoin('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
        $query->fields('td');
        $query->orderby('tv.weight');
        $query->orderby('tv.name');
        $query->orderby('td.weight');
        $query->orderby('td.name');
        $query->addTag('taxonomy_term_access');
        if ($this->options['limit']) {
          $query->condition('tv.machine_name', $vocabulary->machine_name);
        }
        $result = $query->execute();

        $tids = array();
        foreach ($result as $term) {
          $tids[] = $term->tid;
        }
        $entities = taxonomy_term_load_multiple($tids);
        foreach ($entities as $entity_term) {
          $options[$entity_term->tid] = entity_label('taxonomy_term', $entity_term);
        }
      }

      $default_value = (array) $this->value;

      if (!empty($form_state['exposed'])) {
        $identifier = $this->options['expose']['identifier'];

        if (!empty($this->options['expose']['reduce'])) {
          $options = $this->reduce_value_options($options);

          if (!empty($this->options['expose']['multiple']) && empty($this->options['expose']['required'])) {
            $default_value = array();
          }
        }

        if (empty($this->options['expose']['multiple'])) {
          if (empty($this->options['expose']['required']) && (empty($default_value) || !empty($this->options['expose']['reduce']))) {
            $default_value = 'All';
          }
          elseif (empty($default_value)) {
            $keys = array_keys($options);
            $default_value = array_shift($keys);
          }
          // Due to #1464174 there is a chance that array('') was saved in the
          // admin UI. Let's choose a safe default value.
          elseif ($default_value == array('')) {
            $default_value = 'All';
          }
          else {
            $copy = $default_value;
            $default_value = array_shift($copy);
          }
        }
      }
      $form['value'] = array(
        '#type' => 'select',
        '#title' => $this->options['limit'] ? t('Select terms from vocabulary @voc', array('@voc' => $vocabulary->name)) : t('Select terms'),
        '#multiple' => TRUE,
        '#options' => $options,
        '#size' => min(9, count($options)),
        '#default_value' => $default_value,
      );

      if (!empty($form_state['exposed']) && isset($identifier) && !isset($form_state['input'][$identifier])) {
        $form_state['input'][$identifier] = $default_value;
      }
    }

    if (empty($form_state['exposed'])) {
      // Retain the helper option.
      $this->helper->options_form($form, $form_state);

      // Show help text if not exposed to end users.
      $form['value']['#description'] = t('Leave blank for all. Otherwise, the first selected term will be the default instead of "Any".');
    }
  }

  /**
   * {@inheritdoc}
   */
  public function value_validate($form, &$form_state) {
    // We only validate if they've chosen the text field style.
    if ($this->options['type'] != 'textfield') {
      return;
    }

    $values = drupal_explode_tags($form_state['values']['options']['value']);
    $tids = $this->validate_term_strings($form['value'], $values);

    if ($tids) {
      $form_state['values']['options']['value'] = $tids;
    }
  }

  /**
   * {@inheritdoc}
   */
  public function accept_exposed_input($input) {
    if (empty($this->options['exposed'])) {
      return TRUE;
    }

    // We need to know the operator, which is normally set in
    // views_handler_filter::accept_exposed_input(), before we actually call
    // the parent version of ourselves.
    if (!empty($this->options['expose']['use_operator']) && !empty($this->options['expose']['operator_id']) && isset($input[$this->options['expose']['operator_id']])) {
      $this->operator = $input[$this->options['expose']['operator_id']];
    }

    // If view is an attachment and is inheriting exposed filters, then assume
    // exposed input has already been validated.
    if (!empty($this->view->is_attachment) && $this->view->display_handler->uses_exposed()) {
      $this->validated_exposed_input = (array) $this->view->exposed_raw_input[$this->options['expose']['identifier']];
    }

    // If we're checking for EMPTY or NOT, we don't need any input, and we can
    // say that our input conditions are met by just having the right operator.
    if ($this->operator == 'empty' || $this->operator == 'not empty') {
      return TRUE;
    }

    // If it's non-required and there's no value don't bother filtering.
    if (!$this->options['expose']['required'] && empty($this->validated_exposed_input)) {
      return FALSE;
    }

    $rc = parent::accept_exposed_input($input);
    if ($rc) {
      // If we have previously validated input, override.
      if (!$this->is_a_group() && isset($this->validated_exposed_input)) {
        $this->value = $this->validated_exposed_input;
      }
    }

    return $rc;
  }

  /**
   * {@inheritdoc}
   */
  public function exposed_validate(&$form, &$form_state) {
    if (empty($this->options['exposed'])) {
      return;
    }

    $identifier = $this->options['expose']['identifier'];

    // We only validate if they've chosen the text field style.
    if ($this->options['type'] != 'textfield') {
      if (isset($form_state['values'][$identifier]) && $form_state['values'][$identifier] != 'All') {
        $this->validated_exposed_input = (array) $form_state['values'][$identifier];
      }
      return;
    }

    if (empty($this->options['expose']['identifier'])) {
      return;
    }

    $values = drupal_explode_tags($form_state['values'][$identifier]);

    $tids = $this->validate_term_strings($form[$identifier], $values);
    if ($tids) {
      $this->validated_exposed_input = $tids;
    }
  }

  /**
   * Validate the user string. Since this can come from either the form
   * or the exposed filter, this is abstracted out a bit so it can
   * handle the multiple input sources.
   *
   * @param array $form
   *   The form which is used, either the views ui or the exposed filters.
   * @param array $values
   *   The taxonomy names which will be converted to tids.
   *
   * @return array
   *   The taxonomy ids fo all validated terms.
   */
  public function validate_term_strings(&$form, $values) {
    if (empty($values)) {
      return array();
    }

    $tids = array();
    $names = array();
    $missing = array();
    foreach ($values as $value) {
      $missing[strtolower($value)] = TRUE;
      $names[] = $value;
    }

    if (!$names) {
      return FALSE;
    }

    $query = db_select('taxonomy_term_data', 'td');
    $query->innerJoin('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
    $query->fields('td');
    $query->condition('td.name', $names);
    $query->condition('tv.machine_name', $this->options['vocabulary']);
    $query->addTag('taxonomy_term_access');
    $result = $query->execute();
    foreach ($result as $term) {
      unset($missing[strtolower($term->name)]);
      $tids[] = $term->tid;
    }

    if ($missing && !empty($this->options['error_message'])) {
      form_error($form, format_plural(count($missing), 'Unable to find term: @terms', 'Unable to find terms: @terms', array('@terms' => implode(', ', array_keys($missing)))));
    }
    elseif ($missing && empty($this->options['error_message'])) {
      $tids = array(0);
    }

    return $tids;
  }

  /**
   * {@inheritdoc}
   */
  public function value_submit($form, &$form_state) {
    // Prevent array_filter from messing up our arrays in parent submit.
  }

  /**
   * {@inheritdoc}
   */
  public function expose_form(&$form, &$form_state) {
    parent::expose_form($form, $form_state);
    if ($this->options['type'] != 'select') {
      unset($form['expose']['reduce']);
    }
    $form['error_message'] = array(
      '#type' => 'checkbox',
      '#title' => t('Display error message'),
      '#default_value' => !empty($this->options['error_message']),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function admin_summary() {
    // Set up $this->value_options for the parent summary.
    $this->value_options = array();

    if ($this->value) {
      $this->value = array_filter($this->value);
      $result = taxonomy_term_load_multiple($this->value);
      foreach ($result as $entity_term) {
        $this->value_options[$entity_term->tid] = entity_label('taxonomy_term', $entity_term);
      }
    }
    return parent::admin_summary();
  }

}
