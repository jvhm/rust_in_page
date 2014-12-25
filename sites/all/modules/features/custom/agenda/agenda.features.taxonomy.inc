<?php
/**
 * @file
 * agenda.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function agenda_taxonomy_default_vocabularies() {
  return array(
    'discografia' => array(
      'name' => 'Discografia',
      'machine_name' => 'discografia',
      'description' => 'Tipos de itens a serem adicionados na seção "Discografia"',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
