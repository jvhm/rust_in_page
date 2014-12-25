<?php
/**
 * @file
 * integrantes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function integrantes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'formacoes_integrantes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Formações e Integrantes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Formações e Integrantes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mais';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascendente';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Decrescente';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Itens por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tudo -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« início';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'próximo ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'fim »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Campo: Conteúdo: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Critério de ordenação: Conteúdo: Data de publicação */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critério de filtragem: Conteúdo: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critério de filtragem: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'formacoes' => 'formacoes',
  );

  /* Display: Formações */
  $handler = $view->new_display('page', 'Formações', 'page');
  $handler->display->display_options['path'] = 'megadeth/formacoes';

  /* Display: Integrantes */
  $handler = $view->new_display('page', 'Integrantes', 'page_1');
  $handler->display->display_options['path'] = 'megadeth/integrantes';

  /* Display: Ex-integrantes */
  $handler = $view->new_display('page', 'Ex-integrantes', 'page_2');
  $handler->display->display_options['path'] = 'megadeth/ex-integrantes';
  $export['formacoes_integrantes'] = $view;

  $view = new view();
  $view->name = 'integrantes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Integrantes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Integrantes Atuais';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mais';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascendente';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Decrescente';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Conteúdo: Imagem de chamada */
  $handler->display->display_options['fields']['field_imagem_chamada_integrantes']['id'] = 'field_imagem_chamada_integrantes';
  $handler->display->display_options['fields']['field_imagem_chamada_integrantes']['table'] = 'field_data_field_imagem_chamada_integrantes';
  $handler->display->display_options['fields']['field_imagem_chamada_integrantes']['field'] = 'field_imagem_chamada_integrantes';
  $handler->display->display_options['fields']['field_imagem_chamada_integrantes']['label'] = '';
  $handler->display->display_options['fields']['field_imagem_chamada_integrantes']['element_class'] = 'various';
  $handler->display->display_options['fields']['field_imagem_chamada_integrantes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagem_chamada_integrantes']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagem_chamada_integrantes']['settings'] = array(
    'image_style' => 'chamada_de_integrantes',
    'image_link' => 'content',
  );
  /* Campo: Conteúdo: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Campo: Conteúdo: Descrição Data Entrada/Saída */
  $handler->display->display_options['fields']['field_descricao_entrada_saida']['id'] = 'field_descricao_entrada_saida';
  $handler->display->display_options['fields']['field_descricao_entrada_saida']['table'] = 'field_data_field_descricao_entrada_saida';
  $handler->display->display_options['fields']['field_descricao_entrada_saida']['field'] = 'field_descricao_entrada_saida';
  $handler->display->display_options['fields']['field_descricao_entrada_saida']['label'] = '';
  $handler->display->display_options['fields']['field_descricao_entrada_saida']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_descricao_entrada_saida']['element_label_colon'] = FALSE;
  /* Campo: Conteúdo: Endereço */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Campo: Global: Texto personalizado */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]?ajax_request" class="fancybox_various" data-fancybox-type="iframe">[title]</a><br/>
<span class="periodo-integrante">[field_descricao_entrada_saida]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Critério de ordenação: Conteúdo: Ano da última entrada (field_ano_ultima_entrada) */
  $handler->display->display_options['sorts']['field_ano_ultima_entrada_value']['id'] = 'field_ano_ultima_entrada_value';
  $handler->display->display_options['sorts']['field_ano_ultima_entrada_value']['table'] = 'field_data_field_ano_ultima_entrada';
  $handler->display->display_options['sorts']['field_ano_ultima_entrada_value']['field'] = 'field_ano_ultima_entrada_value';
  /* Critério de filtragem: Conteúdo: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critério de filtragem: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'integrantes' => 'integrantes',
  );
  /* Critério de filtragem: Conteúdo: Ano da última saída (field_ano_ultima_saida) */
  $handler->display->display_options['filters']['field_ano_ultima_saida_value']['id'] = 'field_ano_ultima_saida_value';
  $handler->display->display_options['filters']['field_ano_ultima_saida_value']['table'] = 'field_data_field_ano_ultima_saida';
  $handler->display->display_options['filters']['field_ano_ultima_saida_value']['field'] = 'field_ano_ultima_saida_value';
  $handler->display->display_options['filters']['field_ano_ultima_saida_value']['operator'] = 'empty';

  /* Display: Integrantes Atuais */
  $handler = $view->new_display('block', 'Integrantes Atuais', 'block');

  /* Display: Ex-Integrantes */
  $handler = $view->new_display('block', 'Ex-Integrantes', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ex-Integrantes';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critério de ordenação: Conteúdo: Ano da última saída (field_ano_ultima_saida) */
  $handler->display->display_options['sorts']['field_ano_ultima_saida_value']['id'] = 'field_ano_ultima_saida_value';
  $handler->display->display_options['sorts']['field_ano_ultima_saida_value']['table'] = 'field_data_field_ano_ultima_saida';
  $handler->display->display_options['sorts']['field_ano_ultima_saida_value']['field'] = 'field_ano_ultima_saida_value';
  $handler->display->display_options['sorts']['field_ano_ultima_saida_value']['order'] = 'DESC';
  /* Critério de ordenação: Conteúdo: Título */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critério de filtragem: Conteúdo: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critério de filtragem: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'integrantes' => 'integrantes',
  );
  /* Critério de filtragem: Conteúdo: Ano da última saída (field_ano_ultima_saida) */
  $handler->display->display_options['filters']['field_ano_ultima_saida_value']['id'] = 'field_ano_ultima_saida_value';
  $handler->display->display_options['filters']['field_ano_ultima_saida_value']['table'] = 'field_data_field_ano_ultima_saida';
  $handler->display->display_options['filters']['field_ano_ultima_saida_value']['field'] = 'field_ano_ultima_saida_value';
  $handler->display->display_options['filters']['field_ano_ultima_saida_value']['operator'] = 'not empty';
  $export['integrantes'] = $view;

  return $export;
}
