<?php


/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ec_base_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-menu1
  $menus['menu-menu1'] = array(
    'menu_name' => 'menu-menu1',
    'title' => 'Custom Menu 1',
    'description' => 'A custom menu. This menu shows in a block which must be placed in a region in block administration.',
  );
  // Exported menu: menu-menu2
  $menus['menu-menu2'] = array(
    'menu_name' => 'menu-menu2',
    'title' => 'Custom Menu 2',
    'description' => 'A custom menu. This menu shows in a block which must be placed in a region in block administration.',
  );
  // Exported menu: menu-menu3
  $menus['menu-menu3'] = array(
    'menu_name' => 'menu-menu3',
    'title' => 'Custom Menu 3',
    'description' => 'A custom menu. This menu shows in a block which must be placed in a region in block administration.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A custom menu. This menu shows in a block which must be placed in a region in block administration.');
  t('Custom Menu 1');
  t('Custom Menu 2');
  t('Custom Menu 3');


  return $menus;
}
