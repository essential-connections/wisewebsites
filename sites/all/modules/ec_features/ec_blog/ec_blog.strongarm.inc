<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_blog_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_blog';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-1',
    'revision_information' => '5',
    'comment_settings' => '7',
    'menu' => '4',
    'taxonomy' => '-3',
    'path' => '6',
    'og_nodeapi' => '-2',
    'signup_node_info' => '8',
    'xmlsitemap' => '10',
    'nodewords' => '9',
  );

  $export['content_extra_weights_blog'] = $strongarm;

  return $export;
}
