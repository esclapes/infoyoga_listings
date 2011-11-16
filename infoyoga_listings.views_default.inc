<?php
/**
 * @file
 * infoyoga_listings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function infoyoga_listings_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'centro_geoposicion';
  $view->description = 'Bloque que muestra la geoposición de un nodo';
  $view->tag = 'maps';
  $view->base_table = 'node';
  $view->human_name = 'bloque_geoposicion';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_centro_geofield',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Geoposición */
  $handler->display->display_options['fields']['field_centro_geofield']['id'] = 'field_centro_geofield';
  $handler->display->display_options['fields']['field_centro_geofield']['table'] = 'field_data_field_centro_geofield';
  $handler->display->display_options['fields']['field_centro_geofield']['field'] = 'field_centro_geofield';
  $handler->display->display_options['fields']['field_centro_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_centro_geofield']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_centro_geofield']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_centro_geofield']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_centro_geofield']['field_api_classes'] = 0;
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_centro_address']['id'] = 'field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['table'] = 'field_data_field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['field'] = 'field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_centro_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_centro_address']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';

  /* Display: Bloque de geoposición */
  $handler = $view->new_display('block', 'Bloque de geoposición', 'block_1');
  $handler->display->display_options['display_description'] = 'Bloque para mostrar la geoposición del nodo';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'node_geo_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['centro_geoposicion'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Dirección'),
    t('All'),
    t('OpenLayers Data Overlay'),
    t('Bloque de geoposición'),
    t('Bloque para mostrar la geoposición del nodo'),
  );
  $export['centro_geoposicion'] = $view;

  $view = new view;
  $view->name = 'mapa_centros';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mapa de centros con argumentos';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_centro_geofield',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_centro_address',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Geoposición */
  $handler->display->display_options['fields']['field_centro_geofield']['id'] = 'field_centro_geofield';
  $handler->display->display_options['fields']['field_centro_geofield']['table'] = 'field_data_field_centro_geofield';
  $handler->display->display_options['fields']['field_centro_geofield']['field'] = 'field_centro_geofield';
  $handler->display->display_options['fields']['field_centro_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_centro_geofield']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_centro_geofield']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_centro_geofield']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_centro_geofield']['field_api_classes'] = 0;
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_centro_address']['id'] = 'field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['table'] = 'field_data_field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['field'] = 'field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['label'] = '';
  $handler->display->display_options['fields']['field_centro_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_centro_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_centro_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_centro_address']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['null']['must_not_be'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'centro' => 'centro',
  );
  /* Filter criterion: Content: Dirección (field_centro_address:administrative_area) */
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['id'] = 'field_centro_address_administrative_area';
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['table'] = 'field_data_field_centro_address';
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['field'] = 'field_centro_address_administrative_area';
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['value'] = '%1';
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['expose']['operator_id'] = 'field_centro_address_administrative_area_op';
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['expose']['label'] = 'Provincia';
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['expose']['operator'] = 'field_centro_address_administrative_area_op';
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['expose']['identifier'] = 'provincia';
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['field_centro_address_administrative_area']['expose']['multiple'] = FALSE;

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Centros de Yoga en España';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'mapa_1_ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'centros/b/%';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Centros de Yoga';
  $handler->display->display_options['menu']['description'] = 'Mapa y directorio de centros de Yoga en España';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['mapa_centros'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('All'),
    t('Provincia'),
    t('OpenLayers Data Overlay'),
    t('Page'),
    t('Centros de Yoga en España'),
  );
  $export['mapa_centros'] = $view;

  $view = new view;
  $view->name = 'mapa_de_centros';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mapa de centros';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_centro_geofield',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_centro_address',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_centro_address']['id'] = 'field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['table'] = 'field_data_field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['field'] = 'field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['label'] = '';
  $handler->display->display_options['fields']['field_centro_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_centro_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_centro_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_centro_address']['field_api_classes'] = 0;
  /* Field: Content: Geoposición */
  $handler->display->display_options['fields']['field_centro_geofield']['id'] = 'field_centro_geofield';
  $handler->display->display_options['fields']['field_centro_geofield']['table'] = 'field_data_field_centro_geofield';
  $handler->display->display_options['fields']['field_centro_geofield']['field'] = 'field_centro_geofield';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Dirección (field_centro_address:administrative_area) */
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['id'] = 'field_centro_address_administrative_area';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['table'] = 'field_data_field_centro_address';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['field'] = 'field_centro_address_administrative_area';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['limit'] = '0';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['break_phrase'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'centro' => 'centro',
  );

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Dirección */
  $handler->display->display_options['fields']['field_centro_address']['id'] = 'field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['table'] = 'field_data_field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['field'] = 'field_centro_address';
  $handler->display->display_options['fields']['field_centro_address']['label'] = '';
  $handler->display->display_options['fields']['field_centro_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_centro_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_centro_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_centro_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_centro_address']['field_api_classes'] = 0;
  /* Field: Content: Geoposición */
  $handler->display->display_options['fields']['field_centro_geofield']['id'] = 'field_centro_geofield';
  $handler->display->display_options['fields']['field_centro_geofield']['table'] = 'field_data_field_centro_geofield';
  $handler->display->display_options['fields']['field_centro_geofield']['field'] = 'field_centro_geofield';
  $handler->display->display_options['fields']['field_centro_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_centro_geofield']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_centro_geofield']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_centro_geofield']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_centro_geofield']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_centro_geofield']['field_api_classes'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Centros de Yoga en España';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Dirección (field_centro_address:administrative_area) */
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['id'] = 'field_centro_address_administrative_area';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['table'] = 'field_data_field_centro_address';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['field'] = 'field_centro_address_administrative_area';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['glossary'] = 0;
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['limit'] = '0';
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['field_centro_address_administrative_area']['break_phrase'] = 0;
  $handler->display->display_options['path'] = 'centros/%';
  $handler->display->display_options['menu']['title'] = 'Centros de Yoga';
  $handler->display->display_options['menu']['description'] = 'Mapa y directorio de centros de Yoga en España';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'mapa_1_ol';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Mapa para listado de centros';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Centros de Yoga en España';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Provincia Alias */
  $handler->display->display_options['fields']['field_provincia_alias']['id'] = 'field_provincia_alias';
  $handler->display->display_options['fields']['field_provincia_alias']['table'] = 'field_data_field_provincia_alias';
  $handler->display->display_options['fields']['field_provincia_alias']['field'] = 'field_provincia_alias';
  $handler->display->display_options['fields']['field_provincia_alias']['label'] = '';
  $handler->display->display_options['fields']['field_provincia_alias']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_provincia_alias']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_provincia_alias']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_provincia_alias']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'centros/[field_provincia_alias]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['alt'] = 'Centros de Yoga en [title]';
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'provincias' => 'provincias',
  );
  $handler->display->display_options['path'] = 'centros';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Centros de Yoga';
  $handler->display->display_options['menu']['description'] = 'Mapa y directorio de centros de Yoga en España';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['mapa_de_centros'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Geoposición'),
    t('All'),
    t('OpenLayers Data Overlay'),
    t('Page'),
    t('Centros de Yoga en España'),
    t('Block'),
    t('Mapa para listado de centros'),
    t('centros/[field_provincia_alias]'),
    t('Centros de Yoga en [title]'),
  );
  $export['mapa_de_centros'] = $view;

  return $export;
}
