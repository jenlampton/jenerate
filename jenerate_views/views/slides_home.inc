<?php
/**
 * Views export: slides_home.
 */

$view = new view();
$view->name = 'slides_home';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Home Page Slider';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['default_row_class'] = FALSE;
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['default_field_elements'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['content'] = '<div class="home-slider-container"><div class="home-slider-nav"><div class="home-slider-nav-btn prev"></div><div class="home-slider-nav-btn next"></div></div><div class="home-iosSlider"><div class="slider">';
/* Footer: Global: Unfiltered text */
$handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
$handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['content'] = '</div></div></div>';
/* Relationship: Nodequeue: Queue */
$handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
$handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
$handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
  'home_page_slides' => 'home_page_slides',
);
/* Field: Content: E-News link */
$handler->display->display_options['fields']['field_url']['id'] = 'field_url';
$handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
$handler->display->display_options['fields']['field_url']['field'] = 'field_url';
$handler->display->display_options['fields']['field_url']['label'] = '';
$handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_url']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_url']['type'] = 'link_plain';
/* Field: Call to action title text */
$handler->display->display_options['fields']['field_url_2']['id'] = 'field_url_2';
$handler->display->display_options['fields']['field_url_2']['table'] = 'field_data_field_url';
$handler->display->display_options['fields']['field_url_2']['field'] = 'field_url';
$handler->display->display_options['fields']['field_url_2']['ui_name'] = 'Call to action title text';
$handler->display->display_options['fields']['field_url_2']['label'] = '';
$handler->display->display_options['fields']['field_url_2']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_url_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_url_2']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_url_2']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_url_2']['type'] = 'link_title_plain';
/* Field: Content: Slide Text Position */
$handler->display->display_options['fields']['field_slide_text_position']['id'] = 'field_slide_text_position';
$handler->display->display_options['fields']['field_slide_text_position']['table'] = 'field_data_field_slide_text_position';
$handler->display->display_options['fields']['field_slide_text_position']['field'] = 'field_slide_text_position';
$handler->display->display_options['fields']['field_slide_text_position']['label'] = '';
$handler->display->display_options['fields']['field_slide_text_position']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_slide_text_position']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_slide_text_position']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_slide_text_position']['type'] = 'list_key';
/* Field: Field: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_url] ';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'full',
  'image_link' => '',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['text'] = '<div class="home-slider-item">[field_image]<div class="img-overlay"></div><a class="home-slider-headline [field_slide_text_position]" href="[field_url]">[title] <span class="home__slider-story-link">&nbsp;[field_url_2]&nbsp;<i class="fa fa-chevron-right"></i></span></a></div>';
$handler->display->display_options['fields']['title']['alter']['path'] = '[field_url]';
$handler->display->display_options['fields']['title']['alter']['link_class'] = 'home__slider-link';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Sort criterion: Nodequeue: Position */
$handler->display->display_options['sorts']['position']['id'] = 'position';
$handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['sorts']['position']['field'] = 'position';
$handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
  'slides' => 'slides',
);

/* Display: Home page slider */
$handler = $view->new_display('panel_pane', 'Home page slider', 'panel_pane_1');
$handler->display->display_options['pane_title'] = 'Home page slider';
$handler->display->display_options['pane_category']['name'] = 'Home page';
$handler->display->display_options['pane_category']['weight'] = '0';