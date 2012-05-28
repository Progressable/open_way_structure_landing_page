<?php
/**
 * @file
 * open_way_structure_landing_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function open_way_structure_landing_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ow_landing_page content.
  $permissions['create ow_landing_page content'] = array(
    'name' => 'create ow_landing_page content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Publisher',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ow_landing_page content.
  $permissions['delete any ow_landing_page content'] = array(
    'name' => 'delete any ow_landing_page content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ow_landing_page content.
  $permissions['delete own ow_landing_page content'] = array(
    'name' => 'delete own ow_landing_page content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ow_landing_page content.
  $permissions['edit any ow_landing_page content'] = array(
    'name' => 'edit any ow_landing_page content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Editor',
      2 => 'Manager',
      3 => 'Publisher',
      4 => 'Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ow_landing_page content.
  $permissions['edit own ow_landing_page content'] = array(
    'name' => 'edit own ow_landing_page content',
    'roles' => array(
      0 => 'Administrator',
      1 => 'Manager',
      2 => 'Publisher',
      3 => 'Webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
