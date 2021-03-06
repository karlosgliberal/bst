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
          <?php print drupal_render($content['field_proyecto_cifras']); ?>
        </div>
      </div>
    </div>
    <div id="ronda-inversion">
      <div class="container">
        <p>
          <span class="h2">
            <strong><?php print drupal_render($content['field_proyecto_ronda']); ?></strong>
            <?php print t('ronda de inversión'); ?>
          </span>
          <?php
            if (proyectos_ronda_terminada($node)) {
              print t('Ronda cerrada');
            } else {
              print t('Quedan <strong>!num_dias</strong> para que finalice este tramo',
                array('!num_dias' => drupal_render($content['field_proyecto_fecha_fin_ronda'])));
            }
          ?>

          <span class="glyphicon glyphicon-info-sign"
                data-container="body"
                data-toggle="popover"
                data-placement="top"
                data-content="<?php print t('Mostrará un texto que explique en que consisten los tramos y podrá incluir un enlace al Centro de ayuda para ampliar información');?>">
          </span>
        </p>
      </div>
    </div>
  </div>
  <div class="container" >
    <div class="row menu-proyecto" data-spy="affix" data-offset-top="532">
      <div class="col-lg-5 col-lg-push-7">
        <div id="follow-invest">
          <div class="row">
            <div class="col-sm-6 col-md-4 col-md-offset-2 col-lg-6 col-lg-offset-0">
              <button type="button" class="btn btn-default"><span class="glyphicon glyphicon-plus-sign"></span>
                <?php print drupal_render($content['flag_seguir_proyecto']); ?></button>
            </div>
            <div class="col-sm-6 col-md-4 col-lg-6">
              <button type="button" class="btn btn-primary">Invertir en el proyecto</button>
            </div>
          </div>
        </div>
      </div>
      <div class="col-lg-7 col-lg-pull-5 hidden-xs">
        <nav id="project-menu" role="navigation" class="navbar navbar-default">
          <ul class="nav navbar-nav yamm">
            <li class="first leaf active"><a href="#proyecto-descripcion"><?php echo t('Descripción del proyecto');?></a></li>
            <li class="leaf"><a href="#proyecto-hitos"><?php echo t('Hitos');?></a></li>
            <li class="leaf"><a href="#proyecto-equipo"><?php echo t('Equipo');?></a></li>
            <li class="leaf"><a href="#proyecto-noticias"><?php echo t('Noticias');?></a></li>
            <li class="leaf"><a href="#proyecto-dudas"><?php echo t('Dudas');?></a></li>
            <li class="dropdown yamm-fw">
                  <a href="#" class="dropdown-toggle" data-toggle="dropdown"><?php echo t('Sociedades');?></a>
                  <ul class="dropdown-menu">
                    <li class="mega-grid">
                        <div class="row">
                            <div class="col-md-6">
                              <div class="mega-inner">
                                <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit distinctio.<p>
                                <img class="img-responsive" src="http://placehold.it/350x150">
                                <p><a href=""><?php echo t('Más información');?></a><p>
                              </div>
                             </div>
                              <div class="col-md-6">
                                <div class="mega-inner">
                                  <?php print views_embed_view('proyecto_listado_de_sociedades','default', $node->nid); ?>
                                </div>
                              </div>
                         </div>
                        </div>
                    </li>
                  </ul>
            </li>
          </ul>
        </nav>
      </div>
    </div>
  </div>
  <?php
  $node_view = menu_get_object();
  if ($node_view && isset($node_view->nid) && $node_view->type == 'proyecto'): ?>
    <div class="para-inversor" id="proyecto-descripcion">
      <div class="container">

        <?php print drupal_render($content['field_proyecto_descripcion_larga']); ?>

        <a class="btn btn-sm btn-default pull-right" href="<?php print drupal_render($content['field_proyecto_pdf']); ?>">
            <span class="glyphicon glyphicon-download-alt"></span>  <?php echo t('Download Project Datasheet'); ?>
          </a>
      </div>
    </div>
  <?php endif; ?>
</article>
