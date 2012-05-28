<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_theme_user_default_permissions() {
  $permissions = array();

  // Exported permission: select different theme
  $permissions['select different theme'] = array(
    'name' => 'select different theme',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
