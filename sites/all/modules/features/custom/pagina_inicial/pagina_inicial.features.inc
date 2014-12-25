<?php
/**
 * @file
 * pagina_inicial.features.inc
 */

/**
 * Implements hook_views_api().
 */
function pagina_inicial_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function pagina_inicial_image_default_styles() {
  $styles = array();

  // Exported image style: chamada_noticias.
  $styles['chamada_noticias'] = array(
    'name' => 'chamada_noticias',
    'label' => 'Chamada Notícias',
    'effects' => array(
      1 => array(
        'label' => 'Escala',
        'help' => 'Escalar a imagem manterá suas proporções originais. Se apenas uma das dimensões for dada, a outra será automaticamente calculada.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 650,
          'height' => '',
          'upscale' => 0,
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
function pagina_inicial_node_info() {
  $items = array(
    'noticias' => array(
      'name' => t('Notícias'),
      'base' => 'node_content',
      'description' => t('Adicionar notícias no site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
