<?php
/**
 * @file
 * cms_portfolio.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cms_portfolio_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cms_portfolio';
  $view->description = '';
  $view->tag = 'cms';
  $view->base_table = 'node';
  $view->human_name = 'CMS Portfolio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Portfolio';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '0';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '6';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '4';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Image url */
  $handler->display->display_options['fields']['field_portfolio_images_1']['id'] = 'field_portfolio_images_1';
  $handler->display->display_options['fields']['field_portfolio_images_1']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images_1']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images_1']['ui_name'] = 'Image url';
  $handler->display->display_options['fields']['field_portfolio_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_portfolio_images_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'bootstrap3_col4_square',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_portfolio_images_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Custom image tag */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom image tag';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]"><img src ="[field_portfolio_images_1]" /></a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'portfolio' => 'portfolio',
  );

  /* Display: Portfolio */
  $handler = $view->new_display('page', 'Portfolio', 'portfolio');
  $handler->display->display_options['path'] = 'portfolio';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Portfolio';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Portfolio */
  $handler = $view->new_display('block', 'Portfolio', 'portfolio_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Image url */
  $handler->display->display_options['fields']['field_portfolio_images_1']['id'] = 'field_portfolio_images_1';
  $handler->display->display_options['fields']['field_portfolio_images_1']['table'] = 'field_data_field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images_1']['field'] = 'field_portfolio_images';
  $handler->display->display_options['fields']['field_portfolio_images_1']['ui_name'] = 'Image url';
  $handler->display->display_options['fields']['field_portfolio_images_1']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_images_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_images_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_images_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_images_1']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_portfolio_images_1']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'bootstrap3_col4_square',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_portfolio_images_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_portfolio_images_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Custom image tag */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom image tag';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]"><img src ="[field_portfolio_images_1]" /></a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['cms_portfolio'] = $view;

  return $export;
}
