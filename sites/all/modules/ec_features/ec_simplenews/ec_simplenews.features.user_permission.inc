<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_simplenews_user_default_permissions() {
  $permissions = array();

  // Exported permission: access newsletter preview
  $permissions['access newsletter preview'] = array(
    'name' => 'access newsletter preview',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer newsletters
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: administer simplenews settings
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer simplenews subscriptions
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: send newsletter
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: subscribe to newsletters
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
