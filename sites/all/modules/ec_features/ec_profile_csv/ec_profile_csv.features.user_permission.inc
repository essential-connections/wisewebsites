<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_profile_csv_user_default_permissions() {
  $permissions = array();

  // Exported permission: download profiles
  $permissions['download profiles'] = array(
    'name' => 'download profiles',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
