<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_uc_other_user_default_permissions() {
  $permissions = array();

  // Exported permission: Allow Reordering
  $permissions['Allow Reordering'] = array(
    'name' => 'Allow Reordering',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
