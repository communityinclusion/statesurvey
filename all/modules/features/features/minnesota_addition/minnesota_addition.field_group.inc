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
        'description' => '',
        'required_fields' => 1,
      ),
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
        'description' => '',
        'required_fields' => 1,
      ),
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
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-grp-integ field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
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
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-indv-comp field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
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
        'description' => '',
        'required_fields' => 1,
      ),
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
    ),
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-shl field-group-tab',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
    'format_type' => 'tab',
    'label' => 'Facility based/Sheltered work',
    'weight' => '53',
  );
  $field_groups['group_shl|node|individual_data_mn|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Answer some questions before deleting this individual');
  t('Categories');
  t('Community based non work');
  t('Facility based non work');
  t('Facility based/Sheltered work');
  t('Group integrated job');
  t('Individual competitive job');
  t('Reason for no participation');
  t('Self employment');

  return $field_groups;
}
