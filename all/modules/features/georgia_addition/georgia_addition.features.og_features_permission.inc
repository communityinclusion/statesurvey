<?php

/**
 * @file
 * georgia_addition.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function georgia_addition_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:provider:create individual_data_ga content'
  $permissions['node:provider:create individual_data_ga content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:provider:delete any individual_data_ga content'
  $permissions['node:provider:delete any individual_data_ga content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:delete own individual_data_ga content'
  $permissions['node:provider:delete own individual_data_ga content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:provider:update any individual_data_ga content'
  $permissions['node:provider:update any individual_data_ga content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:provider:update own individual_data_ga content'
  $permissions['node:provider:update own individual_data_ga content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:state:create individual_data_ga content'
  $permissions['node:state:create individual_data_ga content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:state:delete any individual_data_ga content'
  $permissions['node:state:delete any individual_data_ga content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:state:delete own individual_data_ga content'
  $permissions['node:state:delete own individual_data_ga content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:state:update any individual_data_ga content'
  $permissions['node:state:update any individual_data_ga content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:state:update own individual_data_ga content'
  $permissions['node:state:update own individual_data_ga content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
