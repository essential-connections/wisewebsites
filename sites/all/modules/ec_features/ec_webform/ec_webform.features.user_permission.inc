<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_webform_user_default_permissions() {
  $permissions = array();

  // Exported permission: access own webform submissions
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: access webform results
  $permissions['access webform results'] = array(
    'name' => 'access webform results',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: clear webform results
  $permissions['clear webform results'] = array(
    'name' => 'clear webform results',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: create webforms
  $permissions['create webforms'] = array(
    'name' => 'create webforms',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own webform submissions
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own webforms
  $permissions['edit own webforms'] = array(
    'name' => 'edit own webforms',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit webform submissions
  $permissions['edit webform submissions'] = array(
    'name' => 'edit webform submissions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit webforms
  $permissions['edit webforms'] = array(
    'name' => 'edit webforms',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: use PHP for additional processing
  $permissions['use PHP for additional processing'] = array(
    'name' => 'use PHP for additional processing',
    'roles' => array(),
  );

  return $permissions;
}
