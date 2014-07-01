var Drupal = Drupal || {};

(function($, Drupal){
  "use strict";
  //Sistema de slide para sección  "Con bestaker"
  $(document).ready(function(){
    $('.texto-largo-enlace').click(function(e){
      e.preventDefault();
      var id = $(this).attr("data-texto"); 
      $('.con-bestaker-item-'+id).addClass('next');
      setTimeout(function(){
        $('.con-bestaker-item-'+id).addClass('left');
      }, 50);
    });

    $('.cerrar-texto-grande-boton').click(function(e){
      e.preventDefault();
      $('.texto-grande').addClass('cerrar-texto-grande');
      setTimeout(function(){
        $('.texto-grande').removeClass('next');
        $('.texto-grande').removeClass('left');
        $('.texto-grande').removeClass('cerrar-texto-grande');
      }, 50);
    });
  });

  $(document).ready(function(){
    $('.formulario-footer input').focus(function(){
      $(this).val('');
    });
    $('.formulario-footer textarea').focus(function(){
      $(this).val('');
    });
  });

})(jQuery, Drupal);
