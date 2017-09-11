<?php
/**
 * @file
 * Mini panel: Fat Footer.
 */

$mini = new stdClass();
$mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
$mini->api_version = 1;
$mini->name = 'fat_footer';
$mini->category = 'Footer';
$mini->admin_title = 'Fat Footer';
$mini->admin_description = 'Fat Footer';
$mini->requiredcontexts = array();
$mini->contexts = array();
$mini->relationships = array();
$display = new panels_display();
$display->layout = 'radix_taylor_foot';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'column1' => NULL,
    'column2' => NULL,
    'header' => NULL,
    'footer' => NULL,
    'half' => NULL,
    'quarter1' => NULL,
    'quarter2' => NULL,
    'above-middle1' => NULL,
    'above-middle2' => NULL,
    'above-middle3' => NULL,
    'above-middle4' => NULL,
    'top-column1' => NULL,
    'top-contentmain' => NULL,
    'top-column2' => NULL,
    'above-middle5' => NULL,
    'footer2' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '061999ce-11f6-4c81-951a-db1857dcd3ff';
$display->storage_type = 'panels_mini';
$display->storage_id = 'fat_footer';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-67d7c89b-69d2-4f53-b5a8-a3d1fa29ac2a';
$pane->panel = 'above-middle1';
$pane->type = 'submenu';
$pane->subtype = 'submenu';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'mlid' => '1286',
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
$pane->uuid = '67d7c89b-69d2-4f53-b5a8-a3d1fa29ac2a';
$display->content['new-67d7c89b-69d2-4f53-b5a8-a3d1fa29ac2a'] = $pane;
$display->panels['above-middle1'][0] = 'new-67d7c89b-69d2-4f53-b5a8-a3d1fa29ac2a';
$pane = new stdClass();
$pane->pid = 'new-5c734f09-7ab6-4d48-b137-000258d117f4';
$pane->panel = 'above-middle2';
$pane->type = 'menu_tree';
$pane->subtype = 'main-menu';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'parent' => 'main-menu:2816',
  'title_link' => 1,
  'admin_title' => '',
  'level' => '1',
  'follow' => 0,
  'depth' => '1',
  'expanded' => 0,
  'sort' => 0,
  'menu_name' => 'main-menu',
  'parent_mlid' => '2816',
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
$pane->uuid = '5c734f09-7ab6-4d48-b137-000258d117f4';
$display->content['new-5c734f09-7ab6-4d48-b137-000258d117f4'] = $pane;
$display->panels['above-middle2'][0] = 'new-5c734f09-7ab6-4d48-b137-000258d117f4';
$pane = new stdClass();
$pane->pid = 'new-f003840c-0322-4523-a37d-299230f5ea26';
$pane->panel = 'above-middle3';
$pane->type = 'menu_tree';
$pane->subtype = 'main-menu';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'parent' => 'main-menu:1326',
  'title_link' => 1,
  'admin_title' => '',
  'level' => '1',
  'follow' => 0,
  'depth' => '1',
  'expanded' => 0,
  'sort' => 0,
  'menu_name' => 'main-menu',
  'parent_mlid' => '1326',
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
$pane->uuid = 'f003840c-0322-4523-a37d-299230f5ea26';
$display->content['new-f003840c-0322-4523-a37d-299230f5ea26'] = $pane;
$display->panels['above-middle3'][0] = 'new-f003840c-0322-4523-a37d-299230f5ea26';
$pane = new stdClass();
$pane->pid = 'new-caf2df11-16fb-4b41-bc15-d9a9bb2fd5ae';
$pane->panel = 'above-middle4';
$pane->type = 'menu_tree';
$pane->subtype = 'main-menu';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'parent' => 'main-menu:1331',
  'title_link' => 1,
  'admin_title' => '',
  'level' => '1',
  'follow' => 0,
  'depth' => '1',
  'expanded' => 0,
  'sort' => 0,
  'menu_name' => 'main-menu',
  'parent_mlid' => '1331',
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
$pane->uuid = 'caf2df11-16fb-4b41-bc15-d9a9bb2fd5ae';
$display->content['new-caf2df11-16fb-4b41-bc15-d9a9bb2fd5ae'] = $pane;
$display->panels['above-middle4'][0] = 'new-caf2df11-16fb-4b41-bc15-d9a9bb2fd5ae';
$pane = new stdClass();
$pane->pid = 'new-fd174a49-ae44-475e-b5f1-77d8aeaac889';
$pane->panel = 'above-middle5';
$pane->type = 'menu_tree';
$pane->subtype = 'main-menu';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'parent' => 'main-menu:1336',
  'title_link' => 1,
  'admin_title' => '',
  'level' => '1',
  'follow' => 0,
  'depth' => '1',
  'expanded' => 0,
  'sort' => 0,
  'menu_name' => 'main-menu',
  'parent_mlid' => '1336',
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
$pane->uuid = 'fd174a49-ae44-475e-b5f1-77d8aeaac889';
$display->content['new-fd174a49-ae44-475e-b5f1-77d8aeaac889'] = $pane;
$display->panels['above-middle5'][0] = 'new-fd174a49-ae44-475e-b5f1-77d8aeaac889';
$pane = new stdClass();
$pane->pid = 'new-0fcd7b83-53c8-4e07-aecf-b41731832023';
$pane->panel = 'footer';
$pane->type = 'custom';
$pane->subtype = 'custom';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'admin_title' => 'copyright',
  'title' => '',
  'body' => 'Copyright © 2017. All&nbsp;rights&nbsp;reserved.',
  'format' => 'full_html',
  'substitute' => TRUE,
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array(
  'css_id' => '',
  'css_class' => '',
);
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '0fcd7b83-53c8-4e07-aecf-b41731832023';
$display->content['new-0fcd7b83-53c8-4e07-aecf-b41731832023'] = $pane;
$display->panels['footer'][0] = 'new-0fcd7b83-53c8-4e07-aecf-b41731832023';
$pane = new stdClass();
$pane->pid = 'new-020d83b0-9eb1-4bb7-a643-164e92d35777';
$pane->panel = 'footer';
$pane->type = 'footer_links';
$pane->subtype = 'footer_links';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array(
  'css_id' => '',
  'css_class' => '',
);
$pane->extras = array();
$pane->position = 1;
$pane->locks = array();
$pane->uuid = '020d83b0-9eb1-4bb7-a643-164e92d35777';
$display->content['new-020d83b0-9eb1-4bb7-a643-164e92d35777'] = $pane;
$display->panels['footer'][1] = 'new-020d83b0-9eb1-4bb7-a643-164e92d35777';
$pane = new stdClass();
$pane->pid = 'new-a5874b98-5bb8-494a-8e36-f5151f962aa9';
$pane->panel = 'half';
$pane->type = 'custom';
$pane->subtype = 'custom';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'admin_title' => '',
  'title' => 'Lorem ipsum dolor sit amet',
  'body' => 'consectetur adipisicing elit, sed do eiusmod
tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,
quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo
consequat. ',
  'format' => 'filtered_html',
  'substitute' => TRUE,
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = 'a5874b98-5bb8-494a-8e36-f5151f962aa9';
$display->content['new-a5874b98-5bb8-494a-8e36-f5151f962aa9'] = $pane;
$display->panels['half'][0] = 'new-a5874b98-5bb8-494a-8e36-f5151f962aa9';
$pane = new stdClass();
$pane->pid = 'new-b213461a-bf9b-42d9-8bee-ba77a055b7d2';
$pane->panel = 'quarter1';
$pane->type = 'custom';
$pane->subtype = 'custom';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'admin_title' => '',
  'title' => 'Contact Us',
  'body' => 'Duis aute irure dolor in reprehenderit in voluptate velit esse
cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non
proident, sunt in culpa qui officia deserunt mollit anim id est laborum.',
  'format' => 'filtered_html',
  'substitute' => TRUE,
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = 'b213461a-bf9b-42d9-8bee-ba77a055b7d2';
$display->content['new-b213461a-bf9b-42d9-8bee-ba77a055b7d2'] = $pane;
$display->panels['quarter1'][0] = 'new-b213461a-bf9b-42d9-8bee-ba77a055b7d2';
$pane = new stdClass();
$pane->pid = 'new-f0fd4e6b-6ad0-4431-a413-ad5007f618e5';
$pane->panel = 'quarter2';
$pane->type = 'block';
$pane->subtype = 'on_the_web-0';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'override_title' => 1,
  'override_title_text' => 'Find Us on',
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
$pane->uuid = 'f0fd4e6b-6ad0-4431-a413-ad5007f618e5';
$display->content['new-f0fd4e6b-6ad0-4431-a413-ad5007f618e5'] = $pane;
$display->panels['quarter2'][0] = 'new-f0fd4e6b-6ad0-4431-a413-ad5007f618e5';
$pane = new stdClass();
$pane->pid = 'new-65c97342-479a-4821-9a98-ed24799162af';
$pane->panel = 'top-column1';
$pane->type = 'custom';
$pane->subtype = 'custom';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'admin_title' => 'Stay connected',
  'title' => '',
  'body' => '<p><strong>Stay connected yo</strong><br /></p>
',
  'format' => 'filtered_html',
  'substitute' => TRUE,
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$pane->uuid = '65c97342-479a-4821-9a98-ed24799162af';
$display->content['new-65c97342-479a-4821-9a98-ed24799162af'] = $pane;
$display->panels['top-column1'][0] = 'new-65c97342-479a-4821-9a98-ed24799162af';
$pane = new stdClass();
$pane->pid = 'new-ea5f31f7-7bc5-43cd-89e7-33047b029bd5';
$pane->panel = 'top-contentmain';
$pane->type = 'block';
$pane->subtype = 'govdelivery_signup-0';
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
$pane->uuid = 'ea5f31f7-7bc5-43cd-89e7-33047b029bd5';
$display->content['new-ea5f31f7-7bc5-43cd-89e7-33047b029bd5'] = $pane;
$display->panels['top-contentmain'][0] = 'new-ea5f31f7-7bc5-43cd-89e7-33047b029bd5';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$mini->display = $display;
