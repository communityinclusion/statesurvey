<?php

/**
 * @file
 * Definition of views_handler_filter_boolean_operator.
 */

/**
 * Simple filter to handle matching of boolean values.
 *
 * Definition items:
 * - label: (REQUIRED) The label for the checkbox.
 * - type: For basic 'true false' types, an item can specify the following:
 *    - true-false: True/false (this is the default)
 *    - yes-no: Yes/No
 *    - on-off: On/Off
 *    - enabled-disabled: Enabled/Disabled
 * - accept null: Treat a NULL value as false.
 * - use equal: If you use this flag the query will use = 1 instead of <> 0.
 *   This might be helpful for performance reasons.
 *
 * @ingroup views_filter_handlers
 */
class views_handler_filter_boolean_operator extends views_handler_filter {

  /**
   * Exposed filter options.
   */
  public $always_multiple = TRUE;

  /**
   * Don't display empty space where the operator would be.
   */
  public $no_operator = TRUE;

  /**
   * Whether to accept NULL as a false value or not.
   */
  public $accept_null = FALSE;

  /**
   * {@inheritdoc}
   */
  public function construct() {
    $this->value_value = t('True');
    if (isset($this->definition['label'])) {
      $this->value_value = $this->definition['label'];
    }
    if (isset($this->definition['accept null'])) {
      $this->accept_null = (bool) $this->definition['accept null'];
    }
    elseif (isset($this->definition['accept_null'])) {
      $this->accept_null = (bool) $this->definition['accept_null'];
    }
    $this->value_options = NULL;
    parent::construct();
  }

  /**
   * Return the possible options for this filter.
   *
   * Child classes should override this function to set the possible values
   * for the filter.  Since this is a boolean filter, the array should have
   * two possible keys: 1 for "True" and 0 for "False", although the labels
   * can be whatever makes sense for the filter.  These values are used for
   * configuring the filter, when the filter is exposed, and in the admin
   * summary of the filter.  Normally, this should be static data, but if it's
   * dynamic for some reason, child classes should use a guard to reduce
   * database hits as much as possible.
   */
  public function get_value_options() {
    if (isset($this->definition['type'])) {
      if ($this->definition['type'] == 'yes-no') {
        $this->value_options = array(1 => t('Yes'), 0 => t('No'));
      }
      if ($this->definition['type'] == 'on-off') {
        $this->value_options = array(1 => t('On'), 0 => t('Off'));
      }
      if ($this->definition['type'] == 'enabled-disabled') {
        $this->value_options = array(1 => t('Enabled'), 0 => t('Disabled'));
      }
    }

    // Provide a fallback if the above didn't set anything.
    if (!isset($this->value_options)) {
      $this->value_options = array(1 => t('True'), 0 => t('False'));
    }
  }

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();

    $options['value']['default'] = FALSE;

    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function operator_form(&$form, &$form_state) {
    $form['operator'] = array();
  }

  /**
   * {@inheritdoc}
   */
  public function value_form(&$form, &$form_state) {
    if (empty($this->value_options)) {
      // Initialize the array of possible values for this filter.
      $this->get_value_options();
    }
    if (!empty($form_state['exposed'])) {
      // Exposed filter: use a select box to save space.
      $filter_form_type = 'select';
    }
    else {
      // Configuring a filter: use radios for clarity.
      $filter_form_type = 'radios';
    }
    $form['value'] = array(
      '#type' => $filter_form_type,
      '#title' => $this->value_value,
      '#options' => $this->value_options,
      '#default_value' => $this->value,
    );
    if (!empty($this->options['exposed'])) {
      $identifier = $this->options['expose']['identifier'];
      if (!empty($form_state['exposed']) && !isset($form_state['input'][$identifier])) {
        $form_state['input'][$identifier] = $this->value;
      }
      // If we're configuring an exposed filter, add an <Any> option.
      if (empty($form_state['exposed']) || empty($this->options['expose']['required'])) {
        $any_label = variable_get('views_exposed_filter_any_label', 'new_any') == 'old_any' ? '<Any>' : t('- Any -');
        if ($form['value']['#type'] != 'select') {
          $any_label = check_plain($any_label);
        }
        $form['value']['#options'] = array('All' => $any_label) + $form['value']['#options'];
      }
    }
  }

  /**
   * {@inheritdoc}
   */
  public function value_validate($form, &$form_state) {
    if ($form_state['values']['options']['value'] == 'All' && !empty($form_state['values']['options']['expose']['required'])) {
      form_set_error('value', t('You must select a value unless this is an non-required exposed filter.'));
    }
  }

  /**
   * {@inheritdoc}
   */
  public function admin_summary() {
    if ($this->is_a_group()) {
      return t('grouped');
    }
    if (!empty($this->options['exposed'])) {
      return t('exposed');
    }
    if (empty($this->value_options)) {
      $this->get_value_options();
    }
    // Now that we have the valid options for this filter, just return the
    // human-readable label based on the current value.  The value_options
    // array is keyed with either 0 or 1, so if the current value is not
    // empty, use the label for 1, and if it's empty, use the label for 0.
    return $this->value_options[!empty($this->value)];
  }

  /**
   * {@inheritdoc}
   */
  public function expose_options() {
    parent::expose_options();
    $this->options['expose']['operator_id'] = '';
    $this->options['expose']['label'] = $this->value_value;
    $this->options['expose']['required'] = TRUE;
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
    $this->ensure_my_table();
    $field = "$this->table_alias.$this->real_field";

    if (empty($this->value)) {
      if ($this->accept_null) {
        $or = db_or()
          ->condition($field, 0, '=')
          ->condition($field, NULL, 'IS NULL');
        $this->query->add_where($this->options['group'], $or);
      }
      else {
        $this->query->add_where($this->options['group'], $field, 0, '=');
      }
    }
    else {
      if (!empty($this->definition['use equal'])) {
        $this->query->add_where($this->options['group'], $field, 1, '=');
      }
      else {
        $this->query->add_where($this->options['group'], $field, 0, '<>');
      }
    }
  }

}
