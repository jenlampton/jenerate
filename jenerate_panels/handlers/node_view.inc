<?php
/**
 * Exported panels handler.
 */

$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'node_view__panel_context_3eb4c688-268c-4d78-a46c-e25a96fb8e36';
$handler->task = 'node_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = -21;
$handler->conf = array(
  'title' => 'Default (L2-L6)',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'name' => '',
);
$display = new panels_display();
$display->layout = 'radix_moscone';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'column1' => NULL,
    'column2' => NULL,
    'contentmain' => NULL,
    'sidebar' => NULL,
    'header' => NULL,
    'footer' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '7110acc0-9bce-4091-8ad8-21e0d0346193';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a4d2f222-e230-40e3-aff9-02acb96846c3';
  $pane->panel = 'contentmain';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h2',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'a4d2f222-e230-40e3-aff9-02acb96846c3';
  $display->content['new-a4d2f222-e230-40e3-aff9-02acb96846c3'] = $pane;
  $display->panels['contentmain'][0] = 'new-a4d2f222-e230-40e3-aff9-02acb96846c3';
  $pane = new stdClass();
  $pane->pid = 'new-40aea03f-2570-4462-a9ed-fc7d50d77ef6';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'commissioners-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_nid',
        'settings' => array(
          'nid' => '1256',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '40aea03f-2570-4462-a9ed-fc7d50d77ef6';
  $display->content['new-40aea03f-2570-4462-a9ed-fc7d50d77ef6'] = $pane;
  $display->panels['contentmain'][1] = 'new-40aea03f-2570-4462-a9ed-fc7d50d77ef6';
  $pane = new stdClass();
  $pane->pid = 'new-58f17afe-37ce-440c-bbad-c0e07dd4ba08';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'advisors-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'node_nid',
        'settings' => array(
          'nid' => '4131',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '58f17afe-37ce-440c-bbad-c0e07dd4ba08';
  $display->content['new-58f17afe-37ce-440c-bbad-c0e07dd4ba08'] = $pane;
  $display->panels['contentmain'][2] = 'new-58f17afe-37ce-440c-bbad-c0e07dd4ba08';
  $pane = new stdClass();
  $pane->pid = 'new-272e931a-be50-4b6a-a614-73fec3d57eb3';
  $pane->panel = 'contentmain';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '<node>',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '272e931a-be50-4b6a-a614-73fec3d57eb3';
  $display->content['new-272e931a-be50-4b6a-a614-73fec3d57eb3'] = $pane;
  $display->panels['contentmain'][3] = 'new-272e931a-be50-4b6a-a614-73fec3d57eb3';
  $pane = new stdClass();
  $pane->pid = 'new-f248398c-063b-4cc4-b3d2-d52710be4f38';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'related_galleries-panel_pane_1';
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
  $pane->uuid = 'f248398c-063b-4cc4-b3d2-d52710be4f38';
  $display->content['new-f248398c-063b-4cc4-b3d2-d52710be4f38'] = $pane;
  $display->panels['footer'][0] = 'new-f248398c-063b-4cc4-b3d2-d52710be4f38';
  $pane = new stdClass();
  $pane->pid = 'new-a76f865f-5db1-436e-8395-50f7ce728bb6';
  $pane->panel = 'footer';
  $pane->type = 'views_panes';
  $pane->subtype = 'related_topic_pages-panel_pane_1';
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
  $pane->uuid = 'a76f865f-5db1-436e-8395-50f7ce728bb6';
  $display->content['new-a76f865f-5db1-436e-8395-50f7ce728bb6'] = $pane;
  $display->panels['footer'][1] = 'new-a76f865f-5db1-436e-8395-50f7ce728bb6';
  $pane = new stdClass();
  $pane->pid = 'new-4841ac88-f35b-4519-bf2d-505acb6cc1bf';
  $pane->panel = 'sidebar';
  $pane->type = 'menu_tree';
  $pane->subtype = 'main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'main-menu:0',
    'title_link' => 1,
    'admin_title' => 'Subnav',
    'level' => '2',
    'follow' => 'active',
    'depth' => '0',
    'expanded' => 1,
    'sort' => 0,
    'menu_name' => 'main-menu',
    'parent_mlid' => '0',
    'override_title' => 0,
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
  $pane->uuid = '4841ac88-f35b-4519-bf2d-505acb6cc1bf';
  $display->content['new-4841ac88-f35b-4519-bf2d-505acb6cc1bf'] = $pane;
  $display->panels['sidebar'][0] = 'new-4841ac88-f35b-4519-bf2d-505acb6cc1bf';
  $pane = new stdClass();
  $pane->pid = 'new-f1b91ce0-b99c-453c-a2f7-9b272cb9e831';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'documents_related-panel_pane_1';
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
  $pane->uuid = 'f1b91ce0-b99c-453c-a2f7-9b272cb9e831';
  $display->content['new-f1b91ce0-b99c-453c-a2f7-9b272cb9e831'] = $pane;
  $display->panels['sidebar'][1] = 'new-f1b91ce0-b99c-453c-a2f7-9b272cb9e831';
  $pane = new stdClass();
  $pane->pid = 'new-4aa4b160-a647-4960-9fb0-235af8e19010';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'custom_widgets-panel_pane_1';
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
  $pane->uuid = '4aa4b160-a647-4960-9fb0-235af8e19010';
  $display->content['new-4aa4b160-a647-4960-9fb0-235af8e19010'] = $pane;
  $display->panels['sidebar'][2] = 'new-4aa4b160-a647-4960-9fb0-235af8e19010';
  $pane = new stdClass();
  $pane->pid = 'new-f96b686b-e3b2-4dbe-8d38-b4d84cfdb933';
  $pane->panel = 'sidebar';
  $pane->type = 'related_news';
  $pane->subtype = 'related_news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f96b686b-e3b2-4dbe-8d38-b4d84cfdb933';
  $display->content['new-f96b686b-e3b2-4dbe-8d38-b4d84cfdb933'] = $pane;
  $display->panels['sidebar'][3] = 'new-f96b686b-e3b2-4dbe-8d38-b4d84cfdb933';
$display->hide_title = PANELS_TITLE_NONE;
$display->title_pane = '0';
$handler->conf['display'] = $display;
