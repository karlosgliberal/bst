<?php
/**
 * @file
 * home.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function home_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_noticia|node|slide_principal|form';
  $field_group->group_name = 'group_noticia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide_principal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sección noticia',
    'weight' => '39',
    'children' => array(
      0 => 'field_slide_descripcion_noticia',
      1 => 'field_slide_enlace_noticia',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-noticia field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_noticia|node|slide_principal|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide_apuntate|node|slide_principal|form';
  $field_group->group_name = 'group_slide_apuntate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slide_principal';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sección apuntante',
    'weight' => '38',
    'children' => array(
      0 => 'field_slide_enlace_apuntate',
      1 => 'field_slide_descripcion_apuntate',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sección apuntante',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-slide-apuntate field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_slide_apuntate|node|slide_principal|form'] = $field_group;

  return $export;
}
