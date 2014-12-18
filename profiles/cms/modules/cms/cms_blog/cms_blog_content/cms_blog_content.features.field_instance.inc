<?php
/**
 * @file
 * cms_blog_content.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cms_blog_content_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-blog-field_glazed_header_image'
  $field_instances['node-blog-field_glazed_header_image'] = array(
    'bundle' => 'blog',
    'deleted' => 0,
    'description' => 'We recommend you prepare the header image to be around 300 pixels high and as wide as the widest monitor resolution that has a significant share in your visitor statistics (e.g. 2560px or 1920px.)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'bg_image_formatter',
        'settings' => array(
          'css_settings' => array(
            'bg_image_attachment' => 'scroll',
            'bg_image_background_size' => 'cover',
            'bg_image_background_size_ie8' => 1,
            'bg_image_color' => 'silver',
            'bg_image_important' => 1,
            'bg_image_media_query' => 'all',
            'bg_image_repeat' => 'no-repeat',
            'bg_image_selector' => '.header-full-width-container',
            'bg_image_x' => 'left',
            'bg_image_y' => 'top',
          ),
          'field_formatter_class' => '',
          'image_style' => '',
        ),
        'type' => 'bg_image_formatter',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_glazed_header_image',
    'label' => 'Glazed Header Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'glazed-header-images',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 1,
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
          'public' => 'public',
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
        ),
      ),
      'type' => 'media_generic',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Glazed Header Image');
  t('We recommend you prepare the header image to be around 300 pixels high and as wide as the widest monitor resolution that has a significant share in your visitor statistics (e.g. 2560px or 1920px.)');

  return $field_instances;
}
