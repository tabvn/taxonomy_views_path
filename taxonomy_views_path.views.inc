<?php

/**
 * @file
 * Contains taxonomy_views_path\taxonomy_views_path.views.inc..
 * Provide a custom views field data that isn't tied to any other module. */

use Drupal\Component\Utility\NestedArray;
use Drupal\Core\Entity\EntityStorageInterface;
use Drupal\Core\Entity\Sql\SqlContentEntityStorage;
use Drupal\Core\Render\Markup;
use Drupal\field\FieldConfigInterface;
use Drupal\field\FieldStorageConfigInterface;
use Drupal\system\ActionConfigEntityInterface;

/**
* Implements hook_views_data().
*/
function taxonomy_views_path_views_data() {

    $data['views']['table']['group'] = t('Custom Global');
    $data['views']['table']['join'] = array(
      // #global is a special flag which allows a table to appear all the time.
      '#global' => array(),
    );


    $data['views']['taxonomy_path_views_field'] = array(
        'title' => t('Taxonomy path views field'),
        'help' => t('Format Taxonomy as Path'),
        'field' => array(
            'id' => 'taxonomy_path_views_field',
        ),
    );

    return $data;
}
