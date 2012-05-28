<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_simplemenu_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer simplemenu
  $permissions['administer simplemenu'] = array(
    'name' => 'administer simplemenu',
    'roles' => array(),
  );

  // Exported permission: view simplemenu
  $permissions['view simplemenu'] = array(
    'name' => 'view simplemenu',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
