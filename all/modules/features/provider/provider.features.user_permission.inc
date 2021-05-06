<?php

/**
 * @file
 * provider.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function provider_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_provider_director_email'.
  $permissions['create field_provider_director_email'] = array(
    'name' => 'create field_provider_director_email',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_provider_director_name'.
  $permissions['create field_provider_director_name'] = array(
    'name' => 'create field_provider_director_name',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_provider_director_phone'.
  $permissions['create field_provider_director_phone'] = array(
    'name' => 'create field_provider_director_phone',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_provider_vendor_name'.
  $permissions['create field_provider_vendor_name'] = array(
    'name' => 'create field_provider_vendor_name',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create og_group_provider_state_ref'.
  $permissions['create og_group_provider_state_ref'] = array(
    'name' => 'create og_group_provider_state_ref',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_provider_director_email'.
  $permissions['edit field_provider_director_email'] = array(
    'name' => 'edit field_provider_director_email',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_provider_director_name'.
  $permissions['edit field_provider_director_name'] = array(
    'name' => 'edit field_provider_director_name',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_provider_director_phone'.
  $permissions['edit field_provider_director_phone'] = array(
    'name' => 'edit field_provider_director_phone',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_provider_vendor_name'.
  $permissions['edit field_provider_vendor_name'] = array(
    'name' => 'edit field_provider_vendor_name',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit og_group_provider_state_ref'.
  $permissions['edit og_group_provider_state_ref'] = array(
    'name' => 'edit og_group_provider_state_ref',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_provider_director_email'.
  $permissions['edit own field_provider_director_email'] = array(
    'name' => 'edit own field_provider_director_email',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_provider_director_name'.
  $permissions['edit own field_provider_director_name'] = array(
    'name' => 'edit own field_provider_director_name',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_provider_director_phone'.
  $permissions['edit own field_provider_director_phone'] = array(
    'name' => 'edit own field_provider_director_phone',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_provider_vendor_name'.
  $permissions['edit own field_provider_vendor_name'] = array(
    'name' => 'edit own field_provider_vendor_name',
    'roles' => array(
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own og_group_provider_state_ref'.
  $permissions['edit own og_group_provider_state_ref'] = array(
    'name' => 'edit own og_group_provider_state_ref',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_provider_director_email'.
  $permissions['view field_provider_director_email'] = array(
    'name' => 'view field_provider_director_email',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_provider_director_name'.
  $permissions['view field_provider_director_name'] = array(
    'name' => 'view field_provider_director_name',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_provider_director_phone'.
  $permissions['view field_provider_director_phone'] = array(
    'name' => 'view field_provider_director_phone',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_provider_vendor_name'.
  $permissions['view field_provider_vendor_name'] = array(
    'name' => 'view field_provider_vendor_name',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view og_group_provider_state_ref'.
  $permissions['view og_group_provider_state_ref'] = array(
    'name' => 'view og_group_provider_state_ref',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_provider_director_email'.
  $permissions['view own field_provider_director_email'] = array(
    'name' => 'view own field_provider_director_email',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_provider_director_name'.
  $permissions['view own field_provider_director_name'] = array(
    'name' => 'view own field_provider_director_name',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_provider_director_phone'.
  $permissions['view own field_provider_director_phone'] = array(
    'name' => 'view own field_provider_director_phone',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'GA user' => 'GA user',
      'MA user' => 'MA user',
      'MD user' => 'MD user',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_provider_vendor_name'.
  $permissions['view own field_provider_vendor_name'] = array(
    'name' => 'view own field_provider_vendor_name',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own og_group_provider_state_ref'.
  $permissions['view own og_group_provider_state_ref'] = array(
    'name' => 'view own og_group_provider_state_ref',
    'roles' => array(
      'GA Admin' => 'GA Admin',
      'Survey administrator' => 'Survey administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
