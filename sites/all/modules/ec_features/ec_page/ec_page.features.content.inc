<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ec_page_content_default_fields() {
  $fields = array();

  // Exported field: field_file
  $fields['page-field_file'] = array(
    'field_name' => 'field_file',
    'type_name' => 'page',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_files',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'jpg jpeg gif png tif tiff txt doc xls ppt pps pdf mp3 wav avi mpg mpeg wmv iso flv mov zip rar tar',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '100M',
      'max_filesize_per_node' => '',
      'insert' => 1,
      'insert_styles' => array(
        'auto' => 'auto',
        'link' => 'link',
        'imagecache_large' => 'imagecache_large',
        'imagecache_medium' => 'imagecache_medium',
        'imagecache_original' => 'imagecache_original',
        'imagecache_small' => 'imagecache_small',
        'imagecache_thumb' => 'imagecache_thumb',
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_full' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_category' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Files',
      'weight' => '1',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_image
  $fields['page-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'page',
    'display_settings' => array(
      'weight' => '3',
      'parent' => 'group_images',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '100M',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'insert' => 0,
      'insert_styles' => array(
        'auto' => 'auto',
        'link' => 0,
        'imagecache_large' => 'imagecache_large',
        'imagecache_medium' => 'imagecache_medium',
        'imagecache_original' => 'imagecache_original',
        'imagecache_small' => 'imagecache_small',
        'imagecache_thumb' => 'imagecache_thumb',
        'image' => 0,
        'imagecache_cart' => 0,
        'imagecache_full' => 0,
        'imagecache_product' => 0,
        'imagecache_product_full' => 0,
        'imagecache_product_list' => 0,
        'imagecache_uc_category' => 0,
        'imagecache_uc_thumbnail' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Images',
      'weight' => '3',
      'description' => 'Upload images here to show in this page. ',
      'type' => 'swfupload_widget',
      'module' => 'swfupload',
    ),
  );

  // Exported field: field_map
  $fields['page-field_map'] = array(
    'field_name' => 'field_map',
    'type_name' => 'page',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_map',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'embed_gmap',
    'required' => '0',
    'multiple' => '1',
    'module' => 'embed_gmap',
    'active' => '1',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_map][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Map',
      'weight' => '4',
      'description' => 'enter a valid address to show a google map on this page',
      'type' => 'embed_gmap_embed_gmap',
      'module' => 'embed_gmap',
    ),
  );

  // Exported field: field_show_auth_info
  $fields['page-field_show_auth_info'] = array(
    'field_name' => 'field_show_auth_info',
    'type_name' => 'page',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '0|Hide authoring information
1|Hide authoring information',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 1,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hide authoring information',
      'weight' => '-4',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_video
  $fields['page-field_video'] = array(
    'field_name' => 'field_video',
    'type_name' => 'page',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_video',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'swftools_no_file',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'swftools_no_file',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'flv',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '100M',
      'max_filesize_per_node' => '',
      'label' => 'Video',
      'weight' => '5',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Files');
  t('Hide authoring information');
  t('Map');
  t('Slideshow');
  t('Video');

  return $fields;
}
