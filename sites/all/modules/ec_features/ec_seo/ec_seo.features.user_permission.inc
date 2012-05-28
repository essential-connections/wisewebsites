<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_seo_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer meta tags
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer meta tags
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer page titles
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: set page title
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );
  
  // Exported permission: administer google analytics
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
