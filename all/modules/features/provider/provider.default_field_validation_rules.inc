<?php

/**
 * @file
 * provider.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function provider_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = ' provider id unique';
  $rule->name = 'provider_id';
  $rule->field_name = 'field_provider_vendor_name';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'provider';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
<<<<<<< HEAD
    'data' => 'global',
    'per_user' => 0,
    'bypass' => 0,
=======
    'bypass' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
    'data' => 'global',
    'errors' => 0,
    'per_user' => 0,
>>>>>>> Minnesota
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
    ),
<<<<<<< HEAD
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
=======
>>>>>>> Minnesota
  );
  $rule->error_message = 'That provider id already exists.  Provider id must be unique.';
  $export['provider_id'] = $rule;

  return $export;
}
