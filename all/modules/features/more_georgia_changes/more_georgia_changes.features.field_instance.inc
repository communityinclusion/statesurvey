<?php

/**
 * @file
 * more_georgia_changes.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function more_georgia_changes_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-individual_data-field_com_non_wrk_supports'.
  $field_instances['node-individual_data-field_com_non_wrk_supports'] = array(
    'bundle' => 'individual_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 57,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_com_non_wrk_supports',
    'label' => 'What supports did this person receive for participation in this outcome?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'node-individual_data-field_fac_non_work_supports'.
  $field_instances['node-individual_data-field_fac_non_work_supports'] = array(
    'bundle' => 'individual_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_fac_non_work_supports',
    'label' => 'What supports did this person receive for participation in this outcome?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-individual_data-field_grp_integ_covid'.
  $field_instances['node-individual_data-field_grp_integ_covid'] = array(
    'bundle' => 'individual_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 61,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_grp_integ_covid',
    'label' => 'Was the individual\'s non-participation in this activity related to COVID-19?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-individual_data-field_grp_integ_supports'.
  $field_instances['node-individual_data-field_grp_integ_supports'] = array(
    'bundle' => 'individual_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_grp_integ_supports',
    'label' => 'What supports did this person receive for participation in this outcome?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-individual_data-field_indv_comp_covid'.
  $field_instances['node-individual_data-field_indv_comp_covid'] = array(
    'bundle' => 'individual_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 59,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_indv_comp_covid',
    'label' => 'Was the individual\'s non-participation in this activity related to COVID-19?',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-individual_data-field_indv_comp_supports'.
  $field_instances['node-individual_data-field_indv_comp_supports'] = array(
    'bundle' => 'individual_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_indv_comp_supports',
    'label' => 'What supports did this person receive for participation in this outcome?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-individual_data-field_indv_cont_covid'.
  $field_instances['node-individual_data-field_indv_cont_covid'] = array(
    'bundle' => 'individual_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 60,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_indv_cont_covid',
    'label' => 'Was the individual\'s non-participation in this activity related to COVID-19?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-individual_data-field_indv_cont_supports'.
  $field_instances['node-individual_data-field_indv_cont_supports'] = array(
    'bundle' => 'individual_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_indv_cont_supports',
    'label' => 'What supports did this person receive for participation in this outcome?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-individual_data-field_shl_supports'.
  $field_instances['node-individual_data-field_shl_supports'] = array(
    'bundle' => 'individual_data',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_shl_supports',
    'label' => 'What supports did this person receive for participation in this outcome?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-reporting_period-field_georgia_cie'.
  $field_instances['node-reporting_period-field_georgia_cie'] = array(
    'bundle' => 'reporting_period',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_georgia_cie',
    'label' => 'Select "yes" if this is a Georgia CIE reporting period',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-state-field_data_entry_instructions'.
  $field_instances['node-state-field_data_entry_instructions'] = array(
    'bundle' => 'state',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_data_entry_instructions',
    'label' => 'Data entry instructions',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-state-field_reporting_period_descrip'.
  $field_instances['node-state-field_reporting_period_descrip'] = array(
    'bundle' => 'state',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_reporting_period_descrip',
    'label' => 'Reporting period description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-reporting_period-field_rp_date_range'.
  $field_instances['taxonomy_term-reporting_period-field_rp_date_range'] = array(
    'bundle' => 'reporting_period',
    'deleted' => 0,
    'description' => 'For the end date, be sure to select the date after your desired end date. For example, to select an end date of January 31, select February 1.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'custom_date_format' => '',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_rp_date_range',
    'label' => 'Date range',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'strtotime',
      'default_value_code' => '',
      'default_value_code2' => '+3 months',
      'restrictions' => array(
        'max' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
      ),
      'restrictions2' => array(
        'max' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
        'min' => array(
          'date' => NULL,
          'host_entity_date' => array(
            'end_date' => FALSE,
            'field' => NULL,
          ),
          'host_entity_interval' => array(
            'field' => NULL,
          ),
          'interval' => NULL,
          'type' => 'disabled',
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-1:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-reporting_period-field_rp_state2'.
  $field_instances['taxonomy_term-reporting_period-field_rp_state2'] = array(
    'bundle' => 'reporting_period',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_rp_state2',
    'label' => 'State',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Data entry instructions');
  t('Date range');
  t('For the end date, be sure to select the date after your desired end date. For example, to select an end date of January 31, select February 1.');
  t('Reporting period description');
  t('Select "yes" if this is a Georgia CIE reporting period');
  t('State');
  t('Was the individual\'s non-participation in this activity related to COVID-19?');
  t('What supports did this person receive for participation in this outcome?');

  return $field_instances;
}
