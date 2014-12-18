<?php

/*
 * Icon shortcode
 */
function sooperthemes_basic_shortcodes_fa_icon( $attrs, $content = null ) {
  extract(shortcode_attrs(array(
  'icon' => 'send-o',
  'style' => '',
  'size' => '',
  'border' => '',
  'color' => '',
  'background' => '',
  'spin' => '',
  'xclass' => '',
  ), $attrs));

  $css_style = '';
  $theme_colors = _sooperthemes_basic_shortcodes_get_colors();
  if ($background) {
    if (array_key_exists($background, $theme_colors)) {
      $colors = _sooperthemes_basic_shortcodes_get_theme_setting('palette');
      $background = $colors[$background];
      $css_style .= "background-color: $background;";
    }
    else {
      $css_style .= "background-color: $background;";
    }
  }
  if ($color) {
    if (array_key_exists($color, $theme_colors)) {
      $colors = _sooperthemes_basic_shortcodes_get_theme_setting('palette');
      $color = $colors[$color];
      $css_style .= "color: $color;";
    }
    else {
      $css_style .= "color: $color;";
    }
  }
  if ($border) {
    if (array_key_exists($border, $theme_colors)) {
      $colors = _sooperthemes_basic_shortcodes_get_theme_setting('palette');
      $border = $colors[$border];
      $css_style .= "border-color: $border;";
    }
    else {
      $css_style .= "border-color: $border;";
    }
  }
  if ($css_style) $css_style = ' style="' . $css_style . '"';

  $classes = array();

  $classes[] = 'fa';
  $classes[] = 'fa-' . $icon;
  if ($style) $classes[] = 'icon-' . $style;
  if ($size) $classes[] = 'fa-' . $size;
  if ($border) $classes[] = 'icon-border';
  if ($spin) $classes[] = 'fa-spin';
  $classes = trim(implode(' ', $classes) . ' ' . $xclass);
  return sprintf(
    '<i class="%s"%s></i>',
    check_plain( $classes ),
    $css_style
  );
}

function sooperthemes_basic_shortcodes_fa_icon_tips($format, $long) {
  $output = '<p><strong>[fa-icon style="circle" border="orange" spin="yes"]/fa-icon]</strong></p>';
  return $output;
}

function sooperthemes_basic_shortcodes_fa_icon_attributes($form, $form_state) {
  $form['icon'] = array(
    '#type' => 'textfield',
    '#title' => t('Icon'),
    '#description' => t('For an overview see <a href="http://fortawesome.github.io/Font-Awesome/icons/">Font Awesome Examples</a>.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'fa-icon'),
      ),
    ),
  );
  $form['style'] = array(
    '#type' => 'select',
    '#title' => t('Icon Style'),
    '#options' => array(
      'rounded' => t('Rounded'),
      'circle' => t('Circle'),
      'square' => t('Square'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'fa-icon'),
      ),
    ),
    '#prefix' => '<div class="row"><div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['size'] = array(
    '#type' => 'select',
    '#title' => t('Icon Size'),
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
        ':input[name="shortcode"]' => array('value' => 'fa-icon'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['color'] = array(
    '#type' => 'textfield',
    '#title' => t('Icon Color'),
    '#description' => t('Must be a valid CSS color.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'fa-icon'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div></div>',
  );
  $form['background'] = array(
    '#type' => 'textfield',
    '#title' => t('Background Color'),
    '#description' => t('Must be a valid CSS color.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'fa-icon'),
      ),
    ),
    '#prefix' => '<div class="row"><div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['border'] = array(
    '#type' => 'textfield',
    '#title' => t('Icon Border color'),
    '#description' => t('Must be a valid CSS color.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'fa-icon'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['hover'] = array(
    '#type' => 'select',
    '#title' => t('Icon CSS3 Hover Effects'),
    '#options' => array(
      '' => t('None'),
      'disc' => t('Disc'),
      'pulse' => t('Pulse'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'fa-icon'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div></div>',
  );
  $form['spin'] = array(
    '#type' => 'select',
    '#title' => t('Icon Spinning'),
    '#options' => array(
      '' => t('No'),
      1 => t('yes'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'fa-icon'),
      ),
    ),
  );
  return $form;
}