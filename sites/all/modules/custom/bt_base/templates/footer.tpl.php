<footer class="footer-bestaker">
  <div class="container">
    <div class="row">
      <div class="col-md-12">
        <div class="footer-items inner-50">
          <div class="col-md-4 white footer-item-uno">
            <img src="/sites/all/themes/bestaker/images/logo-footer.png">
            <div class="texto-footer-inner">
              <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod
                tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
                quis nostrud exercitation ullamco laboris nisi ut.</p>
              <p>Si lo desea tambien puede contactar con nosotros por telefono, Sms o Whatsapp</p>
            </div>
            <div class="telefono-home mt20">
              <span class="icon-footer-phone"><span class="glyphicon glyphicon-earphone"></span></span>
              <span class="phone-texto">(+34) 666 000 111</span>
            </div>
          </div>
          <div class="col-md-4 white footer-item-dos">
            <div class="titular-footer">
              Redes sociales
            </div>
            <div class="redes-sociales">
              <ul class="social-links">
                <li class="first"><a href="/" target="_blank"><i class="icon-twitter"></i></a></li>
                <li><a href="/" target="_blank"><i class="icon-facebook"></i></a></li>
                <li><a href="/" target="_blank"><i class="icon-gplus"></i></a></li>
                <li><a href="/" target="_blank"><i class="icon-linkedin"></i></a></li>
              </ul>
            </div>
            <div class="titular-footer">
              Newsletter Bestaker
            </div>
            aqui newsletter
          </div>

          <div class="col-md-4 white footer-item-tres">
            <div class="titular-footer">
              Contacto
            </div>
            <div class="formulario-footer">
              <?php
              $block = block_load('webform', 'client-block-344');
              $render_array = _block_get_renderable_array(_block_render_blocks(array($block)));
              print render($render_array);
              ?>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="sub-footer mt60">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <div class="col-md-10 texto-footer mt10">
            <p>Copyright Bestaker 2014.</p>
            <p>Incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
              quis nostrud exercitation ullamco laboris nisi ut.</p>
          </div>
          <div class="col-md-2">
            <div class="logo-footer pull-right">
              <img src="/sites/all/themes/bestaker/images/norton.png">
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</footer>