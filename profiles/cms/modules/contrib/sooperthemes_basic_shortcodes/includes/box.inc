<?php

/*
 * Box shortcode
 */
function sooperthemes_basic_shortcodes_box( $attrs, $content = null ) {
  extract(shortcode_attrs(array(
  'heading' => '',
  'layout' => 'icon-inline-title',
  'border' => '',
  'border_style' => '',
  'style' => '',
  'background' => '',
  'text' => '',
  'icon' => '',
  'xclass' => '',
  ), $attrs));

  $classes = array();

  if ($icon) {
    $icon_attrs = array('icon' => $icon);
    foreach ($attrs as $key => $value) {
      if (strpos($key, 'icon_') !== FALSE) {
        $match = str_replace('icon_', '', $key);
        $icon_attrs[$match] = $value;
      }
    }
    if (empty($icon_attrs['size'])) $icon_attrs['size'] = 'lg';
    $icon = '<div class="span-icon">' . sooperthemes_basic_shortcodes_fa_icon($icon_attrs) . '</div>';
    $classes[] = 'content-box-' . $icon_attrs['size'] . '-icon';
  }

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
  if ($text) {
    if (array_key_exists($text, $theme_colors)) {
      $colors = _sooperthemes_basic_shortcodes_get_theme_setting('palette');
      $text = $colors[$text];
      $css_style .= "color: $text;";
    }
    else {
      $css_style .= "color: $text;";
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
  $classes[] = 'content-box';
  $classes[] = 'content-box-' . $layout;
  if ($style) $classes[] = 'content-box-' . $style;
  if ($border_style) $classes[] = 'content-box-' . $border_style;
  if ($border) $classes[] = 'content-box-border';
  if (!$icon) $classes[] = 'content-box-no-icon';
  $classes = trim(implode(' ', $classes) . ' ' . $xclass);

  if ($heading) $heading = '<h2>' . $heading . '</h2>';
  if ($heading OR $icon) {
    $content_box_heading = '<div class="content-box-heading">' . $icon . $heading . '</div>';
  }
  else {
    $content_box_heading = '';
  }

  $icon_classes = '';
  return sprintf(
    '<div class ="%s"%s>%s<div class="content-box-content">%s</div></div>',
    check_plain( $classes ),
    $css_style,
    $content_box_heading,
    $content
  );
}

function sooperthemes_basic_shortcodes_box_tips($format, $long) {
  $output = '<p><strong>[box background=tomato text=white align=right width="1-4"]your content here[/box]</strong></p>';
  return $output;
}

function sooperthemes_basic_shortcodes_box_attributes($form, $form_state) {
  $form['heading'] = array(
    '#type' => 'textfield',
    '#title' => t('Heading'),
    '#size' => 60,
    '#maxlength' => 255,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
  );
  $form['icon'] = array(
    '#type' => 'textfield',
    '#title' => t('Icon'),
    '#description' => t('For an overview see <a href="http://fortawesome.github.io/Font-Awesome/icons/">Font Awesome Examples</a>.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
  );
  $form['layout'] = array(
    '#type' => 'select',
    '#title' => t('Box Layout'),
    '#options' => array(
      'icon-inline-title' => t('Icon inline with title'),
      'icon-adjacent' => t('Icon adjacent to content'),
      'icon-boxed' => t('Boxed with icon on top'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
    '#prefix' => '<div class="row"><div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['style'] = array(
    '#type' => 'select',
    '#title' => t('Box Style'),
    '#options' => array(
      '' => t('Default'),
      'rounded' => t('Rounded'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div></div>',
  );
  $form['text'] = array(
    '#type' => 'textfield',
    '#title' => t('Box Text color'),
    '#description' => t('Must be a valid CSS color.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
    '#prefix' => '<div class="row"><div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['background'] = array(
    '#type' => 'textfield',
    '#title' => t('Box Background color'),
    '#description' => t('Must be a valid CSS color.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['border'] = array(
    '#type' => 'textfield',
    '#title' => t('Box Border color'),
    '#description' => t('Must be a valid CSS color.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div></div>',
  );
  $form['border_style'] = array(
    '#type' => 'select',
    '#title' => t('Border style'),
    '#options' => array(
      '' => t('1px around'),
      'border-top' => t('3px Bottom accent'),
      'border-bottom' => t('3px Top accent'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div></div>',
  );
  $form['icon_style'] = array(
    '#type' => 'select',
    '#title' => t('Icon Style'),
    '#options' => array(
      'rounded' => t('Rounded'),
      'circle' => t('Circle'),
      'square' => t('Square'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
    '#prefix' => '<div class="row"><div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['icon_size'] = array(
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
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['icon_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Icon Color'),
    '#description' => t('Must be a valid CSS color.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div></div>',
  );
  $form['icon_border'] = array(
    '#type' => 'textfield',
    '#title' => t('Icon Border color'),
    '#description' => t('Must be a valid CSS color.'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
    '#prefix' => '<div class="row"><div class="col-md-4">',
    '#suffix' => '</div>',
  );
  $form['icon_hover'] = array(
    '#type' => 'select',
    '#title' => t('Icon CSS3 Hover Effects'),
    '#options' => array(
      '' => t('None'),
      'disc' => t('Disc'),
      'pulse' => t('Pulse'),
    ),
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'box'),
      ),
    ),
    '#prefix' => '<div class="col-md-4">',
    '#suffix' => '</div></div>',
  );
  return $form;
}