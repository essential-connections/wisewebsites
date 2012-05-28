<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_feeds_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_feed_item';
  $strongarm->value = array();

  $export['notifications_content_type_feed_item'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_node_ui_feed_item';
  $strongarm->value = array();

  $export['notifications_node_ui_feed_item'] = $strongarm;
  
  return $export;
}
