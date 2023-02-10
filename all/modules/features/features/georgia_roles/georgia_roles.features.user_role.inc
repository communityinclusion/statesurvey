<?php

/**
 * @file
 * georgia_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function georgia_roles_user_default_roles() {
  $roles = array();

  // Exported role: GA Admin.
  $roles['GA Admin'] = array(
    'name' => 'GA Admin',
    'weight' => 7,
  );

  // Exported role: Survey administrator.
  $roles['Survey administrator'] = array(
    'name' => 'Survey administrator',
    'weight' => 5,
  );

  return $roles;
}
