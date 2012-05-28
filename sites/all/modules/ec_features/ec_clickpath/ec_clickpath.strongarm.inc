<?php


/**
 * Implementation of hook_strongarm().
 */
function ec_clickpath_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clickpath_breadcrumb';
  $strongarm->value = 1;

  $export['clickpath_breadcrumb'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clickpath_count';
  $strongarm->value = '5';

  $export['clickpath_count'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clickpath_home_title';
  $strongarm->value = 'Home';

  $export['clickpath_home_title'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clickpath_ignore_list';
  $strongarm->value = '';

  $export['clickpath_ignore_list'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clickpath_title_length';
  $strongarm->value = '20';

  $export['clickpath_title_length'] = $strongarm;
  return $export;
}
