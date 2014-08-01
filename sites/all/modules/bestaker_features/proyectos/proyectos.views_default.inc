<?php
/**
 * @file
 * proyectos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function proyectos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'proyecto_listado_equipo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Proyecto - Listado Equipo';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nuestro equipo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_thumbnail_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Foto */
  $handler->display->display_options['fields']['field_equipo_foto']['id'] = 'field_equipo_foto';
  $handler->display->display_options['fields']['field_equipo_foto']['table'] = 'field_data_field_equipo_foto';
  $handler->display->display_options['fields']['field_equipo_foto']['field'] = 'field_equipo_foto';
  $handler->display->display_options['fields']['field_equipo_foto']['label'] = '';
  $handler->display->display_options['fields']['field_equipo_foto']['element_type'] = '0';
  $handler->display->display_options['fields']['field_equipo_foto']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_equipo_foto']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_equipo_foto']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_equipo_foto']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_equipo_foto']['settings'] = array(
    'image_style' => '350x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_equipo_foto']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'equipo' => 'equipo',
  );

  /* Display: Bloque miembros de equipo - Landing proyecto */
  $handler = $view->new_display('panel_pane', 'Bloque miembros de equipo - Landing proyecto', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Feeds home';
  $translatables['proyecto_listado_equipo'] = array(
    t('Master'),
    t('Nuestro equipo'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Bloque miembros de equipo - Landing proyecto'),
    t('Feeds home'),
    t('View panes'),
  );
  $export['proyecto_listado_equipo'] = $view;

  return $export;
}
