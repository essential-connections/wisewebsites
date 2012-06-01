<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function ec_uc_other_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:admin/store/products/ordering
  $menu_links['navigation:admin/store/products/listposition'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/store/products/listposition',
    'router_path' => 'admin/store/products/listposition',
    'link_title' => 'Product List Position',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-20',
    'parent_path' => 'admin/store/products',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Product List Position');


  return $menu_links;
}
