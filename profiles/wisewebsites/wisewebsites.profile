<?php

/**
 * Return an array of the modules to be enabled when this profile is installed.
 *
 * @return
 *   An array of modules to enable.
*/
function wisewebsites_profile_modules() {
  $modules = array( 
    'ctools','features','strongarm',
  ); 
  return _wisewebsites_modules();//$modules;
} 

/**
 * Return a description of the profile for the initial installation screen.
 *
 * @return
 *   An array with keys 'name' and 'description' describing this profile,
 *   and optional 'language' to override the language selection for
 *   language-specific profiles.
 */
function wisewebsites_profile_details() {
  return array(
    'name' => 'wise website',
    'description' => 'wisewebsites profile',
  );
}
function _wisewebsites_modules() {
  return array(
	'ctools','features','strongarm',
  'views','views_access_php',
	'ec_base',
	'ec_protect_critical_users',
	'ec_user',
	'ec_permissions_lock',
	'ec_delegate_menu',
	'ec_admin_access',
	'ec_views',
	'ec_simplemenu',
	'ec_help',
	'ec_backup_migrate',
	'ec_content',
	////'ec_filefield',
	////'ec_filefield_post_install',
	'ec_block',
	'ec_formats_filters',
	'ec_htmlpurifier',
	'ec_imagecache',
	'ec_og',
	'ec_messaging_notifications',
	'ec_blog',
	'ec_poll',
	'ec_page',
	'ec_event',
	'ec_webform',
	'ec_imce',
	'ec_ckeditor',
	'ec_vertical_tabs',
	'ec_clickpath',
	'ec_save_edit',
	'ec_statistics',
	'ec_taxonomy',
	'ec_theme',
	'ec_theme_acquia_marina',
	'ec_theme_acquia_prosper',
	'ec_theme_cti_flex',
	'ec_theme_garland',
	'ec_theme_mix_and_match',
	'ec_theme_pixture_reloaded',
	'ec_theme_zeropoint',
	'ec_uc',
  'ec_uc_products_display',
	'ec_frontpage',
	'ec_seo',
	'ec_scheduler',
	'ec_profile_csv',
	'ec_user_import',
	'ec_feeds',
	'ec_checkout',
	'ec_simplenews',
	'ec_signup',
	'ec_heartbeat',
  'hosting_profile_roles',
  );
}
/**
 * Return a list of tasks that this profile supports.
 *
 * @return
 *   A keyed array of tasks the profile will perform during
 *   the final stage. The keys of the array will be used internally,
 *   while the values will be displayed to the user in the installer
 *   task list.
 */
function wisewebsites_profile_task_list() {
  return array(
    'ec-modules-batch' => 'Install modules',
	'ec-configure-batch' => 'Configure',
  );
}
/**
 * Implementation of hook_profile_tasks().
 */
