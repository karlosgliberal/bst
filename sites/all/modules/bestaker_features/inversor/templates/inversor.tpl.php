<?php

/**
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
      <dt>ID:</dt><dd><?php print $inversor->id; ?></dd>
      <dt>tipo_identificacion:</dt><dd><?php print $inversor->tipo_identificacion; ?></dd>
      <dt>identificacion:</dt><dd><?php print $inversor->identificacion; ?></dd>
      <dt>nombre:</dt><dd><?php print $inversor->nombre; ?></dd>
      <dt>apellidos:</dt><dd><?php print $inversor->apellidos; ?></dd>
      <dt>email:</dt><dd><?php print $inversor->email; ?></dd>
      <dt>direccion:</dt><dd><?php print $inversor->direccion; ?></dd>
      <dt>poblacion:</dt><dd><?php print $inversor->poblacion; ?></dd>
      <dt>cp:</dt><dd><?php print $inversor->cp; ?></dd>
      <dt>provincia:</dt><dd><?php print $inversor->provincia; ?></dd>
      <dt>newsletter:</dt><dd><?php print $inversor->newsletter; ?></dd>
      <dt>estado_civil:</dt><dd><?php print $inversor->estado_civil; ?></dd>
      <dt>regimen:</dt><dd><?php print $inversor->regimen; ?></dd>
      <dt>nombre_conyuge:</dt><dd><?php print $inversor->nombre_conyuge; ?></dd>
      <dt>invertir_como_empresa:</dt><dd><?php print $inversor->invertir_como_empresa; ?></dd>
      <dt>nombre_empresa:</dt><dd><?php print $inversor->nombre_empresa; ?></dd>
      <dt>domicilio_social:</dt><dd><?php print $inversor->domicilio_social; ?></dd>
      <dt>cif:</dt><dd><?php print $inversor->cif; ?></dd>
      <dt>created:</dt><dd><?php print $inversor->created; ?></dd>
      <dt>changed:</dt><dd><?php print $inversor->changed; ?></dd>
    </dl>
  </div>
</div>
