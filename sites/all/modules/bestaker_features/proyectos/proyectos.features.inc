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
 * Implements hook_flag_default_flags().
 */
function proyectos_flag_default_flags() {
  $flags = array();
  // Exported flag: "Seguir proyecto".
  $flags['seguir_proyecto'] = array(
    'entity_type' => 'node',
    'title' => 'Seguir proyecto',
    'global' => 0,
    'types' => array(
      0 => 'proyecto',
    ),
    'flag_short' => 'Seguir proyecto',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Dejar de seguir',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 0,
      'rss' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'proyectos',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

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
