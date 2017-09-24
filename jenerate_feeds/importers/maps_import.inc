<?php
/**
 * @file
 * Feeds importer: maps.
 */

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'maps_import';
$feeds_importer->config = array(
  'name' => 'Map of the Month',
  'description' => 'Import JSON data for map of the month',
  'fetcher' => array(
    'plugin_key' => 'FeedsHTTPFetcherAppendHeaders',
    'config' => array(
      'append_headers' => 'Accept|application/json',
      'request_timeout' => '',
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsExJsonPath',
    'config' => array(
      'sources' => array(
        'id' => array(
          'name' => 'id',
          'value' => 'id',
          'debug' => 0,
          'weight' => '1',
        ),
        'uuid' => array(
          'name' => 'uuid',
          'value' => 'uuid',
          'debug' => 0,
          'weight' => '2',
        ),
        'title' => array(
          'name' => 'title',
          'value' => 'title',
          'debug' => 0,
          'weight' => '3',
        ),
        'description' => array(
          'name' => 'description',
          'value' => 'description',
          'debug' => 0,
          'weight' => '4',
        ),
        'postedby' => array(
          'name' => 'postedBy',
          'value' => 'postedBy',
          'debug' => 0,
          'weight' => '5',
        ),
        'pngurl' => array(
          'name' => 'pngURL',
          'value' => 'pngURL',
          'debug' => 0,
          'weight' => '6',
        ),
        'pdfurl' => array(
          'name' => 'pdfURL',
          'value' => 'pdfURL',
          'debug' => 0,
          'weight' => '7',
        ),
        'year' => array(
          'name' => 'year',
          'value' => 'year',
          'debug' => 0,
          'weight' => '8',
        ),
        'month' => array(
          'name' => 'month',
          'value' => 'month',
          'debug' => 0,
          'weight' => '9',
        ),
        'monthid' => array(
          'name' => 'monthId',
          'value' => 'monthId',
          'debug' => 0,
          'weight' => '10',
        ),
      ),
      'context' => array(
        'value' => '$.*',
      ),
      'display_errors' => 0,
      'source_encoding' => array(
        0 => 'auto',
      ),
      'debug_mode' => 0,
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsNodeProcessor',
    'config' => array(
      'bundle' => 'map',
      'update_existing' => '2',
      'expire' => '-1',
      'mappings' => array(
        0 => array(
          'source' => 'uuid',
          'target' => 'guid',
          'unique' => 1,
          'language' => 'und',
        ),
        1 => array(
          'source' => 'uuid',
          'target' => 'field_map_unique_id',
          'unique' => FALSE,
          'language' => 'und',
        ),
        2 => array(
          'source' => 'id',
          'target' => 'field_map_source_id',
          'unique' => FALSE,
          'language' => 'und',
        ),
        3 => array(
          'source' => 'postedby',
          'target' => 'field_admin_name',
          'unique' => FALSE,
          'language' => 'und',
        ),
        4 => array(
          'source' => 'title',
          'target' => 'title',
          'unique' => FALSE,
          'language' => 'und',
        ),
        5 => array(
          'source' => 'description',
          'target' => 'body',
          'unique' => FALSE,
          'language' => 'und',
        ),
        6 => array(
          'source' => 'pdfurl',
          'target' => 'field_map_document:uri',
          'unique' => FALSE,
          'language' => 'und',
        ),
        7 => array(
          'source' => 'pngurl',
          'target' => 'field_image:uri',
          'unique' => FALSE,
          'language' => 'und',
        ),
        8 => array(
          'source' => 'year',
          'target' => 'field_date_appointed:start',
          'unique' => FALSE,
          'language' => 'und',
        ),
        9 => array(
          'source' => 'month',
          'target' => 'field_date_appointed:start',
          'unique' => FALSE,
          'language' => 'und',
        ),
      ),
      'input_format' => 'plain_text',
      'author' => '3596',
      'authorize' => 0,
      'update_non_existent' => 'skip',
      'skip_hash_check' => 0,
      'insert_new' => '1',
      'language' => 'und',
    ),
  ),
  'content_type' => '',
  'update' => 0,
  'import_period' => '86400',
  'expire_period' => 3600,
  'import_on_create' => 1,
  'process_in_background' => 0,
);
