<?php
/**
 * @file
 * hhs_gov_content_type_leadership_bio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hhs_gov_content_type_leadership_bio_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hhs_gov_content_type_leadership_bio_node_info() {
  $items = array(
    'leadership_bio' => array(
      'name' => t('Leadership Bio'),
      'base' => 'node_content',
      'description' => t('Biographical information of HHS Leadership'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
