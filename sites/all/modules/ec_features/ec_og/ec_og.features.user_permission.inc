<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_og_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer organic groups
  $permissions['administer organic groups'] = array(
    'name' => 'administer organic groups',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: broadcast
  $permissions['broadcast'] = array(
    'name' => 'broadcast',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: manage OG panels pages
  $permissions['manage OG panels pages'] = array(
    'name' => 'manage OG panels pages',
    'roles' => array(),
  );

  // Exported permission: manage groups
  $permissions['manage groups'] = array(
    'name' => 'manage groups',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: subscribe to content in groups
  $permissions['subscribe to content in groups'] = array(
    'name' => 'subscribe to content in groups',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );
  
  // Exported permission: create group content
  $permissions['create group content'] = array(
    'name' => 'create group content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete any group content
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own group content
  $permissions['delete own group content'] = array(
    'name' => 'delete own group content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any group content
  $permissions['edit any group content'] = array(
    'name' => 'edit any group content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own group content
  $permissions['edit own group content'] = array(
    'name' => 'edit own group content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
