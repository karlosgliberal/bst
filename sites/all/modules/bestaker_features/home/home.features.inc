<?php
/**
 * @file
 * home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function home_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function home_image_default_styles() {
  $styles = array();

  // Exported image style: 350x.
  $styles['350x'] = array(
    'name' => '350x',
    'label' => '350x',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 350,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function home_node_info() {
  $items = array(
    'con_bestaker' => array(
      'name' => t('Con bestaker'),
      'base' => 'node_content',
      'description' => t('Sección de portada "Por qué con Bestaker" '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'feeds_portada' => array(
      'name' => t('Feeds portada'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'imagen_con_bestaker_' => array(
      'name' => t('Imagen/video -Con bestaker-'),
      'base' => 'node_content',
      'description' => t('Video o imagen para la sección con bestaker'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'proyecto' => array(
      'name' => t('Proyecto'),
      'base' => 'node_content',
      'description' => t('Tipo de contenido especifico relativo al Proyecto '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slide_principal' => array(
      'name' => t('Slide Principal'),
      'base' => 'node_content',
      'description' => t('Slide principal que se mostrará en la Home'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
