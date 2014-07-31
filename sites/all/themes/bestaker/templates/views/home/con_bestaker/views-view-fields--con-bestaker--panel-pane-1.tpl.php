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

<!-- empieza item  -->

<div class="wrapper-items-con-bestaker">
  <div class="row">
    <div class="col-md-12">
      <h3 class="item-bestaker"><?php print $row->node_title; ?></h3>
    </div>
 </div>
 <div class="row">
    <div class="col-md-9 texto-con-bestaker">
        <?php print $row->field_field_con_bestaker_descripcion[0]['rendered']['#markup'] ?>
    </div>
    <div class="col-md-3">
      <a class="texto-largo-enlace icon-ver-mas" data-texto="<?php print $row->nid ?>" id="texto-largo-enlace-<?php print $row->nid ?>" href="text-largo-<?php print $row->nid ?>">Ver más</span></a>
    </div>
 </div>
</div>

 <div class="con-bestaker-item-<?php print $row->nid ?> item texto-grande">
    <div class="container pop-con-bestaker">
      <div class="row">
        <div class="col-md-12 wrapper-texto-grande inner-50"> 
          <div class="cerrar-item-home blue"><a class="cerrar-texto-grande-boton" href="#"><span class="glyphicon glyphicon-remove"></span></a></div>
          <div class="texto-grande-bestaker">
             <?php print $row->field_field_con_bestaker_texto_largo[0]['rendered']['#markup'] ?>
          </div>
         <div class="center black mt20">
            <a class="btn btn-blue mt20 cerrar-texto-grande-boton" href="#">Cerrar</a>
           </div>
        </div>
      </div>
    </div>
  </div>

