<article<?php print $attributes; ?> id="sociedad-juntas">
    <div class="container">
      <div class="row">
        <div id="sociedad-juntas">
          <div class="col-md-10">
            <h3 class="titular-con-bestaker center"><?php echo t('Juntas');?></h3>
            <div class="wrapper-line">
              <div class="line line-black">&nbsp;</div>
              <div class="line line-blue">&nbsp;</div>
            </div>
            <?php print drupal_render($content['field_junta_descripcion']); ?>
            <?php print drupal_render($content['field_junta_adjuntos']); ?>
          </div>
        </div>
      </div>
    </div>
</article>
