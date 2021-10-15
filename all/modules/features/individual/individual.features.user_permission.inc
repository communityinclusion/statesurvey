<?php

/**
 * @file
 * individual.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function individual_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_cie_individual'.
  $permissions['create field_cie_individual'] = array(
    'name' => 'create field_cie_individual',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ga_idd_c_cid_number'.
  $permissions['create field_ga_idd_c_cid_number'] = array(
    'name' => 'create field_ga_idd_c_cid_number',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cie_individual'.
  $permissions['edit field_cie_individual'] = array(
    'name' => 'edit field_cie_individual',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ga_idd_c_cid_number'.
  $permissions['edit field_ga_idd_c_cid_number'] = array(
    'name' => 'edit field_ga_idd_c_cid_number',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cie_individual'.
  $permissions['edit own field_cie_individual'] = array(
    'name' => 'edit own field_cie_individual',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ga_idd_c_cid_number'.
  $permissions['edit own field_ga_idd_c_cid_number'] = array(
    'name' => 'edit own field_ga_idd_c_cid_number',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cie_individual'.
  $permissions['view field_cie_individual'] = array(
    'name' => 'view field_cie_individual',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ga_idd_c_cid_number'.
  $permissions['view field_ga_idd_c_cid_number'] = array(
    'name' => 'view field_ga_idd_c_cid_number',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cie_individual'.
  $permissions['view own field_cie_individual'] = array(
    'name' => 'view own field_cie_individual',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ga_idd_c_cid_number'.
  $permissions['view own field_ga_idd_c_cid_number'] = array(
    'name' => 'view own field_ga_idd_c_cid_number',
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
