<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function ec_uc_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:catalog
  $menu_links['primary-links:catalog'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'catalog',
    'router_path' => 'catalog',
    'link_title' => 'Catalog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-1',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Catalog');


  return $menu_links;
}
