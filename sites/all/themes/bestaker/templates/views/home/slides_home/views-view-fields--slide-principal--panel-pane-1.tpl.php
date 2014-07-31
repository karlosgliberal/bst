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
// dpm($row);
?>

<div class="slide-home" style="background-image:url(/sites/default/files/<?php print $row->field_field_slide_imagen[0]['rendered']['#item']['filename']; ?>);">
  <div class="container">
      <div class="row">
        <div class="col-md-12 center inner-65">
          <h2 class="slide-big shadow"><?php print $row->node_title ?></h2>
           <div class="slide-texto shadow mt30">
            <?php print $row->field_field_slide_descripcion[0]['rendered']['#markup']; ?>
          </div>
        </div>
      </div>
    </div>
   <?php if (!empty($row->field_field_slide_descripcion_apuntate[0]['rendered']['#markup'])): ?>
    <div class="wrapper-apuntate inner-30">
      <div class="container">
        <div class="row">
          <div class="col-md-12" >
            <div class=" col-md-8 texto-apuntate">
              <?php print $row->field_field_slide_descripcion_apuntate[0]['rendered']['#markup']; ?>
            </div>
            <div class="col-md-4 boton-apuntate center mt10">
              <a class="btn btn-blue btn-large" href="<?php print $row->field_field_slide_enlace_apuntate[0]['raw']['url']; ?>"><?php print $row->field_field_slide_enlace_apuntate[0]['raw']['title']; ?></a>
            </div>
          </div>
        </div>
    </div>
  </div>
  <?php elseif(!empty($row->field_field_slide_descripcion_noticia[0]['rendered']['#markup'])): ?>
<!---Noticia -->
    <div class="wrapper-apuntate-noticia inner-30">
      <div class="container">
        <div class="row">
          <div class="col-md-12" >
            <div class="col-sm-8 col-md-8 texto-apuntate shadow">
              <?php print $row->field_field_slide_descripcion_noticia[0]['rendered']['#markup']; ?>
            </div>
            <div class="col-sm-4 col-md-4 boton-apuntate center mt10">
              <a class="btn btn-blue btn-large" href="<?php print $row->field_field_slide_enlace_noticia[0]['raw']['url']; ?>"><?php print $row->field_field_slide_enlace_noticia[0]['raw']['title']; ?></a>
            </div>
          </div>
        </div>
    </div>
  </div>
  <?php else: ?>
    <div class="home-slide-divide"> </div>
  <?php endif ?>
</div>









