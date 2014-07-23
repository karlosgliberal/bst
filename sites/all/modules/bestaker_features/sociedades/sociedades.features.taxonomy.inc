<?php
/**
 * @file
 * sociedades.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sociedades_taxonomy_default_vocabularies() {
  return array(
    'sociedad_tipo' => array(
      'name' => 'Tipo de sociedad',
      'machine_name' => 'sociedad_tipo',
      'description' => 'Representa los diferentes tipos de sociedades existentes',
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
