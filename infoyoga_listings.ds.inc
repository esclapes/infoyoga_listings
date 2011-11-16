<?php
/**
 * @file
 * infoyoga_listings.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function infoyoga_listings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|centro|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'centro';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 1,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_centro_description',
        1 => 'field_centro_phone',
        2 => 'field_centro_address',
        3 => 'field_centro_email',
        4 => 'field_centro_web',
      ),
    ),
    'fields' => array(
      'field_centro_description' => 'ds_content',
      'field_centro_phone' => 'ds_content',
      'field_centro_address' => 'ds_content',
      'field_centro_email' => 'ds_content',
      'field_centro_web' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|centro|default'] = $ds_layout;

  return $export;
}
