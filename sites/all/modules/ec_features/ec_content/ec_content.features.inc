<?php

/**
 * Implementation of hook_views_api().
 */
function ec_content_views_api() {
  return array(
    'api' => '2',
  );
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ec_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

