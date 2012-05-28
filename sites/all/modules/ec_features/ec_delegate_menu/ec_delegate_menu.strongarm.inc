<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_delegate_menu_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'delegate_menu';
  $strongarm->value = array(
    5 => array(
      'navigation' => array(),
      'primary-links' => array(
        'admin' => TRUE,
      ),
      'secondary-links' => array(
        'admin' => TRUE,
      ),
      'menu-nav-links' => array(),
      'menu-menu1' => array(
        'admin' => TRUE,
      ),
      'menu-menu2' => array(
        'admin' => TRUE,
      ),
      'menu-menu3' => array(
        'admin' => TRUE,
      ),
    ),
    'S' => array(
      'S' => array(
        'admin' => TRUE,
      ),
    ),
    'f' => array(
      'f' => array(
        'admin' => TRUE,
      ),
    ),
    4 => array(
      4 => array(),
    ),
    'd' => array(
      'd' => array(
        'admin' => TRUE,
      ),
    ),
    0 => array(
      0 => array(),
    ),
    9 => array(
      9 => array(
        'admin' => TRUE,
      ),
    ),
  );

  $export['delegate_menu'] = $strongarm;
  return $export;
}
