<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function qs_rotor_user_default_permissions() {
  $permissions = array();

  // Exported permission: create qs_slider content
  $permissions['create qs_slider content'] = array(
    'name' => 'create qs_slider content',
    'roles' => array(
      '0' => 'Content Manager',
      '1' => 'superuser',
    ),
  );

  // Exported permission: delete any qs_slider content
  $permissions['delete any qs_slider content'] = array(
    'name' => 'delete any qs_slider content',
    'roles' => array(
      '0' => 'Content Manager',
      '1' => 'superuser',
    ),
  );

  // Exported permission: delete own qs_slider content
  $permissions['delete own qs_slider content'] = array(
    'name' => 'delete own qs_slider content',
    'roles' => array(
      '0' => 'Content Manager',
      '1' => 'superuser',
    ),
  );

  // Exported permission: edit any qs_slider content
  $permissions['edit any qs_slider content'] = array(
    'name' => 'edit any qs_slider content',
    'roles' => array(
      '0' => 'Content Manager',
      '1' => 'superuser',
    ),
  );

  // Exported permission: edit own qs_slider content
  $permissions['edit own qs_slider content'] = array(
    'name' => 'edit own qs_slider content',
    'roles' => array(
      '0' => 'Content Manager',
      '1' => 'superuser',
    ),
  );

  return $permissions;
}
