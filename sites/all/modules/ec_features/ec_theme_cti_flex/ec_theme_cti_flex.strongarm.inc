<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_theme_cti_flex_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'conditional_styles_cti_flex';
  $strongarm->value = '<!--[if IE]>
<link type="text/css" rel="stylesheet" media="all" href="/sites/all/themes/cti_flex/ie.css?h" />
<![endif]-->
';

  $export['conditional_styles_cti_flex'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popups_cti_flex_content_selector';
  $strongarm->value = 'div.left-corner > div.clear-block:last';

  $export['popups_cti_flex_content_selector'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_cti_flex_settings';
  $strongarm->value = array(
    'zen_block_editing' => '0',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' » ',
    'zen_breadcrumb_home' => 0,
    'zen_breadcrumb_trailing' => 0,
    'zen_breadcrumb_title' => 0,
    'zen_rebuild_registry' => '0',
    'zen_wireframes' => 0,
    'mission' => '',
    'default_logo' => '0',
    'logo_path' => '',
    'default_favicon' => '0',
    'favicon_path' => '',
    'primary_links' => 1,
    'secondary_links' => 1,
    'toggle_logo' => 0,
    'toggle_favicon' => 1,
    'toggle_name' => 1,
    'toggle_search' => 0,
    'toggle_slogan' => 1,
    'toggle_mission' => '0',
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_node_info_forum' => 1,
    'toggle_node_info_guidance' => 0,
    'logo_upload' => '',
    'favicon_upload' => '',
    'popups' => '',
    'popups_content_selector' => 'div.left-corner > div.clear-block:last',
    'breadcrumb' => '',
    'headerimg' => '',
    'cssPreload' => '',
    'node_type_specific' => '',
    'seo' => '',
    'themedev' => '',
    'cti_flex_fixed' => 1,
    'cti_flex_design' => '0',
    'cti_flex_font_family' => '',
    'cti_flex_color1' => '',
    'cti_flex_color2' => '',
    'cti_flex_color3' => '',
    'cti_flex_color4' => '',
    'cti_flex_color5' => '',
    'cti_flex_color6' => '',
    'cti_flex_color7' => '',
    'cti_flex_color8' => '',
    'popups_theme' => 'cti_flex',
  );

  $export['theme_cti_flex_settings'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_zen_settings';
  $strongarm->value = array(
    'zen_block_editing' => '1',
    'zen_breadcrumb' => 'yes',
    'zen_breadcrumb_separator' => ' › ',
    'zen_breadcrumb_home' => '1',
    'zen_breadcrumb_trailing' => '1',
    'zen_breadcrumb_title' => '0',
    'zen_layout' => 'border-politics-liquid',
    'zen_rebuild_registry' => '0',
    'zen_wireframes' => '0',
    'mission' => '',
    'default_logo' => 0,
    'logo_path' => 'sites/default/files/logo.gif',
    'default_favicon' => 0,
    'favicon_path' => '',
    'primary_links' => 1,
    'secondary_links' => 1,
    'toggle_logo' => 1,
    'toggle_favicon' => 1,
    'toggle_name' => 1,
    'toggle_search' => 0,
    'toggle_slogan' => 1,
    'toggle_mission' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 0,
    'toggle_node_info_forum' => 1,
    'toggle_node_info_guidance' => 0,
    'logo_upload' => '',
    'favicon_upload' => '',
    'popups' => '',
    'popups_content_selector' => 'div.left-corner > div.clear-block:last',
    'breadcrumb' => '',
    'headerimg' => '',
    'cssPreload' => '',
    'node_type_specific' => '',
    'seo' => '',
    'themedev' => '',
    'popups_theme' => 'global',
  );

  $export['theme_zen_settings'] = $strongarm;
  return $export;
}
