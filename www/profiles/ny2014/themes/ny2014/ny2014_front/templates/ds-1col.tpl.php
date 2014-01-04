<?php

/**
 * @file
 * Display Suite 1 column template.
 */
$colors = field_get_items('node', $node, 'field_color');
?>
<div class="ds-1col <?php print $classes;?> clearfix <?php print $ds_content_classes;?>" style="background-color: <?php print $colors[0]['rgb']; ?>">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php print $ds_content; ?>
  <div class="quest">?</div>
</div>