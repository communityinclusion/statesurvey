<?php

/**
 * @file
 * minnesota_addition.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function minnesota_addition_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function minnesota_addition_node_info() {
  $items = array(
    'individual_data_mn' => array(
      'name' => t('Individual data MN'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
