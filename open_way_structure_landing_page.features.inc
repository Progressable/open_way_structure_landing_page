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
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function open_way_structure_landing_page_image_default_styles() {
  $styles = array();

  // Exported image style: ow_large-rectangle-landing-page
  $styles['ow_large-rectangle-landing-page'] = array(
    'name' => 'ow_large-rectangle-landing-page',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '500',
          'height' => '280',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: ow_smaller-square-landing-page
  $styles['ow_smaller-square-landing-page'] = array(
    'name' => 'ow_smaller-square-landing-page',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '120',
          'height' => '120',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
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
