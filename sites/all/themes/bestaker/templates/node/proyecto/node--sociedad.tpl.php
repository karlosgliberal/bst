<article<?php print $attributes; ?> id="ficha-sociedad">
    <div class="container">
      <div class="row">
        <h1 class="h1"><?php print $node->title ?></h1>
      </div>
      <div class="row">
        <div class="col-md-8">
          <?php print drupal_render($content['field_sociedad_descripcion']); ?>
          <?php print drupal_render($content['field_sociedad_datos_resumen']); ?>
          <a class="" data-toggle="collapse" data-target="#sociedad-datos-completos">
            <?php echo t('Más información');?>
          </a>
          <div id="sociedad-datos-completos" class="collapse">
            <?php print drupal_render($content['field_sociedad_datos_full']); ?>
          </div>
        </div>
        <div class="col-md-4">
         <div id="sociedad-menu" >
          <ul class="sociedad-menu-items">
            <li class="first active"><a href="#sociedad-descripcion"><?php echo t('Presentación');?></a></li>
            <li class=""><a href="#sociedad-capital"><?php echo t('Capital');?></a></li>
            <li class=""><a href="#sociedad-socios"><?php echo t('Socios');?></a></li>
            <li class=""><a href="#sociedad-juntas"><?php echo t('Juntas');?></a></li>
          </ul>
        </div>
        </div>
      </div>
    </div>
</article>
