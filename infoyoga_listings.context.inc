<?php
/**
 * @file
 * infoyoga_listings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function infoyoga_listings_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'listings_centros';
  $context->description = 'El contexto para las vistas y páginas de centros';
  $context->tag = 'listings';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'centros' => 'centros',
        'centros/*' => 'centros/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-jump_menu_provincias-block_1' => array(
          'module' => 'views',
          'delta' => 'jump_menu_provincias-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-mapa_de_centros-block_1' => array(
          'module' => 'views',
          'delta' => 'mapa_de_centros-block_1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('El contexto para las vistas y páginas de centros');
  t('listings');
  $export['listings_centros'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'node_geoposition';
  $context->description = 'Contexto para vistas de nodos con geoposición';
  $context->tag = 'maps';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'centro' => 'centro',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-centro_geoposicion-block_1' => array(
          'module' => 'views',
          'delta' => 'centro_geoposicion-block_1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contexto para vistas de nodos con geoposición');
  t('maps');
  $export['node_geoposition'] = $context;

  return $export;
}
