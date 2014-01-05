<?php
/**
 * @file
 * ny2014_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ny2014_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-greeting-body'
  $field_instances['node-greeting-body'] = array(
    'bundle' => 'greeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'greeting_item' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-greeting-field_audio'
  $field_instances['node-greeting-field_audio'] = array(
    'bundle' => 'greeting',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'soundmanager2',
        'settings' => array(
          'audio_type' => 'default',
          'pause' => 'pause',
          'stream' => FALSE,
          'text' => 'filename',
        ),
        'type' => 'soundmanager2_page_player',
        'weight' => 1,
      ),
      'greeting_item' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'media_link',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'soundmanager2',
        'settings' => array(
          'amplifier' => 0,
          'audio_type' => 'default',
          'diameter' => 256,
          'eq' => 0,
          'inline' => 1,
          'pause' => 'pause',
          'stream' => FALSE,
          'text' => 'title',
          'visualization' => 1,
          'waveform' => 0,
        ),
        'type' => 'soundmanager2_ui360',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audio',
    'label' => 'Audio',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'mp3 wav ogg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
        ),
        'allowed_types' => array(
          0 => 0,
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-greeting-field_color'
  $field_instances['node-greeting-field_color'] = array(
    'bundle' => 'greeting',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'colorfield',
        'settings' => array(
          'height' => 20,
          'width' => 20,
        ),
        'type' => 'colorfield_color_swatch',
        'weight' => 2,
      ),
      'greeting_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_color',
    'label' => 'Color',
    'required' => 1,
    'settings' => array(
      'colorfield_colorpicker_type' => 'farbtastic',
      'colorfield_enable_colorpicker' => TRUE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'colorfield',
      'settings' => array(
        'colorfield_options' => array(
          'colorfield_colorpicker_type' => 'minicolors',
          'colorfield_enable_colorpicker' => 1,
        ),
      ),
      'type' => 'colorfield_unified_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-greeting-field_image'
  $field_instances['node-greeting-field_image'] = array(
    'bundle' => 'greeting',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'greeting_item' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Audio');
  t('Body');
  t('Color');
  t('Image');

  return $field_instances;
}
