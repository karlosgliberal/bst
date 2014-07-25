<?php
/**
 * @file
 * inversor.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function inversor_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bt_admin_rondas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bt_ronda_inversion';
  $view->human_name = 'BT Admin: Rondas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Rondas de inversión';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Ronda de inversión: Ronda de inversión ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'bt_ronda_inversion';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: Ronda de inversión: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_ronda_inversion';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Ronda de inversión: Nombre */
  $handler->display->display_options['fields']['nombre']['id'] = 'nombre';
  $handler->display->display_options['fields']['nombre']['table'] = 'bt_ronda_inversion';
  $handler->display->display_options['fields']['nombre']['field'] = 'nombre';
  $handler->display->display_options['fields']['nombre']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nombre']['alter']['path'] = '[url]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operaciones';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href=\'/admin/content/rondas/manage/[id]\'>Editar</a> - 
<a href=\'/admin/content/rondas/manage/[id]/delete?destination=admin/workbench/content/rondas\'>Eliminar</a>';
  /* Sort criterion: Ronda de inversión: Ronda de inversión ID */
  $handler->display->display_options['sorts']['id']['id'] = 'id';
  $handler->display->display_options['sorts']['id']['table'] = 'bt_ronda_inversion';
  $handler->display->display_options['sorts']['id']['field'] = 'id';
  $handler->display->display_options['sorts']['id']['order'] = 'DESC';
  /* Filter criterion: Ronda de inversión: Nombre */
  $handler->display->display_options['filters']['nombre']['id'] = 'nombre';
  $handler->display->display_options['filters']['nombre']['table'] = 'bt_ronda_inversion';
  $handler->display->display_options['filters']['nombre']['field'] = 'nombre';
  $handler->display->display_options['filters']['nombre']['operator'] = 'contains';
  $handler->display->display_options['filters']['nombre']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nombre']['expose']['operator_id'] = 'nombre_op';
  $handler->display->display_options['filters']['nombre']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['nombre']['expose']['operator'] = 'nombre_op';
  $handler->display->display_options['filters']['nombre']['expose']['identifier'] = 'nombre';
  $handler->display->display_options['filters']['nombre']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/workbench/content/rondas';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Rondas de financiación';
  $handler->display->display_options['menu']['weight'] = '12';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['bt_admin_rondas'] = array(
    t('Master'),
    t('Rondas de inversión'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('.'),
    t(','),
    t('Nombre'),
    t('Operaciones'),
    t('<a href=\'/admin/content/rondas/manage/[id]\'>Editar</a> - 
<a href=\'/admin/content/rondas/manage/[id]/delete?destination=admin/workbench/content/rondas\'>Eliminar</a>'),
    t('Page'),
  );
  $export['bt_admin_rondas'] = $view;

  $view = new view();
  $view->name = 'inversores';
  $view->description = '';
  $view->tag = 'bestaker';
  $view->base_table = 'bt_inversores';
  $view->human_name = 'BT Admin: Inversores';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lista de Inversores';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'url' => 'url',
    'identificacion' => 'identificacion',
    'nombre' => 'nombre',
    'apellidos' => 'apellidos',
    'email' => 'email',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'id';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'identificacion' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nombre' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apellidos' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Añadir inversor';
  $handler->display->display_options['header']['area']['content'] = '<ul class="action-links">
	      <li><a href="/admin/content/inversores/add">Añadir inversor</a></li>
        </ul>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Inversor: Inversor ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'bt_inversores';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = 'admin/content/inversores/manage/[id]';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Field: Inversor: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_inversor';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Inversor: Identificacion */
  $handler->display->display_options['fields']['identificacion']['id'] = 'identificacion';
  $handler->display->display_options['fields']['identificacion']['table'] = 'bt_inversores';
  $handler->display->display_options['fields']['identificacion']['field'] = 'identificacion';
  $handler->display->display_options['fields']['identificacion']['label'] = 'Identificación';
  /* Field: Inversor: Nombre */
  $handler->display->display_options['fields']['nombre']['id'] = 'nombre';
  $handler->display->display_options['fields']['nombre']['table'] = 'bt_inversores';
  $handler->display->display_options['fields']['nombre']['field'] = 'nombre';
  $handler->display->display_options['fields']['nombre']['exclude'] = TRUE;
  /* Field: Inversor: Apellidos */
  $handler->display->display_options['fields']['apellidos']['id'] = 'apellidos';
  $handler->display->display_options['fields']['apellidos']['table'] = 'bt_inversores';
  $handler->display->display_options['fields']['apellidos']['field'] = 'apellidos';
  $handler->display->display_options['fields']['apellidos']['label'] = 'Nombre y Apellidos';
  $handler->display->display_options['fields']['apellidos']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apellidos']['alter']['text'] = '[nombre] [apellidos]';
  $handler->display->display_options['fields']['apellidos']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['apellidos']['alter']['path'] = '[url]';
  /* Field: Inversor: Email */
  $handler->display->display_options['fields']['email']['id'] = 'email';
  $handler->display->display_options['fields']['email']['table'] = 'bt_inversores';
  $handler->display->display_options['fields']['email']['field'] = 'email';
  $handler->display->display_options['fields']['email']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['email']['alter']['path'] = 'mailto:[email]';
  $handler->display->display_options['fields']['email']['alter']['target'] = '_blank';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operaciones';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href=\'/admin/content/inversores/manage/[id]\'>Editar</a> - 
<a href=\'/admin/content/inversores/manage/[id]/delete?destination=admin/workbench/content/inversores\'>Eliminar</a>';
  /* Filter criterion: Inversor: Identificacion */
  $handler->display->display_options['filters']['identificacion']['id'] = 'identificacion';
  $handler->display->display_options['filters']['identificacion']['table'] = 'bt_inversores';
  $handler->display->display_options['filters']['identificacion']['field'] = 'identificacion';
  $handler->display->display_options['filters']['identificacion']['operator'] = 'contains';
  $handler->display->display_options['filters']['identificacion']['group'] = 1;
  $handler->display->display_options['filters']['identificacion']['exposed'] = TRUE;
  $handler->display->display_options['filters']['identificacion']['expose']['operator_id'] = 'identificacion_op';
  $handler->display->display_options['filters']['identificacion']['expose']['label'] = 'Identificación';
  $handler->display->display_options['filters']['identificacion']['expose']['operator'] = 'identificacion_op';
  $handler->display->display_options['filters']['identificacion']['expose']['identifier'] = 'identificacion';
  $handler->display->display_options['filters']['identificacion']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Inversor: Nombre */
  $handler->display->display_options['filters']['nombre']['id'] = 'nombre';
  $handler->display->display_options['filters']['nombre']['table'] = 'bt_inversores';
  $handler->display->display_options['filters']['nombre']['field'] = 'nombre';
  $handler->display->display_options['filters']['nombre']['operator'] = 'contains';
  $handler->display->display_options['filters']['nombre']['group'] = 1;
  $handler->display->display_options['filters']['nombre']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nombre']['expose']['operator_id'] = 'nombre_op';
  $handler->display->display_options['filters']['nombre']['expose']['label'] = 'Nombre';
  $handler->display->display_options['filters']['nombre']['expose']['operator'] = 'nombre_op';
  $handler->display->display_options['filters']['nombre']['expose']['identifier'] = 'nombre';
  $handler->display->display_options['filters']['nombre']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Inversor: Apellidos */
  $handler->display->display_options['filters']['apellidos']['id'] = 'apellidos';
  $handler->display->display_options['filters']['apellidos']['table'] = 'bt_inversores';
  $handler->display->display_options['filters']['apellidos']['field'] = 'apellidos';
  $handler->display->display_options['filters']['apellidos']['operator'] = 'contains';
  $handler->display->display_options['filters']['apellidos']['group'] = 1;
  $handler->display->display_options['filters']['apellidos']['exposed'] = TRUE;
  $handler->display->display_options['filters']['apellidos']['expose']['operator_id'] = 'apellidos_op';
  $handler->display->display_options['filters']['apellidos']['expose']['label'] = 'Apellidos';
  $handler->display->display_options['filters']['apellidos']['expose']['operator'] = 'apellidos_op';
  $handler->display->display_options['filters']['apellidos']['expose']['identifier'] = 'apellidos';
  $handler->display->display_options['filters']['apellidos']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Inversor: Cif */
  $handler->display->display_options['filters']['cif']['id'] = 'cif';
  $handler->display->display_options['filters']['cif']['table'] = 'bt_inversores';
  $handler->display->display_options['filters']['cif']['field'] = 'cif';
  $handler->display->display_options['filters']['cif']['operator'] = 'contains';
  $handler->display->display_options['filters']['cif']['group'] = 1;
  $handler->display->display_options['filters']['cif']['exposed'] = TRUE;
  $handler->display->display_options['filters']['cif']['expose']['operator_id'] = 'cif_op';
  $handler->display->display_options['filters']['cif']['expose']['label'] = 'CIF';
  $handler->display->display_options['filters']['cif']['expose']['operator'] = 'cif_op';
  $handler->display->display_options['filters']['cif']['expose']['identifier'] = 'cif';
  $handler->display->display_options['filters']['cif']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  /* Filter criterion: Inversor: Email */
  $handler->display->display_options['filters']['email']['id'] = 'email';
  $handler->display->display_options['filters']['email']['table'] = 'bt_inversores';
  $handler->display->display_options['filters']['email']['field'] = 'email';
  $handler->display->display_options['filters']['email']['operator'] = 'contains';
  $handler->display->display_options['filters']['email']['group'] = 1;
  $handler->display->display_options['filters']['email']['exposed'] = TRUE;
  $handler->display->display_options['filters']['email']['expose']['operator_id'] = 'email_op';
  $handler->display->display_options['filters']['email']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['email']['expose']['operator'] = 'email_op';
  $handler->display->display_options['filters']['email']['expose']['identifier'] = 'email';
  $handler->display->display_options['filters']['email']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/workbench/content/inversores';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Inversores';
  $handler->display->display_options['menu']['weight'] = '11';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['inversores'] = array(
    t('Master'),
    t('Lista de Inversores'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Añadir inversor'),
    t('<ul class="action-links">
	      <li><a href="/admin/content/inversores/add">Añadir inversor</a></li>
        </ul>'),
    t('.'),
    t(','),
    t('Identificación'),
    t('Nombre'),
    t('Nombre y Apellidos'),
    t('[nombre] [apellidos]'),
    t('Email'),
    t('Operaciones'),
    t('<a href=\'/admin/content/inversores/manage/[id]\'>Editar</a> - 
<a href=\'/admin/content/inversores/manage/[id]/delete?destination=admin/workbench/content/inversores\'>Eliminar</a>'),
    t('Apellidos'),
    t('CIF'),
    t('Page'),
  );
  $export['inversores'] = $view;

  return $export;
}
