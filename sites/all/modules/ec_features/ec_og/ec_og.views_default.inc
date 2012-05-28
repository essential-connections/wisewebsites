<?php

/**
 * Implementation of hook_views_default_views().
 */
function ec_og_views_default_views() {
  $views = array();

  // Exported view: add_member
$view = new view;
$view->name = 'add_member';
$view->description = '';
$view->tag = 'eit';
$view->view_php = '';
$view->base_table = 'users';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
  'uid' => array(
    'label' => 'Uid',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
    ),
    'link_to_user' => 0,
    'exclude' => 1,
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'none',
  ),
  'picture' => array(
    'id' => 'picture',
    'table' => 'users',
    'field' => 'picture',
    'label' => '',
    'relationship' => 'none',
  ),
  'name' => array(
    'label' => 'User Name',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
    ),
    'link_to_user' => 1,
    'overwrite_anonymous' => 0,
    'anonymous_text' => '',
    'exclude' => 0,
    'id' => 'name',
    'table' => 'users',
    'field' => 'name',
    'relationship' => 'none',
  ),
  'rid' => array(
    'label' => 'Role',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '',
      'alt' => '',
      'prefix' => '',
      'suffix' => '',
      'help' => '',
      'trim' => 0,
      'max_length' => '',
      'word_boundary' => 1,
      'ellipsis' => 1,
      'html' => 0,
    ),
    'type' => 'separator',
    'separator' => ', ',
    'empty' => '',
    'exclude' => 0,
    'id' => 'rid',
    'table' => 'users_roles',
    'field' => 'rid',
    'relationship' => 'none',
  ),
  'phpcode' => array(
    'label' => 'Actions',
    'alter' => array(
      'alter_text' => 0,
      'text' => '',
      'make_link' => 0,
      'path' => '[phpcode]',
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
  $nid = arg(1);
  $og = node_load($nid);
  if($og){
      $result = db_query(\'SELECT ug.uid, ug.nid, ug.is_active, ug.is_admin 
                          FROM {og_uid} ug 
                          WHERE ug.nid = \'.$nid.\' 
                          AND ug.uid = \'.$data->uid 
                          );
      $obj = db_fetch_object($result);
      $output = \'<ul>\';
      if(empty($obj)){
        $output .= \'<li>\'.(l("add to ".$og->title, "node/".$nid."/manage_members/add/".$data->uid)).\'</li>\';
        $output .= \'<li>\'.(l("add to waiting list", "node/".$nid."/manage_members/queue/".$data->uid)).\'</li>\';
      }else{
        if($obj->is_admin == 1){
          $output .= \'<li>\'.("<em>group owner</em>").\'</li>\';
        }else if($obj->is_active == 1){
          $output .= \'<li>\'.("already a member").\'</li>\';
          $output .= \'<li>\'.(l("move to waiting list", "node/".$nid."/manage_members/queue/".$data->uid)).\'</li>\';
          $output .= \'<li>\'.(l("remove membership", "node/".$nid."/manage_members/remove/".$data->uid)).\'</li>\';
        }else{
          $output .= \'<li>\'.("in waiting list").\'</li>\';
          $output .= \'<li>\'.(l("approve membership", "node/".$nid."/manage_members/add/".$data->uid)).\'</li>\';
          $output .= \'<li>\'.(l("remove from waiting list", "node/".$nid."/manage_members/remove/".$data->uid)).\'</li>\';
        }
        
      }
      $output .= \'</ul>\';
      print($output);
    }
?>',
    'exclude' => 0,
    'id' => 'phpcode',
    'table' => 'customfield',
    'field' => 'phpcode',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'contact' => array(
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
    'text' => 'contact',
    'link_display' => 'icon',
    'exclude' => 0,
    'id' => 'contact',
    'table' => 'users',
    'field' => 'contact',
    'relationship' => 'none',
  ),
));
$handler->override_option('arguments', array(
  'null' => array(
    'default_action' => 'ignore',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'fixed',
    'default_argument' => '',
    'validate_type' => 'none',
    'validate_fail' => 'not found',
    'must_not_be' => 0,
    'id' => 'null',
    'table' => 'views',
    'field' => 'null',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '5' => 0,
      '3' => 0,
      '4' => 0,
      '6' => 0,
    ),
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_user' => 0,
    'default_argument_fixed' => '',
    'default_argument_php' => '',
    'validate_argument_node_type' => array(
      'webform' => 0,
      'blog' => 0,
      'poll' => 0,
      'event' => 0,
      'group' => 0,
      'page' => 0,
      'feed' => 0,
      'feed_item' => 0,
      'product' => 0,
      'simplenews' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '4' => 0,
      '2' => 0,
      '3' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'validate_argument_is_member' => 0,
    'validate_argument_signup_status' => 'any',
    'validate_argument_signup_node_access' => 0,
    'validate_argument_php' => '',
  ),
));
$handler->override_option('filters', array(
  'status' => array(
    'id' => 'status',
    'table' => 'users',
    'field' => 'status',
    'operator' => '=',
    'value' => 1,
    'group' => 0,
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'relationship' => 'none',
    'expose_button' => array(
      'button' => 'Expose',
    ),
  ),
  'uid' => array(
    'operator' => 'in',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'uid_op',
      'identifier' => 'uid',
      'label' => 'User Name',
      'optional' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'uid',
    'table' => 'users',
    'field' => 'uid',
    'relationship' => 'none',
  ),
  'rid' => array(
    'operator' => 'or',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 1,
      'operator' => 'rid_op',
      'identifier' => 'rid',
      'label' => 'Role',
      'optional' => 1,
      'single' => 0,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'rid',
    'table' => 'users_roles',
    'field' => 'rid',
    'relationship' => 'none',
    'reduce_duplicates' => 0,
    'override' => array(
      'button' => 'Override',
    ),
  ),
));
$handler->override_option('access', array(
  'type' => 'php',
  'code' => '<?php
global $user;
$node = node_load(arg(1));
if( (user_access(\'administer nodes\') || user_access(\'manage groups\') || og_is_group_admin($node, $user)) && og_is_group_type($node->type) ){
  return TRUE;
}
return FALSE;
?>',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('title', 'Add Members');
$handler->override_option('header_format', '2');
$handler->override_option('header_empty', 0);
$handler->override_option('empty', 'No results');
$handler->override_option('empty_format', '1');
$handler->override_option('items_per_page', 25);
$handler->override_option('use_pager', '1');
$handler->override_option('distinct', 0);
$handler->override_option('style_plugin', 'table');
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 1,
  'sticky' => 1,
  'order' => 'asc',
  'columns' => array(
    'uid' => 'uid',
    'picture' => 'picture',
    'name' => 'name',
    'rid' => 'rid',
    'phpcode' => 'phpcode',
    'contact' => 'name',
  ),
  'info' => array(
    'uid' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'picture' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => ' ',
    ),
    'rid' => array(
      'separator' => '',
    ),
    'phpcode' => array(
      'separator' => '',
    ),
    'contact' => array(
      'separator' => '',
    ),
  ),
  'default' => '-1',
));
$handler->override_option('row_options', array(
  'inline' => array(
    'value' => 'value',
    'value_1' => 'value_1',
  ),
  'separator' => ' ',
));
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->override_option('path', 'node/%/add_members');
$handler->override_option('menu', array(
  'type' => 'tab',
  'title' => 'Add Members',
  'description' => '',
  'weight' => '6',
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'normal',
  'title' => 'Users',
  'description' => '',
  'weight' => '0',
));

  $views[$view->name] = $view;

  // Exported view: group_members
  $view = new view;
  $view->name = 'group_members';
  $view->description = '';
  $view->tag = 'eit';
  $view->view_php = '';
  $view->base_table = 'users';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'picture' => array(
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'label' => '',
      'relationship' => 'none',
    ),
    'name' => array(
      'label' => 'User Name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
      ),
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'none',
    ),
    'rid' => array(
      'label' => 'Role',
      'type' => 'separator',
      'separator' => ', ',
      'empty' => '',
      'exclude' => 0,
      'id' => 'rid',
      'table' => 'users_roles',
      'field' => 'rid',
      'relationship' => 'none',
    ),
    'managelinkadmin' => array(
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
      'exclude' => 0,
      'id' => 'managelinkadmin',
      'table' => 'og_uid',
      'field' => 'managelinkadmin',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'contact' => array(
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
      'text' => 'contact',
      'link_display' => 'icon',
      'exclude' => 0,
      'id' => 'contact',
      'table' => 'users',
      'field' => 'contact',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'nid' => array(
      'default_action' => 'not found',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'og_group_types',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'nid',
      'table' => 'og_uid',
      'field' => 'nid',
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'webform' => 0,
        'blog' => 0,
        'poll' => 0,
        'forum' => 0,
        'assignment' => 0,
        'book' => 0,
        'class' => 0,
        'event' => 0,
        'group' => 0,
        'page' => 0,
        'story' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '1' => 0,
        '3' => 0,
        '2' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_is_member' => 1,
      'validate_argument_php' => '',
      'user_argument_type' => '',
      'restrict_user_roles' => 0,
      'user_roles' => array(),
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'id' => 'status',
      'table' => 'users',
      'field' => 'status',
      'operator' => '=',
      'value' => 1,
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
      'expose_button' => array(
        'button' => 'Expose',
      ),
    ),
    'uid' => array(
      'operator' => 'in',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'uid_op',
        'identifier' => 'uid',
        'label' => 'User Name',
        'optional' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'none',
    ),
    'rid' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 1,
        'operator' => 'rid_op',
        'identifier' => 'rid',
        'label' => 'Roles',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'rid',
      'table' => 'users_roles',
      'field' => 'rid',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'is_active' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'is_active',
      'table' => 'og_uid',
      'field' => 'is_active',
      'relationship' => 'none',
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
  $handler->override_option('title', 'Members');
  $handler->override_option('header', '<?php
$node = node_load(arg(1));
drupal_set_title(\'Members of \'.$node->title);
$account = user_load($node->uid);
if($node->type == \'class\'){
print(\'Teacher: \'.l($account->name,\'user/\'.$account->uid));
}else if($node->type == \'group\'){
print(\'Manager: \'.l($account->name,\'user/\'.$account->uid));
}
print(\' - Members in list: \'.$GLOBALS[\'pager_total_items\'][0]);
?>');
  $handler->override_option('header_format', '3');
  $handler->override_option('header_empty', 1);
  $handler->override_option('empty', 'No results');
  $handler->override_option('empty_format', '1');
  $handler->override_option('use_ajax', '1');
  $handler->override_option('items_per_page', 9999);
  $handler->override_option('use_pager', '1');
  $handler->override_option('distinct', 1);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'asc',
    'columns' => array(
      'picture' => 'picture',
      'name' => 'name',
      'rid' => 'rid',
      'managelinkadmin' => 'managelinkadmin',
      'contact' => 'name',
    ),
    'info' => array(
      'picture' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => ' ',
      ),
      'rid' => array(
        'separator' => '',
      ),
      'managelinkadmin' => array(
        'separator' => '',
      ),
      'contact' => array(
        'separator' => '',
      ),
    ),
    'default' => 'name',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'value' => 'value',
      'value_1' => 'value_1',
    ),
    'separator' => ' ',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'node/%/members');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Members',
    'description' => '',
    'weight' => '5',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'tab',
    'title' => 'Members',
    'description' => '',
    'weight' => '5',
  ));

  $views[$view->name] = $view;

  // Exported view: manage_members
  $view = new view;
  $view->name = 'manage_members';
  $view->description = '';
  $view->tag = 'eit';
  $view->view_php = '';
  $view->base_table = 'users';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'picture' => array(
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'label' => '',
      'relationship' => 'none',
    ),
    'name' => array(
      'label' => 'User Name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
      ),
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'none',
    ),
    'rid' => array(
      'label' => 'Role',
      'type' => 'separator',
      'separator' => ', ',
      'empty' => '',
      'exclude' => 0,
      'id' => 'rid',
      'table' => 'users_roles',
      'field' => 'rid',
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => 'Joined group',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
      ),
      'date_format' => 'time ago',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'og_uid',
      'field' => 'created',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'phpcode' => array(
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
  $nid = arg(1);
  $og = node_load($nid);
  if($og){
      $result = db_query(\'SELECT ug.uid, ug.nid, ug.is_active, ug.is_admin 
                          FROM {og_uid} ug 
                          WHERE ug.nid = \'.$nid.\' 
                          AND ug.uid = \'.$data->uid 
                          );
      $obj = db_fetch_object($result);
      $output = \'<ul>\';
      if(empty($obj)){
        $output .= \'<li>\'.(l("add to ".$og->title, "node/".$nid."/manage_members/add/".$data->uid)).\'</li>\';
        $output .= \'<li>\'.(l("add to waiting list", "node/".$nid."/manage_members/queue/".$data->uid)).\'</li>\';
      }else{
        if($obj->is_admin == 1){
          $output .= \'<li>\'.("<em>group owner</em>").\'</li>\';
        }else if($obj->is_active == 1){
          $output .= \'<li>\'.(l("move to waiting list", "node/".$nid."/manage_members/queue/".$data->uid)).\'</li>\';
          $output .= \'<li>\'.(l("remove membership", "node/".$nid."/manage_members/remove/".$data->uid)).\'</li>\';
        }else{
          $output .= \'<li>\'.(l("approve membership", "node/".$nid."/manage_members/add/".$data->uid)).\'</li>\';
          $output .= \'<li>\'.(l("remove from waiting list", "node/".$nid."/manage_members/remove/".$data->uid)).\'</li>\';
        }
        
      }
      $output .= \'</ul>\';
      print($output);
    }
    ?>',
      'exclude' => 0,
      'id' => 'phpcode',
      'table' => 'customfield',
      'field' => 'phpcode',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'contact' => array(
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
      'text' => 'contact',
      'link_display' => 'icon',
      'exclude' => 0,
      'id' => 'contact',
      'table' => 'users',
      'field' => 'contact',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'nid' => array(
      'default_action' => 'not found',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'og_group_types',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'nid',
      'table' => 'og_uid',
      'field' => 'nid',
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'webform' => 0,
        'blog' => 0,
        'poll' => 0,
        'forum' => 0,
        'assignment' => 0,
        'book' => 0,
        'class' => 0,
        'event' => 0,
        'group' => 0,
        'page' => 0,
        'story' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        '1' => 0,
        '3' => 0,
        '2' => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_is_member' => 1,
      'validate_argument_php' => '',
      'user_argument_type' => '',
      'restrict_user_roles' => 0,
      'user_roles' => array(),
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'id' => 'status',
      'table' => 'users',
      'field' => 'status',
      'operator' => '=',
      'value' => 1,
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
      'expose_button' => array(
        'button' => 'Expose',
      ),
    ),
    'uid' => array(
      'operator' => 'in',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'uid_op',
        'identifier' => 'uid',
        'label' => 'User Name',
        'optional' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'none',
    ),
    'rid' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 1,
        'operator' => 'rid_op',
        'identifier' => 'rid',
        'label' => 'Role',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'rid',
      'table' => 'users_roles',
      'field' => 'rid',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'is_active' => array(
      'operator' => '=',
      'value' => 'All',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'operator' => '',
        'identifier' => 'is_active',
        'label' => 'Approved',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'is_active',
      'table' => 'og_uid',
      'field' => 'is_active',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'php',
    'code' => '<?php
global $user;
$node = node_load(arg(1));
if(user_access(\'administer nodes\') || user_access(\'manage groups\') || og_is_group_admin($node, $user)){
  return TRUE;
}
return FALSE;
?>',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Manage Members');
  $handler->override_option('header', '<?php
$node = node_load(arg(1));
$account = user_load($node->uid);
if($node->type == \'class\'){
print(\'Teacher: \'.l($account->name,\'user/\'.$account->uid));

	      // get number of students already in class(approved) 
	      $sql = "SELECT COUNT(u.uid) AS count, 
	      nt.field_student_limit_value AS student_limit 
	      FROM {og_uid} ou 
	      INNER JOIN {content_type_class} nt ON nt.nid=ou.nid 
	      INNER JOIN {users} u ON ou.uid = u.uid 
	      INNER JOIN {users_roles} ur ON u.uid = ur.uid 
	      INNER JOIN {role} r ON ur.rid = r.rid 
	      WHERE ou.nid = %d 
	      AND u.status > 0 
	      AND r.name = \'student\' 
	      AND ou.is_active = 1 
	      GROUP BY ou.nid 
	      "; 
	      $result = db_query($sql, $node->nid);
              //$result = db_query($sql, 34);
	      $obj = db_fetch_object($result); 
  if(!empty($obj)){
    $count = ($obj->count > 0) ? $obj->count:\'0\';
    $limit = ($obj->student_limit > 0) ? $obj->student_limit:\'unlimited\';
    print(" - Students in class:<b>".$count."</b> Limit:<b>".$limit."</b>");
  }

}else if($node->type == \'group\'){
print(\'Manager: \'.l($account->name,\'user/\'.$account->uid));
}
print(\' - Members in list: \'.$GLOBALS[\'pager_total_items\'][0]);
?>');
  $handler->override_option('header_format', '3');
  $handler->override_option('header_empty', 1);
  $handler->override_option('empty', 'No results');
  $handler->override_option('empty_format', '1');
  $handler->override_option('use_ajax', '1');
  $handler->override_option('items_per_page', 25);
  $handler->override_option('use_pager', '1');
  $handler->override_option('distinct', 1);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'asc',
    'columns' => array(
      'picture' => 'picture',
      'name' => 'name',
      'rid' => 'rid',
      'created' => 'created',
      'phpcode' => 'phpcode',
      'contact' => 'name',
    ),
    'info' => array(
      'picture' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => ' ',
      ),
      'rid' => array(
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'phpcode' => array(
        'separator' => '',
      ),
      'contact' => array(
        'separator' => '',
      ),
    ),
    'default' => 'created',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'value' => 'value',
      'value_1' => 'value_1',
    ),
    'separator' => ' ',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'node/%/manage_members');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Manage Members',
    'description' => '',
    'weight' => '6',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'tab',
    'title' => 'Members',
    'description' => '',
    'weight' => '5',
  ));

  $views[$view->name] = $view;

  // Exported view: og_admin
  $view = new view;
  $view->name = 'og_admin';
  $view->description = 'Administer groups';
  $view->tag = 'og';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => 'Group',
      'relationship' => 'none',
      'link_to_node' => 1,
    ),
    'name' => array(
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'label' => 'Manager',
      'link_to_user' => 1,
      'relationship' => 'none',
    ),
    'post_count' => array(
      'label' => 'Posts',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'post_count',
      'table' => 'og',
      'field' => 'post_count',
      'relationship' => 'none',
    ),
    'member_count' => array(
      'label' => 'Members',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'member_count',
      'table' => 'og',
      'field' => 'member_count',
      'relationship' => 'none',
    ),
    'selective' => array(
      'label' => 'Membership',
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
      'exclude' => 0,
      'id' => 'selective',
      'table' => 'og',
      'field' => 'selective',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'tid' => array(
      'label' => 'Categories',
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
      'type' => 'ul',
      'separator' => ', ',
      'empty' => '',
      'link_to_taxonomy' => 1,
      'limit' => 1,
      'vids' => array(
        '2' => 2,
        '1' => 0,
      ),
      'exclude' => 0,
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => 'Created',
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
      'date_format' => 'medium',
      'custom_date_format' => 'M y',
      'exclude' => 0,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'post_count_new' => array(
      'label' => 'New',
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
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'post_count_new',
      'table' => 'og',
      'field' => 'post_count_new',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'status' => array(
      'label' => 'Published',
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
      'type' => 'yes-no',
      'not' => 0,
      'exclude' => 0,
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'phpcode' => array(
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
print l(\'edit\',\'node/\'.$data->nid.\'/edit\');
?>',
      'exclude' => 0,
      'id' => 'phpcode',
      'table' => 'customfield',
      'field' => 'phpcode',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'operator' => 'contains',
      'value' => '',
      'group' => 0,
      'exposed' => TRUE,
      'expose' => array(
        'operator' => 'title_oper',
        'identifier' => 'title',
        'label' => 'Search for a group by name',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'relationship' => 'none',
      'expose_button' => array(
        'button' => 'Hide',
      ),
    ),
    'type_groups_all' => array(
      'id' => 'type_groups_all',
      'table' => 'og',
      'field' => 'type_groups_all',
      'operator' => '=',
      'value' => '',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
      'expose_button' => array(
        'button' => 'Expose',
      ),
    ),
    'selective_1' => array(
      'operator' => 'in',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'selective_1_op',
        'identifier' => 'selective_1',
        'label' => 'Membership',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'selective_1',
      'table' => 'og',
      'field' => 'selective',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'status' => array(
      'operator' => '=',
      'value' => 'All',
      'group' => 0,
      'exposed' => TRUE,
      'expose' => array(
        'operator' => '',
        'identifier' => 'status',
        'label' => 'Published',
        'optional' => 1,
        'remember' => 0,
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
      'expose_button' => array(
        'button' => 'Expose',
      ),
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'tid' => array(
      'operator' => 'or',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'tid_op',
        'identifier' => 'tid',
        'label' => 'Category',
        'optional' => 1,
        'single' => 0,
        'remember' => 0,
      ),
      'type' => 'textfield',
      'limit' => TRUE,
      'vid' => '2',
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'hierarchy' => 0,
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'php',
    'code' => '<?php
if(user_access(\'administer nodes\') || user_access(\'manage groups\')){
  return TRUE;
}
return FALSE;
?>',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Administer Groups');
  $handler->override_option('header', '<em>Select groups to execute operations on</em>');
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 0);
  $handler->override_option('empty', '<?php
$output = \'There are no groups\';
if(user_access(\'create group content\')){
$output .=\'<ul><li>\'.l(\'Create Group\',\'node/add/group\').\'</li></ul>\';
}
print $output;
?>');
  $handler->override_option('empty_format', '3');
  $handler->override_option('use_ajax', '1');
  $handler->override_option('items_per_page', 90);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'bulk');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'desc',
    'columns' => array(
      'title' => 'title',
      'name' => 'name',
      'post_count' => 'post_count',
      'member_count' => 'member_count',
      'selective' => 'selective',
      'tid' => 'tid',
      'created' => 'created',
      'post_count_new' => 'post_count',
      'status' => 'status',
      'phpcode' => 'phpcode',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'post_count' => array(
        'sortable' => 1,
        'separator' => ' ',
      ),
      'member_count' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'selective' => array(
        'separator' => '',
      ),
      'tid' => array(
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'post_count_new' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'status' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'phpcode' => array(
        'separator' => '',
      ),
    ),
    'default' => 'created',
    'execution_type' => '2',
    'display_type' => '0',
    'hide_select_all' => 0,
    'skip_confirmation' => 0,
    'display_result' => 1,
    'merge_single_action' => 1,
    'selected_operations' => array(
      'node_assign_owner_action' => 'node_assign_owner_action',
      'views_bulk_operations_delete_node_action' => 'views_bulk_operations_delete_node_action',
      'node_mass_update:a27b9efabcd054685a549378b174ad11' => 'node_mass_update:a27b9efabcd054685a549378b174ad11',
      'node_mass_update:c4d3b28efb86fd703619a50b74d43794' => 'node_mass_update:c4d3b28efb86fd703619a50b74d43794',
      'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac' => 'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac',
      'node_mass_update:9c585624b9b3af0b4687d5f97f35e047' => 'node_mass_update:9c585624b9b3af0b4687d5f97f35e047',
      'node_mass_update:8ce21b08bb8e773d10018b484fe4815e' => 'node_mass_update:8ce21b08bb8e773d10018b484fe4815e',
      'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080' => 'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080',
      'og_add_group_action' => 0,
      'flag_nodes:1980f2a3af0b5c3577850d4ba2600405' => 0,
      'views_bulk_operations_taxonomy_action:a80f5e43757a174b543c0de07d43cf82' => 0,
      'nodewords_admin_mass_update:48d00920397f9d8f23f7088c88056286' => 0,
      'system_message_action' => 0,
      'token_actions_message_action' => 0,
      'views_bulk_operations_ruleset_action_rules_set_1' => 0,
      'views_bulk_operations_script_action' => 0,
      'og_make_private_action' => 0,
      'og_make_public_action' => 0,
      'node_make_sticky_action' => 0,
      'node_make_unsticky_action' => 0,
      'views_bulk_operations_fields_action' => 0,
      'views_bulk_operations_taxonomy_action' => 0,
      'views_bulk_operations_argument_selector_action' => 0,
      'node_promote_action' => 0,
      'node_publish_action' => 0,
      'token_actions_goto_action' => 0,
      'system_goto_action' => 0,
      'og_remove_groups_action' => 0,
      'node_unpromote_action' => 0,
      'og_remove_group_action' => 0,
      'node_save_action' => 0,
      'system_send_email_action' => 0,
      'token_actions_send_email_action' => 0,
      'flag_nodes:76e4c513dfadc798e2eb84ad0a677401' => 0,
      'node_unpublish_action' => 0,
      'node_unpublish_by_keyword_action' => 0,
      'pathauto_node_operations_update' => 0,
    ),
  ));
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->override_option('path', 'admin/content/groups');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Groups',
    'description' => '',
    'weight' => '0',
    'name' => 'menu-administration',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Groups',
    'description' => '',
    'weight' => '0',
  ));

  $views[$view->name] = $view;
  
  //exported view group_broadcast
	$view = new view;
	$view->name = 'group_broadcast';
	$view->description = '';
	$view->tag = 'ec';
	$view->view_php = '';
	$view->base_table = 'users';
	$view->is_cacheable = FALSE;
	$view->api_version = 2;
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
	$handler = $view->new_display('default', 'Defaults', 'default');
	$handler->override_option('fields', array(
	  'picture' => array(
		'id' => 'picture',
		'table' => 'users',
		'field' => 'picture',
		'label' => '',
		'relationship' => 'none',
	  ),
	  'name' => array(
		'label' => 'User Name',
		'alter' => array(
		  'alter_text' => 0,
		  'text' => '',
		  'make_link' => 0,
		  'path' => '',
		  'alt' => '',
		  'prefix' => '',
		  'suffix' => '',
		  'help' => '',
		  'trim' => 0,
		  'max_length' => '',
		  'word_boundary' => 1,
		  'ellipsis' => 1,
		  'html' => 0,
		),
		'link_to_user' => 1,
		'overwrite_anonymous' => 0,
		'anonymous_text' => '',
		'exclude' => 0,
		'id' => 'name',
		'table' => 'users',
		'field' => 'name',
		'relationship' => 'none',
	  ),
	  'rid' => array(
		'label' => 'Role',
		'type' => 'separator',
		'separator' => ', ',
		'empty' => '',
		'exclude' => 0,
		'id' => 'rid',
		'table' => 'users_roles',
		'field' => 'rid',
		'relationship' => 'none',
	  ),
	  'created' => array(
		'label' => 'Joined group',
		'alter' => array(
		  'alter_text' => 0,
		  'text' => '',
		  'make_link' => 0,
		  'path' => '',
		  'alt' => '',
		  'prefix' => '',
		  'suffix' => '',
		  'help' => '',
		  'trim' => 0,
		  'max_length' => '',
		  'word_boundary' => 1,
		  'ellipsis' => 1,
		  'html' => 0,
		),
		'date_format' => 'time ago',
		'custom_date_format' => '',
		'exclude' => 0,
		'id' => 'created',
		'table' => 'og_uid',
		'field' => 'created',
		'override' => array(
		  'button' => 'Override',
		),
		'relationship' => 'none',
	  ),
	  'contact' => array(
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
		'text' => 'contact',
		'link_display' => 'icon',
		'exclude' => 0,
		'id' => 'contact',
		'table' => 'users',
		'field' => 'contact',
		'override' => array(
		  'button' => 'Override',
		),
		'relationship' => 'none',
	  ),
	  'mail' => array(
		'label' => 'E-mail',
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
		'link_to_user' => '0',
		'exclude' => 1,
		'id' => 'mail',
		'table' => 'users',
		'field' => 'mail',
		'relationship' => 'none',
	  ),
	));
	$handler->override_option('arguments', array(
	  'nid' => array(
		'default_action' => 'not found',
		'style_plugin' => 'default_summary',
		'style_options' => array(),
		'wildcard' => 'all',
		'wildcard_substitution' => 'All',
		'title' => '',
		'default_argument_type' => 'fixed',
		'default_argument' => '',
		'validate_type' => 'og_group_types',
		'validate_fail' => 'not found',
		'break_phrase' => 0,
		'not' => 0,
		'id' => 'nid',
		'table' => 'og_uid',
		'field' => 'nid',
		'relationship' => 'none',
		'default_options_div_prefix' => '',
		'default_argument_user' => 0,
		'default_argument_fixed' => '',
		'default_argument_php' => '',
		'validate_argument_node_type' => array(
		  'webform' => 0,
		  'blog' => 0,
		  'poll' => 0,
		  'forum' => 0,
		  'assignment' => 0,
		  'book' => 0,
		  'class' => 0,
		  'event' => 0,
		  'group' => 0,
		  'page' => 0,
		  'story' => 0,
		),
		'validate_argument_node_access' => 0,
		'validate_argument_nid_type' => 'nid',
		'validate_argument_vocabulary' => array(
		  '1' => 0,
		  '3' => 0,
		  '2' => 0,
		),
		'validate_argument_type' => 'tid',
		'validate_argument_is_member' => 1,
		'validate_argument_php' => '',
		'user_argument_type' => '',
		'restrict_user_roles' => 0,
		'user_roles' => array(),
	  ),
	));
	$handler->override_option('filters', array(
	  'status' => array(
		'id' => 'status',
		'table' => 'users',
		'field' => 'status',
		'operator' => '=',
		'value' => 1,
		'group' => 0,
		'exposed' => FALSE,
		'expose' => array(
		  'operator' => FALSE,
		  'label' => '',
		),
		'relationship' => 'none',
		'expose_button' => array(
		  'button' => 'Expose',
		),
	  ),
	  'uid' => array(
		'operator' => 'in',
		'value' => '',
		'group' => '0',
		'exposed' => TRUE,
		'expose' => array(
		  'use_operator' => 0,
		  'operator' => 'uid_op',
		  'identifier' => 'uid',
		  'label' => 'User Name',
		  'optional' => 1,
		  'remember' => 0,
		  'reduce' => 0,
		),
		'id' => 'uid',
		'table' => 'users',
		'field' => 'uid',
		'relationship' => 'none',
	  ),
	  'rid' => array(
		'operator' => 'or',
		'value' => array(),
		'group' => '0',
		'exposed' => TRUE,
		'expose' => array(
		  'use_operator' => 1,
		  'operator' => 'rid_op',
		  'identifier' => 'rid',
		  'label' => 'Role',
		  'optional' => 1,
		  'single' => 0,
		  'remember' => 0,
		  'reduce' => 0,
		),
		'id' => 'rid',
		'table' => 'users_roles',
		'field' => 'rid',
		'relationship' => 'none',
		'reduce_duplicates' => 0,
		'override' => array(
		  'button' => 'Override',
		),
	  ),
	  'is_active' => array(
		'operator' => '=',
		'value' => 'All',
		'group' => '0',
		'exposed' => TRUE,
		'expose' => array(
		  'operator' => '',
		  'identifier' => 'is_active',
		  'label' => 'Approved',
		  'optional' => 1,
		  'remember' => 0,
		),
		'id' => 'is_active',
		'table' => 'og_uid',
		'field' => 'is_active',
		'relationship' => 'none',
		'override' => array(
		  'button' => 'Override',
		),
	  ),
	));
	$handler->override_option('access', array(
	  'type' => 'php',
	  'code' => '<?php
	global $user;
	$node = node_load(arg(1));
	if(user_access(\'administer nodes\') || user_access(\'manage groups\') || user_access(\'broadcast\') || og_is_group_admin($node, $user)){
	  return TRUE;
	}
	return FALSE;
	?>',
	));
	$handler->override_option('cache', array(
	  'type' => 'none',
	));
	$handler->override_option('title', 'Manage Members');
	$handler->override_option('header', '<?php
	print(\' - Members in list: \'.$GLOBALS[\'pager_total_items\'][0]);
	?>');
	$handler->override_option('header_format', '3');
	$handler->override_option('header_empty', 1);
	$handler->override_option('empty', 'No results');
	$handler->override_option('empty_format', '1');
	$handler->override_option('use_ajax', '1');
	$handler->override_option('items_per_page', 25);
	$handler->override_option('use_pager', '1');
	$handler->override_option('distinct', 1);
	$handler->override_option('style_plugin', 'bulk');
	$handler->override_option('style_options', array(
	  'grouping' => '',
	  'override' => 1,
	  'sticky' => 1,
	  'order' => 'asc',
	  'columns' => array(
		'picture' => 'picture',
		'name' => 'name',
		'rid' => 'rid',
		'created' => 'created',
		'contact' => 'contact',
		'mail' => 'mail',
	  ),
	  'info' => array(
		'picture' => array(
		  'sortable' => 1,
		  'separator' => '',
		),
		'name' => array(
		  'sortable' => 1,
		  'separator' => '',
		),
		'rid' => array(
		  'separator' => '',
		),
		'created' => array(
		  'sortable' => 1,
		  'separator' => '',
		),
		'contact' => array(
		  'separator' => '',
		),
		'mail' => array(
		  'sortable' => 0,
		  'separator' => '',
		),
	  ),
	  'default' => 'name',
	  'execution_type' => '2',
	  'display_type' => '1',
	  'hide_select_all' => 0,
	  'skip_confirmation' => 0,
	  'display_result' => 1,
	  'merge_single_action' => 0,
	  'selected_operations' => array(
		'views_send_mail_action' => 'views_send_mail_action',
		'og_approve_user_action' => 0,
		'user_block_ip_action' => 0,
		'user_block_user_action' => 0,
		'user_user_operations_block' => 0,
		'nodewords_admin_mass_update:3925bd6c9edcf332c87f461396305366' => 0,
		'views_bulk_operations_delete_user_action' => 0,
		'og_demote_user_action' => 0,
		'og_deny_user_action' => 0,
		'system_message_action' => 0,
		'token_actions_message_action' => 0,
		'views_bulk_operations_script_action' => 0,
		'views_bulk_operations_profile_action' => 0,
		'views_bulk_operations_user_roles_action' => 0,
		'views_bulk_operations_argument_selector_action' => 0,
		'og_promote_user_action' => 0,
		'token_actions_goto_action' => 0,
		'system_goto_action' => 0,
		'system_send_email_action' => 0,
		'token_actions_send_email_action' => 0,
		'og_subscribe_user_action' => 0,
		'user_user_operations_unblock' => 0,
		'og_unsubscribe_user_action' => 0,
		'pathauto_user_update_alias_multiple:620e193b20ba9caa374fea9ca0ad38f0' => 0,
	  ),
	));
	$handler->override_option('row_options', array(
	  'inline' => array(
		'value' => 'value',
		'value_1' => 'value_1',
	  ),
	  'separator' => ' ',
	));
	$handler = $view->new_display('page', 'Page', 'page_1');
	$handler->override_option('path', 'node/%/broadcast');
	$handler->override_option('menu', array(
	  'type' => 'tab',
	  'title' => 'Broadcast',
	  'description' => '',
	  'weight' => '6',
	  'name' => 'navigation',
	));
	$handler->override_option('tab_options', array(
	  'type' => 'tab',
	  'title' => 'Members',
	  'description' => '',
	  'weight' => '5',
	));
  
  $views[$view->name] = $view;

  return $views;
}
