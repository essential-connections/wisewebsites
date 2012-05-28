<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_block_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer blocks
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: use PHP for block visibility
  $permissions['use PHP for block visibility'] = array(
    'name' => 'use PHP for block visibility',
    'roles' => array(),
  );

  return $permissions;
}

