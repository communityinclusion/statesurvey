<?php

/**
 * @file
 * georgia_cie_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function georgia_cie_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function georgia_cie_type_node_info() {
  $items = array(
    'individual_data_ga_cie' => array(
      'name' => t('Individual data GA CIE'),
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
