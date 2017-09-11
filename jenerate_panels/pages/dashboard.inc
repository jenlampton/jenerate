<?php
/**
 * Panel page export: Dashboard.
 */

$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'dashboard';
$page->task = 'page';
$page->admin_title = 'Dashboard';
$page->admin_description = 'Dashboard';
$page->path = 'admin/dashboard/all';
$page->access = array(
  'plugins' => array(
    0 => array(
      'name' => 'role',
      'settings' => array(
        'rids' => array(
          0 => 6,
          1 => 3,
        ),
      ),
      'context' => 'logged-in-user',
      'not' => FALSE,
    ),
  ),
  'logic' => 'and',
);
$page->menu = array(
  'type' => 'default tab',
  'title' => 'Dashboard',
  'name' => 'management',
  'weight' => '-100',
  'parent' => array(
    'type' => 'normal',
    'title' => 'Dashboard',
    'name' => 'management',
    'weight' => '-100',
  ),
);
$page->arguments = array();
$page->conf = array(
  'admin_paths' => TRUE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_dashboard_panel_context';
$handler->task = 'page';
$handler->subtask = 'dashboard';
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
$display->layout = 'twocol_stacked';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'top' => NULL,
    'left' => NULL,
    'right' => NULL,
    'bottom' => NULL,
  ),
);
$display->cache = array();
$display->title = 'Dashboard';
$display->uuid = '8b649606-9ea7-4e33-98a2-1ff6fb468568';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1b7ed92a-aae1-4f0b-ada4-7bd9c18434e1';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'admin_content-panel_pane_1';
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
  $pane->uuid = '1b7ed92a-aae1-4f0b-ada4-7bd9c18434e1';
  $display->content['new-1b7ed92a-aae1-4f0b-ada4-7bd9c18434e1'] = $pane;
  $display->panels['bottom'][0] = 'new-1b7ed92a-aae1-4f0b-ada4-7bd9c18434e1';
  $pane = new stdClass();
  $pane->pid = 'new-ca7bd9ca-572c-4eb8-aa17-63663e52386d';
  $pane->panel = 'left';
  $pane->type = 'profile';
  $pane->subtype = 'profile';
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
  $pane->uuid = 'ca7bd9ca-572c-4eb8-aa17-63663e52386d';
  $display->content['new-ca7bd9ca-572c-4eb8-aa17-63663e52386d'] = $pane;
  $display->panels['left'][0] = 'new-ca7bd9ca-572c-4eb8-aa17-63663e52386d';
  $pane = new stdClass();
  $pane->pid = 'new-2c9b3edc-ad5c-4f20-836a-a4efb2d0c605';
  $pane->panel = 'left';
  $pane->type = 'create';
  $pane->subtype = 'create';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'article' => 'article',
      'page' => 'page',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'limit' => '1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2c9b3edc-ad5c-4f20-836a-a4efb2d0c605';
  $display->content['new-2c9b3edc-ad5c-4f20-836a-a4efb2d0c605'] = $pane;
  $display->panels['left'][1] = 'new-2c9b3edc-ad5c-4f20-836a-a4efb2d0c605';
  $pane = new stdClass();
  $pane->pid = 'new-63216bf8-9f0d-4477-ad33-83c4d9ad8f37';
  $pane->panel = 'right';
  $pane->type = 'taxonomy';
  $pane->subtype = 'taxonomy';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'vids' => array(
      26 => '26',
      16 => '16',
      31 => '31',
      21 => '21',
      11 => '11',
      1 => '1',
    ),
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
  $pane->uuid = '63216bf8-9f0d-4477-ad33-83c4d9ad8f37';
  $display->content['new-63216bf8-9f0d-4477-ad33-83c4d9ad8f37'] = $pane;
  $display->panels['right'][0] = 'new-63216bf8-9f0d-4477-ad33-83c4d9ad8f37';
  $pane = new stdClass();
  $pane->pid = 'new-4509bff3-d5d7-435d-8e8b-f050149019d7';
  $pane->panel = 'right';
  $pane->type = 'nodequeue';
  $pane->subtype = 'nodequeue';
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
  $pane->uuid = '4509bff3-d5d7-435d-8e8b-f050149019d7';
  $display->content['new-4509bff3-d5d7-435d-8e8b-f050149019d7'] = $pane;
  $display->panels['right'][1] = 'new-4509bff3-d5d7-435d-8e8b-f050149019d7';
  $pane = new stdClass();
  $pane->pid = 'new-ab7960c7-28e3-4abf-ad06-543b44fb5bb8';
  $pane->panel = 'right';
  $pane->type = 'entityqueue';
  $pane->subtype = 'entityqueue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ab7960c7-28e3-4abf-ad06-543b44fb5bb8';
  $display->content['new-ab7960c7-28e3-4abf-ad06-543b44fb5bb8'] = $pane;
  $display->panels['right'][2] = 'new-ab7960c7-28e3-4abf-ad06-543b44fb5bb8';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
