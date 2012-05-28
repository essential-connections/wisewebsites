<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_checkout_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer checked out documents
  $permissions['administer checked out documents'] = array(
    'name' => 'administer checked out documents',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: check out documents
  $permissions['check out documents'] = array(
    'name' => 'check out documents',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: keep documents checked out
  $permissions['keep documents checked out'] = array(
    'name' => 'keep documents checked out',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
