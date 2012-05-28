<?php

/**
 * Implementation of hook_views_default_views().
 */
function ec_heartbeat_views_default_views() {
  $views = array();

  // Exported view: ec_heartbeat_activity
  $view = new view;
  $view->name = 'ec_heartbeat_activity';
  $view->description = 'heartbeat streams';
  $view->tag = 'heartbeat,ec';
  $view->view_php = '';
  $view->base_table = 'heartbeat_activity';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'activity streams', 'default');
  $handler->override_option('relationships', array(
    'message_id' => array(
      'label' => 'Activity message id',
      'required' => 1,
      'id' => 'message_id',
      'table' => 'heartbeat_activity',
      'field' => 'message_id',
      'relationship' => 'none',
    ),
    'uid' => array(
      'label' => 'Heartbeat message owner',
      'required' => 0,
      'id' => 'uid',
      'table' => 'heartbeat_activity',
      'field' => 'uid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'nid_target' => array(
      'label' => 'Message node target id',
      'required' => 0,
      'id' => 'nid_target',
      'table' => 'heartbeat_activity',
      'field' => 'nid_target',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'nid' => array(
      'label' => 'Message node id',
      'required' => 0,
      'id' => 'nid',
      'table' => 'heartbeat_activity',
      'field' => 'nid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'counter' => array(
      'label' => '#',
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
      'id' => 'counter',
      'table' => 'views',
      'field' => 'counter',
      'relationship' => 'none',
    ),
    'message' => array(
      'label' => 'Activity',
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
      'id' => 'message',
      'table' => 'heartbeat_activity',
      'field' => 'message',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'timestamp' => array(
      'label' => 'Action\'s timestamp',
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
      'id' => 'timestamp',
      'table' => 'heartbeat_activity',
      'field' => 'timestamp',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'timestamp' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'timestamp',
      'table' => 'heartbeat_activity',
      'field' => 'timestamp',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('filters', array(
    'access_type' => array(
      'operator' => '=',
      'value' => array(
        'access' => 'PublicHeartbeat',
        'value' => '',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'access_type',
      'table' => 'heartbeat_activity',
      'field' => 'access_type',
      'relationship' => 'none',
    ),
    'language' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'language',
      'table' => 'heartbeat_activity',
      'field' => 'language',
      'relationship' => 'none',
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
        'label' => 'Usernames',
        'optional' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'uid',
      'override' => array(
        'button' => 'Override',
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
        'label' => 'Content Title',
        'optional' => 1,
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'nid',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'administer users',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Recent activities');
  $handler->override_option('empty', 'no activities');
  $handler->override_option('empty_format', '2');
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 50);
  $handler->override_option('use_pager', '1');
  $handler->override_option('use_more', 0);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'message' => 'message',
      'timestamp' => 'timestamp',
    ),
    'info' => array(
      'message' => array(
        'separator' => '',
      ),
      'timestamp' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'timestamp',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(),
    'separator' => '',
  ));
  $handler = $view->new_display('page', 'Recent activity', 'page_1');
  $handler->override_option('path', 'admin/reports/activity');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Activity',
    'description' => '',
    'weight' => '-99',
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
