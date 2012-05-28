<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_statistics_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_advanced_counter_node_types';
  $strongarm->value = array(
    'blog' => 0,
    'book' => 0,
    'forum' => 0,
    'group' => 0,
    'page' => 0,
    'panel' => 0,
    'poll' => 0,
    'story' => 0,
    'webform' => 0,
  );

  $export['statistics_advanced_counter_node_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_advanced_ignore_crawlers';
  $strongarm->value = 1;

  $export['statistics_advanced_ignore_crawlers'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_advanced_ignore_repeat_views';
  $strongarm->value = 1;

  $export['statistics_advanced_ignore_repeat_views'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_count_content_views';
  $strongarm->value = '0';

  $export['statistics_count_content_views'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_enable_access_log';
  $strongarm->value = '1';

  $export['statistics_enable_access_log'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statistics_flush_accesslog_timer';
  $strongarm->value = '9676800';

  $export['statistics_flush_accesslog_timer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statspro_end';
  $strongarm->value = 0;

  $export['statspro_end'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statspro_period';
  $strongarm->value = 'week_current';

  $export['statspro_period'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statspro_start';
  $strongarm->value = 0;

  $export['statspro_start'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'statspro_term_rebuild';
  $strongarm->value = FALSE;

  $export['statspro_term_rebuild'] = $strongarm;
  return $export;
}
