<?php


/**
 * Implementation of hook_menu_default_menu_links().
 */
function ec_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:contact
  $menu_links['primary-links:contact'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => 'Contact Us',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
  );
  // Exported menu link: secondary-links:logout
  $menu_links['primary-links:login'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(),
    'module' => 'user',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us');
  t('Log in');

  return $menu_links;
}
