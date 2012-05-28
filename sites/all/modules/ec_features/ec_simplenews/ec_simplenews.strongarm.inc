<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_simplenews_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_simplenews';
  $strongarm->value = array();

  $export['notifications_content_type_simplenews'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_node_ui_simplenews';
  $strongarm->value = array();

  $export['notifications_node_ui_simplenews'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_simplenews';
  $strongarm->value = 0;

  $export['show_preview_changes_simplenews'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplenews_test_address_override';
  $strongarm->value = 1;

  $export['simplenews_test_address_override'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplenews_throttle';
  $strongarm->value = '50';

  $export['simplenews_throttle'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplenews_use_cron';
  $strongarm->value = 1;

  $export['simplenews_use_cron'] = $strongarm;
  return $export;
}
