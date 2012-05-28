<?php

/**
 * Implementation of hook_views_default_views().
 */
function ec_event_views_default_views() {
  $views = array();

  // Exported view: ec_calendar
  $view = new view;
  $view->name = 'ec_calendar';
  $view->description = 'A multi-dimensional calendar view with back/next navigation.';
  $view->tag = 'ec';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'field' => 'title',
      'table' => 'node',
      'relationship' => 'none',
    ),
    'field_date_value' => array(
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
      'format' => 'default',
      'multiple' => array(
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'group' => 0,
      ),
      'repeat' => array(
        'show_repeat_rule' => 'hide',
      ),
      'fromto' => array(
        'fromto' => 'both',
      ),
      'exclude' => 0,
      'id' => 'field_date_value',
      'table' => 'node_data_field_date',
      'field' => 'field_date_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'field_date_value' => array(
      'order' => 'ASC',
      'delta' => '-1',
      'id' => 'field_date_value',
      'table' => 'node_data_field_date',
      'field' => 'field_date_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'date_argument' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'date',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'date_fields' => array(
        'node_data_field_date.field_date_value' => 'node_data_field_date.field_date_value',
      ),
      'year_range' => '-3:+3',
      'date_method' => 'OR',
      'granularity' => 'month',
      'id' => 'date_argument',
      'table' => 'node',
      'field' => 'date_argument',
      'relationship' => 'none',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
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
      'validate_argument_php' => '',
      'override' => array(
        'button' => 'Override',
      ),
      'default_options_div_prefix' => '',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '5' => 0,
        '3' => 0,
        '4' => 0,
      ),
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
      'validate_argument_is_member' => 0,
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => 1,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
    'role' => array(),
    'perm' => '',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Calendar');
  $handler->override_option('header_empty', 1);
  $handler->override_option('items_per_page', 0);
  $handler->override_option('use_more', 0);
  $handler->override_option('style_plugin', 'calendar_nav');
  $handler = $view->new_display('calendar', 'Calendar page', 'calendar_1');
  $handler->override_option('path', 'calendar');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Calendar',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));
  $handler->override_option('calendar_colors', array(
    '0' => array(),
  ));
  $handler->override_option('calendar_colors_vocabulary', array());
  $handler->override_option('calendar_colors_taxonomy', array());
  $handler->override_option('calendar_popup', '0');
  $handler->override_option('calendar_date_link', 'event');
  $handler = $view->new_display('calendar_block', 'Calendar block', 'calendar_block_1');
  $handler->override_option('block_description', 'Calendar');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('calendar_period', 'Year view', 'calendar_period_1');
  $handler->override_option('style_plugin', 'calendar_style');
  $handler->override_option('style_options', array(
    'display_type' => 'year',
    'name_size' => 1,
    'max_items' => 0,
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', TRUE);
  $handler->override_option('displays', array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  ));
  $handler->override_option('calendar_type', 'year');
  $handler = $view->new_display('calendar_period', 'Month view', 'calendar_period_2');
  $handler->override_option('style_plugin', 'calendar_style');
  $handler->override_option('style_options', array(
    'display_type' => 'month',
    'name_size' => '99',
    'with_weekno' => '1',
    'date_fields' => NULL,
    'max_items' => 0,
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', TRUE);
  $handler->override_option('displays', array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  ));
  $handler->override_option('calendar_type', 'month');
  $handler = $view->new_display('calendar_period', 'Day view', 'calendar_period_3');
  $handler->override_option('style_plugin', 'calendar_style');
  $handler->override_option('style_options', array(
    'name_size' => '99',
    'with_weekno' => 0,
    'max_items' => 0,
    'max_items_behavior' => 'more',
    'groupby_times' => 'hour',
    'groupby_times_custom' => '',
    'groupby_field' => '',
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', TRUE);
  $handler->override_option('displays', array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  ));
  $handler->override_option('calendar_type', 'day');
  $handler = $view->new_display('calendar_period', 'Week view', 'calendar_period_4');
  $handler->override_option('style_plugin', 'calendar_style');
  $handler->override_option('style_options', array(
    'name_size' => '99',
    'with_weekno' => 0,
    'max_items' => 0,
    'max_items_behavior' => 'more',
    'groupby_times' => 'hour',
    'groupby_times_custom' => '',
    'groupby_field' => '',
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', TRUE);
  $handler->override_option('displays', array(
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 0,
  ));
  $handler->override_option('calendar_type', 'week');
  $handler = $view->new_display('calendar_period', 'Block view', 'calendar_period_5');
  $handler->override_option('style_plugin', 'calendar_style');
  $handler->override_option('style_options', array(
    'display_type' => 'month',
    'name_size' => '1',
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', TRUE);
  $handler->override_option('displays', array(
    'calendar_1' => 0,
    'default' => 0,
    'calendar_block_1' => 'calendar_block_1',
  ));
  $handler->override_option('calendar_type', 'month');
  $handler = $view->new_display('calendar_ical', 'iCal feed', 'calendar_ical_1');
  $handler->override_option('arguments', array());
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => 1,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'date_filter' => array(
      'operator' => '>=',
      'value' => array(
        'value' => NULL,
        'min' => NULL,
        'max' => NULL,
        'default_date' => 'now',
        'default_to_date' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'date_fields' => array(
        'node.changed' => 'node.changed',
      ),
      'granularity' => 'day',
      'form_type' => 'date_select',
      'default_date' => 'now',
      'default_to_date' => '',
      'id' => 'date_filter',
      'table' => 'node',
      'field' => 'date_filter',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('style_plugin', 'ical');
  $handler->override_option('style_options', array(
    'mission_description' => FALSE,
    'description' => '',
    'summary_field' => 'node_title',
    'description_field' => '',
    'location_field' => '',
  ));
  $handler->override_option('row_plugin', '');
  $handler->override_option('path', 'calendar/ical');
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
    'calendar_1' => 'calendar_1',
    'default' => 0,
    'calendar_block_1' => 'calendar_block_1',
  ));
  $handler->override_option('sitename_title', FALSE);
  $handler = $view->new_display('block', 'Upcoming', 'block_1');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'field' => 'title',
      'table' => 'node',
      'relationship' => 'none',
      'format' => 'default',
    ),
    'field_date_value' => array(
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
      'format' => 'default',
      'multiple' => array(
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'group' => 0,
      ),
      'repeat' => array(
        'show_repeat_rule' => 'hide',
      ),
      'fromto' => array(
        'fromto' => 'both',
      ),
      'exclude' => 0,
      'id' => 'field_date_value',
      'table' => 'node_data_field_date',
      'field' => 'field_date_value',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array());
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => 1,
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'date_filter' => array(
      'operator' => '>=',
      'value' => array(
        'min' => NULL,
        'max' => NULL,
        'value' => NULL,
        'default_date' => 'now',
        'default_to_date' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'date_fields' => array(
        'node_data_field_date.field_date_value' => 'node_data_field_date.field_date_value',
      ),
      'date_method' => 'OR',
      'granularity' => 'hour',
      'form_type' => 'date_select',
      'default_date' => 'now',
      'default_to_date' => '',
      'year_range' => '-3:+3',
      'id' => 'date_filter',
      'table' => 'node',
      'field' => 'date_filter',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Upcoming');
  $handler->override_option('items_per_page', 5);
  $handler->override_option('use_more', 1);
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'type' => 'ul',
  ));
  $handler->override_option('block_description', 'Upcoming');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}
