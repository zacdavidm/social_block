<?php
/**
 * @file
 * social_block.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function social_block_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'social_media';
  $bean_type->label = 'Social Media';
  $bean_type->options = '';
  $bean_type->description = 'Link to your social media in the sidebar menu';
  $export['social_media'] = $bean_type;

  return $export;
}
