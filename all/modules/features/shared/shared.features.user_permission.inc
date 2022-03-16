<?php

/**
 * @file
 * shared.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function shared_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_area_office'.
  $permissions['create field_area_office'] = array(
    'name' => 'create field_area_office',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_individual'.
  $permissions['create field_individual'] = array(
    'name' => 'create field_individual',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_reporting_period'.
  $permissions['create field_reporting_period'] = array(
    'name' => 'create field_reporting_period',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create og_group_ref'.
  $permissions['create og_group_ref'] = array(
    'name' => 'create og_group_ref',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_area_office'.
  $permissions['edit field_area_office'] = array(
    'name' => 'edit field_area_office',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_individual'.
  $permissions['edit field_individual'] = array(
    'name' => 'edit field_individual',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_reporting_period'.
  $permissions['edit field_reporting_period'] = array(
    'name' => 'edit field_reporting_period',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit og_group_ref'.
  $permissions['edit og_group_ref'] = array(
    'name' => 'edit og_group_ref',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_area_office'.
  $permissions['edit own field_area_office'] = array(
    'name' => 'edit own field_area_office',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_individual'.
  $permissions['edit own field_individual'] = array(
    'name' => 'edit own field_individual',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_reporting_period'.
  $permissions['edit own field_reporting_period'] = array(
    'name' => 'edit own field_reporting_period',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own og_group_ref'.
  $permissions['edit own og_group_ref'] = array(
    'name' => 'edit own og_group_ref',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_area_office'.
  $permissions['view field_area_office'] = array(
    'name' => 'view field_area_office',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_individual'.
  $permissions['view field_individual'] = array(
    'name' => 'view field_individual',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_reporting_period'.
  $permissions['view field_reporting_period'] = array(
    'name' => 'view field_reporting_period',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view og_group_ref'.
  $permissions['view og_group_ref'] = array(
    'name' => 'view og_group_ref',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_area_office'.
  $permissions['view own field_area_office'] = array(
    'name' => 'view own field_area_office',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_individual'.
  $permissions['view own field_individual'] = array(
    'name' => 'view own field_individual',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_reporting_period'.
  $permissions['view own field_reporting_period'] = array(
    'name' => 'view own field_reporting_period',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own og_group_ref'.
  $permissions['view own og_group_ref'] = array(
    'name' => 'view own og_group_ref',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'MN user' => 'MN user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
