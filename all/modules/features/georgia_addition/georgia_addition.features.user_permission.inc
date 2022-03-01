<?php

/**
 * @file
 * georgia_addition.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function georgia_addition_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_grp_integ_fund_source'.
  $permissions['create field_grp_integ_fund_source'] = array(
    'name' => 'create field_grp_integ_fund_source',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_grp_integ_fund_source'.
  $permissions['edit field_grp_integ_fund_source'] = array(
    'name' => 'edit field_grp_integ_fund_source',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_grp_integ_fund_source'.
  $permissions['edit own field_grp_integ_fund_source'] = array(
    'name' => 'edit own field_grp_integ_fund_source',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_grp_integ_fund_source'.
  $permissions['view field_grp_integ_fund_source'] = array(
    'name' => 'view field_grp_integ_fund_source',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_grp_integ_fund_source'.
  $permissions['view own field_grp_integ_fund_source'] = array(
    'name' => 'view own field_grp_integ_fund_source',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
