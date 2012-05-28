<?php

/**
 * Implementation of hook_strongarm().
 */
function ec_uc_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_product';
  $strongarm->value = '0';

  $export['comment_product'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_address_format_124';
  $strongarm->value = '!company
!first_name !last_name
!street1
!street2
!city, !postal_code
!zone_name, !country_name';

  $export['uc_address_format_124'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_address_format_840';
  $strongarm->value = '!company
!first_name !last_name
!street1
!street2
!city, !zone_code !postal_code
!country_name_if';

  $export['uc_address_format_840'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_catalog_name';
  $strongarm->value = 'Catalog';

  $export['uc_catalog_name'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_catalog_vid';
  $strongarm->value = '3';

  $export['uc_catalog_vid'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_';
  $strongarm->value = '';

  $export['uc_image_'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_image_product';
  $strongarm->value = 'field_image_cache';

  $export['uc_image_product'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_enable_nodes';
  $strongarm->value = FALSE;

  $export['uc_product_enable_nodes'] = $strongarm;
  return $export;
}
