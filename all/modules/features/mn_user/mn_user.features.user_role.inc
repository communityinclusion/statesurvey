<?php

/**
 * @file
 * mn_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function mn_user_user_default_roles() {
  $roles = array();

  // Exported role: MN user.
  $roles['MN user'] = array(
    'name' => 'MN user',
    'weight' => 8,
  );

  return $roles;
}
