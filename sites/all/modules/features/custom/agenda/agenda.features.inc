<?php
/**
 * @file
 * agenda.features.inc
 */

/**
 * Implements hook_views_api().
 */
function agenda_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function agenda_node_info() {
  $items = array(
    'agenda' => array(
      'name' => t('Agenda'),
      'base' => 'node_content',
      'description' => t('Adicionar item da agenda da banda.'),
      'has_title' => '1',
      'title_label' => t('Local do Show'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
