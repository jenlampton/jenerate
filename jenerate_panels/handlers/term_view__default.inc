<?php
/**
 * Exported panels handler.
 */

$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'term_view__default';
$handler->task = 'term_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Default',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => 'default',
);
$display = new panels_display();
$display->layout = 'radix_sutro';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'contentmain' => NULL,
    'column1' => NULL,
    'column2' => NULL,
    'header' => NULL,
    'footer' => NULL,
  ),
);
$display->cache = array();
$display->title = '%term:name';
$display->uuid = '9a1c1a44-da84-4a7b-a5fc-5d05916cdd23';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-36d0615d-4649-4119-8bd5-13eb4b3b4e4c';
  $pane->panel = 'column1';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_term-panel_pane_1';
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
  $pane->uuid = '36d0615d-4649-4119-8bd5-13eb4b3b4e4c';
  $display->content['new-36d0615d-4649-4119-8bd5-13eb4b3b4e4c'] = $pane;
  $display->panels['column1'][0] = 'new-36d0615d-4649-4119-8bd5-13eb4b3b4e4c';
  $pane = new stdClass();
  $pane->pid = 'new-e176dac1-0e83-447f-8bf0-28f21d40139c';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_documents-panel_pane_1';
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
  $pane->uuid = 'e176dac1-0e83-447f-8bf0-28f21d40139c';
  $display->content['new-e176dac1-0e83-447f-8bf0-28f21d40139c'] = $pane;
  $display->panels['column2'][0] = 'new-e176dac1-0e83-447f-8bf0-28f21d40139c';
  $pane = new stdClass();
  $pane->pid = 'new-f90618f3-89ab-4615-8e54-7cf6e3e31b89';
  $pane->panel = 'column2';
  $pane->type = 'views_panes';
  $pane->subtype = 'taxonomy_term-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f90618f3-89ab-4615-8e54-7cf6e3e31b89';
  $display->content['new-f90618f3-89ab-4615-8e54-7cf6e3e31b89'] = $pane;
  $display->panels['column2'][1] = 'new-f90618f3-89ab-4615-8e54-7cf6e3e31b89';
  $pane = new stdClass();
  $pane->pid = 'new-b331127a-69db-43a8-b817-51b3f876a34c';
  $pane->panel = 'header';
  $pane->type = 'term_name';
  $pane->subtype = 'term_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => 'page-title',
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '<none>',
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
  $pane->uuid = 'b331127a-69db-43a8-b817-51b3f876a34c';
  $display->content['new-b331127a-69db-43a8-b817-51b3f876a34c'] = $pane;
  $display->panels['header'][0] = 'new-b331127a-69db-43a8-b817-51b3f876a34c';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-36d0615d-4649-4119-8bd5-13eb4b3b4e4c';
$handler->conf['display'] = $display;
