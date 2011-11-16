<?php
/**
 * @file
 * infoyoga_listings.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function infoyoga_listings_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass;
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'mapa_1_ol';
  $openlayers_maps->title = 'Mapa de Centros';
  $openlayers_maps->description = 'Mapa de Centros de Yoga';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '380px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-6.8774414059765, 38.169114134264',
        'zoom' => '5',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '-2399511.191499,3037913.251622,604158.271458,5718712.70716',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'mapa_de_centros_openlayers_1' => 'mapa_de_centros_openlayers_1',
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'mapa_de_centros_openlayers_1',
        'point_zoom_level' => '16',
      ),
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'mapa_de_centros_openlayers_1' => 'mapa_de_centros_openlayers_1',
        ),
        'distance' => '20',
        'threshold' => '',
      ),
    ),
    'default_layer' => 'google_hybrid',
    'layers' => array(
      'google_hybrid' => 'google_hybrid',
      'mapa_de_centros_openlayers_1' => 'mapa_de_centros_openlayers_1',
    ),
    'layer_weight' => array(
      'mapa_de_centros_openlayers_1' => '0',
      'mapa_centros_openlayers_1' => '0',
      'centro_geoposicion_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'centro_geoposicion_openlayers_1' => '0',
      'mapa_centros_openlayers_1' => '0',
      'mapa_de_centros_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'mapa_de_centros_openlayers_1' => 'mapa_de_centros_openlayers_1',
      'geofield_formatter' => 0,
      'centro_geoposicion_openlayers_1' => 0,
      'mapa_centros_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'centro_geoposicion_openlayers_1' => 0,
      'mapa_de_centros_openlayers_1' => 0,
      'mapa_centros_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['mapa_1_ol'] = $openlayers_maps;

  $openlayers_maps = new stdClass;
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'node_geo_map';
  $openlayers_maps->title = 'Mapa para el bloque de geonodos';
  $openlayers_maps->description = 'Mapa para mostrar la geoposicion de un nodo';
  $openlayers_maps->data = array(
    'width' => '380px',
    'height' => '380px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-7.2949218747092, 37.926867600188',
        'zoom' => '5',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '-2181818.534981,3101508.859144,567468.497888,5508358.005356',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'centro_geoposicion_openlayers_1' => 'centro_geoposicion_openlayers_1',
        ),
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'centro_geoposicion_openlayers_1',
        'point_zoom_level' => '16',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'centro_geoposicion_openlayers_1' => 'centro_geoposicion_openlayers_1',
    ),
    'layer_weight' => array(
      'centro_geoposicion_openlayers_1' => '0',
      'mapa_de_centros_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'mapa_de_centros_openlayers_1' => '0',
      'centro_geoposicion_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'centro_geoposicion_openlayers_1' => 'centro_geoposicion_openlayers_1',
      'geofield_formatter' => 0,
      'mapa_de_centros_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'centro_geoposicion_openlayers_1' => 0,
      'mapa_de_centros_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['node_geo_map'] = $openlayers_maps;

  return $export;
}
