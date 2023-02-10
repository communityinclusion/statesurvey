<?php

/**
 * @file
 * more_georgia_changes.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function more_georgia_changes_default_rules_configuration() {
  $items = array();
  $items['rules_add_group_admins'] = entity_import('rules_config', '{ "rules_add_group_admins" : {
      "LABEL" : "Add group admins",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--provider" : { "bundle" : "provider" } },
      "DO" : []
    }
  }');
  $items['rules_autoenroll_georgia_admin_in_provider_groups'] = entity_import('rules_config', '{ "rules_autoenroll_georgia_admin_in_provider_groups" : {
      "LABEL" : "Autoenroll georgia admin in provider groups",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "8" : "8" } } } }
      ],
      "DO" : [ { "redirect" : { "url" : "sdata_rp\\/ga-batch-enrol" } } ]
    }
  }');
  $items['rules_redirect_on_password_change'] = entity_import('rules_config', '{ "rules_redirect_on_password_change" : {
      "LABEL" : "redirect on password change",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "DO" : []
    }
  }');
  return $items;
}
