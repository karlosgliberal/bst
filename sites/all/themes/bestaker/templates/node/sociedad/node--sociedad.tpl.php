<article<?php print $attributes; ?> id="ficha-sociedad">
    <div class="container">
      <div class="row">
        <h2 class="titular-con-bestaker center"><?php print $node->title ?></h2>
        <div class="wrapper-line">
          <div class="line line-black">&nbsp;</div>
          <div class="line line-blue">&nbsp;</div>
        </div>
      </div>
      <div class="row">
        <div id="sociedad-descripcion" class="col-md-10 mt20">
          <?php print drupal_render($content['field_sociedad_descripcion']); ?>
          <?php print drupal_render($content['field_sociedad_datos_resumen']); ?>
          <div class="sociedad-mas-info">
            <a data-toggle="collapse" data-target="#sociedad-datos-completos">
              <?php echo t('Más información');?>
            </a>
          </div>
          <div id="sociedad-datos-completos" class="collapse">
            <?php print drupal_render($content['field_sociedad_datos_full']); ?>
          </div>

          <div id="sociedad-capital">
            <h3 class="titular-con-bestaker center"><?php echo t('Capital');?></h3>
            <div class="wrapper-line">
               <div class="line line-black">&nbsp;</div>
               <div class="line line-blue">&nbsp;</div>
            </div>
            <?php print drupal_render($content['field_sociedad_capital']); ?>
          </div>

          <div id="sociedad-socios">
            <h3 class="titular-con-bestaker center"><?php echo t('Socios');?></h3>
            <div class="wrapper-line">
               <div class="line line-black">&nbsp;</div>
               <div class="line line-blue">&nbsp;</div>
            </div>
             <?php print drupal_render($content['field_sociedad_socios']); ?>
          </div>  
        </div>
        <div class="col-md-2 hidden-xs mt20">
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
