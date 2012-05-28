<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_clickpath_user_default_permissions() {
  $permissions = array();

  // Exported permission: view clickpath block
  $permissions['view clickpath block'] = array(
    'name' => 'view clickpath block',
    'roles' => array(),
  );

  return $permissions;
}

