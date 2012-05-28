<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_vertical_tabs_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_fieldsets_blog';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'group_files',
    2 => 'group_images',
    3 => 'group_video',
    4 => 'group_map',
    5 => 'revision_information',
    6 => 'author',
    7 => 'options',
    8 => 'comment_settings',
    9 => 'path',
  );

  $export['vertical_tabs_fieldsets_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_fieldsets_book';
  $strongarm->value = array(
    0 => 'notifications',
    1 => 'custom_breadcrumbs',
    2 => 'menu',
    3 => 'book',
    4 => 'author',
    5 => 'revision_information',
    6 => 'options',
    7 => 'path',
    8 => 'comment_settings',
  );

  $export['vertical_tabs_fieldsets_book'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_fieldsets_event';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'group_map',
    2 => 'group_files',
    3 => 'group_images',
    4 => 'group_video',
    5 => 'revision_information',
    6 => 'author',
    7 => 'options',
    8 => 'comment_settings',
    9 => 'path',
  );

  $export['vertical_tabs_fieldsets_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_fieldsets_forum';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'book',
    2 => 'revision_information',
    3 => 'author',
    4 => 'options',
    5 => 'path',
    6 => 'comment_settings',
  );

  $export['vertical_tabs_fieldsets_forum'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_fieldsets_group';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'notifications',
    2 => 'author',
    3 => 'revision_information',
    4 => 'options',
    5 => 'path',
    6 => 'comment_settings',
  );

  $export['vertical_tabs_fieldsets_group'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_fieldsets_page';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'group_files',
    2 => 'group_images',
    3 => 'group_video',
    4 => 'group_map',
    5 => 'revision_information',
    6 => 'author',
    7 => 'options',
    8 => 'comment_settings',
    9 => 'path',
  );

  $export['vertical_tabs_fieldsets_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_fieldsets_poll';
  $strongarm->value = array(
    0 => 'settings',
    1 => 'menu',
    2 => 'revision_information',
    3 => 'author',
    4 => 'options',
    5 => 'path',
    6 => 'comment_settings',
  );

  $export['vertical_tabs_fieldsets_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_fieldsets_webform';
  $strongarm->value = array(
    0 => 'menu',
    1 => 'notifications',
    2 => 'author',
    3 => 'revision_information',
    4 => 'options',
    5 => 'path',
    6 => 'comment_settings',
  );

  $export['vertical_tabs_fieldsets_webform'] = $strongarm;
  return $export;
}
