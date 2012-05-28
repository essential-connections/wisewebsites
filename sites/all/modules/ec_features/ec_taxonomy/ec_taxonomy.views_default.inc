<?php

/**
 * Implementation of hook_views_default_views().
 */
function ec_taxonomy_views_default_views() {
  $views = array();

  // Exported view: categories
  $view = new view;
  $view->name = 'categories';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'term_data';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'name' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_taxonomy' => 1,
      'exclude' => 0,
      'id' => 'name',
      'table' => 'term_data',
      'field' => 'name',
      'relationship' => 'none',
    ),
    'phpcode_1' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'value' => '<?php
print \'(\'.taxonomy_term_count_nodes($data->tid).\')\';
?>',
      'exclude' => 0,
      'id' => 'phpcode_1',
      'table' => 'customfield',
      'field' => 'phpcode',
      'relationship' => 'none',
    ),
    'phpcode' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'value' => '<?php
$nodes = taxonomy_select_nodes(array($data->tid), \'and\', 0, TRUE, \'n.sticky DESC, n.created DESC\');
//$result = db_result($nodes);
$output = \'<ul>\';
while ($n = db_fetch_object($nodes)) {
$output .= \'<li>\'.l($n->title,\'node/\'.$n->nid).\'</li>\';
}

$output .= \'</ul>\';
print($output);
?>',
      'exclude' => 0,
      'id' => 'phpcode',
      'table' => 'customfield',
      'field' => 'phpcode',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'tid' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'tid_op',
        'identifier' => 'tid',
        'label' => 'Category',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '2',
      'id' => 'tid',
      'table' => 'term_data',
      'field' => 'tid',
      'hierarchy' => 1,
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      '2' => 2,
    ),
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Categories');
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 0);
  $handler->override_option('empty', 'There are no categories');
  $handler->override_option('empty_format', '2');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 40);
  $handler->override_option('use_pager', '1');
  $handler->override_option('pager_element', 7);
  $handler->override_option('style_plugin', 'grid');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'columns' => '4',
    'alignment' => 'horizontal',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'name' => 'name',
      'phpcode_1' => 'phpcode_1',
    ),
    'separator' => '',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'categories');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => 'Categories',
    'description' => 'Browse content that has been categorized',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));
  $handler = $view->new_display('page', 'Admin', 'page_2');
  $handler->override_option('fields', array(
    'name' => array(
      'label' => 'Category',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_taxonomy' => 1,
      'exclude' => 0,
      'id' => 'name',
      'table' => 'term_data',
      'field' => 'name',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'phpcode_2' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'value' => '<?php
print \'(\'.taxonomy_term_count_nodes($data->tid).\')\';
?>',
      'exclude' => 0,
      'id' => 'phpcode_2',
      'table' => 'customfield',
      'field' => 'phpcode',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'phpcode' => array(
      'label' => 'Posts',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'value' => '<?php
$nodes = taxonomy_select_nodes(array($data->tid), \'and\', 0, TRUE, \'n.sticky DESC, n.created DESC\');
//$result = db_result($nodes);
$output = \'<ul>\';
while ($n = db_fetch_object($nodes)) {
$output .= \'<li>\'.l($n->title,\'node/\'.$n->nid.\'/edit\').\'</li>\';
}

$output .= \'</ul>\';
print($output);
?>',
      'exclude' => 0,
      'id' => 'phpcode',
      'table' => 'customfield',
      'field' => 'phpcode',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'phpcode_1' => array(
      'label' => 'Actions',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'value' => '<?php
print l(\'edit\',\'administer/categories/edit/\'.$data->tid);
?>',
      'exclude' => 0,
      'id' => 'phpcode_1',
      'table' => 'customfield',
      'field' => 'phpcode',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'administer categories',
  ));
  $handler->override_option('title', 'Administer Categories');
  $handler->override_option('header', 'Select categories to execute operation on');
  $handler->override_option('style_plugin', 'bulk');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'asc',
    'columns' => array(
      'name' => 'name',
      'phpcode_2' => 'name',
      'phpcode' => 'phpcode',
      'phpcode_1' => 'phpcode_1',
    ),
    'info' => array(
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'phpcode_2' => array(
        'separator' => '',
      ),
      'phpcode' => array(
        'separator' => '',
      ),
      'phpcode_1' => array(
        'separator' => '',
      ),
    ),
    'default' => 'name',
    'execution_type' => '2',
    'display_type' => '0',
    'hide_select_all' => 0,
    'skip_confirmation' => 0,
    'display_result' => 1,
    'merge_single_action' => 0,
    'selected_operations' => array(
      'views_bulk_operations_delete_term_action' => 'views_bulk_operations_delete_term_action',
      'eit_groups_backup_files_action' => 0,
      'system_message_action' => 0,
      'token_actions_message_action' => 0,
      'views_bulk_operations_script_action' => 0,
      'views_bulk_operations_argument_selector_action' => 0,
      'token_actions_goto_action' => 0,
      'system_goto_action' => 0,
      'system_send_email_action' => 0,
      'token_actions_send_email_action' => 0,
    ),
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'name' => 'name',
      'ncount' => 'ncount',
    ),
    'separator' => '',
  ));
  $handler->override_option('path', 'admin/content/categories');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Categories',
    'description' => 'Administer categories',
    'weight' => '0',
    'name' => 'menu-administration',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));

  $views[$view->name] = $view;

  return $views;
}
