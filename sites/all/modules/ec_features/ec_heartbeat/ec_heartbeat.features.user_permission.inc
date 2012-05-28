<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_heartbeat_user_default_permissions() {
  $permissions = array();

  // Exported permission: configure heartbeat
  $permissions['configure heartbeat'] = array(
    'name' => 'configure heartbeat',
    'roles' => array(),
  );

  // Exported permission: configure heartbeat messages
  $permissions['configure heartbeat messages'] = array(
    'name' => 'configure heartbeat messages',
    'roles' => array(),
  );

  // Exported permission: delete heartbeat activity logs
  $permissions['delete heartbeat activity logs'] = array(
    'name' => 'delete heartbeat activity logs',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own heartbeat activity logs
  $permissions['delete own heartbeat activity logs'] = array(
    'name' => 'delete own heartbeat activity logs',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: maintain own activity
  $permissions['maintain own activity'] = array(
    'name' => 'maintain own activity',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view heartbeat messages
  $permissions['view heartbeat messages'] = array(
    'name' => 'view heartbeat messages',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view personal heartbeat activity
  $permissions['view personal heartbeat activity'] = array(
    'name' => 'view personal heartbeat activity',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
