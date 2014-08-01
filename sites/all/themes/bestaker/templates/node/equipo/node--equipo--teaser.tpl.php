<?php print drupal_render($content['field_equipo_foto']); ?>

<h3><?php print $node->title; ?></h3>
<p class="cargo"><?php print drupal_render($content['field_equipo_cargo']); ?></p>
<p class="description"><?php print drupal_render($content['field_equipo_resumen']); ?></p>

<a href="<?php print drupal_render($content['field_equipo_twitter']); ?>" class="twitter">Twitter</a>
<a href="<?php print drupal_render($content['field_equipo_linked_in']); ?>" class="twitter">LinkedIn</a>
