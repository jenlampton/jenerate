<?php
/**
 * @file
 * Feeds importer: Legacy data.
 */

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'legacy_data';
$feeds_importer->config = array(
  'name' => 'Legacy Data',
  'description' => 'Imports legacy data from CSV file.',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'csv',
      'direct' => 0,
      'directory' => 'public://feeds',
      'allowed_schemes' => array(
        'public' => 'public',
      ),
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsCSVParser',
    'config' => array(
      'delimiter' => ',',
      'no_headers' => 0,
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsNodeProcessor',
    'config' => array(
      'expire' => '-1',
      'author' => '521',
      'authorize' => 0,
      'mappings' => array(
        0 => array(
          'source' => 'GUID',
          'target' => 'guid',
          'unique' => 1,
        ),
        1 => array(
          'source' => 'GUID',
          'target' => 'field_unique_id',
          'unique' => FALSE,
        ),
        2 => array(
          'source' => 'ID',
          'target' => 'field_meeting_id',
          'unique' => FALSE,
        ),
        3 => array(
          'source' => 'NAME',
          'target' => 'field_meeting_name',
          'unique' => FALSE,
        ),
        4 => array(
          'source' => 'DATETIME',
          'target' => 'field_meeting_date_time:start',
          'unique' => FALSE,
        ),
        5 => array(
          'source' => 'LOCATION',
          'target' => 'field_meeting_location',
          'unique' => FALSE,
        ),
        6 => array(
          'source' => 'AGENDA URL',
          'target' => 'field_meeting_agenda_minutes:uri',
          'unique' => FALSE,
        ),
      ),
      'update_existing' => '2',
      'update_non_existent' => 'skip',
      'input_format' => 'plain_text',
      'skip_hash_check' => 0,
      'bundle' => 'meeting',
    ),
  ),
  'content_type' => '',
  'update' => 0,
  'import_period' => '-1',
  'expire_period' => 3600,
  'import_on_create' => 1,
  'process_in_background' => 0,
);
