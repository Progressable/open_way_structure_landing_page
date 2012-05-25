<?php
/**
 * @file
 * open_way_structure_landing_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function open_way_structure_landing_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function open_way_structure_landing_page_node_info() {
  $items = array(
    'ow_landing_page' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t(' A single web page that users are driven to from promotions. The page focuses on a specific product or service. The general goal of a landing page is to convert site visitors into sales leads. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
