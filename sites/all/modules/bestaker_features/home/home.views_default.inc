<?php
/**
 * @file
 * home.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function home_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'con_bestaker';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Con Bestaker';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_con_bestaker_descripcion']['id'] = 'field_con_bestaker_descripcion';
  $handler->display->display_options['fields']['field_con_bestaker_descripcion']['table'] = 'field_data_field_con_bestaker_descripcion';
  $handler->display->display_options['fields']['field_con_bestaker_descripcion']['field'] = 'field_con_bestaker_descripcion';
  $handler->display->display_options['fields']['field_con_bestaker_descripcion']['label'] = '';
  $handler->display->display_options['fields']['field_con_bestaker_descripcion']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_con_bestaker_ver_mas']['id'] = 'field_con_bestaker_ver_mas';
  $handler->display->display_options['fields']['field_con_bestaker_ver_mas']['table'] = 'field_data_field_con_bestaker_ver_mas';
  $handler->display->display_options['fields']['field_con_bestaker_ver_mas']['field'] = 'field_con_bestaker_ver_mas';
  $handler->display->display_options['fields']['field_con_bestaker_ver_mas']['label'] = '';
  $handler->display->display_options['fields']['field_con_bestaker_ver_mas']['element_label_colon'] = FALSE;
  /* Field: Content: Texto largo */
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['id'] = 'field_con_bestaker_texto_largo';
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['table'] = 'field_data_field_con_bestaker_texto_largo';
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['field'] = 'field_con_bestaker_texto_largo';
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['label'] = '';
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['element_label_colon'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_conbestaker_imagen_img']['id'] = 'field_conbestaker_imagen_img';
  $handler->display->display_options['fields']['field_conbestaker_imagen_img']['table'] = 'field_data_field_conbestaker_imagen_img';
  $handler->display->display_options['fields']['field_conbestaker_imagen_img']['field'] = 'field_conbestaker_imagen_img';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
    'con_bestaker' => 'con_bestaker',
    'imagen_con_bestaker_' => 'imagen_con_bestaker_',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'hola';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_con_bestaker_descripcion']['id'] = 'field_con_bestaker_descripcion';
  $handler->display->display_options['fields']['field_con_bestaker_descripcion']['table'] = 'field_data_field_con_bestaker_descripcion';
  $handler->display->display_options['fields']['field_con_bestaker_descripcion']['field'] = 'field_con_bestaker_descripcion';
  $handler->display->display_options['fields']['field_con_bestaker_descripcion']['label'] = '';
  $handler->display->display_options['fields']['field_con_bestaker_descripcion']['element_label_colon'] = FALSE;
  /* Field: Content: Texto largo */
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['id'] = 'field_con_bestaker_texto_largo';
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['table'] = 'field_data_field_con_bestaker_texto_largo';
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['field'] = 'field_con_bestaker_texto_largo';
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['label'] = '';
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_con_bestaker_texto_largo']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'con_bestaker' => 'con_bestaker',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['pane_title'] = 'Por qué, Con Bestaker ';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_conbestaker_imagen_img']['id'] = 'field_conbestaker_imagen_img';
  $handler->display->display_options['fields']['field_conbestaker_imagen_img']['table'] = 'field_data_field_conbestaker_imagen_img';
  $handler->display->display_options['fields']['field_conbestaker_imagen_img']['field'] = 'field_conbestaker_imagen_img';
  $handler->display->display_options['fields']['field_conbestaker_imagen_img']['label'] = '';
  $handler->display->display_options['fields']['field_conbestaker_imagen_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conbestaker_imagen_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_conbestaker_imagen_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: video */
  $handler->display->display_options['fields']['field_conbestaker_video']['id'] = 'field_conbestaker_video';
  $handler->display->display_options['fields']['field_conbestaker_video']['table'] = 'field_data_field_conbestaker_video';
  $handler->display->display_options['fields']['field_conbestaker_video']['field'] = 'field_conbestaker_video';
  $handler->display->display_options['fields']['field_conbestaker_video']['label'] = '';
  $handler->display->display_options['fields']['field_conbestaker_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conbestaker_video']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_conbestaker_video']['settings'] = array(
    'youtube_size' => 'responsive',
    'youtube_width' => '',
    'youtube_height' => '',
    'youtube_autoplay' => 0,
    'youtube_showinfo' => 0,
    'youtube_controls' => 0,
    'youtube_autohide' => 0,
    'youtube_iv_load_policy' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'imagen_con_bestaker_' => 'imagen_con_bestaker_',
  );
  $handler->display->display_options['displays'] = array(
    'panel_pane_1' => 'panel_pane_1',
    'default' => 0,
  );
  $translatables['con_bestaker'] = array(
    t('Master'),
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
    t('Imagen'),
    t('Content pane'),
    t('hola'),
    t('Por qué, Con Bestaker '),
    t('View panes'),
    t('Attachment'),
  );
  $export['con_bestaker'] = $view;

  $view = new view();
  $view->name = 'feeds_home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'feeds_home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Contenidos */
  $handler->display->display_options['fields']['field_feed_contenido']['id'] = 'field_feed_contenido';
  $handler->display->display_options['fields']['field_feed_contenido']['table'] = 'field_data_field_feed_contenido';
  $handler->display->display_options['fields']['field_feed_contenido']['field'] = 'field_feed_contenido';
  $handler->display->display_options['fields']['field_feed_contenido']['label'] = '';
  $handler->display->display_options['fields']['field_feed_contenido']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feed_contenido']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_feed_link']['id'] = 'field_feed_link';
  $handler->display->display_options['fields']['field_feed_link']['table'] = 'field_data_field_feed_link';
  $handler->display->display_options['fields']['field_feed_link']['field'] = 'field_feed_link';
  $handler->display->display_options['fields']['field_feed_link']['label'] = '';
  $handler->display->display_options['fields']['field_feed_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feed_link']['element_default_classes'] = FALSE;
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
    'feeds_portada' => 'feeds_portada',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Feeds home';
  $translatables['feeds_home'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content pane'),
    t('Feeds home'),
    t('View panes'),
  );
  $export['feeds_home'] = $view;

  $view = new view();
  $view->name = 'proyectos_home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Proyectos home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Descripción corta */
  $handler->display->display_options['fields']['field_proyecto_descripcion']['id'] = 'field_proyecto_descripcion';
  $handler->display->display_options['fields']['field_proyecto_descripcion']['table'] = 'field_data_field_proyecto_descripcion';
  $handler->display->display_options['fields']['field_proyecto_descripcion']['field'] = 'field_proyecto_descripcion';
  $handler->display->display_options['fields']['field_proyecto_descripcion']['label'] = '';
  $handler->display->display_options['fields']['field_proyecto_descripcion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proyecto_descripcion']['element_default_classes'] = FALSE;
  /* Field: Content: Imagen Listados */
  $handler->display->display_options['fields']['field_proyecto_imagen']['id'] = 'field_proyecto_imagen';
  $handler->display->display_options['fields']['field_proyecto_imagen']['table'] = 'field_data_field_proyecto_imagen';
  $handler->display->display_options['fields']['field_proyecto_imagen']['field'] = 'field_proyecto_imagen';
  $handler->display->display_options['fields']['field_proyecto_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_proyecto_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_proyecto_imagen']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_proyecto_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_proyecto_imagen']['settings'] = array(
    'image_style' => '350x',
    'image_link' => '',
  );
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
    'proyecto' => 'proyecto',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['proyectos_home'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content pane'),
    t('View panes'),
  );
  $export['proyectos_home'] = $view;

  $view = new view();
  $view->name = 'slide_principal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slide_principal';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '8000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 0;
  $handler->display->display_options['style_options']['pause'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Descripción */
  $handler->display->display_options['fields']['field_slide_descripcion']['id'] = 'field_slide_descripcion';
  $handler->display->display_options['fields']['field_slide_descripcion']['table'] = 'field_data_field_slide_descripcion';
  $handler->display->display_options['fields']['field_slide_descripcion']['field'] = 'field_slide_descripcion';
  $handler->display->display_options['fields']['field_slide_descripcion']['label'] = '';
  $handler->display->display_options['fields']['field_slide_descripcion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_descripcion']['element_default_classes'] = FALSE;
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_slide_imagen']['id'] = 'field_slide_imagen';
  $handler->display->display_options['fields']['field_slide_imagen']['table'] = 'field_data_field_slide_imagen';
  $handler->display->display_options['fields']['field_slide_imagen']['field'] = 'field_slide_imagen';
  $handler->display->display_options['fields']['field_slide_imagen']['label'] = '';
  $handler->display->display_options['fields']['field_slide_imagen']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_imagen']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_imagen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slide_imagen']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Descripción Apuntate */
  $handler->display->display_options['fields']['field_slide_descripcion_apuntate']['id'] = 'field_slide_descripcion_apuntate';
  $handler->display->display_options['fields']['field_slide_descripcion_apuntate']['table'] = 'field_data_field_slide_descripcion_apuntate';
  $handler->display->display_options['fields']['field_slide_descripcion_apuntate']['field'] = 'field_slide_descripcion_apuntate';
  $handler->display->display_options['fields']['field_slide_descripcion_apuntate']['label'] = '';
  $handler->display->display_options['fields']['field_slide_descripcion_apuntate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_descripcion_apuntate']['element_default_classes'] = FALSE;
  /* Field: Content: Enlace Apuntate */
  $handler->display->display_options['fields']['field_slide_enlace_apuntate']['id'] = 'field_slide_enlace_apuntate';
  $handler->display->display_options['fields']['field_slide_enlace_apuntate']['table'] = 'field_data_field_slide_enlace_apuntate';
  $handler->display->display_options['fields']['field_slide_enlace_apuntate']['field'] = 'field_slide_enlace_apuntate';
  $handler->display->display_options['fields']['field_slide_enlace_apuntate']['label'] = '';
  $handler->display->display_options['fields']['field_slide_enlace_apuntate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_enlace_apuntate']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_enlace_apuntate']['click_sort_column'] = 'url';
  /* Field: Content: Enlace noticia */
  $handler->display->display_options['fields']['field_slide_enlace_noticia']['id'] = 'field_slide_enlace_noticia';
  $handler->display->display_options['fields']['field_slide_enlace_noticia']['table'] = 'field_data_field_slide_enlace_noticia';
  $handler->display->display_options['fields']['field_slide_enlace_noticia']['field'] = 'field_slide_enlace_noticia';
  $handler->display->display_options['fields']['field_slide_enlace_noticia']['label'] = '';
  $handler->display->display_options['fields']['field_slide_enlace_noticia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_enlace_noticia']['click_sort_column'] = 'url';
  /* Field: Content: Descripción noticia */
  $handler->display->display_options['fields']['field_slide_descripcion_noticia']['id'] = 'field_slide_descripcion_noticia';
  $handler->display->display_options['fields']['field_slide_descripcion_noticia']['table'] = 'field_data_field_slide_descripcion_noticia';
  $handler->display->display_options['fields']['field_slide_descripcion_noticia']['field'] = 'field_slide_descripcion_noticia';
  $handler->display->display_options['fields']['field_slide_descripcion_noticia']['label'] = '';
  $handler->display->display_options['fields']['field_slide_descripcion_noticia']['element_label_colon'] = FALSE;
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
    'slide_principal' => 'slide_principal',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['field_language'] = '***DEFAULT_LANGUAGE***';
  $handler->display->display_options['pane_title'] = 'Silde Principal';
  $handler->display->display_options['pane_description'] = 'Slide principal de la portada';
  $translatables['slide_principal'] = array(
    t('Master'),
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
    t('Content pane'),
    t('Silde Principal'),
    t('Slide principal de la portada'),
    t('View panes'),
  );
  $export['slide_principal'] = $view;

  return $export;
}
