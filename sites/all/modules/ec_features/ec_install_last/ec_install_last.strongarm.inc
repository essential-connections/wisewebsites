<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_install_last_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ec_install_last';
  $strongarm->value = '1';

  $export['ec_install_last'] = $strongarm;
  return $export;
}


