<?php

/**
 * Implementation of hook_views_default_views().
 */
function ec_content_views_default_views() {
  $views = array();

  // Exported view: content
  $view = new view;
  $view->name = 'content';
  $view->description = 'Shows active posts across the whole site.';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'type' => array(
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'label' => 'Type',
      'relationship' => 'none',
      'link_to_node' => 1,
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => 'Title',
      'relationship' => 'none',
      'link_to_node' => 1,
    ),
    'name' => array(
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'label' => 'Author',
      'link_to_user' => 1,
      'relationship' => 'none',
    ),
    'comment_count' => array(
      'label' => 'Comments',
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
      'id' => 'comment_count',
      'table' => 'node_comment_statistics',
      'field' => 'comment_count',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'group_nid' => array(
      'label' => 'Groups',
      'alter' => array(
        'alter_text' => 0,
        'text' => '<em>groups:</em>
[group_nid]',
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
      'empty' => 'none',
      'exclude' => 0,
      'id' => 'group_nid',
      'table' => 'og_ancestry',
      'field' => 'group_nid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'tid' => array(
      'label' => 'Categories',
      'alter' => array(
        'alter_text' => 0,
        'text' => '<em>categories:</em>
[tid]',
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
      'empty' => 'none',
      'link_to_taxonomy' => 1,
      'limit' => 0,
      'vids' => array(
        '3' => 0,
        '2' => 0,
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
    'timestamp' => array(
      'id' => 'timestamp',
      'table' => 'history_user',
      'field' => 'timestamp',
      'label' => '',
      'comments' => 1,
      'relationship' => 'none',
      'link_to_node' => 0,
    ),
    'new_comments' => array(
      'id' => 'new_comments',
      'table' => 'node',
      'field' => 'new_comments',
      'label' => '',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => 'new',
      'link_to_comment' => 1,
      'no_empty' => 1,
      'relationship' => 'none',
    ),
    'field_image_fid' => array(
      'label' => 'Image Gallery',
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
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 1,
      'id' => 'field_image_fid',
      'table' => 'node_data_field_image',
      'field' => 'field_image_fid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'field_video_fid' => array(
      'label' => 'Video',
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
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 1,
      'id' => 'field_video_fid',
      'table' => 'node_data_field_video',
      'field' => 'field_video_fid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'last_updated' => array(
      'label' => 'Updated',
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
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'last_updated',
      'table' => 'node_comment_statistics',
      'field' => 'last_updated',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'last_comment_timestamp' => array(
      'id' => 'last_comment_timestamp',
      'table' => 'node_comment_statistics',
      'field' => 'last_comment_timestamp',
      'order' => 'DESC',
      'granularity' => 'second',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'id' => 'status',
      'table' => 'node',
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
    'title' => array(
      'operator' => 'contains',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 1,
        'operator' => 'title_op',
        'identifier' => 'title',
        'label' => 'Title',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'group_nid' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'group_nid_op',
        'identifier' => 'group_nid',
        'label' => 'Group',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'group_nid',
      'table' => 'og_ancestry',
      'field' => 'group_nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'webform' => 'webform',
        'blog' => 'blog',
        'poll' => 'poll',
        'event' => 'event',
        'page' => 'page',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'type_op',
        'identifier' => 'type',
        'label' => 'Type',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 1,
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
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
      'table' => 'term_node',
      'field' => 'tid',
      'hierarchy' => 1,
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'timestamp' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'operator' => '',
        'identifier' => 'timestamp',
        'label' => 'New content',
      ),
      'id' => 'timestamp',
      'table' => 'history_user',
      'field' => 'timestamp',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'access content',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Content');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 25);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 1,
    'order' => 'desc',
    'columns' => array(
      'type' => 'type',
      'title' => 'title',
      'name' => 'name',
      'comment_count' => 'comment_count',
      'group_nid' => 'group_nid',
      'tid' => 'tid',
      'timestamp' => 'title',
      'new_comments' => 'comment_count',
      'field_image_fid' => 'field_image_fid',
      'field_video_fid' => 'field_video_fid',
      'last_updated' => 'last_updated',
    ),
    'info' => array(
      'type' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'title' => array(
        'sortable' => 1,
        'separator' => '&nbsp;',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'comment_count' => array(
        'sortable' => 1,
        'separator' => '<br />',
      ),
      'group_nid' => array(
        'separator' => '',
      ),
      'tid' => array(
        'separator' => '',
      ),
      'timestamp' => array(
        'separator' => '',
      ),
      'new_comments' => array(
        'separator' => '',
      ),
      'field_image_fid' => array(
        'separator' => '',
      ),
      'field_video_fid' => array(
        'separator' => '',
      ),
      'last_updated' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'last_updated',
  ));
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->override_option('path', 'content');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Content',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Content1',
    'description' => '',
    'weight' => '0',
  ));
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->override_option('style_plugin', 'rss');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
  ));
  $handler->override_option('row_plugin', 'node_rss');
  $handler->override_option('row_options', array(
    'item_length' => 'default',
  ));
  $handler->override_option('path', 'group/tracker/feed');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));
  $handler->override_option('displays', array(
    'page' => 'page',
    'default' => 0,
  ));
  $handler->override_option('sitename_title', FALSE);

  $views[$view->name] = $view;

  // Exported view: ec_admin_content
$view = new view;
$view->name = 'ec_admin_content';
$view->description = 'View, edit and delete your site\'s content.';
$view->tag = 'ec';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
  'title' => array(
    'label' => 'Title',
    'link_to_node' => 1,
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'timestamp' => array(
    'label' => 'New?',
    'link_to_node' => 0,
    'comments' => 0,
    'exclude' => 0,
    'id' => 'timestamp',
    'table' => 'history_user',
    'field' => 'timestamp',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'type' => array(
    'label' => 'Type',
    'link_to_node' => 0,
    'exclude' => 0,
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'name' => array(
    'label' => 'Author',
    'link_to_user' => 1,
    'exclude' => 0,
    'id' => 'name',
    'table' => 'users',
    'field' => 'name',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'status' => array(
    'label' => 'Published',
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
  'comment_count' => array(
    'label' => 'Comments',
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
    'id' => 'comment_count',
    'table' => 'node_comment_statistics',
    'field' => 'comment_count',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'last_updated' => array(
    'label' => 'Updated',
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
    'custom_date_format' => '',
    'exclude' => 0,
    'id' => 'last_updated',
    'table' => 'node_comment_statistics',
    'field' => 'last_updated',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'group_nid' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 1,
      'text' => '<em>Groups:</em>
[group_nid]',
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
    'type' => 'separator',
    'separator' => ', ',
    'empty' => '',
    'exclude' => 0,
    'id' => 'group_nid',
    'table' => 'og_ancestry',
    'field' => 'group_nid',
    'override' => array(
      'button' => 'Override',
    ),
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
//print count($data->node_data_field_file_field_file_fid);
//print var_export($data);
$count = 0;
foreach($data->node_data_field_file_field_file_fid as $k => $v){
if($v[\'fid\'] > 0){
$count ++;
}
}
print(\'<em>files:</em>\'.$count.\'<br />\');
$count = 0;
foreach($data->node_data_field_image_field_image_fid as $k => $v){
if($v[\'fid\'] > 0){
$count ++;
}
}
print(\'<em>images:</em>\'.$count.\'<br />\');
$count = 0;
foreach($data->node_data_field_video_field_video_fid as $k => $v){
if($v[\'fid\'] > 0){
$count ++;
}
}
print(\'<em>videos:</em>\'.$count);
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
  'tid' => array(
    'label' => 'Categories',
    'alter' => array(
      'alter_text' => 1,
      'text' => '<em>Categories:</em>
[tid]',
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
    'type' => 'separator',
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
  'field_file_fid' => array(
    'label' => 'Files',
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
    'link_to_node' => 0,
    'label_type' => 'widget',
    'format' => 'default',
    'multiple' => array(
      'group' => 1,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => 0,
    ),
    'exclude' => 1,
    'id' => 'field_file_fid',
    'table' => 'node_data_field_file',
    'field' => 'field_file_fid',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'field_image_fid' => array(
    'label' => 'Image Gallery',
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
    'link_to_node' => 0,
    'label_type' => 'widget',
    'format' => 'default',
    'multiple' => array(
      'group' => 1,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => 0,
    ),
    'exclude' => 1,
    'id' => 'field_image_fid',
    'table' => 'node_data_field_image',
    'field' => 'field_image_fid',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'field_video_fid' => array(
    'label' => 'Video',
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
    'link_to_node' => 0,
    'label_type' => 'widget',
    'format' => 'default',
    'multiple' => array(
      'group' => 1,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => 0,
    ),
    'exclude' => 1,
    'id' => 'field_video_fid',
    'table' => 'node_data_field_video',
    'field' => 'field_video_fid',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
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
print l(\'edit\',\'node/\'.$data->nid.\'/edit\');
?>',
    'exclude' => 0,
    'id' => 'phpcode_1',
    'table' => 'customfield',
    'field' => 'phpcode',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('sorts', array(
  'changed' => array(
    'order' => 'DESC',
    'granularity' => 'second',
    'id' => 'changed',
    'table' => 'node',
    'field' => 'changed',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('filters', array(
  'title' => array(
    'operator' => 'contains',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 1,
      'operator' => 'title_op',
      'identifier' => 'title',
      'label' => 'Title',
      'optional' => 1,
      'remember' => 0,
    ),
    'case' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'tid' => array(
    'operator' => 'or',
    'value' => '',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 1,
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
  'group_nid' => array(
    'operator' => 'or',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'group_nid_op',
      'identifier' => 'group_nid',
      'label' => 'Group',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
    ),
    'id' => 'group_nid',
    'table' => 'og_ancestry',
    'field' => 'group_nid',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
    'reduce_duplicates' => 0,
  ),
  'type' => array(
    'operator' => 'in',
    'value' => array(),
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'use_operator' => 0,
      'operator' => 'type_op',
      'identifier' => 'type',
      'label' => 'Type',
      'optional' => 1,
      'single' => 1,
      'remember' => 0,
      'reduce' => 0,
      'vfs_selective' => 0,
      'vfs_active' => 0,
    ),
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'status' => array(
    'operator' => '=',
    'value' => 'All',
    'group' => '0',
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
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'promote' => array(
    'operator' => '=',
    'value' => 'All',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'operator' => '',
      'identifier' => 'promote',
      'label' => 'Promoted',
      'optional' => 1,
      'remember' => 0,
    ),
    'id' => 'promote',
    'table' => 'node',
    'field' => 'promote',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'sticky' => array(
    'operator' => '=',
    'value' => 'All',
    'group' => '0',
    'exposed' => TRUE,
    'expose' => array(
      'operator' => '',
      'identifier' => 'sticky',
      'label' => 'Sticky',
      'optional' => 1,
      'remember' => 0,
    ),
    'id' => 'sticky',
    'table' => 'node',
    'field' => 'sticky',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'type_groups' => array(
    'operator' => 'not in',
    'value' => array(
      'group' => 'group',
    ),
    'group' => '0',
    'exposed' => FALSE,
    'expose' => array(
      'operator' => FALSE,
      'label' => '',
    ),
    'id' => 'type_groups',
    'table' => 'og',
    'field' => 'type_groups',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('access', array(
  'type' => 'perm',
  'perm' => 'administer nodes',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('title', 'Administer Content');
$handler->override_option('header', '<em>Select posts to execute operations on</em>');
$handler->override_option('header_format', '2');
$handler->override_option('header_empty', 0);
$handler->override_option('empty', 'There are no objects satisfying the filter settings. Try changing them to get some results.');
$handler->override_option('empty_format', '1');
$handler->override_option('items_per_page', 25);
$handler->override_option('use_pager', '1');
$handler->override_option('distinct', 0);
$handler->override_option('style_plugin', 'bulk');
$handler->override_option('style_options', array(
  'grouping' => '',
  'override' => 1,
  'sticky' => 1,
  'order' => 'desc',
  'columns' => array(
    'title' => 'title',
    'timestamp' => 'title',
    'type' => 'type',
    'name' => 'name',
    'status' => 'status',
    'comment_count' => 'comment_count',
    'last_updated' => 'last_updated',
    'group_nid' => 'group_nid',
    'phpcode' => 'phpcode',
    'edit_node' => 'edit_node',
    'tid' => 'group_nid',
    'field_file_fid' => 'field_file_fid',
    'field_image_fid' => 'field_image_fid',
    'field_video_fid' => 'field_video_fid',
  ),
  'info' => array(
    'title' => array(
      'sortable' => 1,
      'separator' => '&nbsp;',
    ),
    'timestamp' => array(
      'separator' => '',
    ),
    'type' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'status' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'comment_count' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'last_updated' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'group_nid' => array(
      'separator' => '<br />',
    ),
    'phpcode' => array(
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => '',
    ),
    'tid' => array(
      'separator' => '',
    ),
    'field_file_fid' => array(
      'separator' => '',
    ),
    'field_image_fid' => array(
      'separator' => '',
    ),
    'field_video_fid' => array(
      'separator' => '',
    ),
  ),
  'default' => 'last_updated',
  'execution_type' => '2',
  'display_type' => '0',
  'hide_select_all' => 0,
  'skip_confirmation' => 0,
  'display_result' => 1,
  'merge_single_action' => 1,
  'selected_operations' => array(
    'og_add_group_action' => 'og_add_group_action',
    'node_assign_owner_action' => 'node_assign_owner_action',
    'views_bulk_operations_delete_node_action' => 'views_bulk_operations_delete_node_action',
    'node_mass_update:a27b9efabcd054685a549378b174ad11' => 'node_mass_update:a27b9efabcd054685a549378b174ad11',
    'og_make_private_action' => 'og_make_private_action',
    'og_make_public_action' => 'og_make_public_action',
    'node_mass_update:c4d3b28efb86fd703619a50b74d43794' => 'node_mass_update:c4d3b28efb86fd703619a50b74d43794',
    'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac' => 'node_mass_update:14de7d028b4bffdf2b4a266562ca18ac',
    'node_mass_update:9c585624b9b3af0b4687d5f97f35e047' => 'node_mass_update:9c585624b9b3af0b4687d5f97f35e047',
    'og_remove_groups_action' => 'og_remove_groups_action',
    'og_remove_group_action' => 'og_remove_group_action',
    'node_mass_update:8ce21b08bb8e773d10018b484fe4815e' => 'node_mass_update:8ce21b08bb8e773d10018b484fe4815e',
    'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080' => 'node_mass_update:0ccad85c1ebe4c9ceada1aa64293b080',
    'eit_groups_backup_files_action' => 0,
    'flag_nodes:1980f2a3af0b5c3577850d4ba2600405' => 0,
    'views_bulk_operations_taxonomy_action:a80f5e43757a174b543c0de07d43cf82' => 0,
    'system_message_action' => 0,
    'token_actions_message_action' => 0,
    'views_bulk_operations_ruleset_action_rules_set_1' => 0,
    'views_bulk_operations_script_action' => 0,
    'node_make_sticky_action' => 0,
    'node_make_unsticky_action' => 0,
    'views_bulk_operations_fields_action' => 0,
    'views_bulk_operations_taxonomy_action' => 0,
    'views_bulk_operations_argument_selector_action' => 0,
    'node_promote_action' => 0,
    'node_publish_action' => 0,
    'token_actions_goto_action' => 0,
    'system_goto_action' => 0,
    'node_unpromote_action' => 0,
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
$handler->override_option('path', 'admin/content/node');
$handler->override_option('menu', array(
  'type' => 'normal',
  'title' => 'Content',
  'description' => 'Administer site content',
  'weight' => '0',
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
));
$handler = $view->new_display('feed', 'Feed', 'feed_1');
$handler->override_option('fields', array(
  'nid' => array(
    'label' => 'Nid',
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
    'link_to_node' => 0,
    'exclude' => 0,
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'type' => array(
    'label' => 'Type',
    'link_to_node' => 0,
    'exclude' => 0,
    'id' => 'type',
    'table' => 'node',
    'field' => 'type',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'title' => array(
    'label' => 'Title',
    'link_to_node' => 1,
    'exclude' => 0,
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'relationship' => 'none',
    'override' => array(
      'button' => 'Override',
    ),
  ),
  'body' => array(
    'label' => 'Body',
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
    'id' => 'body',
    'table' => 'node_revisions',
    'field' => 'body',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'name' => array(
    'label' => 'Author',
    'link_to_user' => 1,
    'exclude' => 0,
    'id' => 'name',
    'table' => 'users',
    'field' => 'name',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'status' => array(
    'label' => 'Published',
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
  'promote' => array(
    'label' => 'Promoted to front page',
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
    'id' => 'promote',
    'table' => 'node',
    'field' => 'promote',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'sticky' => array(
    'label' => 'Sticky',
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
    'id' => 'sticky',
    'table' => 'node',
    'field' => 'sticky',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'comment' => array(
    'label' => 'Comment status',
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
    'id' => 'comment',
    'table' => 'node',
    'field' => 'comment',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'comment_count' => array(
    'label' => 'Comments',
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
    'id' => 'comment_count',
    'table' => 'node_comment_statistics',
    'field' => 'comment_count',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'created' => array(
    'label' => 'Post date',
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
    'date_format' => 'small',
    'custom_date_format' => '',
    'exclude' => 0,
    'id' => 'created',
    'table' => 'node',
    'field' => 'created',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'last_updated' => array(
    'label' => 'Updated',
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
    'custom_date_format' => '',
    'exclude' => 0,
    'id' => 'last_updated',
    'table' => 'node_comment_statistics',
    'field' => 'last_updated',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'group_nid' => array(
    'label' => '',
    'alter' => array(
      'alter_text' => 1,
      'text' => '<em>Groups:</em>
[group_nid]',
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
    'type' => 'separator',
    'separator' => ', ',
    'empty' => '',
    'exclude' => 0,
    'id' => 'group_nid',
    'table' => 'og_ancestry',
    'field' => 'group_nid',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'tid' => array(
    'label' => 'Categories',
    'alter' => array(
      'alter_text' => 0,
      'text' => '<em>Categories:</em>
[tid]',
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
    'link_to_taxonomy' => 0,
    'limit' => 0,
    'vids' => array(
      '2' => 2,
      '3' => 0,
    ),
    'exclude' => 0,
    'id' => 'tid',
    'table' => 'term_node',
    'field' => 'tid',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'field_file_fid' => array(
    'label' => 'Files',
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
    'link_to_node' => 0,
    'label_type' => 'widget',
    'format' => 'url_plain',
    'multiple' => array(
      'group' => 1,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => 0,
    ),
    'exclude' => 0,
    'id' => 'field_file_fid',
    'table' => 'node_data_field_file',
    'field' => 'field_file_fid',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'field_image_fid' => array(
    'label' => 'Slideshow',
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
    'link_to_node' => 0,
    'label_type' => 'widget',
    'format' => 'url_plain',
    'multiple' => array(
      'group' => 1,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => 0,
    ),
    'exclude' => 0,
    'id' => 'field_image_fid',
    'table' => 'node_data_field_image',
    'field' => 'field_image_fid',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'field_video_fid' => array(
    'label' => 'Video',
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
    'link_to_node' => 0,
    'label_type' => 'widget',
    'format' => 'url_plain',
    'multiple' => array(
      'group' => 1,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => 0,
    ),
    'exclude' => 0,
    'id' => 'field_video_fid',
    'table' => 'node_data_field_video',
    'field' => 'field_video_fid',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
));
$handler->override_option('header', '');
$handler->override_option('items_per_page', 0);
$handler->override_option('style_plugin', 'views_csv');
$handler->override_option('style_options', array(
  'mission_description' => FALSE,
  'description' => '',
  'filename' => 'content.csv',
  'seperator' => ',',
  'quote' => 1,
  'header' => 1,
));
$handler->override_option('row_plugin', '');
$handler->override_option('path', 'admin/content/node/csv');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
));
$handler->override_option('displays', array(
  'page' => 'page',
  'default' => 0,
));
$handler->override_option('sitename_title', FALSE);


  $views[$view->name] = $view;

  // Exported view: node_gallery
$view = new view;
$view->name = 'node_gallery';
$view->description = 'node_gallery';
$view->tag = 'ec';
$view->view_php = '';
$view->base_table = 'node';
$view->is_cacheable = FALSE;
$view->api_version = 2;
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->override_option('fields', array(
  'field_image_fid' => array(
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
    'link_to_node' => 0,
    'label_type' => 'none',
    'format' => 'large_default',
    'multiple' => array(
      'group' => 0,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => 0,
    ),
    'exclude' => 0,
    'id' => 'field_image_fid',
    'table' => 'node_data_field_image',
    'field' => 'field_image_fid',
    'override' => array(
      'button' => 'Override',
    ),
    'relationship' => 'none',
  ),
  'field_image_data' => array(
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
    'link_to_node' => 0,
    'data_key' => 'description',
    'exclude' => 0,
    'id' => 'field_image_data',
    'table' => 'node_data_field_image',
    'field' => 'field_image_data',
    'relationship' => 'none',
  ),
));
$handler->override_option('arguments', array(
  'nid' => array(
    'default_action' => 'default',
    'style_plugin' => 'default_summary',
    'style_options' => array(),
    'wildcard' => 'all',
    'wildcard_substitution' => 'All',
    'title' => '',
    'breadcrumb' => '',
    'default_argument_type' => 'php',
    'default_argument' => '',
    'validate_type' => 'none',
    'validate_fail' => 'not found',
    'break_phrase' => 0,
    'not' => 0,
    'id' => 'nid',
    'table' => 'node',
    'field' => 'nid',
    'validate_user_argument_type' => 'uid',
    'validate_user_roles' => array(
      '2' => 0,
      '5' => 0,
      '3' => 0,
      '4' => 0,
    ),
    'relationship' => 'none',
    'default_options_div_prefix' => '',
    'default_argument_user' => 0,
    'default_argument_fixed' => '',
    'default_argument_php' => 'return arg(1);',
    'validate_argument_node_type' => array(
      'webform' => 0,
      'blog' => 0,
      'poll' => 0,
      'forum' => 0,
      'panel' => 0,
      'book' => 0,
      'event' => 0,
      'group' => 0,
      'page' => 0,
    ),
    'validate_argument_node_access' => 0,
    'validate_argument_nid_type' => 'nid',
    'validate_argument_vocabulary' => array(
      '1' => 0,
    ),
    'validate_argument_type' => 'tid',
    'validate_argument_transform' => 0,
    'validate_user_restrict_roles' => 0,
    'validate_argument_node_flag_name' => '*relationship*',
    'validate_argument_node_flag_test' => 'flaggable',
    'validate_argument_node_flag_id_type' => 'id',
    'validate_argument_user_flag_name' => '*relationship*',
    'validate_argument_user_flag_test' => 'flaggable',
    'validate_argument_user_flag_id_type' => 'id',
    'validate_argument_is_member' => 0,
    'validate_argument_signup_status' => 'any',
    'validate_argument_signup_node_access' => 0,
    'validate_argument_php' => '',
  ),
));
$handler->override_option('access', array(
  'type' => 'none',
));
$handler->override_option('cache', array(
  'type' => 'none',
));
$handler->override_option('use_ajax', TRUE);
$handler->override_option('items_per_page', 0);
$handler->override_option('style_plugin', 'slideshow');
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->override_option('block_description', '');
$handler->override_option('block_caching', -1);
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->override_option('path', 'test');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
));
$handler->override_option('tab_options', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
));
$handler = $view->new_display('page', 'Page', 'page_2');
$handler->override_option('fields', array(
  'field_image_fid' => array(
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
    'link_to_node' => 0,
    'label_type' => 'none',
    'format' => 'imagefield__lightbox2__small__original',
    'multiple' => array(
      'group' => 0,
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_reversed' => 0,
    ),
    'exclude' => 0,
    'id' => 'field_image_fid',
    'table' => 'node_data_field_image',
    'field' => 'field_image_fid',
    'override' => array(
      'button' => 'Use default',
    ),
    'relationship' => 'none',
  ),
  'field_image_data' => array(
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
    'link_to_node' => 0,
    'data_key' => 'description',
    'exclude' => 0,
    'id' => 'field_image_data',
    'table' => 'node_data_field_image',
    'field' => 'field_image_data',
    'relationship' => 'none',
  ),
));
$handler->override_option('items_per_page', 25);
$handler->override_option('use_pager', '1');
$handler->override_option('style_plugin', 'fluid_grid');
$handler->override_option('style_options', array(
  'grouping' => '',
  'advanced_layout' => array(
    'align' => TRUE,
    'css3' => TRUE,
  ),
  'items_width' => '100',
  'items_height' => '',
  'list_alignment' => '',
  'items_alignment' => 'center',
  'items_h_margin' => '',
  'items_v_margin' => '',
  'box_shadow' => '1',
  'border_radius' => '1',
));
$handler->override_option('path', 'node_gallery');
$handler->override_option('menu', array(
  'type' => 'none',
  'title' => '',
  'description' => '',
  'weight' => 0,
  'name' => 'navigation',
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
