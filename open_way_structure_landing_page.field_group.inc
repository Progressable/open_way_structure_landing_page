<?php
/**
 * @file
 * open_way_structure_landing_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function open_way_structure_landing_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ow_landing_highlights|node|ow_landing_page|form';
  $field_group->group_name = 'group_ow_landing_highlights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ow_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Highlights',
    'weight' => '2',
    'children' => array(
      0 => 'field_ow_landing_highlights',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Featured Highlights',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ow_landing_highlights|node|ow_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ow_landing_intro|node|ow_landing_page|form';
  $field_group->group_name = 'group_ow_landing_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ow_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Intro',
    'weight' => '1',
    'children' => array(
      0 => 'field_ow_landing_action',
      1 => 'field_ow_landing_media',
      2 => 'field_ow_landing_statement',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Intro',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ow_landing_intro|node|ow_landing_page|form'] = $field_group;

  return $export;
}
