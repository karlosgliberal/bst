<?php
/**
 * @file
 * sociedades.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sociedades_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_capital|node|sociedad|form';
  $field_group->group_name = 'group_capital';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sociedad';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Capital',
    'weight' => '8',
    'children' => array(
      0 => 'field_sociedad_capital',
      1 => 'field_sociedad_grafico_capital',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-capital field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_capital|node|sociedad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relevantes|node|sociedad|form';
  $field_group->group_name = 'group_relevantes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sociedad';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos Relevantes',
    'weight' => '5',
    'children' => array(
      0 => 'field_sociedad_datos_resumen',
      1 => 'field_sociedad_datos_full',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relevantes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_relevantes|node|sociedad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_socios|node|sociedad|form';
  $field_group->group_name = 'group_socios';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sociedad';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Socios',
    'weight' => '9',
    'children' => array(
      0 => 'field_sociedad_socios',
      1 => 'field_sociedad_grafico_socios',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-socios field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_socios|node|sociedad|form'] = $field_group;

  return $export;
}
