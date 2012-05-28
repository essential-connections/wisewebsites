<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_admin_access_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ec_denied_admin_paths';
  $strongarm->value = array(
	0 => 'admin/settings/admin_menu',
	1 => 'admin/settings/blogapi',
	2 => 'admin/settings/browscap',
	3 => 'admin/settings/ckeditor',
	4 => 'admin/settings/clean-urls',
	5 => 'admin/settings/clickpath',
	6 => 'admin/settings/date_popup',
	7 => 'admin/settings/devel',
	8 => 'admin/settings/error-reporting',
	9 => 'admin/settings/file-system',
	10 => 'admin/settings/globalredirect',
	11 => 'admin/settings/image-toolkit',
	12 => 'admin/settings/imce',
	13 => 'admin/settings/jquery_update',
	14 => 'admin/settings/logging',
	15 => 'admin/settings/search404',
	17 => 'admin/settings/signup',
	18 => 'admin/settings/strongarm',
	19 => 'admin/settings/suy',
	20 => 'admin/settings/username_check',
	21 => 'admin/settings/util',
	22 => 'admin/user/logintoboggan',
	23 => 'admin/user/ucreate',
	24 => 'admin/reports/status',
	25 => 'admin/reports/settings',
	26 => 'admin/og',
	27 => 'admin/og/og',
	28 => 'admin/og/og_access',
	29 => 'admin/og/og_panels',
	30 => 'admin/build/modules',
	31 => 'admin/settings/admin',
	32 => 'admin/settings/site-information',
	35 => 'admin/content/node-settings',
	36 => 'admin/content/rss-publishing',
	37 => 'admin/settings/performance',
	38 => 'admin/user/rules',
	39 => 'admin/reports/dblog',
	40 => 'admin/reports/statspro',
	41 => 'admin/reports/access-denied',
	42 => 'admin/reports/page-not-found',
	43 => 'admin/reports/pages',
	44 => 'admin/reports/browscap',
	45 => 'admin/settings/scheduler',
	46 => 'admin/settings/search404',
	47 => 'admin/user/user/create',
	48 => 'admin/settings/simplenews/mail',
	49 => 'admin/settings/mimemail',
	50 => 'admin/settings/simplenews/general',
	51 => 'admin/content/heartbeat',
	52 => 'admin/by-module',
	53 => 'user/1/delete',
	54 => 'user/3/delete',
	55 => 'user/1/edit',
  );

  $export['ec_denied_admin_paths'] = $strongarm;
  return $export;
}


