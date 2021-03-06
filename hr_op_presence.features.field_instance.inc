<?php
/**
 * @file
 * hr_op_presence.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hr_op_presence_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-main-field_opt_out'
  $field_instances['profile2-main-field_opt_out'] = array(
    'bundle' => 'main',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'search' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_opt_out',
    'label' => 'Opt-out',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 14,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Opt-out');

  return $field_instances;
}
