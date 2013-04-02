<?php

/**
 * @file
 * Definition of Drupal\views\ViewsBundle.
 */

namespace Drupal\views;

use Drupal\Core\Cache\CacheFactory;
use Symfony\Component\DependencyInjection\ContainerBuilder;
use Symfony\Component\HttpKernel\Bundle\Bundle;
use Symfony\Component\DependencyInjection\Reference;
use Drupal\views\ViewExecutable;

/**
 * Views dependency injection container.
 */
class ViewsBundle extends Bundle {

  /**
   * Overrides Symfony\Component\HttpKernel\Bundle\Bundle::build().
   */
  public function build(ContainerBuilder $container) {
    foreach (ViewExecutable::getPluginTypes() as $type) {
      $container->register("plugin.manager.views.$type", 'Drupal\views\Plugin\ViewsPluginManager')
        ->addArgument($type)
        ->addArgument('%container.namespaces%');
    }

    $container->register('views.views_data', 'Drupal\views\ViewsDataCache')
      ->addArgument(new Reference('cache.views_info'))
      ->addArgument(new Reference('config.factory'))
      ->addTag('needs_destruction');

    $container->register('views.executable', 'Drupal\views\ViewExecutableFactory');

    $container->register('views.analyzer', 'Drupal\views\Analyzer')
      ->addArgument(new Reference('module_handler'));
    CacheFactory::registerBin($container, 'views_info');
    CacheFactory::registerBin($container, 'views_results');
  }

}