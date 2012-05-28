<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_ckeditor_user_default_permissions() {
  $permissions = array();

  // Exported permission: access ckeditor
  $permissions['access ckeditor'] = array(
    'name' => 'access ckeditor',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: administer ckeditor
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(),
  );

  return $permissions;
}

