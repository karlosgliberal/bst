<?php
/**
 * Custom controller for the inversor entity.
 */
class InversorController extends EntityAPIController {

  /**
   * Override the save method.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    if (isset($entity->is_new)) {
      $entity->created = REQUEST_TIME;
    }

    $entity->changed = REQUEST_TIME;
    return parent::save($entity, $transaction);
  }
}

/**
 * Inversor custom entity class.
 */
class Inversor extends Entity {
  protected function defaultUri() {
    return array('path' => 'inversor/' . $this->identifier());
  }

  public function getLabel () {
    if (isset($this->is_new)) return "";

    if (empty($this->invertir_como_empresa) || $this->invertir_como_empresa == 'persona_fisica')
      return $this->identificacion . " - " . $this->nombre . " " . $this->apellidos;
    else
      return $this->cif . " - " . $this->nombre_empresa;
  }
}


/**
 * Custom controller for the ronda entity.
 */
class RondaController extends EntityAPIController {

  /**
   * Override the save method.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    if (isset($entity->is_new)) {
      $entity->created = REQUEST_TIME;
    }

    $entity->changed = REQUEST_TIME;
    return parent::save($entity, $transaction);
  }
}


/**
 * Ronda custom entity class.
 */
class Ronda extends Entity {
  protected function defaultUri() {
    return array('path' => 'ronda/' . $this->identifier());
  }

  public function getLabel () {
    if (isset($this->is_new)) return "";

    return $this->nombre;
  }
}