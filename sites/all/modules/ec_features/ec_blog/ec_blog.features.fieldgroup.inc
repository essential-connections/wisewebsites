<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function ec_blog_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_files
  $groups['blog-group_files'] = array(
    'group_type' => 'standard',
    'type_name' => 'blog',
    'group_name' => 'group_files',
    'label' => 'Files',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '0',
    'fields' => array(
      '0' => 'field_file',
    ),
  );

  // Exported group: group_images
  $groups['blog-group_images'] = array(
    'group_type' => 'standard',
    'type_name' => 'blog',
    'group_name' => 'group_images',
    'label' => 'Images',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_image',
    ),
  );

  // Exported group: group_map
  $groups['blog-group_map'] = array(
    'group_type' => 'standard',
    'type_name' => 'blog',
    'group_name' => 'group_map',
    'label' => 'Map',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '5',
        'label' => 'above',
        'teaser' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_map',
    ),
  );

  // Exported group: group_video
  $groups['blog-group_video'] = array(
    'group_type' => 'standard',
    'type_name' => 'blog',
    'group_name' => 'group_video',
    'label' => 'Video',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_video',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Files');
  t('Map');
  t('Slideshow');
  t('Video');

  return $groups;
}
