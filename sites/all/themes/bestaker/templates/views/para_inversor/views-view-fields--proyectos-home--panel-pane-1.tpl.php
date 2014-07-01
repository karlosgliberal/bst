<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
  <div class="container">
    <div class="row">
      <div class="col-md-12">
         <h3 class="uppercase center titular-proyectos">
          <span class="titular-proyectos-home">
          <span class="titular-proyectos-home-dos blue"><?php print t('Proyectos'); ?></span></span> </h3>
        <div class="col-sm-4 col-md-4 mt30 np">
          <div class="videos-proyectos-wrapper mt20"><img typeof="foaf:Image" src="http://karazan.interzonas.info/sites/default/files/styles/350x/public/<?php print $row->field_field_proyecto_imagen[0]['raw']['filename']; ?>" alt=""></div>

        </div>
        <div class="col-sm-8 col-md-8 mt30">
          <h3 class="titular-proyectos-item"><?php print $row->node_title; ?></h3>
          <?php print $row->field_field_proyecto_descripcion[0]['rendered']['#markup'] ?>
          
        </div>
      </div>
    </div>
 </div>
