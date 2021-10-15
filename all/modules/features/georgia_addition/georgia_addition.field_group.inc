<?php

/**
 * @file
 * georgia_addition.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function georgia_addition_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_non_work|node|individual_data_ga|form';
  $field_group->group_name = 'group_com_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Community Based Non-Work',
    'weight' => '8',
    'children' => array(
      0 => 'field_com_non_work_partic',
      1 => 'field_com_non_work_vol_partic_2',
      2 => 'field_com_non_wrk_hours',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Community Based Non-Work',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-com-non-work field-group-tab',
        'description' => '<h3>Community Based Non-Work</h3><p>Unpaid time spent in integrated, community settings; in a group of 4 people with disabilities or less, while having access to others without disabilities who are not paid staff or family members. Activities occur at locations available to and by members of the general community, and include interactions with members of the general community to the same extent as participants without disabilities. </p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_com_non_work|node|individual_data_ga|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_delete_individual|node|individual_data_ga|form';
  $field_group->group_name = 'group_delete_individual';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Answer some questions before deleting this individual.',
    'weight' => '7',
    'children' => array(
      0 => 'field_delete_indiv_why_other',
      1 => 'field_delete_indiv_why_ga',
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
  $field_groups['group_delete_individual|node|individual_data_ga|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_non_work|node|individual_data_ga|form';
  $field_group->group_name = 'group_fac_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Facility Based Non-Work',
    'weight' => '9',
    'children' => array(
      0 => 'field_fac_non_work_partic',
      1 => 'field_fac_non_work_yn_partic',
      2 => 'field_fac_non_work_hours',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Facility Based Non-Work',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fac-non-work field-group-tab',
        'description' => '<h3>Facility Based Non-Work</h3><p>Individual spends time in unpaid activities in a program setting with a group of individuals with disabilities. This also includes larger group outings of 5 or more individuals with other people with disabilities as part of a non-work program.</p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_fac_non_work|node|individual_data_ga|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grp_integ|node|individual_data_ga|form';
  $field_group->group_name = 'group_grp_integ';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Group Supported Job',
    'weight' => '5',
    'children' => array(
      0 => 'field_grp_integ_gross_wages',
      1 => 'field_grp_integ_hrs',
      2 => 'field_grp_integ_occupation',
      3 => 'field_grp_integ_paid_time_off',
      4 => 'field_grp_integ_partic',
      5 => 'field_grp_integ_work_location',
      6 => 'field_grp_integ_time_in_job',
      7 => 'field_grp_integ_fund_source',
      8 => 'field_grp_integ_other_source',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Group Supported Job',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-grp-integ field-group-tab',
        'description' => '<h3>Group Supported Job</h3><p>The individual works in a group of 2 to 8 individuals with disabilities in a community setting that includes meaningful interaction with individuals without disabilities. This would typically include work settings described as enclaves or mobile work crews.</p>
',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_grp_integ|node|individual_data_ga|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_individual_data_categories|node|individual_data_ga|form';
  $field_group->group_name = 'group_individual_data_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '4',
    'children' => array(
      0 => 'field_ga_ind_data_complete',
      1 => 'group_com_non_work',
      2 => 'group_fac_non_work',
      3 => 'group_grp_integ',
      4 => 'group_indv_comp',
      5 => 'group_self_emp',
      6 => 'group_shl',
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
  $field_groups['group_individual_data_categories|node|individual_data_ga|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indv_comp|node|individual_data_ga|form';
  $field_group->group_name = 'group_indv_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Individual Community Job',
    'weight' => '4',
    'children' => array(
      0 => 'field_indv_comp_fund_source',
      1 => 'field_indv_comp_hrs',
      2 => 'field_indv_comp_occupation',
      3 => 'field_indv_comp_other_source',
      4 => 'field_indv_comp_paid_time_off',
      5 => 'field_indv_comp_partic',
      6 => 'field_indv_comp_time_in_job',
      7 => 'field_indv_comp_why_not_min',
      8 => 'field_indv_comp_gross_wages',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Individual Community Job',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-indv-comp field-group-tab',
        'description' => '<h3>Individual Community Job</h3><p>An individual full or part time job in the typical labor market where the majority of persons employed are not persons with disabilities. The business is located within the community and is not owned or operated by the support organization. The person is on the payroll of the community business.</p> <ul>
<li>Do not include individuals receiving SE services through CIE Funds (formerly Employment Express Funds (EEF). This information is captured using the CIE Funds Monthly Details Report.</li>
<li>Information for individuals that are self-employed should be added under the Self Employment subsection.</li></ul>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_indv_comp|node|individual_data_ga|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_no_particip|node|individual_data_ga|form';
  $field_group->group_name = 'group_no_particip';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reason for no participation',
    'weight' => '6',
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
  $field_groups['group_no_particip|node|individual_data_ga|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_self_emp|node|individual_data_ga|form';
  $field_group->group_name = 'group_self_emp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Self Employment',
    'weight' => '6',
    'children' => array(
      0 => 'field_self_emp_gross_expens',
      1 => 'field_self_emp_gross_income',
      2 => 'field_self_emp_hrs',
      3 => 'field_self_emp_occupation',
      4 => 'field_self_emp_partic',
      5 => 'field_self_emp_time_in_job',
      6 => 'field_self_emp_fund_source',
      7 => 'field_self_emp_other_source',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Self Employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-self-emp field-group-tab',
        'description' => '<h3>Self Employment</h3><p>Includes self-employment or microenterprises owned by the individual. Does not include a business that is owned by the support organization.</p><p><em>
Note that business income and expenses are reported over a 3 month period to capture fluctuations in business income.</em></p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_self_emp|node|individual_data_ga|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shl|node|individual_data_ga|form';
  $field_group->group_name = 'group_shl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_ga';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Facility Based/Sheltered Work',
    'weight' => '7',
    'children' => array(
      0 => 'field_shl_gross_wages',
      1 => 'field_shl_hrs',
      2 => 'field_shl_paid_time_off',
      3 => 'field_shl_partic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Facility Based/Sheltered Work',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-shl field-group-tab',
        'description' => '<h3>Facility Based/Sheltered Work</h3><p>Individual works in a group of individuals with disabilities. This category would include any group larger than 8, and smaller group settings that involve little or no contact with workers without disabilities. Typically, the position is located in a facility or business owned or operated by the support organization, but may also occur in large groups in other settings such as a large enclave.</p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_shl|node|individual_data_ga|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Answer some questions before deleting this individual.');
  t('Categories');
  t('Community Based Non-Work');
  t('Facility Based Non-Work');
  t('Facility Based/Sheltered Work');
  t('Group Supported Job');
  t('Individual Community Job');
  t('Reason for no participation');
  t('Self Employment');

  return $field_groups;
}
