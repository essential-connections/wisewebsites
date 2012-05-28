<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_imce_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_custom_content';
  $strongarm->value = array(
    'imce_mkdir_content' => 1,
  );

  $export['imce_custom_content'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_custom_process';
  $strongarm->value = array(
    'imce_mkdir_process_profile' => 1,
  );

  $export['imce_custom_process'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_profiles';
  $strongarm->value = array(
    1 => array(
      'name' => 'User-1',
      'filesize' => '0',
      'quota' => '0',
      'tuquota' => '0',
      'extensions' => '*',
      'dimensions' => '0',
      'filenum' => '0',
      'directories' => array(
        0 => array(
          'name' => 'user%uid',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 0,
          'delete' => 1,
          'resize' => 1,
          'crop' => 1,
          'mkdir' => 0,
          'rmdir' => 0,
        ),
      ),
      'thumbnails' => array(),
      'mkdirnum' => '0',
    ),
    2 => array(
      'name' => 'authenticated user',
      'filesize' => '100',
      'quota' => '0',
      'tuquota' => '500',
      'extensions' => 'jpg jpeg gif png tif tiff txt doc pps pdf mp3 wav avi mpg mpeg wmv iso flv mov zip rar tar',
      'dimensions' => '0',
      'filenum' => '0',
      'directories' => array(
        0 => array(
          'name' => 'home/user%uid',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 0,
          'delete' => 1,
          'resize' => 1,
          'crop' => 1,
          'mkdir' => 0,
          'rmdir' => 0,
        ),
      ),
      'thumbnails' => array(),
      'mkdirnum' => '0',
    ),
    3 => array(
      'name' => 'advanced user',
      'filesize' => '100',
      'quota' => '0',
      'tuquota' => '500',
      'extensions' => 'jpg jpeg gif png tif tiff txt doc pps pdf mp3 wav avi mpg mpeg wmv iso flv mov zip rar tar',
      'dimensions' => '0',
      'filenum' => '0',
      'directories' => array(
        0 => array(
          'name' => 'home/user%uid',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
          'crop' => 1,
          'mkdir' => 1,
          'rmdir' => 1,
        ),
      ),
      'thumbnails' => array(),
      'mkdirnum' => '0',
    ),
    4 => array(
      'name' => 'manager',
      'filesize' => '100',
      'quota' => '0',
      'tuquota' => '1000',
      'extensions' => 'jpg jpeg gif png tif tiff txt doc pps pdf mp3 wav avi mpg mpeg wmv iso flv mov zip rar tar',
      'dimensions' => '0',
      'filenum' => '0',
      'directories' => array(
        0 => array(
          'name' => 'home/user%uid',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
          'crop' => 1,
          'mkdir' => 1,
          'rmdir' => 1,
        ),
        1 => array(
          'name' => 'home',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
          'crop' => 1,
          'mkdir' => 1,
          'rmdir' => 1,
        ),
      ),
      'thumbnails' => array(),
      'mkdirnum' => '0',
    ),
    5 => array(
      'name' => 'administrator',
      'filesize' => '100',
      'quota' => '0',
      'tuquota' => '5000',
      'extensions' => 'jpg jpeg gif png tif tiff txt doc pps pdf mp3 wav avi mpg mpeg wmv iso flv mov zip rar tar',
      'dimensions' => '0',
      'filenum' => '0',
      'directories' => array(
        0 => array(
          'name' => 'home/user%uid',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
          'crop' => 1,
          'mkdir' => 1,
          'rmdir' => 1,
        ),
        1 => array(
          'name' => 'home',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
          'crop' => 1,
          'mkdir' => 1,
          'rmdir' => 1,
        ),
      ),
      'thumbnails' => array(),
      'mkdirnum' => '0',
    ),
  );

  $export['imce_profiles'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_roles_profiles';
  $strongarm->value = array(
    5 => array(
      'weight' => '0',
      'pid' => '5',
    ),
    4 => array(
      'weight' => '0',
      'pid' => '4',
    ),
    3 => array(
      'weight' => '0',
      'pid' => '3',
    ),
    6 => array(
      'weight' => '0',
      'pid' => '2',
    ),
    2 => array(
      'weight' => 11,
      'pid' => '2',
    ),
    1 => array(
      'weight' => 12,
      'pid' => '0',
    ),
  );

  $export['imce_roles_profiles'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_absurls';
  $strongarm->value = 0;

  $export['imce_settings_absurls'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_replace';
  $strongarm->value = '0';

  $export['imce_settings_replace'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_textarea';
  $strongarm->value = '';

  $export['imce_settings_textarea'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_thumb_method';
  $strongarm->value = 'scale_and_crop';

  $export['imce_settings_thumb_method'] = $strongarm;
  return $export;
}
