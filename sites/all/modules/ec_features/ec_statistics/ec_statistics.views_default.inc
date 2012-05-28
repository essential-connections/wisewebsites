<?php

/**
 * Implementation of hook_views_default_views().
 */
function ec_statistics_views_default_views() {
  $views = array();

  // Exported view: stats_comment
  $view = new view;
  $view->name = 'stats_comment';
  $view->description = 'New comments';
  $view->tag = 'Statistics pro';
  $view->view_php = '';
  $view->base_table = 'statspro';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'day' => array(
      'label' => 'Date',
      'date_format' => 'custom',
      'custom_date_format' => 'd. F Y',
      'exclude' => 0,
      'id' => 'day',
      'table' => 'statspro',
      'field' => 'day',
      'relationship' => 'none',
    ),
    'comment_1' => array(
      'label' => 'Trend',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'comment_1',
      'table' => 'statspro',
      'field' => 'comment',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'trend',
      'graph_size' => '',
    ),
    'comment_2' => array(
      'label' => 'Amount',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'comment_2',
      'table' => 'statspro',
      'field' => 'comment',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'text',
      'graph_size' => '',
    ),
    'comment' => array(
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
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'comment',
      'table' => 'statspro',
      'field' => 'comment',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'graph',
      'graph_size' => '350',
    ),
  ));
  $handler->override_option('sorts', array(
    'day' => array(
      'order' => 'DESC',
      'id' => 'day',
      'table' => 'statspro',
      'field' => 'day',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'access statistics',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Comments');
  $handler->override_option('header', '<strong>New comments</strong>');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('items_per_page', 20);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'day' => 'day',
      'comment' => 'comment',
      'comment_1' => 'comment_1',
      'comment_2' => 'comment_2',
    ),
    'info' => array(
      'day' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'comment' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'comment_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'comment_2' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'day',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'admin/reports/comment');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Comments',
    'description' => '',
    'weight' => '21',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));

  $views[$view->name] = $view;

  // Exported view: stats_node
  $view = new view;
  $view->name = 'stats_node';
  $view->description = 'Node statistics';
  $view->tag = 'Statistics pro';
  $view->view_php = '';
  $view->base_table = 'statspro';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'day' => array(
      'label' => 'Date',
      'date_format' => 'custom',
      'custom_date_format' => 'd. F Y',
      'exclude' => 0,
      'id' => 'day',
      'table' => 'statspro',
      'field' => 'day',
      'relationship' => 'none',
    ),
    'nnode_1' => array(
      'label' => 'Trend',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'nnode_1',
      'table' => 'statspro',
      'field' => 'nnode',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'trend',
      'graph_size' => '',
    ),
    'nnode_2' => array(
      'label' => 'Amount',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'nnode_2',
      'table' => 'statspro',
      'field' => 'nnode',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'text',
      'graph_size' => '',
    ),
    'nnode' => array(
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
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'nnode',
      'table' => 'statspro',
      'field' => 'nnode',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'graph',
      'graph_size' => '350',
    ),
  ));
  $handler->override_option('sorts', array(
    'day' => array(
      'order' => 'DESC',
      'id' => 'day',
      'table' => 'statspro',
      'field' => 'day',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'access statistics',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Posts');
  $handler->override_option('header', '<strong>New posts</strong>');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 20);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'day' => 'day',
      'nnode' => 'nnode',
      'nnode_1' => 'nnode_1',
      'nnode_2' => 'nnode_2',
    ),
    'info' => array(
      'day' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'nnode' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'nnode_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'nnode_2' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'day',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'admin/reports/posts');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Posts',
    'description' => '',
    'weight' => '20',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->override_option('fields', array(
    'day' => array(
      'label' => 'Date',
      'date_format' => 'custom',
      'custom_date_format' => 'd. F Y',
      'exclude' => 0,
      'id' => 'day',
      'table' => 'statspro',
      'field' => 'day',
      'relationship' => 'none',
    ),
    'cnode_1' => array(
      'label' => 'Trend',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'cnode_1',
      'table' => 'statspro',
      'field' => 'cnode',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'display_mode' => 'trend',
      'graph_size' => '',
    ),
    'cnode_2' => array(
      'label' => 'Amount',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'cnode_2',
      'table' => 'statspro',
      'field' => 'cnode',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'display_mode' => 'text',
      'graph_size' => '',
    ),
    'cnode' => array(
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
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'cnode',
      'table' => 'statspro',
      'field' => 'cnode',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'display_mode' => 'graph',
      'graph_size' => '350',
    ),
  ));
  $handler->override_option('header', '<strong>Changed posts</strong>');
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', FALSE);
  $handler->override_option('displays', array(
    'page_1' => 'page_1',
    'default' => 0,
  ));

  $views[$view->name] = $view;

  // Exported view: stats_pi
  $view = new view;
  $view->name = 'stats_pi';
  $view->description = 'Page impressions';
  $view->tag = 'Statistics pro';
  $view->view_php = '';
  $view->base_table = 'statspro';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'day' => array(
      'label' => 'Date',
      'date_format' => 'custom',
      'custom_date_format' => 'd. F Y',
      'exclude' => 0,
      'id' => 'day',
      'table' => 'statspro',
      'field' => 'day',
      'relationship' => 'none',
    ),
    'pi_1' => array(
      'label' => 'Trend',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'pi_1',
      'table' => 'statspro',
      'field' => 'pi',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'trend',
      'graph_size' => '',
    ),
    'pi_2' => array(
      'label' => 'Amount',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'pi_2',
      'table' => 'statspro',
      'field' => 'pi',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'text',
      'graph_size' => '',
    ),
    'pi' => array(
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
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'pi',
      'table' => 'statspro',
      'field' => 'pi',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'graph',
      'graph_size' => '350',
    ),
  ));
  $handler->override_option('sorts', array(
    'day' => array(
      'order' => 'DESC',
      'id' => 'day',
      'table' => 'statspro',
      'field' => 'day',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'pi' => array(
      'operator' => '>',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'pi',
      'table' => 'statspro',
      'field' => 'pi',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'access statistics',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Page Impressions');
  $handler->override_option('header', '<strong>Guests and registered users</strong>');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 20);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'day' => 'day',
      'pi' => 'pi',
      'pi_1' => 'pi_1',
      'pi_2' => 'pi_2',
    ),
    'info' => array(
      'day' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'pi' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'pi_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'pi_2' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'day',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'admin/reports/pi');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Page Impressions',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->override_option('fields', array(
    'day' => array(
      'label' => 'Date',
      'date_format' => 'custom',
      'custom_date_format' => 'd. F Y',
      'exclude' => 0,
      'id' => 'day',
      'table' => 'statspro',
      'field' => 'day',
      'relationship' => 'none',
    ),
    'upi_2' => array(
      'label' => 'Trend',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'upi_2',
      'table' => 'statspro',
      'field' => 'upi',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'display_mode' => 'trend',
      'graph_size' => '',
    ),
    'upi_1' => array(
      'label' => 'Amount',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'upi_1',
      'table' => 'statspro',
      'field' => 'upi',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'display_mode' => 'text',
      'graph_size' => '',
    ),
    'upi' => array(
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
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'upi',
      'table' => 'statspro',
      'field' => 'upi',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'display_mode' => 'graph',
      'graph_size' => '350',
    ),
  ));
  $handler->override_option('filters', array(
    'upi' => array(
      'operator' => '>',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'upi',
      'table' => 'statspro',
      'field' => 'upi',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('header', '<strong>Registered users</strong>');
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', FALSE);
  $handler->override_option('displays', array(
    'page_1' => 'page_1',
    'default' => 0,
  ));

  $views[$view->name] = $view;

  // Exported view: stats_user
  $view = new view;
  $view->name = 'stats_user';
  $view->description = 'Statistics about new users and online users';
  $view->tag = 'Statistics pro';
  $view->view_php = '';
  $view->base_table = 'statspro';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'day' => array(
      'label' => 'Date',
      'date_format' => 'custom',
      'custom_date_format' => 'd. F Y',
      'exclude' => 0,
      'id' => 'day',
      'table' => 'statspro',
      'field' => 'day',
      'relationship' => 'none',
    ),
    'nuser_1' => array(
      'label' => 'Trend',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'nuser_1',
      'table' => 'statspro',
      'field' => 'nuser',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'trend',
      'graph_size' => '',
    ),
    'nuser_2' => array(
      'label' => 'Amount',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'nuser_2',
      'table' => 'statspro',
      'field' => 'nuser',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'text',
      'graph_size' => '',
    ),
    'nuser' => array(
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
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'nuser',
      'table' => 'statspro',
      'field' => 'nuser',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'display_mode' => 'graph',
      'graph_size' => '350',
    ),
  ));
  $handler->override_option('sorts', array(
    'day' => array(
      'order' => 'DESC',
      'id' => 'day',
      'table' => 'statspro',
      'field' => 'day',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'perm',
    'perm' => 'access statistics',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Users');
  $handler->override_option('header', '<strong>New user registrations</strong>');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 20);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'day' => 'day',
      'nuser' => 'nuser',
      'nuser_1' => 'nuser_1',
      'nuser_2' => 'nuser_2',
    ),
    'info' => array(
      'day' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'nuser' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'nuser_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'nuser_2' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'day',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'admin/reports/user');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Users',
    'description' => '',
    'weight' => '10',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
  ));
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->override_option('fields', array(
    'day' => array(
      'label' => 'Date',
      'date_format' => 'custom',
      'custom_date_format' => 'd. F Y',
      'exclude' => 0,
      'id' => 'day',
      'table' => 'statspro',
      'field' => 'day',
      'relationship' => 'none',
    ),
    'auser_1' => array(
      'label' => 'Trend',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'auser_1',
      'table' => 'statspro',
      'field' => 'auser',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'display_mode' => 'trend',
      'graph_size' => '',
    ),
    'auser_2' => array(
      'label' => 'Amount',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'auser_2',
      'table' => 'statspro',
      'field' => 'auser',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'display_mode' => 'text',
      'graph_size' => '',
    ),
    'auser' => array(
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
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => '.',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'auser',
      'table' => 'statspro',
      'field' => 'auser',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'display_mode' => 'graph',
      'graph_size' => '350',
    ),
  ));
  $handler->override_option('header', '<strong>Users online</strong>');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'day' => 'day',
      'auser' => 'auser',
      'auser_1' => 'auser_1',
      'auser_2' => 'auser_2',
    ),
    'info' => array(
      'day' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'auser' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'auser_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'auser_2' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'day',
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', FALSE);
  $handler->override_option('displays', array(
    'page_1' => 'page_1',
    'default' => 0,
  ));

  $views[$view->name] = $view;

  return $views;
}
