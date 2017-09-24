<?php
/**
 * @file
 * Adjust date format to work during import.
 */

$plugin = array(
  'form' => 'feeds_tamper_jenerate_date_form',
  'callback' => 'feeds_tamper_jenerate_date_callback',
  'name' => 'Adjust the date for timezone',
  'multi' => 'direct',
  'category' => 'Custom',
);

function feeds_tamper_jenerate_date_form($importer, $element_key, $settings) {
  $form = array();
  $form['mtc'] = array(
    '#type' => 'checkbox',
    '#title' => t('Adjust the date for proper timezone handling.'),
    '#default_value' => TRUE,
  );

  return $form;
}

function feeds_tamper_jenerate_date_callback($result, $item_key, $element_key, &$field, $settings, $source) {
  if (!is_array($field)) {
    $field = array($field);
  }
  $out = array();
  foreach ($field as $in) {
    $out = array(
      'value' => $in . ':00',
      'timezone' => 'America/Los_Angeles',
      'timezone_db' => 'America/Los_Angeles',
      'date_type' => 'datetime',
    );
  }
  $field = $out;
}
