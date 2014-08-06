<?php
/**
 * @file
 * proyectos.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function proyectos_taxonomy_default_vocabularies() {
  return array(
    'categoria_hito' => array(
      'name' => 'Categoría hito',
      'machine_name' => 'categoria_hito',
      'description' => 'Categorización de los hitos de un proyecto',
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
