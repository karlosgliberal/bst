<?php
  $wrapper = entity_metadata_wrapper('node', $node);
  $bk_img = $wrapper->field_proyecto_imagen_deep->value();
?>
<article<?php print $attributes; ?> id="ficha-proyecto">
  <div class="deepbanner" style="background-image:url('<?php print(file_create_url($bk_img['uri']))?>')">
    <div class="container">
      <div class="row">
        <div class="col-sm-5 col-md-4 col-lg-5">
          <h1><?php print $node->title ?></h1>
          <div class="lead subtitle">
            <?php print drupal_render($content['field_proyecto_descripcion']); ?>
          </div>
        </div>
        <div class="col-sm-7 col-md-8 col-lg-7">
          <div id="inversion-minima" class="circle xs">
            <div class="wrapper">
              <strong class="number">300€</strong>
              <p><strong>Inversión</strong> mínima requerida</p>
            </div>
          </div>
          <div id="rentabilidad-prevista-2018" class="circle md">
            <div class="wrapper">
              <strong class="number">27x</strong>
              <p><strong>Rentabilidad</strong> prevista por dividendos <strong>2018</strong></p>
            </div>
          </div>
          <div id="rentabilidad-prevista-2017" class="circle sm">
            <div class="wrapper">
              <strong class="number">7.5x</strong>
              <p><strong>Rentabilidad</strong> prevista por dividendos <strong>2017</strong></p>
            </div>
          </div>
          <div id="ronda-inversion">
            <p><strong>7ª</strong> ronda de inversión</p>
          </div>
          <!--número de inversores?????
          capital captado ????
          Quedan 12 días para que finalice este tramo-->
        </div>
      </div>
    </div>
  </div>

  <nav role="navigation" class="container">
    <ul class="menu nav navbar-nav">
      <li class="first leaf"><a href="#proyecto-descripcion"><?php echo t('Descripción del proyecto');?></a></li>
      <li class="leaf"><a href="#proyecto-hitos"><?php echo t('Hitos');?></a></li>
      <li class="leaf"><a href="#proyecto-equipo"><?php echo t('Equipo');?></a></li>
      <li class="leaf"><a href="#proyecto-noticias"><?php echo t('Noticias');?></a></li>
      <li class="leaf"><a href="#proyecto-dudas"><?php echo t('Dudas');?></a></li>
      <li class="leaf"><a href="#proyecto-sociedades"><?php echo t('Sociedades');?></a></li>
    </ul>
  </nav>

  <div class="para-inversor" id="proyecto-descripcion">
    <div class="container">
      <?php print drupal_render($content['field_proyecto_descripcion_larga']); ?>

      <div class="pull-right">
        <a class="btn btn-blue btn-large" href="<?php print drupal_render($content['field_proyecto_pdf']); ?>">
          <span class="glyphicon glyphicon-download-alt"></span>  <?php echo t('Download Project Datasheet'); ?>
        </a>
      </div>
    </div>
  </div>
</article>
