<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ec_statistics_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function ec_statistics_views_api() {
  return array(
    'api' => '2',
  );
}
