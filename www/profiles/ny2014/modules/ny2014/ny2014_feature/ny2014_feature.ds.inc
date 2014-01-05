<?php
/**
 * @file
 * ny2014_feature.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function ny2014_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|greeting|greeting_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'greeting';
  $ds_layout->view_mode = 'greeting_item';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_audio',
        1 => 'field_image',
      ),
    ),
    'fields' => array(
      'field_audio' => 'ds_content',
      'field_image' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|greeting|greeting_item'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ny2014_feature_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'greeting_item';
  $ds_view_mode->label = 'Greeting Item';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['greeting_item'] = $ds_view_mode;

  return $export;
}
