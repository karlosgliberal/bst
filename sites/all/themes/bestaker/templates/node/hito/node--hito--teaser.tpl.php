<a href="<?php print drupal_render($content['field_noticia_url']); ?>">
  <h3><?php print $node->title; ?></h3>
  <p class="medio"><?php print drupal_render($content['field_noticia_medio']); ?></p>
  <p class="fecha"><?php print drupal_render($content['field_noticia_fecha']); ?></p>
  <?php print drupal_render($content['field_noticia_entradilla']); ?>
</a>