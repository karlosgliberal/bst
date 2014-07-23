<?php
/**
 * @file
 * configuracion.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function configuracion_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bloques_generales';
  $context->description = 'Ubicación de bloques generales de carcasa';
  $context->tag = 'bloques';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bt_base-footer' => array(
          'module' => 'bt_base',
          'delta' => 'footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Ubicación de bloques generales de carcasa');
  t('bloques');
  $export['bloques_generales'] = $context;

  return $export;
}
