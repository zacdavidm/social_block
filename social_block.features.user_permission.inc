<?php
/**
 * @file
 * social_block.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function social_block_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any social_media bean'.
  $permissions['view any social_media bean'] = array(
    'name' => 'view any social_media bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
