<?php

/**
 * @file
 * individual_data_md.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function individual_data_md_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_non_work|node|individual_data|form';
  $field_group->group_name = 'group_com_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Community based non work',
    'weight' => '13',
    'children' => array(
      0 => 'field_com_non_work_partic',
      1 => 'field_com_non_work_vol_partic',
      2 => 'field_com_non_work_vol_partic_2',
      3 => 'field_com_non_wrk_hours',
      4 => 'field_com_non_wrk_supports',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Community based non work',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-com-non-work field-group-tab',
        'description' => '<h3>Community based non work</h3><p>Unpaid time spent in integrated, community settings; in a group of 4 people with disabilities or less, while having access to others without disabilities who are not paid staff or family members. Activities occur at locations available to and by members of the general community, and include interactions with members of the general community to the same extent as participants without disabilities. </p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_com_non_work|node|individual_data|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_delete_individual|node|individual_data|form';
  $field_group->group_name = 'group_delete_individual';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Answer some questions before deleting this individual.',
    'weight' => '6',
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
  $field_groups['group_delete_individual|node|individual_data|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fac_non_work|node|individual_data|form';
  $field_group->group_name = 'group_fac_non_work';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Facility based non work',
    'weight' => '14',
    'children' => array(
      0 => 'field_fac_non_work_partic',
      1 => 'field_fac_non_work_yn_partic',
      2 => 'field_fac_non_work_supports',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Facility based non work',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fac-non-work field-group-tab',
        'description' => '<h3>Facility based non work</h3><p>Individual spends time in unpaid activities in a program setting with a group of individuals with disabilities. This also includes larger group outings of 5 or more individuals with other people with disabilities as part of a non-work program.</p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_fac_non_work|node|individual_data|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grp_integ|node|individual_data|form';
  $field_group->group_name = 'group_grp_integ';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Group integrated job',
    'weight' => '10',
    'children' => array(
      0 => 'field_grp_integ_partic',
      1 => 'field_grp_integ_hrs',
      2 => 'field_grp_integ_gross_wages',
      3 => 'field_grp_integ_paid_time_off',
      4 => 'field_grp_integr_set_aside',
      5 => 'field_grp_integ_covid',
      6 => 'field_grp_integ_supports',
      7 => 'field_grp_integ_covid_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Group integrated job',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-grp-integ field-group-tab',
        'description' => '<h3>Group integrated job</h3><p>The individual works in a group of 2 to 8 individuals with disabilities in a community setting that includes meaningful interaction with individuals without disabilities. This would typically include work settings described as enclaves or mobile work crews.</p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_grp_integ|node|individual_data|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_individual_data_categories|node|individual_data|form';
  $field_group->group_name = 'group_individual_data_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categories',
    'weight' => '4',
    'children' => array(
      0 => 'field_ga_ind_data_complete',
      1 => 'group_no_particip',
      2 => 'group_com_non_work',
      3 => 'group_fac_non_work',
      4 => 'group_grp_integ',
      5 => 'group_indv_comp',
      6 => 'group_indv_cont',
      7 => 'group_self_emp',
      8 => 'group_shl',
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
  $field_groups['group_individual_data_categories|node|individual_data|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indv_comp|node|individual_data|form';
  $field_group->group_name = 'group_indv_comp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Individual competitive job',
    'weight' => '8',
    'children' => array(
      0 => 'field_indv_comp_hrs',
      1 => 'field_indv_comp_gross_wages',
      2 => 'field_indv_comp_partic',
      3 => 'field_indv_comp_paid_time_off',
      4 => 'field_indv_comp_why_not_min',
      5 => 'field_indv_comp_covid',
      6 => 'field_indv_comp_supports',
      7 => 'field_indv_comp_covid_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Individual competitive job',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-indv-comp field-group-tab',
        'description' => '<h3>Individual competitive job</h3><p>An individual full or part time job in the typical labor market where the majority of persons employed are not persons with disabilities. The business is located within the community and is not owned or operated by the support organization. The person is on the payroll of the community business.</p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_indv_comp|node|individual_data|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indv_cont|node|individual_data|form';
  $field_group->group_name = 'group_indv_cont';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Individual contracted job',
    'weight' => '9',
    'children' => array(
      0 => 'field_indv_cont_hrs',
      1 => 'field_indv_cont_gross_wages',
      2 => 'field_indv_cont_partic',
      3 => 'field_indv_cont_paid_time_off',
      4 => 'field_indv_contr_set_aside',
      5 => 'field_indv_cont_why_no_min',
      6 => 'field_indv_cont_covid',
      7 => 'field_indv_cont_supports',
      8 => 'field_indv_cont_covid_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Individual contracted job',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-indv-cont field-group-tab',
        'description' => '<h3>Individual contracted job</h3><p>An individual full or part time job in the typical labor market where the majority of persons employed are not persons with disabilities. The business is located within the community. This includes positions where the person is on the payroll of the human service organization, or when the human service organization schedules and supervises the work.</p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_indv_cont|node|individual_data|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_no_particip|node|individual_data|form';
  $field_group->group_name = 'group_no_particip';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Reason for no participation',
    'weight' => '15',
    'children' => array(
      0 => 'field_indv_data_partic_other',
      1 => 'field_indv_data_partic_why',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Reason for no participation',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => 'reasonnopartic',
        'classes' => '',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_no_particip|node|individual_data|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_self_emp|node|individual_data|form';
  $field_group->group_name = 'group_self_emp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Self employment',
    'weight' => '11',
    'children' => array(
      0 => 'field_self_emp_partic',
      1 => 'field_self_emp_hrs',
      2 => 'field_self_emp_gross_income',
      3 => 'field_self_emp_gross_expens',
      4 => 'field_self_emp_supports',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Self employment',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-self-emp field-group-tab',
        'description' => '<h3>Self employment</h3><p>Includes self-employment or microenterprises owned by the individual. Does not include a business that is owned by the support organization.</p><p><em>
Note that business income and expenses are reported over a 3 month period to capture fluctuations in business income.</em></p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_self_emp|node|individual_data|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shl|node|individual_data|form';
  $field_group->group_name = 'group_shl';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'individual_data';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_individual_data_categories';
  $field_group->data = array(
    'label' => 'Facility based/Sheltered work',
    'weight' => '12',
    'children' => array(
      0 => 'field_shl_partic',
      1 => 'field_shl_hrs',
      2 => 'field_shl_gross_wages',
      3 => 'field_shl_paid_time_off',
      4 => 'field_shlt_set_aside',
      5 => 'field_shl_supports',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Facility based/Sheltered work',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-shl field-group-tab',
        'description' => '<h3>Facility based/Sheltered work</h3><p>Individual works in a group of individuals with disabilities. This category would include any group larger than 8, and smaller group settings that involve little or no contact with workers without disabilities. Typically, the position is located in a facility or business owned or operated by the support organization, but may also occur in large groups in other settings such as a large enclave.</p>',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_shl|node|individual_data|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Answer some questions before deleting this individual.');
  t('Categories');
  t('Community based non work');
  t('Facility based non work');
  t('Facility based/Sheltered work');
  t('Group integrated job');
  t('Individual competitive job');
  t('Individual contracted job');
  t('Reason for no participation');
  t('Self employment');

  return $field_groups;
}
