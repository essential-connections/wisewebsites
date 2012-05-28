<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_imagecache_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer imagecache
  $permissions['administer imagecache'] = array(
    'name' => 'administer imagecache',
    'roles' => array(),
  );

  // Exported permission: flush imagecache
  $permissions['flush imagecache'] = array(
    'name' => 'flush imagecache',
    'roles' => array(),
  );

  // Exported permission: view imagecache full
  $permissions['view imagecache full'] = array(
    'name' => 'view imagecache full',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache large
  $permissions['view imagecache large'] = array(
    'name' => 'view imagecache large',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache medium
  $permissions['view imagecache medium'] = array(
    'name' => 'view imagecache medium',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache original
  $permissions['view imagecache original'] = array(
    'name' => 'view imagecache original',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache small
  $permissions['view imagecache small'] = array(
    'name' => 'view imagecache small',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache thumb
  $permissions['view imagecache thumb'] = array(
    'name' => 'view imagecache thumb',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
