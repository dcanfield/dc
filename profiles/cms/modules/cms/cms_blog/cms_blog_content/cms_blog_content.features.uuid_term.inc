<?php
/**
 * @file
 * cms_blog_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function cms_blog_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'powerstart',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'ac35b90b-36ac-4dbb-83fc-7031fe4d33e1',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/powerstart',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'trodreno',
    'description' => 'description of trodreno',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd7f05657-27e1-47b5-97fc-cb0a767c523b',
    'vocabulary_machine_name' => 'tags',
    'metatags' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/trodreno',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
