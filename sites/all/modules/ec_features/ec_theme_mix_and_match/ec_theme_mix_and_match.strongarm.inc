<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_theme_mix_and_match_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'popups_mix_and_match_content_selector';
  $strongarm->value = 'div.left-corner > div.clear-block:last';

  $export['popups_mix_and_match_content_selector'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_mix_and_match_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 1,
    'toggle_search' => 1,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'default_logo' => '0',
    'logo_path' => 'sites/default/files/logo.gif',
    'logo_upload' => '',
    'default_favicon' => '0',
    'favicon_path' => '',
    'favicon_upload' => '',
    'mix_and_match_body_bg' => 'gray',
    'mix_and_match_page_bg' => 'white-page-bg',
    'mix_and_match_accent_color' => 'black-accents',
    'mix_and_match_footer_color' => 'black-footer',
    'mix_and_match_header_color' => 'red-headers',
    'mix_and_match_link_color' => 'blue-links',
    'mix_and_match_corners' => 'round-corners-7',
    'theme_grid' => 'grid16-960',
    'fluid_grid_width' => 'fluid-100',
    'sidebar_layout' => 'sidebars-split',
    'sidebar_first_width' => '3',
    'sidebar_last_width' => '3',
    'theme_font' => 'none',
    'theme_font_size' => 'font-size-13',
    'primary_menu_dropdown' => 1,
    'breadcrumb_display' => 1,
    'search_snippet' => 1,
    'search_info_type' => 1,
    'search_info_user' => 1,
    'search_info_date' => 1,
    'search_info_comment' => 1,
    'search_info_upload' => 1,
    'user_notverified_display' => 1,
    'breadcrumb' => '',
    'block_config_link' => 1,
    'grid_mask' => 0,
    'themedev' => '',
    'rebuild_registry' => 0,
    'fix_css_limit' => 0,
    'headerimg' => '',
    'cssPreload' => '',
    'node_type_specific' => '',
    'seo' => '',
    'zen_block_editing' => '',
    'zen_rebuild_registry' => '',
    'popups' => '',
    'popups_content_selector' => 'div.left-corner > div.clear-block:last',
    'popups_theme' => 'mix_and_match',
  );

  $export['theme_mix_and_match_settings'] = $strongarm;
  return $export;
}
