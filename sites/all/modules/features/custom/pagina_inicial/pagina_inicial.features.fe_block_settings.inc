<?php
/**
 * @file
 * pagina_inicial.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pagina_inicial_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-noticias-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'noticias-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
noticias',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'corkedscrewer' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corkedscrewer',
        'weight' => 0,
      ),
      'rip' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'rip',
        'weight' => -8,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => 'Últimas Notícias',
    'visibility' => 1,
  );

  return $export;
}
