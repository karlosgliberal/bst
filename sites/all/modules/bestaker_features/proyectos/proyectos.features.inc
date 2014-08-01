<?php
/**
 * @file
 * proyectos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function proyectos_ctools_plugin_api($module = NULL, $api = NULL) {
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
function proyectos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function proyectos_node_info() {
  $items = array(
    'equipo' => array(
      'name' => t('Proyecto - Miembro Equipo'),
      'base' => 'node_content',
      'description' => t('Representa un miembro del equipo de un proyecto'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
    'hito' => array(
      'name' => t('Proyecto - Hito'),
      'base' => 'node_content',
      'description' => t('Representa un hito dentro de un proyecto'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'noticia' => array(
      'name' => t('Proyecto - Noticia'),
      'base' => 'node_content',
      'description' => t('Representa una noticia aparecida en los medios sobre un proyecto.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'proyecto' => array(
      'name' => t('Proyecto'),
      'base' => 'node_content',
      'description' => t('Tipo de contenido especifico relativo al Proyecto '),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
