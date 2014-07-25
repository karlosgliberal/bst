<?php

/**
 * @file
 * Inversores editing UI.
 */

/**
 * UI controller.
 */
class InversorUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['title'] = t('Inversores');
    $items[$this->path]['description'] = t('Gestionar inversores, including fields.');
    $items[$this->path]['access callback'] = 'inversor_access_callback';
    $items[$this->path]['access arguments'] = array('administer inversor entities');
    $items[$this->path]['type'] = MENU_LOCAL_TASK;
    return $items;
  }
}

/**
 * Generates the model type editing form.
 */
function inversor_form($form, &$form_state, $inversor, $op = 'edit') {
  $form['tipo_identificacion'] = array(
    '#title' => t('Tipo de identificación'),
    '#type' => 'select',
    '#options' => array(
      1 => t('DNI/NIF'),
      2 => t('NIE'),
      3 => t('Pasaporte'),
    ),
    '#default_value' => empty($inversor->tipo_identificacion) ? '1' : $inversor->tipo_identificacion,
    '#required' => TRUE,
  );

  $form['identificacion'] = array(
    '#title' => t('Identificación'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->identificacion) ? '' : $inversor->identificacion,
    '#size' => 30,
    '#maxlength' => 50,
  );

  $form['nombre'] = array(
    '#title' => t('Nombre'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->nombre) ? '' : $inversor->nombre,
    '#size' => 50,
    '#maxlength' => 50,
  );

  $form['apellidos'] = array(
    '#title' => t('Apellidos'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->apellidos) ? '' : $inversor->apellidos,
    '#size' => 50,
    '#maxlength' => 100,
  );

  $form['email'] = array(
    '#title' => t('Correo electrónico'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->email) ? '' : $inversor->email,
    '#size' => 50,
    '#maxlength' => 100,
  );

  $form['direccion'] = array(
    '#title' => t('Dirección postal'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->direccion) ? '' : $inversor->direccion,
    '#size' => 100,
    '#maxlength' => 255,
  );
  $form['poblacion'] = array(
    '#title' => t('Población'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->poblacion) ? '' : $inversor->poblacion,
    '#size' => 50,
    '#maxlength' => 100,
  );
  $form['cp'] = array(
    '#title' => t('Código postal'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->cp) ? '' : $inversor->cp,
    '#size' => 30,
    '#maxlength' => 20,
  );
  $form['provincia'] = array(
    '#title' => t('Provincia'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->provincia) ? '' : $inversor->provincia,
    '#size' => 50,
    '#maxlength' => 100,
  );

  $form['newsletter'] = array(
    '#title' => t('Desea recibir información'),
    '#type' => 'select',
    '#options' => array(
      0 => t('No'),
      1 => t('Sí'),
    ),
    '#default_value' => empty($inversor->newsletter) ? '1' : $inversor->newsletter,
    '#required' => TRUE,
  );

  $form['estado_civil'] = array(
    '#title' => t('Estado civil'),
    '#type' => 'select',
    '#options' => array(
      'soltero' => t('Soltero/a'),
      'casado' => t('Casado/a'),
      'divorciado' => t('Divorciado/a'),
      'viudo' => t('Viudo/a'),
    ),
    '#default_value' => empty($inversor->estado_civil) ? 'soltero' : $inversor->estado_civil,
  );

  $form['regimen'] = array(
    '#title' => t('Tipo de régimen'),
    '#type' => 'select',
    '#options' => array(
      '' => '',
      'regimen_gananciales' => t('Régimen de sociedad de gananciales '),
      'regimen_separacion_bienes' => t('Régimen de separación de bienes'),
    ),
    '#default_value' => empty($inversor->regimen) ? '' : $inversor->regimen,
  );
  $form['nombre_conyuge'] = array(
    '#title' => t('Nombre y apellidos del cónyuge'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->nombre_conyuge) ? '' : $inversor->nombre_conyuge,
    '#size' => 50,
    '#maxlength' => 255,
  );

  $form['invertir_como_empresa'] = array(
    '#title' => t('¿Desea invertir como persona física o como persona jurídica (empresa)?'),
    '#type' => 'select',
    '#options' => array(
      'persona_fisica' => t('Persona física'),
      'persona_juridica' => t('Persona jurídica (empresa)'),
    ),
    '#default_value' => empty($inversor->invertir_como_empresa) ? 'persona_fisica' : $inversor->invertir_como_empresa,
    '#required' => TRUE,
  );
  $form['nombre_empresa'] = array(
    '#title' => t('Empresa (Nombre completo y tipo de sociedad)'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->nombre_empresa) ? '' : $inversor->nombre_empresa,
    '#size' => 50,
    '#maxlength' => 255,
  );
  $form['domicilio_social'] = array(
    '#title' => t('Domicilio social'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->domicilio_social) ? '' : $inversor->domicilio_social,
    '#size' => 50,
    '#maxlength' => 255,
  );
  $form['cif'] = array(
    '#title' => t('CIF'),
    '#type' => 'textfield',
    '#default_value' => empty($inversor->cif) ? '' : $inversor->cif,
    '#size' => 30,
    '#maxlength' => 50,
  );

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
function inversor_form_submit(&$form, &$form_state) {
  $inversor = entity_ui_form_submit_build_entity($form, $form_state);
  $inversor->save();
  $form_state['redirect'] = 'admin/workbench/content/inversores';
}