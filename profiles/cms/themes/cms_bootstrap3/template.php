<?php

/**
 * @file template.php
 */

/**
 * Preprocess theme_comment()
 */
function cms_bootstrap3_preprocess_comment(&$variables) {
  $variables['title'] = FALSE;
}

/**
 * Implements theme_preprocess_node()
 */
function cms_bootstrap3_preprocess_node(&$variables) {
  if ($variables['type'] == 'news') {
    $variables['user_picture'] = '';
    $variables['submitted'] = t('Posted on !datetime', array( '!datetime' => format_date($variables['node']->created, 'custom', 'l, F j, Y')));
  }
}