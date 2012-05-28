<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_messaging_notifications_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_access_types';
  $strongarm->value = array(
    0 => 'private',
    1 => 'public to all',
    2 => 'actor and addressee only if exists',
    3 => 'public to connections if exists',
  );

  $export['message_access_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'message_types';
  $strongarm->value = array(
    0 => 'normal',
    1 => 'shout',
    2 => 'flag',
  );

  $export['message_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'messaging_default_filter';
  $strongarm->value = '4';

  $export['messaging_default_filter'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'messaging_default_method';
  $strongarm->value = 'mail';

  $export['messaging_default_method'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'messaging_log';
  $strongarm->value = '2419200';

  $export['messaging_log'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'messaging_notify_default_mail';
  $strongarm->value = array(
    'method' => '',
    'interval' => '0',
  );

  $export['messaging_notify_default_mail'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'messaging_notify_default_privatemsg';
  $strongarm->value = array(
    'method' => '',
    'interval' => '0',
  );

  $export['messaging_notify_default_privatemsg'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'messaging_notify_receive';
  $strongarm->value = array(
    'mail' => 'mail',
    'privatemsg' => 'privatemsg',
  );

  $export['messaging_notify_receive'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'messaging_notify_subscribe';
  $strongarm->value = array(
    'mail' => 'mail',
    'privatemsg' => 'privatemsg',
  );

  $export['messaging_notify_subscribe'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'messaging_process_limit';
  $strongarm->value = array(
    'message' => '0',
    'time' => '600',
    'percent' => '0',
  );

  $export['messaging_process_limit'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_per_type';
  $strongarm->value = '1';

  $export['notifications_content_per_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type';
  $strongarm->value = array(
    'taxonomy' => 'taxonomy',
    'grouptype' => 'grouptype',
    'thread' => 'thread',
    'nodetype' => 'nodetype',
    'author' => 'author',
    'typeauthor' => 'typeauthor',
  );

  $export['notifications_content_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_default_auto';
  $strongarm->value = 0;

  $export['notifications_default_auto'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_default_send_interval';
  $strongarm->value = '0';

  $export['notifications_default_send_interval'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_digest_methods';
  $strongarm->value = array(
    0 => '',
  );

  $export['notifications_digest_methods'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_log';
  $strongarm->value = '0';

  $export['notifications_log'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_node_ui_blog';
  $strongarm->value = array();

  $export['notifications_node_ui_blog'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_node_ui_event';
  $strongarm->value = array();

  $export['notifications_node_ui_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_node_ui_group';
  $strongarm->value = array();

  $export['notifications_node_ui_group'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_node_ui_page';
  $strongarm->value = array();

  $export['notifications_node_ui_page'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_node_ui_panel';
  $strongarm->value = array();

  $export['notifications_node_ui_panel'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_node_ui_poll';
  $strongarm->value = array();

  $export['notifications_node_ui_poll'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_node_ui_webform';
  $strongarm->value = array();

  $export['notifications_node_ui_webform'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_process_limit';
  $strongarm->value = array(
    'row' => '0',
    'message' => '0',
    'time' => '600',
    'percent' => '0',
  );

  $export['notifications_process_limit'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_send_immediate';
  $strongarm->value = 0;

  $export['notifications_send_immediate'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_send_intervals';
  $strongarm->value = array(
    0 => 'Immediately',
  );

  $export['notifications_send_intervals'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_sender';
  $strongarm->value = '0';

  $export['notifications_sender'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_sendself';
  $strongarm->value = 0;

  $export['notifications_sendself'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_tags_showsubscribed';
  $strongarm->value = 1;

  $export['notifications_tags_showsubscribed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_tags_vocabularies';
  $strongarm->value = array(
    2 => 2,
    1 => 0,
    3 => 0,
  );

  $export['notifications_tags_vocabularies'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_ui_account_options';
  $strongarm->value = array(
    'links' => 'links',
    'block' => 0,
  );

  $export['notifications_ui_account_options'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_ui_node';
  $strongarm->value = array(
    'comment' => 'comment',
    'subform' => 'subform',
    'form' => 0,
    'links' => 0,
    'teaserlinks' => 0,
    'block' => 0,
  );

  $export['notifications_ui_node'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_ui_per_type';
  $strongarm->value = '0';

  $export['notifications_ui_per_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_ui_types';
  $strongarm->value = array(
    'taxonomy' => 'taxonomy',
    'messaging' => 'messaging',
    'grouptype' => 'grouptype',
    'thread' => 'thread',
    'nodetype' => 'nodetype',
    'author' => 'author',
    'typeauthor' => 'typeauthor',
  );

  $export['notifications_ui_types'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_ui_user';
  $strongarm->value = array(
    'page' => 'page',
    'create' => 'create',
  );

  $export['notifications_ui_user'] = $strongarm;
  return $export;
}
