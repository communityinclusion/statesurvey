<?php

/**
 * @file
 * minnesota_addition.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function minnesota_addition_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|individual_data_mn|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_mn';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_ga_ind_data_complete',
      1 => 'group_com_non_work',
      2 => 'group_fac_non_work',
      3 => 'group_grp_integ',
      4 => 'group_indv_comp',
      5 => 'group_no_particip',
      6 => 'group_self_emp',
      7 => 'group_shl',
    ),
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-categories field-group-tabs',
        'id' => '',
      ),
    ),
    'format_type' => 'tabs',
    'label' => 'Categories',
    'weight' => '4',
  );
  $field_groups['group_categories|node|individual_data_mn|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_non_work|node|individual_data_mn|form';
  $field_group->group_name = 'group_com_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_mn';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_categories';
  $field_group->data = array(
    'children' => array(
      0 => 'field_com_non_work_partic',
      1 => 'field_com_non_work_vol_partic',
      2 => 'field_com_non_work_vol_partic_2',
      3 => 'field_com_non_wrk_hours',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-com-non-work field-group-tab',
        'description' => '<h3>Community based non work</h3><p>Unpaid time spent in integrated, community settings; in a group of 4 people with disabilities or less, while having access to others without disabilities who are not paid staff or family members. Activities occur at locations available to and by members of the general community, and include interactions with members of the general community to the same extent as participants without disabilities. </p>',
        'required_fields' => 1,
      ),
      'label' => 'Community based non work',
    ),
    'format_type' => 'tab',
    'label' => 'Community based non work',
    'weight' => '54',
  );
  $field_groups['group_com_non_work|node|individual_data_mn|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_delete_individual|node|individual_data_mn|form';
  $field_group->group_name = 'group_delete_individual';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_mn';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'children' => array(
      0 => 'field_delete_indiv_why',
      1 => 'field_delete_indiv_why_other',
    ),
    'format_settings' => array(
      'instance_settings' => array(
        'attributes' => '',
        'classes' => 'group-delete-individual field-group-html-element deleteGroup',
        'element' => 'div',
        'id' => '',
        'label_element' => 'div',
        'required_fields' => 1,
        'show_label' => '0',
      ),
      'label' => 'Answer some questions before deleting this individual',
    ),
    'format_type' => 'html-element',
    'label' => 'Answer some questions before deleting this individual',
    'weight' => '5',
  );
  $field_groups['group_delete_individual|node|individual_data_mn|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_non_work|node|individual_data_mn|form';
  $field_group->group_name = 'group_fac_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_mn';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_categories';
  $field_group->data = array(
    'children' => array(
      0 => 'field_fac_non_work_partic',
      1 => 'field_fac_non_work_yn_partic',
      2 => 'field_fac_non_work_hours',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-fac-non-work field-group-tab',
        'description' => '<h3>Facility based non work</h3><p>Individual spends time in unpaid activities in a program setting with other individuals with disabilities.</p>',
        'required_fields' => 1,
      ),
      'label' => 'Facility based non work',
    ),
    'format_type' => 'tab',
    'label' => 'Facility based non work',
    'weight' => '55',
  );
  $field_groups['group_fac_non_work|node|individual_data_mn|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grp_integ|node|individual_data_mn|form';
  $field_group->group_name = 'group_grp_integ';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_mn';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_categories';
  $field_group->data = array(
    'children' => array(
      0 => 'field_grp_integ_gross_wages',
      1 => 'field_grp_integ_hrs',
      2 => 'field_grp_integ_paid_time_off',
      3 => 'field_grp_integ_partic',
      4 => 'field_grp_integr_set_aside',
      5 => 'field_grp_minn_minimum_wage',
      6 => 'field_grp_why_not_min',
      7 => 'field_hourly_wage_y_n_grp',
      8 => 'field_hourly_wage_rate_grp',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-grp-integ field-group-tab',
        'description' => '<h3>Group integrated job</h3><p>Individual works in a group of 2 to 8 individuals with disabilities in a community setting that includes meaningful interaction with individuals without disabilities. This would typically include work settings described as enclaves or mobile work crews. </p>',
        'required_fields' => 1,
      ),
      'label' => 'Group integrated job',
    ),
    'format_type' => 'tab',
    'label' => 'Group integrated job',
    'weight' => '51',
  );
  $field_groups['group_grp_integ|node|individual_data_mn|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indv_comp|node|individual_data_mn|form';
  $field_group->group_name = 'group_indv_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_mn';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_categories';
  $field_group->data = array(
    'children' => array(
      0 => 'field_indv_comp_gross_wages',
      1 => 'field_indv_comp_hrs',
      2 => 'field_indv_comp_paid_time_off',
      3 => 'field_indv_comp_partic',
      4 => 'field_indv_comp_why_not_min',
      5 => 'field_indv_minn_minimum_wage',
      6 => 'field_indv_pay_source',
      7 => 'field_hourly_wage_rate_y_n',
      8 => 'field_what_is_the_individual_s_h',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-indv-comp field-group-tab',
        'description' => '<h3>Individual competitive job</h3><p>Individual has a full or part time job in the typical labor market where the majority of persons employed are not persons with disabilities. The business is located within the community and is not owned or operated by the support organization. The person is on the payroll of the community business. </p>',
        'required_fields' => 1,
      ),
      'label' => 'Individual competitive job',
    ),
    'format_type' => 'tab',
    'label' => 'Individual competitive job',
    'weight' => '50',
  );
  $field_groups['group_indv_comp|node|individual_data_mn|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_no_particip|node|individual_data_mn|form';
  $field_group->group_name = 'group_no_particip';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_mn';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_categories';
  $field_group->data = array(
    'children' => array(
      0 => 'field_indv_data_partic_other',
      1 => 'field_indv_data_partic_why',
    ),
    'format_settings' => array(
      'instance_settings' => array(
        'attributes' => '',
        'classes' => 'group-no-particip field-group-html-element',
        'element' => 'div',
        'id' => 'reasonnopartic',
        'label_element' => 'div',
        'required_fields' => 1,
        'show_label' => '0',
      ),
      'label' => 'Reason for no participation',
    ),
    'format_type' => 'html-element',
    'label' => 'Reason for no participation',
    'weight' => '56',
  );
  $field_groups['group_no_particip|node|individual_data_mn|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_self_emp|node|individual_data_mn|form';
  $field_group->group_name = 'group_self_emp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_mn';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_categories';
  $field_group->data = array(
    'children' => array(
      0 => 'field_self_emp_gross_expens',
      1 => 'field_self_emp_gross_income',
      2 => 'field_self_emp_hrs',
      3 => 'field_self_emp_partic',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-self-emp field-group-tab',
        'description' => '<h3>Self employment</h3><p>Includes self-employment or microenterprises owned by the individual. Does not include a business that is owned by the support organization.</p><p><em>
Note that business income and expenses are reported over a 3 month period to capture fluctuations in business income.</em></p>',
        'required_fields' => 1,
      ),
      'label' => 'Self employment',
    ),
    'format_type' => 'tab',
    'label' => 'Self employment',
    'weight' => '52',
  );
  $field_groups['group_self_emp|node|individual_data_mn|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shl|node|individual_data_mn|form';
  $field_group->group_name = 'group_shl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data_mn';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_categories';
  $field_group->data = array(
    'children' => array(
      0 => 'field_shl_gross_wages',
      1 => 'field_shl_hrs',
      2 => 'field_shl_paid_time_off',
      3 => 'field_shl_partic',
      4 => 'field_shlt_set_aside',
      5 => 'field_shl_minn_minimum_wage',
      6 => 'field_shl_why_not_min',
      7 => 'field_hourly_wage_y_n_fac_based',
      8 => 'field_hourly_wage_rate_fac_based',
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-shl field-group-tab',
        'description' => '<h3>Facility based job/Sheltered work</h3><p>Individual works in a group of individuals with disabilities. This category would include any group larger than 8, and smaller group settings that involve little or no contact with workers without disabilities. Typically, the position is located in a facility or business owned or operated by the support organization, but may also occur in large groups in other settings such as a large enclave.</p>',
        'required_fields' => 1,
      ),
      'label' => 'Facility based job/Sheltered work',
    ),
    'format_type' => 'tab',
    'label' => 'Facility based job/Sheltered work',
    'weight' => '53',
  );
  $field_groups['group_shl|node|individual_data_mn|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Answer some questions before deleting this individual');
  t('Categories');
  t('Community based non work');
  t('Facility based job/Sheltered work');
  t('Facility based non work');
  t('Group integrated job');
  t('Individual competitive job');
  t('Reason for no participation');
  t('Self employment');

  return $field_groups;
}
