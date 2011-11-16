<?php
/**
 * @file
 * infoyoga_listings.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function infoyoga_listings_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'prueba_centros';
  $feeds_importer->config = array(
    'name' => 'Importación de centros',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
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
        'content_type' => 'centro',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Nombre del centro',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Telefono',
            'target' => 'field_centro_phone',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Web',
            'target' => 'field_centro_web:url',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Localidad',
            'target' => 'field_centro_address:locality',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Provincia',
            'target' => 'field_centro_address:administrative_area',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Direccion',
            'target' => 'field_centro_address:thoroughfare',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'CP',
            'target' => 'field_centro_address:postal_code',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Email',
            'target' => 'field_centro_email',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Pais',
            'target' => 'field_centro_address:country',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['prueba_centros'] = $feeds_importer;

  return $export;
}
