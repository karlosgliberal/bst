<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
  <div class="container">
    <div class="row">
      <div class="wrapper-items-novedad mt50">
		<?php foreach ($rows as $id => $row): ?>
		  <div>
		    <?php print $row; ?>
		  </div>
		<?php endforeach; ?>
	</div>
  </div>
</div>