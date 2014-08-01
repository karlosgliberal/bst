<div class="container">
  <ul class="timeline">
    <?php foreach ($rows as $id => $row): ?>
      <li<?php print ($id%2==0)?'':' class="timeline-inverted"'; ?>>
        <div class="timeline-badge"><i class="glyphicon glyphicon-check"></i></div>
        <div class="timeline-panel">
          <?php print $row; ?>
        </div>
      </li>
    <?php endforeach; ?>
  </ul>
</div>