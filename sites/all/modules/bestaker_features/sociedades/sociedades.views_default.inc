<?php
/**
 * @file
 * sociedades.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sociedades_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sociedad_listado_de_junta';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sociedad - Listado de junta';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Criterio de ordenación: Contenido: Fecha del envío */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtro contextual: Contenido: Sociedad (field_junta_sociedad) */
  $handler->display->display_options['arguments']['field_junta_sociedad_target_id']['id'] = 'field_junta_sociedad_target_id';
  $handler->display->display_options['arguments']['field_junta_sociedad_target_id']['table'] = 'field_data_field_junta_sociedad';
  $handler->display->display_options['arguments']['field_junta_sociedad_target_id']['field'] = 'field_junta_sociedad_target_id';
  $handler->display->display_options['arguments']['field_junta_sociedad_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_junta_sociedad_target_id']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['field_junta_sociedad_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_junta_sociedad_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_junta_sociedad_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_junta_sociedad_target_id']['summary_options']['items_per_page'] = '25';
  /* Criterios de filtrado: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterios de filtrado: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'junta' => 'junta',
  );
  /* Criterios de filtrado: Contenido: Público (field_junta_publico) */
  $handler->display->display_options['filters']['field_junta_publico_value']['id'] = 'field_junta_publico_value';
  $handler->display->display_options['filters']['field_junta_publico_value']['table'] = 'field_data_field_junta_publico';
  $handler->display->display_options['filters']['field_junta_publico_value']['field'] = 'field_junta_publico_value';
  $handler->display->display_options['filters']['field_junta_publico_value']['value'] = array(
    1 => '1',
  );

  /* Display: Listado de juntas por sociedad */
  $handler = $view->new_display('panel_pane', 'Listado de juntas por sociedad', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Sociedad -Listado de juntas';
  $handler->display->display_options['pane_description'] = 'Mostrara una junta asociada a una Sociedad';
  $handler->display->display_options['pane_category']['name'] = 'Paneles de vista';
  $handler->display->display_options['argument_input'] = array(
    'field_junta_sociedad_target_id' => array(
      'type' => 'none',
      'context' => 'entity:file.original',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Contenido: Sociedad (field_junta_sociedad)',
    ),
  );
  $translatables['sociedad_listado_de_junta'] = array(
    t('Master'),
    t('más'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('Todo(s)'),
    t('Listado de juntas por sociedad'),
    t('Sociedad -Listado de juntas'),
    t('Mostrara una junta asociada a una Sociedad'),
    t('Paneles de vista'),
  );
  $export['sociedad_listado_de_junta'] = $view;

  return $export;
}
