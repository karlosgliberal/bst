<article<?php print $attributes; ?> id="ficha-junta">
    <div class="container">
      <div class="row">
        <h3 class="h1"><?php print $node->title ?></h3>
      </div>
      <div class="row">
        <div class="col-md-12">
          <?php print drupal_render($content['field_junta_descripcion']); ?>
          <?php print drupal_render($content['field_junta_adjuntos']); ?>
        </div>
      </div>
    </div>
</article>
