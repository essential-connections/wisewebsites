<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_scheduler_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer scheduler
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(),
  );

  // Exported permission: schedule (un)publishing of nodes
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
