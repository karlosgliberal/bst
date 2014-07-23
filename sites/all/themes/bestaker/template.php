<?php
/**
 * @file
 * template.php
 */
function bestaker_preprocess_page(&$variables) {
  if (!drupal_is_front_page()) {
    $variables['primary_nav'] = FALSE; //menu_tree(variable_get('menu_main_links_source', 'main-menu'));
  }
}


function phptemplate_menu_item_link($item, $link_item) {
  // Convert anchors in path to proper fragment
  $path = explode('#', $link_item['path'], 2);
  $fragment = !empty($path[1]) ? $path[1] : NULL;
  $path = $path[0];
  return l(
            $item['title'],
            $path,
            !empty($item['description']) ? array('title' => $item['description']) : array(),
            !empty($item['query']) ? $item['query'] : NULL,
            $fragment,
            FALSE,
            FALSE
          );
}

/**
 *  * Bootstrap theme wrapper function for the primary menu links.
 *   */
function bestaker_menu_tree__primary(&$variables) {
  return '<div class="menu-derecha"><ul class="menu nav navbar-nav">' . $variables['tree'] . '</ul></div>';
}

function nov_strap_button($variables) {
  $excluded_ids = array(
    'edit-refresh',
    'edit-pass-pass1',
    'edit-pass-pass2',
    'panels-ipe-cancel',
    'panels-ipe-customize-page',
    'panels-ipe-save',
    'edit-submit-scald-library' // Here the id of search btn
  );
  $element_id = $variables['element']['#id'];
  $bootstrap_ok = (in_array($element_id, $excluded_ids))? FALSE : TRUE;  
  if($bootstrap_ok) {
    $element = $variables['element'];
    $label = $element['#value'];
    element_set_attributes($element, array('id', 'name', 'value', 'type'));
    // If a button type class isn't present then add in default.
    $button_classes = array(
      'btn-default',
      'btn-primary',
      'btn-success',
      'btn-info',
      'btn-warning',
      'btn-danger',
      'btn-link',
    );
    $class_intersection = array_intersect($button_classes, $element['#attributes']['class']);
    if (empty($class_intersection)) {
      $element['#attributes']['class'][] = 'btn-default';
    }
    // Add in the button type class.
    $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
    // This line break adds inherent margin between multiple buttons.
    return '<button' . drupal_attributes($element['#attributes']) . '>' . $label . "</button>\n";
  }
  else {
    return theme_button($variables);
  }
}
