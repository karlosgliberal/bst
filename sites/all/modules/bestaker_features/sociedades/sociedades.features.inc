<?php
/**
 * @file
 * sociedades.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sociedades_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sociedades_node_info() {
  $items = array(
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
