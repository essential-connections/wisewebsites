<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_simplemenu_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_cache_menu';
  $strongarm->value = 1;

  $export['simplemenu_cache_menu'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_call_theme';
  $strongarm->value = 0;

  $export['simplemenu_call_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_detect_popup';
  $strongarm->value = 1;

  $export['simplemenu_detect_popup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_dropdown_zindex';
  $strongarm->value = '9999';

  $export['simplemenu_dropdown_zindex'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_effect';
  $strongarm->value = 'opacity';

  $export['simplemenu_effect'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_effect_speed';
  $strongarm->value = 'fast';

  $export['simplemenu_effect_speed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_element';
  $strongarm->value = 'body';

  $export['simplemenu_element'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_element_method';
  $strongarm->value = 'prepend';

  $export['simplemenu_element_method'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_exclusions';
  $strongarm->value = array(
    'acquia_marina' => 'acquia_marina',
    'acquia_prosper' => 'acquia_prosper',
    'adaptivetheme' => 'adaptivetheme',
    'adaptivetheme_admin' => 'adaptivetheme_admin',
    'adaptivetheme_subtheme' => 'adaptivetheme_subtheme',
    'cti_flex' => 'cti_flex',
    'fusion_core' => 'fusion_core',
    'fusion_starter' => 'fusion_starter',
    'mix_and_match' => 'mix_and_match',
    'pixture_reloaded' => 'pixture_reloaded',
    'STARTERKIT' => 'STARTERKIT',
    'zen' => 'zen',
    'zen_classic' => 'zen_classic',
    'zeropoint' => 'zeropoint',
    'bluemarine' => 'bluemarine',
    'chameleon' => 'chameleon',
    'marvin' => 'marvin',
    'garland' => 'garland',
    'minnelli' => 'minnelli',
    'pushbutton' => 'pushbutton',
  );

  $export['simplemenu_exclusions'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_fix';
  $strongarm->value = 'top';

  $export['simplemenu_fix'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_hide_delay';
  $strongarm->value = '800';

  $export['simplemenu_hide_delay'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_hide_when_empty';
  $strongarm->value = 1;

  $export['simplemenu_hide_when_empty'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_inactive_parents_theme_function';
  $strongarm->value = array(
    'cti_flex' => 'dhtml_menu_theme_menu_item_link',
  );

  $export['simplemenu_inactive_parents_theme_function'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_menu_scope';
  $strongarm->value = 'footer';

  $export['simplemenu_menu_scope'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_menubar_zindex';
  $strongarm->value = '9999';

  $export['simplemenu_menubar_zindex'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_menus';
  $strongarm->value = array(
    'navigation:0' => 'navigation:0',
  );

  $export['simplemenu_menus'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_superfish_version';
  $strongarm->value = 'superfish-1.4.1.js';

  $export['simplemenu_superfish_version'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_theme';
  $strongarm->value = 'simpleblack';

  $export['simplemenu_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_uid1';
  $strongarm->value = 0;

  $export['simplemenu_uid1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_visibility_operator';
  $strongarm->value = '0';

  $export['simplemenu_visibility_operator'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplemenu_visibility_pages';
  $strongarm->value = '';

  $export['simplemenu_visibility_pages'] = $strongarm;
  return $export;
}
