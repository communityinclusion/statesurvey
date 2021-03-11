<?php

/**
 * @file
 * georgia_addition.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function georgia_addition_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ga_ind_data_complete'.
  $field_bases['field_ga_ind_data_complete'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ga_ind_data_complete',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_hidden',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'field_hidden_integer',
  );

  // Exported field_base: 'field_grp_integ_occupation'.
  $field_bases['field_grp_integ_occupation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_grp_integ_occupation',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Agriculture' => 'Agriculture',
        'Assembly/manufacturing' => 'Assembly/manufacturing',
        'Clerical/office' => 'Clerical/office',
        'Custodian/housekeeping' => 'Custodian/housekeeping',
        'Food service' => 'Food service',
        'Grocery/retail' => 'Grocery/retail',
        'Groundskeeping' => 'Groundskeeping',
        'Health/human services' => 'Health/human services',
        'Sorting/recycling' => 'Sorting/recycling',
        'Stocking/warehouse' => 'Stocking/warehouse',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_grp_integ_work_location'.
  $field_bases['field_grp_integ_work_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_grp_integ_work_location',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Community business site' => 'Community business site (business in the general labor market)',
        'Provider owned business ' => 'Provider owned business',
        'Other community locations' => 'Other community locations (e.g. mobile work crew)',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_indv_comp_fund_source'.
  $field_bases['field_indv_comp_fund_source'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_indv_comp_fund_source',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Waiver' => 'Waiver',
        'Contracted state funds (GIA)' => 'Contracted state funds (GIA)',
        'Family Supports' => 'Family Supports',
        'GVRA' => 'GVRA',
        'CIE Funds (formerly EEF)' => 'CIE Funds (formerly EEF)',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_indv_comp_occupation'.
  $field_bases['field_indv_comp_occupation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_indv_comp_occupation',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Agriculture' => 'Agriculture',
        'Assembly/manufacturing' => 'Assembly/manufacturing',
        'Clerical/office' => 'Clerical/office',
        'Custodian/housekeeping' => 'Custodian/housekeeping',
        'Food service' => 'Food service',
        'Grocery/retail' => 'Grocery/retail',
        'Groundskeeping' => 'Groundskeeping',
        'Health/human services' => 'Health/human services',
        'Sorting/recycling' => 'Sorting/recycling',
        'Stocking/warehouse' => 'Stocking/warehouse',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_indv_comp_other_source'.
  $field_bases['field_indv_comp_other_source'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_indv_comp_other_source',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_indv_comp_time_in_job'.
  $field_bases['field_indv_comp_time_in_job'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_indv_comp_time_in_job',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Less than 6 months' => 'Less than 6 months',
        '6 to 12 months' => '6 to 12 months',
        '13 to 24 months' => '13 to 24 months',
        '25 to 36 months' => '25 to 36 months',
        '37 to 48 months' => '37 to 48 months',
        '49 to 60 months' => '49 to 60 months',
        'More than 60 months' => 'More than 60 months',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_self_emp_occupation'.
  $field_bases['field_self_emp_occupation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_self_emp_occupation',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Agriculture' => 'Agriculture',
        'Assembly/manufacturing' => 'Assembly/manufacturing',
        'Clerical/office' => 'Clerical/office',
        'Custodian/housekeeping' => 'Custodian/housekeeping',
        'Food service' => 'Food service',
        'Grocery/retail' => 'Grocery/retail',
        'Groundskeeping' => 'Groundskeeping',
        'Health/human services' => 'Health/human services',
        'Sorting/recycling' => 'Sorting/recycling',
        'Stocking/warehouse' => 'Stocking/warehouse',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
