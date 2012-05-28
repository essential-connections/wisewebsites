<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_statistics_user_default_permissions() {
  $permissions = array();

  // Exported permission: access statistics
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: exclude visits from counters
  $permissions['exclude visits from counters'] = array(
    'name' => 'exclude visits from counters',
    'roles' => array(),
  );

  // Exported permission: exclude visits from the access log
  $permissions['exclude visits from the access log'] = array(
    'name' => 'exclude visits from the access log',
    'roles' => array(),
  );

  // Exported permission: view post access counter
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(),
  );

  return $permissions;
}
