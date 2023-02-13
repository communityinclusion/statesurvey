<?php

/**
 * @file
 * georgia_cie_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function georgia_cie_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_non_work|node|individual_data_ga_cie|form';
  $field_group->group_name = 'group_com_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga_cie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Community Based Non Work',
    'weight' => '16',
    'children' => array(
      0 => 'field_com_non_work_partic',
      1 => 'field_com_non_wrk_hours',
      2 => 'field_com_non_work_vol_partic_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-com-non-work field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_com_non_work|node|individual_data_ga_cie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_delete_individual|node|individual_data_ga_cie|form';
  $field_group->group_name = 'group_delete_individual';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga_cie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Answer some questions before deleting this individual.',
    'weight' => '67',
    'children' => array(
      0 => 'field_delete_indiv_why',
      1 => 'field_delete_indiv_why_other',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-delete-individual field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_delete_individual|node|individual_data_ga_cie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extended|node|individual_data_ga_cie|form';
  $field_group->group_name = 'group_extended';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga_cie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indv_emp';
  $field_group->data = array(
    'label' => 'Extended (after job entry) supports',
    'weight' => '23',
    'children' => array(
      0 => 'field_indv_comp_ext_ind_sup_hrs',
      1 => 'field_indv_comp_ext_dir_sup_hrs',
      2 => 'field_indv_comp_ext_rem_sup_hrs',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-extended field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_extended|node|individual_data_ga_cie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_non_work|node|individual_data_ga_cie|form';
  $field_group->group_name = 'group_fac_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga_cie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Facility Based Non Work',
    'weight' => '17',
    'children' => array(
      0 => 'field_fac_non_work_partic',
      1 => 'field_fac_non_work_yn_partic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fac-non-work field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_fac_non_work|node|individual_data_ga_cie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grp_integ|node|individual_data_ga_cie|form';
  $field_group->group_name = 'group_grp_integ';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga_cie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Group integrated job',
    'weight' => '13',
    'children' => array(
      0 => 'field_grp_integ_partic',
      1 => 'field_grp_integ_hrs',
      2 => 'field_grp_integ_gross_wages',
      3 => 'field_grp_integ_paid_time_off',
      4 => 'field_grp_integ_occupation',
      5 => 'field_grp_integ_work_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Group integrated job',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-grp-integ field-group-tab',
        'description' => '<h3>Group Integrated Job Subsection/Supported Employment Group (SEG)</h3><p>The individual works in a group of 2 to 8 individuals with disabilities in a community setting that includes meaningful interaction with individuals without disabilities. This would typically include work settings described as enclaves or mobile work crews.</p>
',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_grp_integ|node|individual_data_ga_cie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_individual_data_categories|node|individual_data_ga_cie|form';
  $field_group->group_name = 'group_individual_data_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga_cie';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '4',
    'children' => array(
      0 => 'group_indv_emp',
      1 => 'group_grp_integ',
      2 => 'group_self_emp',
      3 => 'group_shl',
      4 => 'group_com_non_work',
      5 => 'group_fac_non_work',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-individual-data-categories field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_individual_data_categories|node|individual_data_ga_cie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indv_emp|node|individual_data_ga_cie|form';
  $field_group->group_name = 'group_indv_emp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga_cie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Competitive Integrated Employment',
    'weight' => '12',
    'children' => array(
      0 => 'field_indv_comp_employ_status',
      1 => 'field_indv_comp_employer',
      2 => 'field_indv_start_date',
      3 => 'field_indv_date_last_worked',
      4 => 'field_indv_comp_hrs',
      5 => 'field_indv_comp_time_in_job',
      6 => 'field_indv_comp_paid_time_off',
      7 => 'field_indv_comp_occupation',
      8 => 'field_indv_comp_transportation',
      9 => 'field_indv_comp_pay_rate',
      10 => 'field_indv_comp_comments',
      11 => 'field_indv_comp_billing_y_n',
      12 => 'group_preplacement',
      13 => 'group_extended',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Competitive Integrated Employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-indv-comp field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_indv_emp|node|individual_data_ga_cie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preplacement|node|individual_data_ga_cie|form';
  $field_group->group_name = 'group_preplacement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga_cie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indv_emp';
  $field_group->data = array(
    'label' => 'Initial (pre-placement) supports',
    'weight' => '22',
    'children' => array(
      0 => 'field_indv_comp_pre_supp_hrs',
      1 => 'field_indv_comp_pre_place_hrs',
      2 => 'field_indv_comp_pre_sup_hrs',
      3 => 'field_indv_final_month',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-preplacement field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_preplacement|node|individual_data_ga_cie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_self_emp|node|individual_data_ga_cie|form';
  $field_group->group_name = 'group_self_emp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga_cie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Self Employment',
    'weight' => '14',
    'children' => array(
      0 => 'field_self_emp_partic',
      1 => 'field_self_emp_hrs',
      2 => 'field_self_emp_gross_income',
      3 => 'field_self_emp_gross_expens',
      4 => 'field_self_emp_occupation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-self-emp field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_self_emp|node|individual_data_ga_cie|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shl|node|individual_data_ga_cie|form';
  $field_group->group_name = 'group_shl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga_cie';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Facility Based/Sheltered Work',
    'weight' => '15',
    'children' => array(
      0 => 'field_shl_partic',
      1 => 'field_shl_hrs',
      2 => 'field_shl_gross_wages',
      3 => 'field_shl_paid_time_off',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-shl field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_shl|node|individual_data_ga_cie|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Answer some questions before deleting this individual.');
  t('Categories');
  t('Community Based Non Work');
  t('Competitive Integrated Employment');
  t('Extended (after job entry) supports');
  t('Facility Based Non Work');
  t('Facility Based/Sheltered Work');
  t('Group integrated job');
  t('Initial (pre-placement) supports');
  t('Self Employment');

  return $field_groups;
}
