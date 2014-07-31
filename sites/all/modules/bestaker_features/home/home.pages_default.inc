<?php
/**
 * @file
 * home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bestaker_onecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'men__' => NULL,
      'silde' => NULL,
      'seccion_dos' => NULL,
      'seccion_trs' => NULL,
      'secci__n_cuatro' => NULL,
      'secci__n_cinco' => NULL,
      'secci__n_seis' => NULL,
      'secci__n_siete' => NULL,
      'secci__n_ocho' => NULL,
      'footer_3' => NULL,
      'footer_1' => NULL,
      'test' => NULL,
      'one' => array(
        'class' => 'slide-principal',
      ),
      'two' => array(
        'class' => 'con-bestaker inner-45',
      ),
      'three' => array(
        'class' => 'para-inversor inner-50',
      ),
      'four' => array(
        'class' => 'para-emprendedor inner-para-ti',
      ),
      'five' => array(
        'class' => 'inner-cero',
      ),
      'six' => array(
        'class' => 'novedades inner-50',
      ),
      'seven' => array(
        'class' => 'destacado-home parallax inner-45',
      ),
    ),
    'one' => array(
      'style' => 'bestaker_panels_region',
    ),
    'two' => array(
      'style' => 'bestaker_panels_region',
    ),
    'three' => array(
      'style' => 'bestaker_panels_region',
    ),
    'four' => array(
      'style' => 'bestaker_panels_region',
    ),
    'five' => array(
      'style' => 'bestaker_panels_region',
    ),
    'six' => array(
      'style' => 'bestaker_panels_region',
    ),
    'seven' => array(
      'style' => 'bestaker_panels_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e462c1c9-adb7-4d5f-9c7f-b7097faf796f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f98049d9-c0af-4a5f-ad44-db88f89a1332';
    $pane->panel = 'five';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '42',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f98049d9-c0af-4a5f-ad44-db88f89a1332';
    $display->content['new-f98049d9-c0af-4a5f-ad44-db88f89a1332'] = $pane;
    $display->panels['five'][0] = 'new-f98049d9-c0af-4a5f-ad44-db88f89a1332';
    $pane = new stdClass();
    $pane->pid = 'new-16d42ff7-bbe3-4062-ae74-0a0919a26295';
    $pane->panel = 'four';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Sección -Para tí, emprendedor- ES',
      'title' => '',
      'body' => '  <a name="emprendedores"></a><div class="container">
    <div class="row">
      <div class="col-md-12 center">
        <h2 class="titular-con-bestaker white">Para tí, <span class="titular-blue">emprendedor</span></h2>
        <p class="sub-titulo-bestaker uppercase white"> Lorem ipsum dolor set, Lorem set</p>
          <div class="line line-white"></div>
          <div class="line line-blue"></div>
      </div>
    </div>
  </div>
  <div class="container">
   <div class="mt60">
    <div class="row">
      <div class="col-sm-4 col-md-4 center">
        <div class="icon-wrapper-circle bg-blue">
             <span class="glyphicon glyphicon-ok-sign white"></span>
        </div>
        <div class="para-emprendedor-title mt40 mb10"><p>Qué debe cumplir el proyecto</p></div>
        <div class="para-emprendedor-texto"><p>Anim pariatur cliche reprehenderit, enim eiusmod high life accusamus terry richardson ad squid. 3 wolf moon cupidatat</p></div>
      </div>
      <div class="col-sm-4 col-md-4 center">
       <div class="icon-wrapper-circle bg-blue">
         <span class="glyphicon glyphicon-random white"></span>
      </div>
      <div class="para-emprendedor-title mt40 mb10"><p>Cuéntanos tu ídea</p></div>
      <div class="para-emprendedor-texto"><p>Anim pariatur cliche reprehenderit, enim eiusmod high life accusamus terry richardson ad squid. 3 wolf moon officia aute, non cupidatat</p></div>
      </div>
      <div class="col-sm-4 col-md-4 center">
        <div class="icon-wrapper-circle bg-blue">
         <span class="glyphicon glyphicon-eye-open white"></span>

        </div>
        <div class="para-emprendedor-title mt40 mb10"><p>Cuéntaselo a un emprendedor</p></div>
        <div class="para-emprendedor-texto"><p>Cliche reprehenderit, enim eiusmod high life accusamus terry richardson ad squid. 3 wolf moon officia aute, non cupidatat</p></div>
      </div>
      </div>
        <div class="row">
        <div class="col-md-12">
          <div class="btn-wrapper-emprendedor mt40">
            <a class="btn btn-blue btn-large" data-toggle="collapse" data-target="#formulario-home">Contactar con bestaker</a>
        </div>
        </div>
      </div>
  </div>
</div>
',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16d42ff7-bbe3-4062-ae74-0a0919a26295';
    $display->content['new-16d42ff7-bbe3-4062-ae74-0a0919a26295'] = $pane;
    $display->panels['four'][0] = 'new-16d42ff7-bbe3-4062-ae74-0a0919a26295';
    $pane = new stdClass();
    $pane->pid = 'new-fac3768c-8e9a-4795-b1c7-038f0034578c';
    $pane->panel = 'four';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Sección -Para tí emprendedor- ENG',
      'title' => '',
      'body' => '<a name="emprendedores"></a><div class="container">
    <div class="row">
      <div class="col-md-12 center">
        <h2 class="titular-con-bestaker white">Four you, <span class="titular-blue">ENTREPRENEUR</span></h2>
        <p class="sub-titulo-bestaker uppercase white"> Lorem ipsum dolor set, Lorem set</p>
          <div class="line line-white"></div>
          <div class="line line-blue"></div>
      </div>
    </div>
  </div>
  <div class="container">
   <div class="mt60">
    <div class="row">
      <div class="col-md-4 center">
        <div class="icon-wrapper-circle bg-blue">
             <span class="glyphicon glyphicon-ok-sign white"></span>
        </div>
        <div class="para-emprendedor-title mt40 mb10"><p>Qué debe cumplir el proyecto</p></div>
        <div class="para-emprendedor-texto"><p>Anim pariatur cliche reprehenderit, enim eiusmod high life accusamus terry richardson ad squid. 3 wolf moon cupidatat</p></div>
      </div>
      <div class="col-md-4 center">
       <div class="icon-wrapper-circle bg-blue">
         <span class="glyphicon glyphicon-random white"></span>
      </div>
      <div class="para-emprendedor-title mt40 mb10"><p>Cuéntanos tu ídea</p></div>
      <div class="para-emprendedor-texto"><p>Anim pariatur cliche reprehenderit, enim eiusmod high life accusamus terry richardson ad squid. 3 wolf moon officia aute, non cupidatat</p></div>
      </div>
      <div class="col-md-4 center">
        <div class="icon-wrapper-circle bg-blue">
         <span class="glyphicon glyphicon-eye-open white"></span>

        </div>
        <div class="para-emprendedor-title mt40 mb10"><p>Cuéntaselo a un emprendedor</p></div>
        <div class="para-emprendedor-texto"><p>Cliche reprehenderit, enim eiusmod high life accusamus terry richardson ad squid. 3 wolf moon officia aute, non cupidatat</p></div>
      </div>
      </div>
        <div class="row">
        <div class="col-md-12">
          <div class="btn-wrapper-emprendedor mt40">
            <a class="btn btn-blue btn-large" data-toggle="collapse" data-target="#formulario-home">Contactar con bestaker</a>
        </div>
        </div>
      </div>
  </div>
</div>
',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fac3768c-8e9a-4795-b1c7-038f0034578c';
    $display->content['new-fac3768c-8e9a-4795-b1c7-038f0034578c'] = $pane;
    $display->panels['four'][1] = 'new-fac3768c-8e9a-4795-b1c7-038f0034578c';
    $pane = new stdClass();
    $pane->pid = 'new-2bb1c7c5-5837-4085-b255-2dd02a6aaea0';
    $pane->panel = 'one';
    $pane->type = 'views_panes';
    $pane->subtype = 'slide_principal-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2bb1c7c5-5837-4085-b255-2dd02a6aaea0';
    $display->content['new-2bb1c7c5-5837-4085-b255-2dd02a6aaea0'] = $pane;
    $display->panels['one'][0] = 'new-2bb1c7c5-5837-4085-b255-2dd02a6aaea0';
    $pane = new stdClass();
    $pane->pid = 'new-c96d4a0a-fa90-4658-97c1-fcf356a58063';
    $pane->panel = 'seven';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Frase Bestaker -ES-',
      'title' => '',
      'body' => '  <div class="container">
    <div class="row">
      <div class="col-md-12 white">
        <div class="texto-destacado-home center">
          <p>"Loren ipsun dolor set, <strong>Bestaker</strong>"</p>
        </div>
        <div class="sub-texto-destacado-home center">
          <p>Loren ipsun dolor set, ipsun dolor set</p>
        </div>
      </div>
    </div>
  </div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c96d4a0a-fa90-4658-97c1-fcf356a58063';
    $display->content['new-c96d4a0a-fa90-4658-97c1-fcf356a58063'] = $pane;
    $display->panels['seven'][0] = 'new-c96d4a0a-fa90-4658-97c1-fcf356a58063';
    $pane = new stdClass();
    $pane->pid = 'new-fb8c67cf-18ed-457f-a87f-0622071be20b';
    $pane->panel = 'seven';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Frase Bestaker -ENG-',
      'title' => '',
      'body' => '<div class="container"><div class="row"><div class="col-md-12 white"><div class="texto-destacado-home center"><p>"eng Loren ipsun dolor set, <strong>Bestaker</strong>"</p></div><div class="sub-texto-destacado-home center"><p>Loren ipsun dolor set, ipsun dolor set</p></div></div></div></div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fb8c67cf-18ed-457f-a87f-0622071be20b';
    $display->content['new-fb8c67cf-18ed-457f-a87f-0622071be20b'] = $pane;
    $display->panels['seven'][1] = 'new-fb8c67cf-18ed-457f-a87f-0622071be20b';
    $pane = new stdClass();
    $pane->pid = 'new-d0d3bf17-9258-4fc2-a4d9-9bb463ea9518';
    $pane->panel = 'six';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Título sección Novedades -ES-',
      'title' => '',
      'body' => '<div class="container"><div class="row"><div class="col-md-12 center"><a name="noticias"></a><h2 class="titular-con-bestaker">Novedades en <span class="titular-blue">bestaker</span></h2><p class="sub-titulo-bestaker uppercase">Lorem ipsum dolor set, Lorem set umen tat</p><div class="wrapper-line">&nbsp;</div></div></div></div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0d3bf17-9258-4fc2-a4d9-9bb463ea9518';
    $display->content['new-d0d3bf17-9258-4fc2-a4d9-9bb463ea9518'] = $pane;
    $display->panels['six'][0] = 'new-d0d3bf17-9258-4fc2-a4d9-9bb463ea9518';
    $pane = new stdClass();
    $pane->pid = 'new-7c2825bf-e184-4a28-aa0c-2ee1b51a11a7';
    $pane->panel = 'six';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Título -sección Novedades- ENG',
      'title' => '',
      'body' => '<div class="container"><div class="row"><div class="col-md-12 center"><a name="noticias"></a><h2 class="titular-con-bestaker">News <span class="titular-blue">bestaker</span></h2><p class="sub-titulo-bestaker uppercase">Lorem ipsum dolor set, Lorem set umen tat</p><div class="wrapper-line">&nbsp;</div></div></div></div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7c2825bf-e184-4a28-aa0c-2ee1b51a11a7';
    $display->content['new-7c2825bf-e184-4a28-aa0c-2ee1b51a11a7'] = $pane;
    $display->panels['six'][1] = 'new-7c2825bf-e184-4a28-aa0c-2ee1b51a11a7';
    $pane = new stdClass();
    $pane->pid = 'new-f31b951f-514c-495d-8105-f84ae428fd8a';
    $pane->panel = 'six';
    $pane->type = 'views_panes';
    $pane->subtype = 'feeds_home-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f31b951f-514c-495d-8105-f84ae428fd8a';
    $display->content['new-f31b951f-514c-495d-8105-f84ae428fd8a'] = $pane;
    $display->panels['six'][2] = 'new-f31b951f-514c-495d-8105-f84ae428fd8a';
    $pane = new stdClass();
    $pane->pid = 'new-413e031f-21b3-4b11-86c1-e08a8d9bd36d';
    $pane->panel = 'three';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Título sección -Para tí inversor- ES',
      'title' => '',
      'body' => '<p><a name="inversores"></a></p><div class="container"><div class="row"><div class="col-md-12 center"><h2 class="titular-con-bestaker">Para ti, <span class="titular-blue">inversor</span></h2><p class="sub-titulo-bestaker uppercase">Lorem ipsum dolor set, Lorem set</p><div class="wrapper-line">
          <div class="line line-black"></div>
          <div class="line line-blue"></div>
        </div>
</div>
</div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array(
      'css_id' => '#inversores',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '413e031f-21b3-4b11-86c1-e08a8d9bd36d';
    $display->content['new-413e031f-21b3-4b11-86c1-e08a8d9bd36d'] = $pane;
    $display->panels['three'][0] = 'new-413e031f-21b3-4b11-86c1-e08a8d9bd36d';
    $pane = new stdClass();
    $pane->pid = 'new-d4b15a2f-2fa6-4eb5-8049-481fee7a95ce';
    $pane->panel = 'three';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Título sección -Para tí inversor- ENG',
      'title' => '',
      'body' => '<a name="inversores"></a>
<div class="container"><div class="row"><div class="col-md-12 center"><h2 class="titular-con-bestaker">for you, <span class="titular-blue">investor</span></h2><p class="sub-titulo-bestaker uppercase">Lorem ipsum dolor set, Lorem set</p><div class="wrapper-line">&nbsp;</div></div></div></div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd4b15a2f-2fa6-4eb5-8049-481fee7a95ce';
    $display->content['new-d4b15a2f-2fa6-4eb5-8049-481fee7a95ce'] = $pane;
    $display->panels['three'][1] = 'new-d4b15a2f-2fa6-4eb5-8049-481fee7a95ce';
    $pane = new stdClass();
    $pane->pid = 'new-60606735-8d65-425d-be3b-ab46174b9dc1';
    $pane->panel = 'three';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Texto sección -Para tí inversor- ES',
      'title' => '',
      'body' => '  <div class="container">
    <div class="row">
      <div class="col-md-6 mt40">
        <div class="row">
          <div class="col-xs-3 col-sm-2 col-md-2">
            <div class="icon-wrapper-inversor bg-blue">
             <span class="glyphicon glyphicon-random white"></span>
            </div>
          </div>
          <div class="col-xs-9 col-sm-10 col-md-10 np">
            <h3 class="titular-inversor mb40">Posibilidad de inversión</h3>
            <p>Ut ultrices lectus non est varius, vel vestibulum felis eleifend. Morbi tempor enim eget est vestibulum iaculis est velit.</p>
           </div>
         </div>
         <div class="row">
          <div class="wrapper-inversor-texto mt20">
            <h4 class="destacado-inversor">Lorem ipsum</h4>
            <ul class="items-inversor">
              <li class="inversor-item">Eget est vestibulum iaculis</li>
              <li class="inversor-item">Eget est vestibulum iaculis</li>
              <li class="inversor-item">Eget est vestibulum iaculis</li>
              <li class="inversor-item">Eget est vestibulum iaculis</li>
            </ul>
         </div>
       </div>
     </div>
      <div class="col-md-6 mt40">
      <div class="row">
          <div class="col-xs-3 col-sm-2 col-md-2">
            <div class="icon-wrapper-inversor bg-blue">
             <span class="glyphicon glyphicon-ok-sign white"></span>
            </div>
          </div>
          <div class="col-xs-9 col-sm-10 col-md-10 np">
            <h3 class="titular-inversor mb40">Metodología de inversión</h3>
            <p>Proin sed tempus quam. Ut ultrices lectus non est varius, vel vestibulum felis eleifend. Morbi tempor enim eget est vestibulum iaculis.</p>
           </div>
         </div>
         <div class="row">
          <div class="wrapper-inversor-texto mt20">
            <h4 class="destacado-inversor">Lorem ipsum ullamco</h4>
            <ul class="items-inversor">
              <li class="inversor-item">Nostrud exercitation ullamco</li>
              <li class="inversor-item">Nostrud exercitation ullamco</li>
              <li class="inversor-item">Nostrud exercitation ullamco</li>
              <li class="inversor-item">Nostrud exercitation ullamco</li>
            </ul>
         </div>
       </div>
    </div>
   </div>
 </div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '60606735-8d65-425d-be3b-ab46174b9dc1';
    $display->content['new-60606735-8d65-425d-be3b-ab46174b9dc1'] = $pane;
    $display->panels['three'][2] = 'new-60606735-8d65-425d-be3b-ab46174b9dc1';
    $pane = new stdClass();
    $pane->pid = 'new-31aff33e-6919-41fc-a2a5-be3f7062b7e5';
    $pane->panel = 'three';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Texto sección -Para tí inversor- ENG',
      'title' => '',
      'body' => '<div class="container">
    <div class="row">
      <div class="col-md-6 mt40">
        <div class="row">
          <div class="col-md-2">
            <div class="icon-wrapper-inversor bg-blue">
             <span class="glyphicon glyphicon-random white"></span>
            </div>
          </div>
          <div class="col-md-10 np">
            <h3 class="titular-inversor mb40">Chance of investment</h3>
            <p>Ut ultrices lectus non est varius, vel vestibulum felis eleifend. Morbi tempor enim eget est vestibulum iaculis est velit.</p>
           </div>
         </div>
         <div class="row">
          <div class="wrapper-inversor-texto mt20">
            <h4 class="destacado-inversor">Lorem ipsum</h4>
            <ul class="items-inversor">
              <li class="inversor-item">Eget est vestibulum iaculis</li>
              <li class="inversor-item">Eget est vestibulum iaculis</li>
              <li class="inversor-item">Eget est vestibulum iaculis</li>
              <li class="inversor-item">Eget est vestibulum iaculis</li>
            </ul>
         </div>
       </div>
     </div>
      <div class="col-md-6 mt40">
      <div class="row">
          <div class="col-md-2">
            <div class="icon-wrapper-inversor bg-blue">
             <span class="glyphicon glyphicon-ok-sign white"></span>
            </div>
          </div>
          <div class="col-md-10 np">
            <h3 class="titular-inversor mb40">Investment methodology</h3>
            <p>Proin sed tempus quam. Ut ultrices lectus non est varius, vel vestibulum felis eleifend. Morbi tempor enim eget est vestibulum iaculis.</p>
           </div>
         </div>
         <div class="row">
          <div class="wrapper-inversor-texto mt20">
            <h4 class="destacado-inversor">Lorem ipsum ullamco</h4>
            <ul class="items-inversor">
              <li class="inversor-item">Nostrud exercitation ullamco</li>
              <li class="inversor-item">Nostrud exercitation ullamco</li>
              <li class="inversor-item">Nostrud exercitation ullamco</li>
              <li class="inversor-item">Nostrud exercitation ullamco</li>
            </ul>
         </div>
       </div>
    </div>
   </div>
 </div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '31aff33e-6919-41fc-a2a5-be3f7062b7e5';
    $display->content['new-31aff33e-6919-41fc-a2a5-be3f7062b7e5'] = $pane;
    $display->panels['three'][3] = 'new-31aff33e-6919-41fc-a2a5-be3f7062b7e5';
    $pane = new stdClass();
    $pane->pid = 'new-3a99b61f-8305-4ec8-ae1c-a32852a10d78';
    $pane->panel = 'three';
    $pane->type = 'views_panes';
    $pane->subtype = 'proyectos_home-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '3a99b61f-8305-4ec8-ae1c-a32852a10d78';
    $display->content['new-3a99b61f-8305-4ec8-ae1c-a32852a10d78'] = $pane;
    $display->panels['three'][4] = 'new-3a99b61f-8305-4ec8-ae1c-a32852a10d78';
    $pane = new stdClass();
    $pane->pid = 'new-294e46b7-6699-4e78-94a5-8fbb33e71bac';
    $pane->panel = 'two';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'es' => 'es',
              'default' => 0,
              'en' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Titulo sección Con bestaker --ES',
      'title' => '',
      'body' => '<p><a name="hacemos"></a></p><div class="container"><div class="row"><div class="col-md-12 center"><h2 class="titular-con-bestaker">Por qué <span class="titular-blue">con bestaker</span></h2><p class="sub-titulo-bestaker uppercase">Lorem ipsum dolor set, Lorem set umen tat</p>
<div class="wrapper-line">
          <div class="line line-black"></div>
          <div class="line line-blue"></div>
        </div>
 </div>
 </div>
</div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '294e46b7-6699-4e78-94a5-8fbb33e71bac';
    $display->content['new-294e46b7-6699-4e78-94a5-8fbb33e71bac'] = $pane;
    $display->panels['two'][0] = 'new-294e46b7-6699-4e78-94a5-8fbb33e71bac';
    $pane = new stdClass();
    $pane->pid = 'new-004b6fb2-c24c-4503-85f4-86d1a9c8e666';
    $pane->panel = 'two';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'en' => 'en',
              'default' => 0,
              'es' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Titulo sección Con bestaker --EN',
      'title' => '',
      'body' => '<a name="hacemos"></a><div class="container"><div class="row"><div class="col-md-12 center"><h2 class="titular-con-bestaker">Why with<span class="titular-blue"> bestaker</span></h2><p class="sub-titulo-bestaker uppercase">Lorem ipsum dolor set, Lorem set umen tat</p><div class="wrapper-line">&nbsp;</div></div></div></div>',
      'format' => 'php_code',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '004b6fb2-c24c-4503-85f4-86d1a9c8e666';
    $display->content['new-004b6fb2-c24c-4503-85f4-86d1a9c8e666'] = $pane;
    $display->panels['two'][1] = 'new-004b6fb2-c24c-4503-85f4-86d1a9c8e666';
    $pane = new stdClass();
    $pane->pid = 'new-b5c34700-b4a9-466d-a9fe-d29e769a9c72';
    $pane->panel = 'two';
    $pane->type = 'views_panes';
    $pane->subtype = 'con_bestaker-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b5c34700-b4a9-466d-a9fe-d29e769a9c72';
    $display->content['new-b5c34700-b4a9-466d-a9fe-d29e769a9c72'] = $pane;
    $display->panels['two'][2] = 'new-b5c34700-b4a9-466d-a9fe-d29e769a9c72';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
