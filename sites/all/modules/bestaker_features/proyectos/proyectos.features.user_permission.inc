<?php
/**
 * @file
 * proyectos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function proyectos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'flag seguir_proyecto'.
  $permissions['flag seguir_proyecto'] = array(
    'name' => 'flag seguir_proyecto',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag seguir_proyecto'.
  $permissions['unflag seguir_proyecto'] = array(
    'name' => 'unflag seguir_proyecto',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  return $permissions;
}
