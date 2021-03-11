<?php

/**
 * @file
 * georgia_addition.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function georgia_addition_user_default_roles() {
  $roles = array();

  // Exported role: GA user.
  $roles['GA user'] = array(
    'name' => 'GA user',
    'weight' => 6,
  );

  return $roles;
}
