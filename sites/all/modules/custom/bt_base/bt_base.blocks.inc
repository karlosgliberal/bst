<?php
function bt_base_block_info() {
  $blocks['footer'] = array(
    'info' => t('Footer general'),
    'weight' => '1',
    'cache' => DRUPAL_CACHE_GLOBAL,
  );
  return $blocks;
}

/**
 * Implements hook_block_view().
 *
 * This hook generates the contents of the blocks themselves.
 */
function bt_base_block_view($delta = '') {
  $block = array(
    'subject' => NULL,
    'content' => NULL,
  );

  switch ($delta) {
    case 'footer':
      $block['content'] = theme('footer');
      break;
  }
  return $block;
}
