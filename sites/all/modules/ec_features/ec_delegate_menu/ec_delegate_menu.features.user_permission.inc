<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_delegate_menu_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer some menus
  $permissions['administer some menus'] = array(
    'name' => 'administer some menus',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
