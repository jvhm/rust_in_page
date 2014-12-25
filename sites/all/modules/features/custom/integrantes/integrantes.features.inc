<?php
/**
 * @file
 * integrantes.features.inc
 */

/**
 * Implements hook_views_api().
 */
function integrantes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function integrantes_image_default_styles() {
  $styles = array();

  // Exported image style: chamada_de_integrantes.
  $styles['chamada_de_integrantes'] = array(
    'name' => 'chamada_de_integrantes',
    'label' => 'Chamada de Integrantes',
    'effects' => array(
      2 => array(
        'label' => 'Escalar e cortar',
        'help' => '"Escalar e cortar", primeiro redimensiona a imagem mantendo a proporção e em seguida, vai cortará a dimensão maior. Isto é útil para criar miniaturas quadradas, sem esticar a imagem.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function integrantes_node_info() {
  $items = array(
    'formacoes' => array(
      'name' => t('Formações'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'integrantes' => array(
      'name' => t('Integrantes'),
      'base' => 'node_content',
      'description' => t('Adicionar integrante à banda'),
      'has_title' => '1',
      'title_label' => t('Nome do Integrante'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
