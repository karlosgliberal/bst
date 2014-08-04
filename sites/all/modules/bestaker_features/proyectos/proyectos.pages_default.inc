<?php
/**
 * @file
 * proyectos.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function proyectos_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing Proyecto - Publico',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'proyecto' => 'proyecto',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bestaker_onecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'silde' => NULL,
      'seccion_dos' => NULL,
      'seccion_trs' => NULL,
      'secci__n_cuatro' => NULL,
      'secci__n_cinco' => NULL,
      'secci__n_seis' => NULL,
      'secci__n_siete' => NULL,
      'top' => NULL,
      'left' => array(),
      'right' => NULL,
      'bottom' => NULL,
      'middle' => array(),
      'one' => array(
        'class' => 'proyecto-seccion-deepbanner',
      ),
      'two' => array(
        'class' => 'proyecto-seccion-hitos',
      ),
      'three' => array(
        'class' => 'proyecto-seccion-noticias',
      ),
      'four' => array(
        'class' => 'proyecto-seccion-equipo',
      ),
      'five' => array(),
      'six' => array(),
      'seven' => array(),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'one' => array(
      'style' => 'bestaker_panels_region',
    ),
    'three' => array(
      'style' => 'bestaker_panels_region',
    ),
    'four' => array(
      'style' => 'bestaker_panels_region',
    ),
    'style' => 'bestaker_panels_region',
    'two' => array(
      'style' => 'bestaker_panels_region',
    ),
    'five' => array(
      'style' => 'bestaker_panels_region',
    ),
    'six' => array(
      'style' => 'bestaker_panels_region',
    ),
    'seven' => array(
      'style' => 'bestaker_panels_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6a0c8e26-3793-48d6-93ac-c5f6fcad95e9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-18bf661a-83d6-4689-8615-dd01fcf73be1';
    $pane->panel = 'four';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Proyecto - bloque titulo - noticias',
      'title' => '',
      'body' => '<div class="container" id="proyecto-noticias">
<div class="row">
<div class="col-md-12 center">
<h2 class="titular-con-bestaker">Qué dicen de <span class="titular-blue">Nosotros</span></h2>

<p class="sub-titulo-bestaker uppercase">Lorem ipsum dolor set, Lorem set Lorem ipsum dolor set, Lorem setLorem ipsum dolor set, Lorem setLorem ipsum dolor set, Lorem setLorem ipsum dolor set, Lorem set Lorem ipsum dolor set, Lorem setLorem ipsum dolor set, Lorem setLorem ipsum dolor set, Lorem set.</p>

<div class="wrapper-line">
<div class="line line-black">&nbsp;</div>

<div class="line line-blue">&nbsp;</div>
</div>
</div>
</div>
</div>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'bestaker_panels_region',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '18bf661a-83d6-4689-8615-dd01fcf73be1';
    $display->content['new-18bf661a-83d6-4689-8615-dd01fcf73be1'] = $pane;
    $display->panels['four'][0] = 'new-18bf661a-83d6-4689-8615-dd01fcf73be1';
    $pane = new stdClass();
    $pane->pid = 'new-c6fe5927-7d29-4e1e-a438-b36bf3d2adbb';
    $pane->panel = 'four';
    $pane->type = 'views';
    $pane->subtype = 'proyecto_listado_noticias';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'bestaker_panels_region',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c6fe5927-7d29-4e1e-a438-b36bf3d2adbb';
    $display->content['new-c6fe5927-7d29-4e1e-a438-b36bf3d2adbb'] = $pane;
    $display->panels['four'][1] = 'new-c6fe5927-7d29-4e1e-a438-b36bf3d2adbb';
    $pane = new stdClass();
    $pane->pid = 'new-bfd5f29a-078a-45f9-b29c-dd0fc1480440';
    $pane->panel = 'one';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'bestaker_panels_region',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bfd5f29a-078a-45f9-b29c-dd0fc1480440';
    $display->content['new-bfd5f29a-078a-45f9-b29c-dd0fc1480440'] = $pane;
    $display->panels['one'][0] = 'new-bfd5f29a-078a-45f9-b29c-dd0fc1480440';
    $pane = new stdClass();
    $pane->pid = 'new-baa8b9f2-7aa3-4a8c-86fb-0534fc27e06a';
    $pane->panel = 'three';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="container" id="proyecto-equipo">
<div class="row">
<div class="col-md-12 center">
<h2 class="titular-con-bestaker">Nuestro equipo <span class="titular-blue">Davalor</span></h2>

<p class="sub-titulo-bestaker uppercase">Lorem ipsum dolor set, Lorem set</p>

<div class="wrapper-line">
<div class="line line-black">&nbsp;</div>

<div class="line line-blue">&nbsp;</div>
</div>
</div>
</div>
</div>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'bestaker_panels_region',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'baa8b9f2-7aa3-4a8c-86fb-0534fc27e06a';
    $display->content['new-baa8b9f2-7aa3-4a8c-86fb-0534fc27e06a'] = $pane;
    $display->panels['three'][0] = 'new-baa8b9f2-7aa3-4a8c-86fb-0534fc27e06a';
    $pane = new stdClass();
    $pane->pid = 'new-c8c26517-ae0e-4ba1-8c0c-da2dd6e22917';
    $pane->panel = 'three';
    $pane->type = 'views';
    $pane->subtype = 'proyecto_listado_equipo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'bestaker_panels_region',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c8c26517-ae0e-4ba1-8c0c-da2dd6e22917';
    $display->content['new-c8c26517-ae0e-4ba1-8c0c-da2dd6e22917'] = $pane;
    $display->panels['three'][1] = 'new-c8c26517-ae0e-4ba1-8c0c-da2dd6e22917';
    $pane = new stdClass();
    $pane->pid = 'new-6a87c4bd-4e86-42c0-be84-8d4b9a1a8506';
    $pane->panel = 'two';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="container" id="proyecto-hitos">
<div class="row">
<div class="col-md-12 center">
<h2 class="titular-con-bestaker"><span class="titular-blue">Hitos</span> del proyecto</h2>

<p class="sub-titulo-bestaker uppercase">Lorem ipsum dolor set, Lorem set Lorem ipsum dolor set, Lorem setLorem ipsum dolor set, Lorem set</p>

<div class="wrapper-line">
<div class="line line-black">&nbsp;</div>

<div class="line line-blue">&nbsp;</div>
</div>
</div>
</div>
</div>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'bestaker_panels_region',
      'settings' => array(),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a87c4bd-4e86-42c0-be84-8d4b9a1a8506';
    $display->content['new-6a87c4bd-4e86-42c0-be84-8d4b9a1a8506'] = $pane;
    $display->panels['two'][0] = 'new-6a87c4bd-4e86-42c0-be84-8d4b9a1a8506';
    $pane = new stdClass();
    $pane->pid = 'new-1855a42a-1a3c-4129-9d09-b17f316e2a87';
    $pane->panel = 'two';
    $pane->type = 'views';
    $pane->subtype = 'proyecto_timeline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'bestaker_panels_region',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1855a42a-1a3c-4129-9d09-b17f316e2a87';
    $display->content['new-1855a42a-1a3c-4129-9d09-b17f316e2a87'] = $pane;
    $display->panels['two'][1] = 'new-1855a42a-1a3c-4129-9d09-b17f316e2a87';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
