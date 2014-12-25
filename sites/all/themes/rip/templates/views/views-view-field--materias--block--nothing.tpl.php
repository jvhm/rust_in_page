<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>

<?php
$saidaConteudo = $output;
$camposView = $row->_field_data['nid']['entity'];

// Primeiro, é verificado se o campo de Autor Original foi preenchido, podendo ser um usuário da própria Rust In Page ou algum autor externo.
if(!empty($camposView->field_autor_original)) {
	$conteudoAutoria = "Conteúdo originalmente publicado na Rust In Page por <i>" . $camposView->field_autor_original['und'][0]['value'] . "</i>.";

	// Em seguida, verificamos se existe alguma publicação externa referente à matéria.
	if(!empty($camposView->field_site_de_origem) && !empty($camposView->field_url_origem)) {
		$conteudoAutoria = "Conteúdo originalmente publicado em <a href=\"" . $camposView->field_url_origem['und'][0]['value'] . "\">" . $camposView->field_site_de_origem['und'][0]['value'] . " por <i>" . $camposView->field_autor_original['und'][0]['value'] . "</i>.";
	}

	$saidaConteudo = $saidaConteudo . " " . $conteudoAutoria;

}

print $saidaConteudo; 
?>