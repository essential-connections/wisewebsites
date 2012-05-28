<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_help_user_default_permissions() {
  $permissions = array();

  // Exported permission: access help
  $permissions['access help'] = array(
    'name' => 'access help',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
