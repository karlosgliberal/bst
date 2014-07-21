<?php
/**
 * @file
 * home.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function home_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'home';
  $layout->admin_title = 'Home';
  $layout->admin_description = 'Panel para la home';
  $layout->category = 'home';
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
          4 => 5,
          5 => 6,
          6 => 7,
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
        'class' => 'slide-principal',
      ),
      'silde' => array(
        'type' => 'region',
        'title' => 'Silde',
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
        'title' => 'seccion-dos',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'con-bestaker inner-45',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'seccion_trs',
        ),
        'parent' => 'main',
        'class' => 'para-inversor inner-50',
      ),
      'seccion_trs' => array(
        'type' => 'region',
        'title' => 'sección-tres',
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
        'class' => 'para-emprendedor inner-para-ti',
      ),
      'secci__n_cuatro' => array(
        'type' => 'region',
        'title' => 'sección-cuatro',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'secci__n_cinco',
        ),
        'parent' => 'main',
        'class' => 'inner-cero',
      ),
      'secci__n_cinco' => array(
        'type' => 'region',
        'title' => 'sección-cinco',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'secci__n_seis',
        ),
        'parent' => 'main',
        'class' => 'novedades inner-50',
      ),
      'secci__n_seis' => array(
        'type' => 'region',
        'title' => 'sección-seis',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'secci__n_siete',
        ),
        'parent' => 'main',
        'class' => 'destacado-home parallax inner-45',
      ),
      'secci__n_siete' => array(
        'type' => 'region',
        'title' => 'sección-siete',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
    ),
  );
  $export['home'] = $layout;

  return $export;
}
