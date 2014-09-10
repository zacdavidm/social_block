<?php
/**
 * @file
 * social_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function social_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
