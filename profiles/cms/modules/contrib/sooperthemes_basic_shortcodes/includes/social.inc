<?php

/*
 * Social links shortcode
 */
function sooperthemes_basic_shortcodes_social($attrs, $content = null) {

  extract(shortcode_attrs(array(
  'type' => 'inline',
  'style' => 'rounded',
  'size' => 'lg',
  'border' => '',
  'color' => 'auto',
  'hover_color' => 'auto',
  'hover' => '',
  'xclass' => '',
  ), $attrs));
  $remove = array('type' => 1,
                  'style' => 1,
                  'size' => 1,
                  'color' => 1,
                  'hover' => 1,
                  'hover_color' => 1,
                  'border' => 1,
                  'xclass' => 1,
            );
  $attrs = array_diff_key($attrs, $remove);

  $items = array();
  $icon_style = '';
  $theme_colors = _sooperthemes_basic_shortcodes_get_colors();

  foreach ($attrs as $name => $content) {
    $icon_classes = array('fa');
    $icon_classes[] = 'fa-' . $size;
    $icon_classes[] = 'fa-' . $name;
    $icon_classes[] = 'icon-' . $hover;
    $icon_classes[] = 'icon-' . $style;
    if ($hover == 'pulse') $icon_classes[] = 'icon-fx icon-fx-pulse';
    if ($hover == 'disc') $icon_classes[] = 'icon-fx icon-fx-disc';
    if ($border) $icon_classes[] = 'icon-border';
    if (strpos($content, '|')) {
      $content_array = explode('|', $content);
      $name = $content_array[1];
      $url = $content_array[0];
    }
    else {
      $url = $content;
    }
    if (($color != 'auto') && ($color != 'inherit')) {
      if (array_key_exists($color, $theme_colors)) {
        $colors = _sooperthemes_basic_shortcodes_get_theme_setting('palette');
        $color = $colors[$color];
        $icon_style .= "background-color: $color;";
      }
      else {
        $icon_style .= "background-color: $color;";
      }
    }
    if (($border != 'auto') && ($border != 'inherit')) $icon_style .= "border-color: $border;";
    if ($icon_style) $icon_style = ' style="' . $icon_style . '"';
    $text = sprintf(
      '<i class="%s"%s data-toggle="tooltip" data-placement="top" title="%s"></i>',
      trim(strtolower(implode(' ', $icon_classes)) . ' ' . $xclass),
      $icon_style,
      check_plain($name)
    );
    $items[] = array('data' => l($text, $url, array('html' => TRUE)), 'title' => $name);
  }

  $classes = array('social-links');
  if ($color == 'auto') $classes[] = 'icons-color-auto';
  if ($hover_color == 'auto') $classes[] = 'icons-color-hover-auto';
  if ($type) $classes[] = $type;
  return theme('item_list',
    array(
      'items' => $items,
      'title' => NULL,
      'type' => 'ul',
      'attributes' => array('class' => $classes)
    )
  );
}

function sooperthemes_basic_shortcodes_social_tips($format, $long) {
  $output = '<p><strong>[social type="inline" Skype="http://google.com" Twitter="http://google.com" Facebook="http://google.com" Drupal="http://google.com"][/social]</strong></p>';
  return $output;
}

function sooperthemes_basic_shortcodes_social_attributes($form, $form_state) {
  $form['type'] = array(
    '#type' => 'select',
    '#title' => t('Layout'),
    '#options' => array(
      '' => t('Inline'),
      'stacked' => t('Stacked'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'social'),
      ),
    ),
    '#prefix' => '<div class="row"><div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['style'] = array(
    '#type' => 'select',
    '#title' => t('Style'),
    '#options' => array(
      'rounded' => t('Rounded'),
      'circle' => t('Circle'),
      'square' => t('Square'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'social'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['size'] = array(
    '#type' => 'select',
    '#title' => t('Size'),
    '#options' => array(
      '' => t('Small'),
      'lg' => t('Large'),
      '2x' => t('2x'),
      '3x' => t('3x'),
      '4x' => t('4x'),
      '5x' => t('5x'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'social'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div></div>',
  );
  $form['color'] = array(
    '#type' => 'textfield',
    '#title' => t('Color'),
    '#description' => t('Must be a valid CSS color.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'social'),
      ),
    ),
    '#prefix' => '<div class="row"><div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['hover_color'] = array(
    '#type' => 'select',
    '#title' => t('Hover color'),
    '#options' => array(
      'auto' => t('Brand color'),
      'inherit' => t('Inherit from theme'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'social'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['border'] = array(
    '#type' => 'textfield',
    '#title' => t('Border color'),
    '#description' => t('Must be a valid CSS color.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'social'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div></div>',
  );
  $form['hover'] = array(
    '#type' => 'select',
    '#title' => t('CSS3 Hover Effects'),
    '#options' => array(
      '' => t('None'),
      'disc' => t('Disc'),
      'pulse' => t('Pulse'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'social'),
      ),
    ),
  );
  $form['xclass'] = array(
    '#type' => 'textfield',
    '#title' => 'xclass',
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'social'),
      ),
    ),
  );
  return $form;
}
