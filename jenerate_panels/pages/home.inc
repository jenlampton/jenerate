<?php
/**
 * Panel page export: Home page.
 */

$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'home_page';
$page->task = 'page';
$page->admin_title = 'Home page';
$page->admin_description = 'Home page';
$page->path = 'home';
$page->access = array();
$page->menu = array();
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_home_page__panel_context_b8ae0534-b9eb-4ecf-8323-5d07293b4c9f';
$handler->task = 'page';
$handler->subtask = 'home_page';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display();
$display->layout = 'radix_boxton_six_flex';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'contentmain' => NULL,
    'content2' => NULL,
    'content3' => NULL,
    'content4' => NULL,
    'content5' => NULL,
    'content6' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = 'a2fe56bd-7d2b-4db0-9c67-823fb28f616b';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c45b9927-3ce2-4097-b0f5-1e7605d0bc01';
  $pane->panel = 'content2';
  $pane->type = 'panels_mini';
  $pane->subtype = 'home_around';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c45b9927-3ce2-4097-b0f5-1e7605d0bc01';
  $display->content['new-c45b9927-3ce2-4097-b0f5-1e7605d0bc01'] = $pane;
  $display->panels['content2'][0] = 'new-c45b9927-3ce2-4097-b0f5-1e7605d0bc01';
  $pane = new stdClass();
  $pane->pid = 'new-ca86e9c9-9e36-47ce-a95c-f1a9ee7296aa';
  $pane->panel = 'content3';
  $pane->type = 'panels_mini';
  $pane->subtype = 'home_news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ca86e9c9-9e36-47ce-a95c-f1a9ee7296aa';
  $display->content['new-ca86e9c9-9e36-47ce-a95c-f1a9ee7296aa'] = $pane;
  $display->panels['content3'][0] = 'new-ca86e9c9-9e36-47ce-a95c-f1a9ee7296aa';
  $pane = new stdClass();
  $pane->pid = 'new-2ba67f78-5fbc-450b-b9aa-51da6d204640';
  $pane->panel = 'content4';
  $pane->type = 'panels_mini';
  $pane->subtype = 'home_tools';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2ba67f78-5fbc-450b-b9aa-51da6d204640';
  $display->content['new-2ba67f78-5fbc-450b-b9aa-51da6d204640'] = $pane;
  $display->panels['content4'][0] = 'new-2ba67f78-5fbc-450b-b9aa-51da6d204640';
  $pane = new stdClass();
  $pane->pid = 'new-52d3a565-3e67-4c4e-af56-7f5eb43c4526';
  $pane->panel = 'content5';
  $pane->type = 'panels_mini';
  $pane->subtype = 'home_work';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '52d3a565-3e67-4c4e-af56-7f5eb43c4526';
  $display->content['new-52d3a565-3e67-4c4e-af56-7f5eb43c4526'] = $pane;
  $display->panels['content5'][0] = 'new-52d3a565-3e67-4c4e-af56-7f5eb43c4526';
  $pane = new stdClass();
  $pane->pid = 'new-5a5350ed-8c45-4d5d-b352-72dd531e1edd';
  $pane->panel = 'content6';
  $pane->type = 'panels_mini';
  $pane->subtype = 'home_about';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5a5350ed-8c45-4d5d-b352-72dd531e1edd';
  $display->content['new-5a5350ed-8c45-4d5d-b352-72dd531e1edd'] = $pane;
  $display->panels['content6'][0] = 'new-5a5350ed-8c45-4d5d-b352-72dd531e1edd';
  $pane = new stdClass();
  $pane->pid = 'new-79f0edf4-46e2-485e-837d-a2d1517a2dc3';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'slides_home-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '79f0edf4-46e2-485e-837d-a2d1517a2dc3';
  $display->content['new-79f0edf4-46e2-485e-837d-a2d1517a2dc3'] = $pane;
  $display->panels['contentmain'][0] = 'new-79f0edf4-46e2-485e-837d-a2d1517a2dc3';
  $pane = new stdClass();
  $pane->pid = 'new-cb2305de-d9a5-4c9f-b114-88922c74ed92';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'local_navigation-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'home__local-navigation',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cb2305de-d9a5-4c9f-b114-88922c74ed92';
  $display->content['new-cb2305de-d9a5-4c9f-b114-88922c74ed92'] = $pane;
  $display->panels['contentmain'][1] = 'new-cb2305de-d9a5-4c9f-b114-88922c74ed92';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
