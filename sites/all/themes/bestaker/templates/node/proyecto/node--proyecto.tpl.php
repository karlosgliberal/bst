<?php
  $wrapper = entity_metadata_wrapper('node', $node);
  $bk_img = $wrapper->field_proyecto_imagen_deep->value();
?>
<article<?php print $attributes; ?> id="ficha-proyecto">
  <div class="deepbanner" style="background-image:url('<?php print(file_create_url($bk_img['uri']))?>')">
    <div class="container">
      <div class="row">
        <div class="col-sm-5 col-md-4 col-lg-5">
          <h1 class="h1"><?php print $node->title ?></h1>
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
          <div id="numero-inversores" class="circle sm">
            <div class="wrapper">
              <strong class="number">55</strong>
              <p><strong>Inversores</strong> han participado</p>
            </div>
          </div>
          <div id="capital-captado" class="circle lg">
            <div class="wrapper">
              <strong class="number">120.000€</strong>
              <p>de <strong>capital captado</strong></p>
            </div>
          </div>
        </div>
      </div>
    </div>
    <div id="ronda-inversion">
      <div class="container">
        <div class="row">
          <div class="col-sm-4 col-md-4 col-md-offset-1 col-lg-3 col-lg-offset-2">
            <h2 class="h2"><strong>7ª</strong> ronda de inversión</h2>    
          </div>
          <div class="col-sm-8 col-md-6 col-lg-5">
            <p>Quedan <strong>12 días</strong> para que finalice este tramo <span class="glyphicon glyphicon-info-sign"></span></p>    
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="container">
    <nav id="project-menu" role="navigation" class="navbar navbar-default">
      <ul class="nav navbar-nav hidden-xs">
        <li class="first leaf"><a href="#proyecto-descripcion"><?php echo t('Descripción del proyecto');?></a></li>
        <li class="leaf"><a href="#proyecto-hitos"><?php echo t('Hitos');?></a></li>
        <li class="leaf"><a href="#proyecto-equipo"><?php echo t('Equipo');?></a></li>
        <li class="leaf"><a href="#proyecto-noticias"><?php echo t('Noticias');?></a></li>
        <li class="leaf"><a href="#proyecto-dudas"><?php echo t('Dudas');?></a></li>
        <li class="leaf"><a href="#proyecto-sociedades"><?php echo t('Sociedades');?></a></li>
      </ul>
      <button type="button" class="btn btn-default navbar-btn"><span class="glyphicon glyphicon-plus-sign"></span> 
        <?php print drupal_render($content['flag_seguir_proyecto']); ?>
      </button>
      <button type="button" class="btn btn-default navbar-btn">Invertir en el proyecto</button>
    </nav>
  </div>

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
