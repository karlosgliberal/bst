<?php

/**
 * @file
 * Inversores editing UI.
 */

/**
 * UI controller.
 */
class RondaUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['title'] = t('Rondas');
    $items[$this->path]['description'] = t('Gestionar rondas, including fields.');
    $items[$this->path]['access callback'] = 'ronda_access_callback';
    $items[$this->path]['access arguments'] = array('administer ronda entities');
    $items[$this->path]['type'] = MENU_LOCAL_TASK;
    return $items;
  }
}

/**
 * Generates the model type editing form.
 */
function ronda_inversion_form($form, &$form_state, $ronda, $op = 'edit') {
  $form['nombre'] = array(
    '#title' => t('Nombre de la ronda de inversión'),
    '#type' => 'textfield',
    '#default_value' => empty($ronda->nombre) ? '' : $ronda->nombre,
    '#size' => 50,
    '#maxlength' => 255,
  );

  $form['descripcion'] = array(
    '#title' => t('Descripción de la ronda de inversión'),
    '#type' => 'textarea',
    '#default_value' => empty($ronda->descripcion) ? '' : $ronda->descripcion,
  );

  // Add the field related form elements.
  $form_state['ronda_inversion'] = $ronda;
  field_attach_form('ronda_inversion', $ronda, $form, $form_state);


  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#weight' => 40,
  );

  return $form;
}

/**
 * Form API submit callback for the type form.
 */
function ronda_inversion_form_submit(&$form, &$form_state) {
  $ronda = entity_ui_form_submit_build_entity($form, $form_state);
  $ronda->save();
  $form_state['redirect'] = 'admin/workbench/rondas';
}