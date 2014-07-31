<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('One Column Stacked'),
  'category' => t('Bestaker'),
  'icon' => 'bestaker_onecol_stacked.png',
  'theme' => 'bestaker_onecol_stacked',
  'admin css' => '../panels-bestaker-layouts-admin.css',
  'regions' => array(
    'one' => t('One'),
    'two' => t('Two'),
    'three' => t('Three'),
    'four' => t('Four'),
    'five' => t('Five'),
    'six' => t('Six'),
    'seven' => t('Seven'),
  ),
);
