<?php

/**
 * @file
 * provider.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function provider_default_rules_configuration() {
  $items = array();
  $items['more_georgia_changes_autoenroll_survey_admins_in_provider_groups'] = entity_import('rules_config', '{ "more_georgia_changes_autoenroll_survey_admins_in_provider_groups" : {
      "LABEL" : "Autoenroll survey admins in provider groups",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "3" : "3", "6" : "6" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "sdata_rp\\/batch-enrol", "force" : "0", "destination" : "1" } }
      ]
    }
  }');
  return $items;
}
