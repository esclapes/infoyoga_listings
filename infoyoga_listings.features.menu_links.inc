<?php
/**
 * @file
 * infoyoga_listings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function infoyoga_listings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:centros
  $menu_links['main-menu:centros'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'centros',
    'router_path' => 'centros',
    'link_title' => 'Centros de Yoga',
    'options' => array(
      'attributes' => array(
        'title' => 'Mapa y directorio de centros de Yoga en España',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Centros de Yoga');


  return $menu_links;
}
