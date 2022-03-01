<?php

/**
 * @file
 * more_georgia_changes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function more_georgia_changes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create individual content'.
  $permissions['create individual content'] = array(
    'name' => 'create individual content',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create individual_data_ga content'.
  $permissions['create individual_data_ga content'] = array(
    'name' => 'create individual_data_ga content',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create provider content'.
  $permissions['create provider content'] = array(
    'name' => 'create provider content',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any individual_data_ga content'.
  $permissions['delete any individual_data_ga content'] = array(
    'name' => 'delete any individual_data_ga content',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own individual_data_ga content'.
  $permissions['delete own individual_data_ga content'] = array(
    'name' => 'delete own individual_data_ga content',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own reporting_period content'.
  $permissions['delete own reporting_period content'] = array(
    'name' => 'delete own reporting_period content',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any individual_data_ga content'.
  $permissions['edit any individual_data_ga content'] = array(
    'name' => 'edit any individual_data_ga content',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any provider content'.
  $permissions['edit any provider content'] = array(
    'name' => 'edit any provider content',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own individual content'.
  $permissions['edit own individual content'] = array(
    'name' => 'edit own individual content',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own individual_data_ga content'.
  $permissions['edit own individual_data_ga content'] = array(
    'name' => 'edit own individual_data_ga content',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own provider content'.
  $permissions['edit own provider content'] = array(
    'name' => 'edit own provider content',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own reporting_period content'.
  $permissions['edit own reporting_period content'] = array(
    'name' => 'edit own reporting_period content',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished individual content'.
  $permissions['view any unpublished individual content'] = array(
    'name' => 'view any unpublished individual content',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'view_unpublished',
  );

  // Exported permission: 'view any unpublished individual_data_ga content'.
  $permissions['view any unpublished individual_data_ga content'] = array(
    'name' => 'view any unpublished individual_data_ga content',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'Survey administrator' => 'Survey administrator',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
