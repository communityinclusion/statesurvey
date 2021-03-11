<?php

/**
 * @file
 * area_office_taxonomy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function area_office_taxonomy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
