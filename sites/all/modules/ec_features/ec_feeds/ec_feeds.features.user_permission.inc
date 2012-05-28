<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_feeds_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer feeds
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(),
  );

  // Exported permission: clear feed feeds
  $permissions['clear feed feeds'] = array(
    'name' => 'clear feed feeds',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: clear node feeds
  $permissions['clear node feeds'] = array(
    'name' => 'clear node feeds',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: clear opml feeds
  $permissions['clear opml feeds'] = array(
    'name' => 'clear opml feeds',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: clear user feeds
  $permissions['clear user feeds'] = array(
    'name' => 'clear user feeds',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: import feed feeds
  $permissions['import feed feeds'] = array(
    'name' => 'import feed feeds',
    'roles' => array(),
  );

  // Exported permission: import node feeds
  $permissions['import node feeds'] = array(
    'name' => 'import node feeds',
    'roles' => array(),
  );

  // Exported permission: import opml feeds
  $permissions['import opml feeds'] = array(
    'name' => 'import opml feeds',
    'roles' => array(),
  );

  // Exported permission: import user feeds
  $permissions['import user feeds'] = array(
    'name' => 'import user feeds',
    'roles' => array(),
  );

  return $permissions;
}
