<?php

/**
 * @file
 * Definition of views_plugin_argument_validate_taxonomy_term.
 */

/**
 * Validate whether an argument is an acceptable node.
 */
class views_plugin_argument_validate_taxonomy_term extends views_plugin_argument_validate {

  /**
   * {@inheritdoc}
   */
  public function init(&$view, &$argument, $options) {
    parent::init($view, $argument, $options);

    // Convert legacy vids option to machine name vocabularies.
    if (!empty($this->options['vids'])) {
      $vocabularies = taxonomy_get_vocabularies();
      foreach ($this->options['vids'] as $vid) {
        if (isset($vocabularies[$vid], $vocabularies[$vid]->machine_name)) {
          $this->options['vocabularies'][$vocabularies[$vid]->machine_name] = $vocabularies[$vid]->machine_name;
        }
      }
    }
  }

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['vocabularies'] = array('default' => array());
    $options['type'] = array('default' => 'tid');
    $options['transform'] = array('default' => FALSE, 'bool' => TRUE);

    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    $vocabularies = taxonomy_get_vocabularies();
    $options = array();
    foreach ($vocabularies as $voc) {
      $options[$voc->machine_name] = check_plain($voc->name);
    }

    $form['vocabularies'] = array(
      '#type' => 'checkboxes',
      '#prefix' => '<div id="edit-options-validate-argument-vocabulary-wrapper">',
      '#suffix' => '</div>',
      '#title' => t('Vocabularies'),
      '#options' => $options,
      '#default_value' => $this->options['vocabularies'],
      '#description' => t('If you wish to validate for specific vocabularies, check them; if none are checked, all terms will pass.'),
    );

    $form['type'] = array(
      '#type' => 'select',
      '#title' => t('Filter value type'),
      '#options' => array(
        'tid' => t('Term ID'),
        'tids' => t('Term IDs separated by , or +'),
        'name' => t('Term name'),
        'convert' => t('Term name converted to Term ID'),
      ),
      '#default_value' => $this->options['type'],
      '#description' => t('Select the form of this filter value; if using term name, it is generally more efficient to convert it to a term ID and use Taxonomy: Term ID rather than Taxonomy: Term Name" as the filter.'),
    );

    $form['transform'] = array(
      '#type' => 'checkbox',
      '#title' => t('Transform dashes in URL to spaces in term name filter values'),
      '#default_value' => $this->options['transform'],
    );
  }

  /**
   * {@inheritdoc}
   */
  public function options_submit(&$form, &$form_state, &$options = array()) {
    // Filter unselected items so we don't unnecessarily store giant arrays.
    $options['vocabularies'] = array_filter($options['vocabularies']);
  }

  /**
   * {@inheritdoc}
   */
  public function convert_options(&$options) {
    if (!isset($options['vocabularies']) && !empty($this->argument->options['validate_argument_vocabulary'])) {
      $options['vocabularies'] = $this->argument->options['validate_argument_vocabulary'];
      $options['type'] = $this->argument->options['validate_argument_type'];
      $options['transform'] = isset($this->argument->options['validate_argument_transform']) ? $this->argument->options['validate_argument_transform'] : FALSE;
    }
  }

  /**
   * {@inheritdoc}
   */
  public function validate_argument($argument) {
    $vocabularies = array_filter($this->options['vocabularies']);
    $type = $this->options['type'];
    $transform = $this->options['transform'];

    switch ($type) {
      case 'tid':
        if (!is_numeric($argument)) {
          return FALSE;
        }

        $query = db_select('taxonomy_term_data', 'td');
        $query->leftJoin('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
        $query->fields('td');
        $query->condition('td.tid', $argument);
        $query->addTag('taxonomy_term_access');
        $term = $query->execute()->fetchObject();
        if (!$term) {
          return FALSE;
        }
        $term = taxonomy_term_load($term->tid);
        $this->argument->validated_title = check_plain(entity_label('taxonomy_term', $term));
        return empty($vocabularies) || !empty($vocabularies[$term->vocabulary_machine_name]);

      case 'tids':
        // An empty argument is not a term so doesn't pass.
        if (empty($argument)) {
          return FALSE;
        }

        $tids = new stdClass();
        $tids->value = $argument;
        $tids = views_break_phrase($argument, $tids);
        if ($tids->value == array(-1)) {
          return FALSE;
        }

        $test = drupal_map_assoc($tids->value);
        $titles = array();

        // check, if some tids already verified.
        static $validated_cache = array();
        foreach ($test as $tid) {
          if (isset($validated_cache[$tid])) {
            if ($validated_cache[$tid] === FALSE) {
              return FALSE;
            }
            else {
              $titles[] = $validated_cache[$tid];
              unset($test[$tid]);
            }
          }
        }

        // If unverified tids left - verify them and cache results.
        if (count($test)) {
          $query = db_select('taxonomy_term_data', 'td');
          $query->addTag('taxonomy_term_access');
          $query->leftJoin('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
          $query->fields('td');
          $query->fields('tv', array('machine_name'));
          $query->condition('td.tid', $test);

          $result = $query->execute();

          foreach ($result as $term) {
            if ($vocabularies && empty($vocabularies[$term->machine_name])) {
              $validated_cache[$term->tid] = FALSE;
              return FALSE;
            }
            $term = taxonomy_term_load($term->tid);
            $titles[] = $validated_cache[$term->tid] = check_plain(entity_label('taxonomy_term', $term));
            unset($test[$term->tid]);
          }
        }

        // Remove duplicate titles.
        $titles = array_unique($titles);

        $this->argument->validated_title = implode($tids->operator == 'or' ? ' + ' : ', ', $titles);
        // If this is not empty, we did not find a tid.
        return empty($test);

      case 'name':
      case 'convert':
        $query = db_select('taxonomy_term_data', 'td');
        $query->addTag('taxonomy_term_access');
        $query->leftJoin('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
        $query->fields('td');
        $query->fields('tv', array('machine_name'));
        if (!empty($vocabularies)) {
          $query->condition('tv.machine_name', $vocabularies);
        }
        if ($transform) {
          $query->where("replace(td.name, ' ', '-') = :name", array(':name' => $argument));
        }
        else {
          $query->condition('td.name', $argument);
        }
        $term = $query->execute()->fetchObject();

        if ($term && (empty($vocabularies) || !empty($vocabularies[$term->machine_name]))) {
          if ($type == 'convert') {
            $this->argument->argument = $term->tid;
          }
          $term = taxonomy_term_load($term->tid);
          $this->argument->validated_title = check_plain(entity_label('taxonomy_term', $term));
          return TRUE;
        }
        return FALSE;
    }
  }

  /**
   * {@inheritdoc}
   */
  public function process_summary_arguments(&$args) {
    $type = $this->options['type'];
    $transform = $this->options['transform'];
    $vocabularies = array_filter($this->options['vocabularies']);

    if ($type == 'convert') {
      $arg_keys = array_flip($args);

      $query = db_select('taxonomy_term_data', 'td');
      $query->addTag('taxonomy_term_access');
      $query->condition('td.tid', $args);
      $query->addField('td', 'tid', 'tid');
      if (!empty($vocabularies)) {
        $query->leftJoin('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
        $query->condition('tv.machine_name', $vocabularies);
      }
      if ($transform) {
        $query->addExpression("REPLACE(td.name, ' ', '-')", 'name');
      }
      else {
        $query->addField('td', 'name', 'name');
      }

      foreach ($query->execute()->fetchAllKeyed() as $tid => $term) {
        $args[$arg_keys[$tid]] = $term;
      }
    }
  }

}
