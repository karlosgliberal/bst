<?php
/**
 * @file
 * sociedades.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sociedades_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sociedades_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function sociedades_node_info() {
  $items = array(
    'junta' => array(
      'name' => t('Junta'),
      'base' => 'node_content',
      'description' => t('Representa a una junta que irá asociada a una sociedad.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'sociedad' => array(
      'name' => t('Sociedad'),
      'base' => 'node_content',
      'description' => t('Representa a una sociedad gestora de un proyecto'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  return $items;
}
