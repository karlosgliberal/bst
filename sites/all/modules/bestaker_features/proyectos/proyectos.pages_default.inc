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
  $display->layout = 'flexible:home';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'silde' => NULL,
      'seccion_dos' => NULL,
      'seccion_trs' => NULL,
      'secci__n_cuatro' => NULL,
      'secci__n_cinco' => NULL,
      'secci__n_seis' => NULL,
      'secci__n_siete' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6a0c8e26-3793-48d6-93ac-c5f6fcad95e9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bfd5f29a-078a-45f9-b29c-dd0fc1480440';
    $pane->panel = 'silde';
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
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bfd5f29a-078a-45f9-b29c-dd0fc1480440';
    $display->content['new-bfd5f29a-078a-45f9-b29c-dd0fc1480440'] = $pane;
    $display->panels['silde'][0] = 'new-bfd5f29a-078a-45f9-b29c-dd0fc1480440';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}
