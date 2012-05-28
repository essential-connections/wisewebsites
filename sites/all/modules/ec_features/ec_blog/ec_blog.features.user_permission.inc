<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer content with blog api
  $permissions['administer content with blog api'] = array(
    'name' => 'administer content with blog api',
    'roles' => array(),
  );

  // Exported permission: create blog entries
  $permissions['create blog entries'] = array(
    'name' => 'create blog entries',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'advanced user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete any blog entry
  $permissions['delete any blog entry'] = array(
    'name' => 'delete any blog entry',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own blog entries
  $permissions['delete own blog entries'] = array(
    'name' => 'delete own blog entries',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any blog entry
  $permissions['edit any blog entry'] = array(
    'name' => 'edit any blog entry',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own blog entries
  $permissions['edit own blog entries'] = array(
    'name' => 'edit own blog entries',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
