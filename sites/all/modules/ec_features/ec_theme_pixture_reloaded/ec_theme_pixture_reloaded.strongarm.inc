<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_theme_pixture_reloaded_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popups_pixture_reloaded_content_selector';
  $strongarm->value = 'div.left-corner > div.clear-block:last';

  $export['popups_pixture_reloaded_content_selector'] = $strongarm;

  return $export;
}
