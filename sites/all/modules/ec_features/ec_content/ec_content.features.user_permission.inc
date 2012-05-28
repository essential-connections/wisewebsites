<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit own event content
  $permissions['upload files with swfupload'] = array(
    'name' => 'upload files with swfupload',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}

