<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ww_service_links_user_default_permissions() {
  $permissions = array();

  // Exported permission: access service links
  $permissions['access service links'] = array(
    'name' => 'access service links',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
