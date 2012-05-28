<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_profile_csv_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'profile_csv_param_fields';
  $strongarm->value = array(
    'uid' => 'uid',
    'name' => 'name',
    'pass' => 'pass',
    'mail' => 'mail',
    'mode' => 'mode',
    'sort' => 'sort',
    'signature' => 'signature',
    'signature_format' => 'signature_format',
    'created' => 'created',
    'access' => 'access',
    'login' => 'login',
    'status' => 'status',
    'timezone' => 'timezone',
    'language' => 'language',
    'picture' => 'picture',
    'init' => 'init',
    'timezone_name' => 'timezone_name',
    'threshold' => 0,
    'theme' => 0,
    'data' => 0,
  );

  $export['profile_csv_param_fields'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'profile_csv_param_profile_1';
  $strongarm->value = 1;

  $export['profile_csv_param_profile_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'profile_csv_param_profile_2';
  $strongarm->value = 1;

  $export['profile_csv_param_profile_2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'profile_csv_role2';
  $strongarm->value = 1;

  $export['profile_csv_role2'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'profile_csv_role3';
  $strongarm->value = 0;

  $export['profile_csv_role3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'profile_csv_role4';
  $strongarm->value = 0;

  $export['profile_csv_role4'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'profile_csv_role5';
  $strongarm->value = 0;

  $export['profile_csv_role5'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'profile_csv_role6';
  $strongarm->value = 0;

  $export['profile_csv_role6'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'profile_csv_status';
  $strongarm->value = '2';

  $export['profile_csv_status'] = $strongarm;
  return $export;
}
