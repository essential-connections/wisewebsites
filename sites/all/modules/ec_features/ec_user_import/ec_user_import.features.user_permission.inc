<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_user_import_user_default_permissions() {
  $permissions = array();

  // Exported permission: import users
  $permissions['import users'] = array(
    'name' => 'import users',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: og user import
  $permissions['og user import'] = array(
    'name' => 'og user import',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
