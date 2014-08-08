(function ($) {
  Drupal.behaviors.sociedades = {
    attach: function(context, settings) {
      console.log(settings);
      google.load('visualization', '1', {'callback':function(){drawChart();}, 'packages':['corechart']});
      //google.setOnLoadCallback(drawChart);
      function drawChart() {
        var query = new google.visualization.Query(settings.sociedad_grafico_capital);
        query.send(handleQueryResponse);
      }

      function handleQueryResponse(response) {
        if (response.isError()) {
          alert('Error in query: ' + response.getMessage() + ' ' + response.getDetailedMessage());
          return;
        }
        var data = response.getDataTable();
        var options = {
          width: 500,
          height: 450,
          legend: { position: 'top', maxLines: 2 },
          bar: { groupWidth: '75%' },
          isStacked: true,
        };

        var chart = new google.visualization.ColumnChart(document.getElementById('columnchart'));
        chart.draw(data, options);
      }
    }
  };
})(jQuery);