function wisewebsites_profile_tasks(&$task, $url) {
  
  // first run is 'profile'
  if($task == 'profile'){
	//module_enable(array(
	//'ec_frontpage',
	//));
	//drupal_flush_all_caches();
    //node_access_rebuild();
	//drupal_cron_run();
	
	//variable_set('install_task', 'ec-configure');
	$task = 'ec-modules';	
  }
  if ($task == 'ec-modules') {
    $modules = _wisewebsites_modules();
    $files = module_rebuild_cache();
    // Create batch
    foreach ($modules as $module) {
      $batch['operations'][] = array('_install_module_batch', array($module, $files[$module]->info['name']));
    }    
    $batch['finished'] = '_wisewebsites_module_batch_finished';
    $batch['title'] = st('Installing @drupal', array('@drupal' => drupal_install_profile_name()));
    $batch['error_message'] = st('The installation has encountered an error.');

    // Start a batch, switch to 'intranet-modules-batch' task. We need to
    // set the variable here, because batch_process() redirects.
    variable_set('install_task', 'ec-modules-batch');
    batch_set($batch);
    batch_process($url, $url);
    // Jut for cli installs. We'll never reach here on interactive installs.
    return;
  }
  if($task == 'ec-configure'){
    $batch['title'] = st('Configuring @drupal', array('@drupal' => drupal_install_profile_name()));
    $batch['operations'][] = array('_wisewebsites_configure', array());
    $batch['finished'] = '_wisewebsites_install_finished';
    variable_set('install_task', 'ec-configure-batch');
    batch_set($batch);
    batch_process($url, $url);
    // Jut for cli installs. We'll never reach here on interactive installs.
    return;
  }  
  // We are running a batch task for this profile so basically do nothing and return page
  if (in_array($task, array('ec-modules-batch', 'ec-configure-batch'))) {
    include_once 'includes/batch.inc';
    $output = _batch_page();
  }

}
function _wisewebsites_configure() {
	

    //variable_set('site_frontpage', 'user/login');
	//variable_set('theme_default', 'cti_flex');
  variable_set('theme_default', 'mix_and_match');
	variable_set('preprocess_css', '1');
	variable_set('preprocess_js', '1');
	variable_set('user_picture_path', 'home/profile_pictures');
	
	variable_set('node_options_blog', array(
    0 => 'status',
    1 => 'revision',
    ));
	
	variable_set('node_options_feed', array(
    0 => 'status',
    1 => 'revision',
    ));
	variable_set('node_options_feed_item', array(
    0 => 'status',
    ));
	variable_set('scheduler_publish_enable_feed',1);
	variable_set('scheduler_publish_touch_feed',1);
	variable_set('scheduler_unpublish_enable_feed',1);
	variable_set('notifications_content_type_feed_item',array());
	//variable_set('notifications_node_ui_feed_item',array());
	
	variable_set('node_options_simplenews', array(
    0 => 'status',
    1 => 'revision',
    ));
	
	variable_set('page_title_type_blog_showfield',1);
	variable_set('page_title_type_event_showfield',1);
	variable_set('page_title_type_group_showfield',1);
	variable_set('page_title_type_page_showfield',1);
	variable_set('page_title_type_poll_showfield',1);
	variable_set('page_title_type_product_showfield',1);
	variable_set('page_title_type_webform_showfield',1);
	variable_set('page_title_type_feed_showfield',1);
	variable_set('page_title_type_simplenews_showfield',1);
	
	variable_set('signup_status_invite_status','1');
	variable_set('signup_status_notifications_delete',1);
	variable_set('signup_status_notifications_statuses',array(2 => 2));
	
  variable_set('theme_settings',array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_mission' => 0,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 1,
    'toggle_search' => 1,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 1,
    'toggle_node_info_blog' => 1,
    'toggle_node_info_book' => 1,
    'toggle_node_info_event' => 1,
    'toggle_node_info_feed' => 0,
    'toggle_node_info_feed_item' => 0,
    'toggle_node_info_forum' => 1,
    'toggle_node_info_group' => 0,
    'toggle_node_info_guidance' => 0,
    'toggle_node_info_page' => 1,
    'toggle_node_info_panel' => 0,
    'toggle_node_info_poll' => 1,
    'toggle_node_info_product' => 0,
    'toggle_node_info_webform' => 1,
    'default_logo' => '0',
    'logo_path' => 'sites/default/files/logo.gif',
    'logo_upload' => '',
    'default_favicon' => '0',
    'favicon_path' => '',
    'favicon_upload' => '',
    'popups' => '',
    'popups_content_selector' => 'div.left-corner > div.clear-block:last',
    'zen_block_editing' => '',
    'breadcrumb' => '',
    'zen_rebuild_registry' => '',
    'headerimg' => '',
    'cssPreload' => '',
    'node_type_specific' => '',
    'seo' => '',
    'themedev' => '',
  ));
	

	$home_path = file_create_path('home');
	file_check_directory($home_path, 1);
	chmod($home_path,0777);
	$picture_path = file_create_path(variable_get('user_picture_path', 'home/profile_pictures'));
	file_check_directory($picture_path, 1);
	chmod($picture_path,0777);

	drupal_flush_all_caches();
	node_access_rebuild();

	if (function_exists('strongarm_init')) {
		strongarm_init();
	}

	$revert = array(
	'ec_base' => array('user_permission','variable','menu_links','menu_custom'),
	'ec_protect_critical_users' => array('user_permission','variable'),
	'ec_user' => array('user_permission','variable'),
	'ec_permissions_lock' => array('user_permission','variable'),
	'ec_delegate_menu' => array('user_permission','variable'),
	'ec_admin_access' => array('user_permission','variable'),
	'ec_views' => array('user_permission','variable'),
	'ec_simplemenu' => array('user_permission','variable'),
	'ec_help' => array('user_permission','variable'),
	'ec_backup_migrate' => array('user_permission','variable'),
	'ec_content' => array('user_permission','variable'),
	//'ec_filefield' => array('user_permission','variable'),
	'ec_block' => array('user_permission','variable'),
	'ec_formats_filters' => array('user_permission','variable'),
	'ec_htmlpurifier' => array('user_permission','variable'),
	'ec_imagecache' => array('user_permission','variable'),
	'ec_og' => array('user_permission','variable','content'),
	'ec_messaging_notifications' => array('user_permission','variable'),
	'ec_blog' => array('content','fieldgroup','user_permission','variable'),
	'ec_poll' => array('user_permission','variable'),
	'ec_page' => array('content','fieldgroup','user_permission','variable'),
	'ec_event' => array('content','fieldgroup','user_permission','variable'),
	'ec_webform' => array('user_permission','variable'),
	'ec_imce' => array('user_permission','variable'),
	'ec_ckeditor' => array('user_permission','variable'),
	'ec_vertical_tabs' => array('user_permission','variable'),
	'ec_clickpath' => array('user_permission','variable'),
	'ec_save_edit' => array('user_permission','variable'),
	'ec_statistics' => array('user_permission','variable'),
	'ec_taxonomy' => array('user_permission','variable'),
	'ec_theme' => array('user_permission','variable'),
	'ec_theme_acquia_marina' => array('variable'),
	'ec_theme_acquia_prosper' => array('variable'),
	'ec_theme_cti_flex' => array('variable'),
	'ec_theme_garland' => array('variable'),
	'ec_theme_mix_and_match' => array('variable'),
	'ec_theme_pixture_reloaded' => array('variable'),
	'ec_theme_zeropoint' => array('variable'),
	'ec_uc' => array('user_permission','variable','menu_links'),
	'ec_frontpage' => array('menu_links'),
	'ec_seo' => array('user_permission'),
	'ec_scheduler' => array('user_permission','variable'),
	'ec_profile_csv' => array('user_permission','variable','menu_links'),
	'ec_user_import' => array('user_permission'),
	'ec_feeds' => array('user_permission','variable','views'),
	'ec_checkout' => array('user_permission'),
	'ec_simplenews' => array('user_permission','variable'),
	'ec_signup' => array('user_permission','variable'),
	'ec_heartbeat' => array('user_permission','views'),
	); 
	features_revert($revert);
	
}
/**
 * Finished callback for the modules install batch.
 *
 */
function _wisewebsites_module_batch_finished($success, $results) {
  variable_set('install_task', 'ec-configure');
}
function _wisewebsites_install_finished() {
  //drupal_flush_all_caches();
  //drupal_cron_run();
  variable_set('install_task', 'profile-finished');
}
