<?php
/**
 * @file
 * sociedades.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function sociedades_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Landing Sociedad',
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
              'sociedad' => 'sociedad',
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
      'default' => NULL,
      'one' => NULL,
      'two' => NULL,
      'three' => NULL,
      'four' => NULL,
      'five' => NULL,
      'six' => NULL,
      'seven' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '71a51218-9e90-43da-adcb-804665f30ee7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8c577ffa-48e3-4af9-8496-b06147951ed3';
    $pane->panel = 'one';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 1,
      ),
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
    $pane->uuid = '8c577ffa-48e3-4af9-8496-b06147951ed3';
    $display->content['new-8c577ffa-48e3-4af9-8496-b06147951ed3'] = $pane;
    $display->panels['one'][0] = 'new-8c577ffa-48e3-4af9-8496-b06147951ed3';
    $pane = new stdClass();
    $pane->pid = 'new-9ba1d678-a68f-49c0-8d4e-f5510109ffb8';
    $pane->panel = 'three';
    $pane->type = 'views_panes';
    $pane->subtype = 'sociedad_listado_de_junta-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ba1d678-a68f-49c0-8d4e-f5510109ffb8';
    $display->content['new-9ba1d678-a68f-49c0-8d4e-f5510109ffb8'] = $pane;
    $display->panels['three'][0] = 'new-9ba1d678-a68f-49c0-8d4e-f5510109ffb8';
    $pane = new stdClass();
    $pane->pid = 'new-9136938b-d782-4357-8c04-2d1884db60a0';
    $pane->panel = 'two';
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
    $pane->uuid = '9136938b-d782-4357-8c04-2d1884db60a0';
    $display->content['new-9136938b-d782-4357-8c04-2d1884db60a0'] = $pane;
    $display->panels['two'][0] = 'new-9136938b-d782-4357-8c04-2d1884db60a0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}
