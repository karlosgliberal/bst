<?php

/**
 * @file
 * Definition of the 'list' panel style.
 */

// Plugin definition
$plugin = array(
  'title' => t('Bestaker'),
  'description' => t('Bestaker panels settings.'),
  'render region' => 'panels_bt_base_style_region_render',
  'settings form' => 'panels_bt_base_style_region_settings_form',
);

/**
 * Render region callback.
 *
 * @ingroup themeable
 */
function theme_panels_bt_base_style_region_render($vars) {
  $panes = $vars['panes'];
  $settings = $vars['settings'];

  if ($panes) {
    if (isset($settings['class'])) {
      $class[] = $settings['class'];
    }

    $html = implode('', $panes);

    if (!empty($class)) {
      $class = implode(' ', $class);
      return "<div class='$class'>$html</div>";
    } else {
      return $html;
    }
  }
}

/**
 * Region settings form callback.
 */
function panels_bt_base_style_region_settings_form($style_settings, $display, $pid, $type, $form_state) {
  $form['class'] = array(
    '#title' => t('CSS Class'),
    '#type' => 'textfield',
    '#default_value' => isset($style_settings['class'])
        ? $style_settings['class']
        : '',
    '#size' => 50,
  );

  return $form;
}
