<?php
/**
 * @file
 * proyectos.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function proyectos_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mailchimp|node|proyecto|form';
  $field_group->group_name = 'group_mailchimp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'proyecto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mailchimp',
    'weight' => '11',
    'children' => array(
      0 => 'field_proyecto_grupo_mailchimp',
      1 => 'field_proyecto_id_mailchimp',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mailchimp field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mailchimp|node|proyecto|form'] = $field_group;

  return $export;
}
