<?php
/**
 * @file
 * proyectos.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function proyectos_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'layout_landing_proyecto';
  $layout->admin_title = 'Layout Landing Proyecto';
  $layout->admin_description = 'Layout de panels para la landing de proyecto';
  $layout->category = 'tipos-contenido';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 2,
          2 => 3,
          3 => 4,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'silde',
        ),
        'parent' => 'main',
        'class' => 'region-deepbanner',
      ),
      'silde' => array(
        'type' => 'region',
        'title' => 'Deepbanner',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'seccion_dos',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'seccion_dos' => array(
        'type' => 'region',
        'title' => 'Hitos',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'proyecto-hitos',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'seccion_trs',
        ),
        'parent' => 'main',
        'class' => 'seccion-proyecto-nosotros',
      ),
      'seccion_trs' => array(
        'type' => 'region',
        'title' => 'Nosotros',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'secci__n_cuatro',
        ),
        'parent' => 'main',
        'class' => 'seccion-proyecto-dudas',
      ),
      'secci__n_cuatro' => array(
        'type' => 'region',
        'title' => 'Dudas',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $export['layout_landing_proyecto'] = $layout;

  return $export;
}
