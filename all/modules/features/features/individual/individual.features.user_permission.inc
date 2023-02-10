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

  // Exported permission: 'create field_ind_disability'.
  $permissions['create field_ind_disability'] = array(
    'name' => 'create field_ind_disability',
    'roles' => array(
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ind_ethnicity'.
  $permissions['create field_ind_ethnicity'] = array(
    'name' => 'create field_ind_ethnicity',
    'roles' => array(
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_ind_race'.
  $permissions['create field_ind_race'] = array(
    'name' => 'create field_ind_race',
    'roles' => array(
      'MN user' => 'MN user',
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

  // Exported permission: 'edit field_ind_disability'.
  $permissions['edit field_ind_disability'] = array(
    'name' => 'edit field_ind_disability',
    'roles' => array(
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ind_ethnicity'.
  $permissions['edit field_ind_ethnicity'] = array(
    'name' => 'edit field_ind_ethnicity',
    'roles' => array(
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_ind_race'.
  $permissions['edit field_ind_race'] = array(
    'name' => 'edit field_ind_race',
    'roles' => array(
      'MN user' => 'MN user',
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

  // Exported permission: 'edit own field_ind_disability'.
  $permissions['edit own field_ind_disability'] = array(
    'name' => 'edit own field_ind_disability',
    'roles' => array(
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ind_ethnicity'.
  $permissions['edit own field_ind_ethnicity'] = array(
    'name' => 'edit own field_ind_ethnicity',
    'roles' => array(
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_ind_race'.
  $permissions['edit own field_ind_race'] = array(
    'name' => 'edit own field_ind_race',
    'roles' => array(
      'MN user' => 'MN user',
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

  // Exported permission: 'view field_ind_disability'.
  $permissions['view field_ind_disability'] = array(
    'name' => 'view field_ind_disability',
    'roles' => array(
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ind_ethnicity'.
  $permissions['view field_ind_ethnicity'] = array(
    'name' => 'view field_ind_ethnicity',
    'roles' => array(
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_ind_race'.
  $permissions['view field_ind_race'] = array(
    'name' => 'view field_ind_race',
    'roles' => array(
      'MN user' => 'MN user',
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

  // Exported permission: 'view own field_ind_disability'.
  $permissions['view own field_ind_disability'] = array(
    'name' => 'view own field_ind_disability',
    'roles' => array(
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ind_ethnicity'.
  $permissions['view own field_ind_ethnicity'] = array(
    'name' => 'view own field_ind_ethnicity',
    'roles' => array(
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_ind_race'.
  $permissions['view own field_ind_race'] = array(
    'name' => 'view own field_ind_race',
    'roles' => array(
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
