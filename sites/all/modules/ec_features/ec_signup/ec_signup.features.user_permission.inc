<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ec_signup_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer all signups
  $permissions['administer all signups'] = array(
    'name' => 'administer all signups',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer signup status mailer settings
  $permissions['administer signup status mailer settings'] = array(
    'name' => 'administer signup status mailer settings',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer signup status mailer settings for own content
  $permissions['administer signup status mailer settings for own content'] = array(
    'name' => 'administer signup status mailer settings for own content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: administer signups for own content
  $permissions['administer signups for own content'] = array(
    'name' => 'administer signups for own content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: cancel own signups
  $permissions['cancel own signups'] = array(
    'name' => 'cancel own signups',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: cancel signups
  $permissions['cancel signups'] = array(
    'name' => 'cancel signups',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own signups
  $permissions['edit own signups'] = array(
    'name' => 'edit own signups',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: email all signed up users
  $permissions['email all signed up users'] = array(
    'name' => 'email all signed up users',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: email users signed up for own content
  $permissions['email users signed up for own content'] = array(
    'name' => 'email users signed up for own content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: invite people to signup
  $permissions['invite people to signup'] = array(
    'name' => 'invite people to signup',
    'roles' => array(),
  );

  // Exported permission: manage signup status codes
  $permissions['manage signup status codes'] = array(
    'name' => 'manage signup status codes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: sign up for content
  $permissions['sign up for content'] = array(
    'name' => 'sign up for content',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view all signups
  $permissions['view all signups'] = array(
    'name' => 'view all signups',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
