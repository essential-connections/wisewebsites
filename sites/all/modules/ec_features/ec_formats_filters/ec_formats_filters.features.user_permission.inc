<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_formats_filters_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer filters
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
  );

  // Exported permission: collapse format fieldset by default
  $permissions['collapse format fieldset by default'] = array(
    'name' => 'collapse format fieldset by default',
    'roles' => array(),
  );

  // Exported permission: collapsible format selection
  $permissions['collapsible format selection'] = array(
    'name' => 'collapsible format selection',
    'roles' => array(),
  );

  // Exported permission: show format selection for blocks
  $permissions['show format selection for blocks'] = array(
    'name' => 'show format selection for blocks',
    'roles' => array(),
  );

  // Exported permission: show format selection for comments
  $permissions['show format selection for comments'] = array(
    'name' => 'show format selection for comments',
    'roles' => array(),
  );

  // Exported permission: show format selection for nodes
  $permissions['show format selection for nodes'] = array(
    'name' => 'show format selection for nodes',
    'roles' => array(),
  );

  // Exported permission: show format tips
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(),
  );

  // Exported permission: show more format tips link
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(),
  );

  return $permissions;
}
