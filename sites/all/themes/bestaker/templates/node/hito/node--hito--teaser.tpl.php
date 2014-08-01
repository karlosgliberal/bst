<div class="timeline-heading">
  <p class="fecha"><?php print drupal_render($content['field_hito_fecha']); ?></p>
  <h3 class="timeline-title"><a href="/node/<?php echo $node->nid;?>/edit"><?php print $node->title; ?></a></h3>
</div>
<div class="timeline-body">
  <?php print drupal_render($content['field_hito_entradilla']); ?>
  <?php print drupal_render($content['field_hito_imagen']); ?>
</div>