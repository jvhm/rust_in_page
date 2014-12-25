<?php
/**
 * @file
 * biografia.features.inc
 */

/**
 * Implements hook_views_api().
 */
function biografia_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function biografia_node_info() {
  $items = array(
    'biografia' => array(
      'name' => t('Biografia'),
      'base' => 'node_content',
      'description' => t('Adicionar trecho da biografia.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
