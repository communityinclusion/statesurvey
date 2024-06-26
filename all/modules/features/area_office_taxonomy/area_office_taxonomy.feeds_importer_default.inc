<?php

/**
 * @file
 * area_office_taxonomy.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function area_office_taxonomy_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'georgia_area_office';
  $feeds_importer->config = array(
    'content_type' => '',
    'description' => '',
    'expire_period' => 3600,
    'fetcher' => array(
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'private://feeds',
      ),
      'plugin_key' => 'FeedsFileFetcher',
    ),
    'import_on_create' => 1,
    'import_period' => '-1',
    'name' => 'Georgia area office',
    'parser' => array(
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
      'plugin_key' => 'FeedsCSVParser',
    ),
    'process_in_background' => 0,
    'processor' => array(
      'config' => array(
        'bundle' => 'area_office',
        'input_format' => 'plain_text',
        'insert_new' => '1',
        'language' => 'und',
        'mappings' => array(
          0 => array(
            'language' => 'und',
            'source' => 'Counties',
            'target' => 'name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Regions',
            'target' => 'parent',
            'unique' => FALSE,
          ),
        ),
        'skip_hash_check' => 0,
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'vocabulary' => 0,
      ),
      'plugin_key' => 'FeedsTermProcessor',
    ),
    'update' => 0,
  );
  $export['georgia_area_office'] = $feeds_importer;

  return $export;
}
