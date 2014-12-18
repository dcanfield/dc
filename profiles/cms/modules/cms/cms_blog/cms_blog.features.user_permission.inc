<?php
/**
 * @file
 * cms_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cms_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'Blogger' => 'Blogger',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'Blogger' => 'Blogger',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'Blogger' => 'Blogger',
    ),
    'module' => 'node',
  );

  return $permissions;
}
