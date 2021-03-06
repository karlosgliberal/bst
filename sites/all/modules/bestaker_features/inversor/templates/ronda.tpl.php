<?php

/**
 *
 * https://www.drupal.org/node/1238606
 * http://www.trellon.com/content/blog/creating-own-entities-entity-api
 *
 * @file
 * A basic template for model entities
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The name of the model
 * - $url: The standard URL for viewing a model entity
 * - $page: TRUE if this is the main view page $url points too.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-profile
 *   - model-{TYPE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */

?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <dl class="dl-horizontal">
      <dt>ID:</dt><dd><?php print $ronda->id; ?></dd>
      <dt>nombre:</dt><dd><?php print $ronda->nombre; ?></dd>
      <dt>descripcion:</dt><dd><?php print $ronda->descripcion; ?></dd>
      <dt>created:</dt><dd><?php print $ronda->created; ?></dd>
      <dt>changed:</dt><dd><?php print $ronda->changed; ?></dd>
    </dl>
    <?php print render($content); ?>
  </div>
</div>
