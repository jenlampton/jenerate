<?php
/**
 * @file
 * Adjust date format to work during import.
 */

$plugin = array(
  'form' => 'feeds_tamper_jenerate_time_form',
  'callback' => 'feeds_tamper_jenerate_time_callback',
  'name' => 'Pull time from date',
  'multi' => 'direct',
  'category' => 'Custom',
);

function feeds_tamper_jenerate_time_form($importer, $element_key, $settings) {
  $form = array();
  $form['mtc'] = array(
    '#type' => 'checkbox',
    '#title' => t('Pull time from date.'),
    '#default_value' => TRUE,
  );

  return $form;
}

function feeds_tamper_jenerate_time_callback($result, $item_key, $element_key, &$field, $settings, $source) {
  if (!is_array($field)) {
    $field = array($field);
  }
  $out = array();
  foreach ($field as $in) {
    $out = format_date($in, 'custom', 'g:ia');
  }
  $field = $out;
}
