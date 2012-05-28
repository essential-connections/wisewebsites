<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_messaging_notifications_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer messaging
  $permissions['administer messaging'] = array(
    'name' => 'administer messaging',
    'roles' => array(),
  );

  // Exported permission: administer notifications
  $permissions['administer notifications'] = array(
    'name' => 'administer notifications',
    'roles' => array(),
  );

  // Exported permission: maintain own subscriptions
  $permissions['maintain own subscriptions'] = array(
    'name' => 'maintain own subscriptions',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: manage all subscriptions
  $permissions['manage all subscriptions'] = array(
    'name' => 'manage all subscriptions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: manage own subscriptions
  $permissions['manage own subscriptions'] = array(
    'name' => 'manage own subscriptions',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: skip notifications
  $permissions['skip notifications'] = array(
    'name' => 'skip notifications',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: subscribe to author
  $permissions['subscribe to author'] = array(
    'name' => 'subscribe to author',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: subscribe to content
  $permissions['subscribe to content'] = array(
    'name' => 'subscribe to content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: subscribe to content type
  $permissions['subscribe to content type'] = array(
    'name' => 'subscribe to content type',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: subscribe to messages
  $permissions['subscribe to messages'] = array(
    'name' => 'subscribe to messages',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: subscribe to taxonomy terms
  $permissions['subscribe to taxonomy terms'] = array(
    'name' => 'subscribe to taxonomy terms',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
