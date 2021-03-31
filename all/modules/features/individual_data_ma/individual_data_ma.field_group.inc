<?php

/**
 * @file
 * individual_data_ma.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function individual_data_ma_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_day_program|node|individual_data_ma|form';
  $field_group->group_name = 'group_day_program';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Wrap-around services',
    'weight' => '8',
    'children' => array(
      0 => 'field_day_program_partic',
      1 => 'field_day_program_commun_y_n',
      2 => 'field_day_program_dayhab_y_n',
      3 => 'field_day_program_other_y_n',
      4 => 'field_day_program_other_explain',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Wrap-around services',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-day-program field-group-tab',
        'description' => 'What other day support services is this person participating in when the person is not engaged in employment or a job search? This might be supported by your organization or another provider.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_day_program|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_delete_individual|node|individual_data_ma|form';
  $field_group->group_name = 'group_delete_individual';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Answer some questions before deleting this individual.',
    'weight' => '41',
    'children' => array(
      0 => 'field_delete_indiv_why',
      1 => 'field_delete_indiv_why_other',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Answer some questions before deleting this individual.',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-delete-individual field-group-html-element deleteGroup',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_delete_individual|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grp_integ|node|individual_data_ma|form';
  $field_group->group_name = 'group_grp_integ';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Group supported employment',
    'weight' => '5',
    'children' => array(
      0 => 'field_grp_integ_gross_wages',
      1 => 'field_grp_integ_hrs',
      2 => 'field_grp_integ_partic',
      3 => 'field_grp_sup_less',
      4 => 'field_grp_sup_less_other',
      5 => 'field_grp_10_of_12_y_n',
      6 => 'field_grp_location_of_work',
      7 => 'field_grp_num_of_workers',
      8 => 'field_grp_integ_covid_ma',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Group supported employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-grp-integ field-group-tab',
        'description' => 'A small group of individuals, (typically 2 to 8) work in the community under the supervision of a provider agency. Group Supported Employment may include small groups in industry (enclave), provider businesses/small business model, and mobile work crews that allow for integration, and temporary services which may assist in securing an individual position within a business.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_grp_integ|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_individual_data_categories|node|individual_data_ma|form';
  $field_group->group_name = 'group_individual_data_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '4',
    'children' => array(
      0 => 'field_ga_ind_data_complete',
      1 => 'group_day_program',
      2 => 'group_grp_integ',
      3 => 'group_indv_comp',
      4 => 'group_job_search',
      5 => 'group_self_emp',
      6 => 'group_no_particip',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-individual-data-categories field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_individual_data_categories|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indv_comp|node|individual_data_ma|form';
  $field_group->group_name = 'group_indv_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Individual employment',
    'weight' => '4',
    'children' => array(
      0 => 'field_indv_comp_gross_wages',
      1 => 'field_indv_comp_hrs',
      2 => 'field_indv_comp_partic',
      3 => 'field_indv_emp_hire_date',
      4 => 'field_indv_emp_less',
      5 => 'field_indv_emp_less_other',
      6 => 'field_indv_comp_new_job_y_n',
      7 => 'field_indv_comp10_of_12_y_n',
      8 => 'field_indv_paid_time_y_n',
      9 => 'field_indv_comp_health_ins_y_n',
      10 => 'field_indv_comp_covid_ma',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Individual employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-indv-comp field-group-tab',
        'description' => 'An individual has a full or part-time job for which they earn wages, based on their identified needs and interests, located in a community business and where the majority of persons employed are not persons with disabilities.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_indv_comp|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_search|node|individual_data_ma|form';
  $field_group->group_name = 'group_job_search';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Job search and exploration activities',
    'weight' => '7',
    'children' => array(
      0 => 'field_job_search_partic',
      1 => 'field_job_search_discov_plan_y_n',
      2 => 'field_job_search_job_dev_y_n',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Job search and exploration activities',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-job-search field-group-tab',
        'description' => 'Is this individual actively engaged in job search or job pathway activities supported by an employment service?',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_job_search|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_no_particip|node|individual_data_ma|form';
  $field_group->group_name = 'group_no_particip';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Reason for no participation',
    'weight' => '10',
    'children' => array(
      0 => 'field_indv_data_partic_other',
      1 => 'field_indv_data_partic_why',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Reason for no participation',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'reasonnopartic',
        'classes' => 'group-no-particip field-group-html-element',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_no_particip|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_self_emp|node|individual_data_ma|form';
  $field_group->group_name = 'group_self_emp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Self employment',
    'weight' => '6',
    'children' => array(
      0 => 'field_self_emp_gross_expens',
      1 => 'field_self_emp_gross_income',
      2 => 'field_self_emp_hrs',
      3 => 'field_self_emp_partic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Self employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-self-emp field-group-tab',
        'description' => 'Includes self-employment or microenterprises owned by the individual. Does not include a business that is owned by the support organization. <strong>Note that business income and expenses are reported over a 3 month period to capture fluctuations in business income.</strong>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_self_emp|node|individual_data_ma|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shl|node|individual_data_ma|form';
  $field_group->group_name = 'group_shl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ma';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Sheltered employment',
    'weight' => '6',
    'children' => array(
      0 => 'field_shl_gross_wages',
      1 => 'field_shl_hrs',
      2 => 'field_shl_partic',
      3 => 'field_shl_min_wage',
      4 => 'field_shl_less',
      5 => 'field_shl_less_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Sheltered employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-shl field-group-tab',
        'description' => 'These supports take place in settings such as sheltered workshops in which there is little or no contact with other workers without disabilities. Individuals are paid a wage in exchange for their production-related activities. They are considered employees of the provider agency.',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_shl|node|individual_data_ma|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Answer some questions before deleting this individual.');
  t('Categories');
  t('Group supported employment');
  t('Individual employment');
  t('Job search and exploration activities');
  t('Reason for no participation');
  t('Self employment');
  t('Sheltered employment');
  t('Wrap-around services');

  return $field_groups;
}
