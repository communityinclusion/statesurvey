<?php

/**
 * @file
 * georgia_cie_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function georgia_cie_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__individual_data_ga_cie';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__individual_data_ga_cie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_individual_data_ga_cie';
  $strongarm->value = array();
  $export['menu_options_individual_data_ga_cie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_individual_data_ga_cie';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_individual_data_ga_cie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_individual_data_ga_cie';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_individual_data_ga_cie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_individual_data_ga_cie';
  $strongarm->value = '1';
  $export['node_preview_individual_data_ga_cie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_individual_data_ga_cie';
  $strongarm->value = 0;
  $export['node_submitted_individual_data_ga_cie'] = $strongarm;

  return $export;
}
