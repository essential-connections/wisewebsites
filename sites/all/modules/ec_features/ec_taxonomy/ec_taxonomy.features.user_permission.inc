<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer taxonomy
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
