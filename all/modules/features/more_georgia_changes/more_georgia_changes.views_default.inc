<?php

/**
 * @file
 * more_georgia_changes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function more_georgia_changes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'georgia_data_by_reporting_period';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Georgia data by reporting period';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Georgia data by reporting period.';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['label'] = 'Provider entity referenced from og_group_ref';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_individual_target_id']['id'] = 'field_individual_target_id';
  $handler->display->display_options['relationships']['field_individual_target_id']['table'] = 'field_data_field_individual';
  $handler->display->display_options['relationships']['field_individual_target_id']['field'] = 'field_individual_target_id';
  $handler->display->display_options['relationships']['field_individual_target_id']['label'] = 'Individual record referenced from field_individual';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'area_office' => 'area_office',
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['id'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['field'] = 'field_current_reporting_period_target_id';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid_1']['id'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['term_node_tid_1']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid_1']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid_1']['relationship'] = 'field_individual_target_id';
  $handler->display->display_options['relationships']['term_node_tid_1']['label'] = 'individual term';
  $handler->display->display_options['relationships']['term_node_tid_1']['vocabularies'] = array(
    'area_office' => 0,
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['relationship'] = 'term_node_tid_1';
  $handler->display->display_options['relationships']['parent_1']['label'] = 'INdividual parent';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'data nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name']['label'] = 'Region';
  /* Field: Content: Area office */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'field_individual_target_id';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['relationship'] = 'field_individual_target_id';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['label'] = 'Individual competitive hours';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['id'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['table'] = 'field_data_field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['field'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['label'] = 'wages from ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Why didn't this individual receive minimum wage? */
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['id'] = 'field_indv_comp_why_not_min';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['table'] = 'field_data_field_indv_comp_why_not_min';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['field'] = 'field_indv_comp_why_not_min';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['label'] = 'Individ. comp.  Why not min. wage?';
  /* Field: Content: Receives paid time off? Include paid vacation, sick, or holiday time.  */
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['id'] = 'field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['table'] = 'field_data_field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['field'] = 'field_indv_comp_paid_time_off';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_cont_partic']['id'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['table'] = 'field_data_field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['field'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['label'] = 'Participated in indiv. cotract. employ.?';
  $handler->display->display_options['fields']['field_indv_cont_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_cont_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_cont_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_cont_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_cont_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_hrs']['id'] = 'field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['table'] = 'field_data_field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['field'] = 'field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['label'] = 'individual contracted hours';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['id'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['table'] = 'field_data_field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['field'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['label'] = 'Indiv. contracted  wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Why didn't this individual receive minimum wage? */
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['id'] = 'field_indv_cont_why_no_min';
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['table'] = 'field_data_field_indv_cont_why_no_min';
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['field'] = 'field_indv_cont_why_no_min';
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['label'] = 'Indiv. contr.  why not min. wage?';
  /* Field: Content: Receives paid time off?  Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['id'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['table'] = 'field_data_field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['field'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['label'] = 'Ind. contract.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['id'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['table'] = 'field_data_field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['field'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['label'] = 'Indiv. contract.  set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['label'] = 'Participated in grp. integ. employment';
  $handler->display->display_options['fields']['field_grp_integ_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_grp_integ_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_grp_integ_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_grp_integ_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_grp_integ_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_hrs']['id'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['table'] = 'field_data_field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['field'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['label'] = 'Group integrated wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Receives paid time off?  Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['id'] = 'field_grp_integ_paid_time_off';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['table'] = 'field_data_field_grp_integ_paid_time_off';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['field'] = 'field_grp_integ_paid_time_off';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['label'] = 'Group integ.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['id'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['table'] = 'field_data_field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['field'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['label'] = 'Group integ. set aside contract?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['label'] = 'Participated in self employment';
  $handler->display->display_options['fields']['field_self_emp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_self_emp_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_self_emp_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_self_emp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_self_emp_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked in business this reporting period *for the two week reporting period only* */
  $handler->display->display_options['fields']['field_self_emp_hrs']['id'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['table'] = 'field_data_field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['field'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['label'] = 'Hours in self employment';
  $handler->display->display_options['fields']['field_self_emp_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross business income *for the last three months* */
  $handler->display->display_options['fields']['field_self_emp_gross_income']['id'] = 'field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['table'] = 'field_data_field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['field'] = 'field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['label'] = 'Self employment gross income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross business expenses *for the last three months* */
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['id'] = 'field_self_emp_gross_expens';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['table'] = 'field_data_field_self_emp_gross_expens';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['field'] = 'field_self_emp_gross_expens';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['label'] = 'Self employment business expenses';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_shl_partic']['id'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['table'] = 'field_data_field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['field'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['label'] = 'Participated in fac. based/shelt. job ';
  $handler->display->display_options['fields']['field_shl_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shl_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_shl_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_shl_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_shl_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_shl_hrs']['id'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['table'] = 'field_data_field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['field'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Fac. based/shel. hours';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_shl_gross_wages']['id'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['table'] = 'field_data_field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['field'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['label'] = 'Fac. based/sheltered emp. wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Receives paid time off?   Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_shl_paid_time_off']['id'] = 'field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['table'] = 'field_data_field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['field'] = 'field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['label'] = 'Fac. base/shelt. employment paid time off?';
  /* Field: Content: Is this job part of a set-aside contract?  (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_shlt_set_aside']['id'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['table'] = 'field_data_field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['field'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['label'] = 'Fac. based/shelt. Set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_com_non_work_partic']['id'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['table'] = 'field_data_field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['field'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['label'] = 'Participated in comm. based non-work';
  $handler->display->display_options['fields']['field_com_non_work_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_com_non_work_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_com_non_work_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_com_non_work_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_com_non_work_partic']['type'] = 'list_key';
  /* Field: Content: Did person participate in unpaid activities in an integrated community setting during this reporting period? */
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['id'] = 'field_com_non_work_vol_partic';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['table'] = 'field_data_field_com_non_work_vol_partic';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['field'] = 'field_com_non_work_vol_partic';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['label'] = 'Cmmty. based non-work: did person paticipate in unpaid activities in integrated setting?';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did person participate in a volunteer job during this reporting period? */
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['id'] = 'field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['table'] = 'field_data_field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['field'] = 'field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['label'] = 'Particip. in a volunteer job during this reporting period?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_fac_non_work_partic']['id'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['table'] = 'field_data_field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['field'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['label'] = 'Participated in facil. based non work';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fac_non_work_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fac_non_work_partic']['type'] = 'list_key';
  /* Field: Content: Did person participate in unpaid activities in a program setting during this reporting period? */
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['id'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['table'] = 'field_data_field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['field'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['label'] = 'Particip. in unpaid activities in a program setting during rep. per.?';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain choice of other for why no particip.';
  /* Field: Content: Why is this person being deleted from the individuals list? */
  $handler->display->display_options['fields']['field_delete_indiv_why']['id'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['table'] = 'field_data_field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['field'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['label'] = 'Why individual deleted?';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['check_ind']['id'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['check_ind']['field'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['label'] = 'individual complete?';
  $handler->display->display_options['fields']['check_ind']['alter']['strip_tags'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_group_ref_target_id';
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['relationship'] = 'field_individual_target_id';
  /* Sort criterion: Content: First name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['relationship'] = 'field_individual_target_id';
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual_data' => 'individual_data',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Reporting period (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['operator_id'] = 'field_reporting_period_target_id_op';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['label'] = 'Reporting period ';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['operator'] = 'field_reporting_period_target_id_op';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['identifier'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title_1' => 'title_1',
    'tid' => 'tid',
    'name' => 'name',
    'field_area_office' => 'field_area_office',
    'field_last_name' => 'field_last_name',
    'field_first_name' => 'field_first_name',
    'field_dob' => 'field_dob',
    'field_indv_comp_partic' => 'field_indv_comp_partic',
    'field_indv_comp_hrs' => 'field_indv_comp_hrs',
    'field_indv_comp_gross_wages' => 'field_indv_comp_gross_wages',
    'field_indv_comp_why_not_min' => 'field_indv_comp_why_not_min',
    'field_indv_comp_paid_time_off' => 'field_indv_comp_paid_time_off',
    'field_indv_cont_partic' => 'field_indv_cont_partic',
    'field_indv_cont_hrs' => 'field_indv_cont_hrs',
    'field_indv_cont_gross_wages' => 'field_indv_cont_gross_wages',
    'field_indv_cont_why_no_min' => 'field_indv_cont_why_no_min',
    'field_indv_cont_paid_time_off' => 'field_indv_cont_paid_time_off',
    'field_indv_contr_set_aside' => 'field_indv_contr_set_aside',
    'field_grp_integ_partic' => 'field_grp_integ_partic',
    'field_grp_integ_hrs' => 'field_grp_integ_hrs',
    'field_grp_integ_gross_wages' => 'field_grp_integ_gross_wages',
    'field_grp_integ_paid_time_off' => 'field_grp_integ_paid_time_off',
    'field_grp_integr_set_aside' => 'field_grp_integr_set_aside',
    'field_self_emp_partic' => 'field_self_emp_partic',
    'field_self_emp_hrs' => 'field_self_emp_hrs',
    'field_self_emp_gross_income' => 'field_self_emp_gross_income',
    'field_self_emp_gross_expens' => 'field_self_emp_gross_expens',
    'field_shl_partic' => 'field_shl_partic',
    'field_shl_hrs' => 'field_shl_hrs',
    'field_shl_gross_wages' => 'field_shl_gross_wages',
    'field_shl_paid_time_off' => 'field_shl_paid_time_off',
    'field_shlt_set_aside' => 'field_shlt_set_aside',
    'field_com_non_work_partic' => 'field_com_non_work_partic',
    'field_com_non_work_vol_partic' => 'field_com_non_work_vol_partic',
    'field_com_non_wrk_hours' => 'field_com_non_wrk_hours',
    'field_com_non_work_vol_partic_2' => 'field_com_non_work_vol_partic_2',
    'field_fac_non_work_partic' => 'field_fac_non_work_partic',
    'field_fac_non_work_yn_partic' => 'field_fac_non_work_yn_partic',
    'field_indv_data_partic_why' => 'field_indv_data_partic_why',
    'field_indv_data_partic_other' => 'field_indv_data_partic_other',
    'check_ind' => 'check_ind',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_area_office' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dob' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_comp_partic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_comp_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_comp_gross_wages' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_comp_why_not_min' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_comp_paid_time_off' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_cont_partic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_cont_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_cont_gross_wages' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_cont_why_no_min' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_cont_paid_time_off' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_contr_set_aside' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grp_integ_partic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grp_integ_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grp_integ_gross_wages' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grp_integ_paid_time_off' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_grp_integr_set_aside' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_self_emp_partic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_self_emp_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_self_emp_gross_income' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_self_emp_gross_expens' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shl_partic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shl_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shl_gross_wages' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shl_paid_time_off' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shlt_set_aside' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_com_non_work_partic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_com_non_work_vol_partic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_com_non_wrk_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_com_non_work_vol_partic_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fac_non_work_partic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fac_non_work_yn_partic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_data_partic_why' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_indv_data_partic_other' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'check_ind' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p>Select a reporting period and press the "CSV" button to begin your download.  Check the reporting period name to be sure you have right one. This will take a while...</p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'data nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name']['label'] = 'Region';
  /* Field: Content: Area office */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'field_individual_target_id';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['relationship'] = 'field_individual_target_id';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['label'] = 'Individual competitive hours';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['id'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['table'] = 'field_data_field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['field'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['label'] = 'wages from ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Why didn't this individual receive minimum wage? */
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['id'] = 'field_indv_comp_why_not_min';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['table'] = 'field_data_field_indv_comp_why_not_min';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['field'] = 'field_indv_comp_why_not_min';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['label'] = 'Individ. comp.  Why not min. wage?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['label'] = 'Participated in grp. integ. employment';
  $handler->display->display_options['fields']['field_grp_integ_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_grp_integ_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_grp_integ_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_grp_integ_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_grp_integ_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_hrs']['id'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['table'] = 'field_data_field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['field'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['label'] = 'Group integrated wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Receives paid time off?  Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['id'] = 'field_grp_integ_paid_time_off';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['table'] = 'field_data_field_grp_integ_paid_time_off';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['field'] = 'field_grp_integ_paid_time_off';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['label'] = 'Group integ.  paid time off?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['label'] = 'Participated in self employment';
  $handler->display->display_options['fields']['field_self_emp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_self_emp_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_self_emp_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_self_emp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_self_emp_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked in business this reporting period *for the two week reporting period only* */
  $handler->display->display_options['fields']['field_self_emp_hrs']['id'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['table'] = 'field_data_field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['field'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['label'] = 'Hours in self employment';
  $handler->display->display_options['fields']['field_self_emp_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross business income *for the last three months* */
  $handler->display->display_options['fields']['field_self_emp_gross_income']['id'] = 'field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['table'] = 'field_data_field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['field'] = 'field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['label'] = 'Self employment gross income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross business expenses *for the last three months* */
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['id'] = 'field_self_emp_gross_expens';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['table'] = 'field_data_field_self_emp_gross_expens';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['field'] = 'field_self_emp_gross_expens';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['label'] = 'Self employment business expenses';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_shl_partic']['id'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['table'] = 'field_data_field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['field'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['label'] = 'Participated in fac. based/shelt. job ';
  $handler->display->display_options['fields']['field_shl_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shl_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_shl_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_shl_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_shl_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_shl_hrs']['id'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['table'] = 'field_data_field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['field'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Fac. based/shel. hours';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_shl_gross_wages']['id'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['table'] = 'field_data_field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['field'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['label'] = 'Fac. based/sheltered emp. wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Receives paid time off?   Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_shl_paid_time_off']['id'] = 'field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['table'] = 'field_data_field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['field'] = 'field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['label'] = 'Fac. base/shelt. employment paid time off?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_com_non_work_partic']['id'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['table'] = 'field_data_field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['field'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['label'] = 'Participated in comm. based non-work';
  $handler->display->display_options['fields']['field_com_non_work_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_com_non_work_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_com_non_work_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_com_non_work_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_com_non_work_partic']['type'] = 'list_key';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did person participate in a volunteer job during this reporting period? */
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['id'] = 'field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['table'] = 'field_data_field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['field'] = 'field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['label'] = 'Particip. in a volunteer job during this reporting period?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_fac_non_work_partic']['id'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['table'] = 'field_data_field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['field'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['label'] = 'Participated in facil. based non work';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fac_non_work_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fac_non_work_partic']['type'] = 'list_key';
  /* Field: Content: Did person participate in unpaid activities in a program setting during this reporting period? */
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['id'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['table'] = 'field_data_field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['field'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['label'] = 'Particip. in unpaid activities in a program setting during rep. per.?';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain choice of other for why no particip.';
  /* Field: Content: Why is this person being deleted from the individuals list? */
  $handler->display->display_options['fields']['field_delete_indiv_why']['id'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['table'] = 'field_data_field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['field'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['label'] = 'Why individual deleted?';
  /* Field: Content: How long (in months) has this person been employed in this job? If more than one job report the job with the longest tenure. */
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['id'] = 'field_indv_comp_time_in_job';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['table'] = 'field_data_field_indv_comp_time_in_job';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['field'] = 'field_indv_comp_time_in_job';
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'field_reporting_period_target_id';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual_data_ga' => 'individual_data_ga',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: State (og_group_state_ref) */
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['id'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['field'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['relationship'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['value'] = array(
    116038 => '116038',
  );
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['expose']['operator_id'] = 'og_group_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['expose']['label'] = 'State (og_group_state_ref)';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['expose']['operator'] = 'og_group_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['expose']['identifier'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Reporting period (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_reporting_period_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['operator_id'] = 'field_reporting_period_target_id_op';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['label'] = 'Reporting period ';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['operator'] = 'field_reporting_period_target_id_op';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['identifier'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'georgia-data-by-reporting-period';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-ga-individuals-%timestamp-mm-%timestamp-dd-%timestamp-yyyy.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'data nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name']['label'] = 'Region';
  /* Field: Content: Area office */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'field_individual_target_id';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['relationship'] = 'field_individual_target_id';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['label'] = 'Individual competitive hours';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['id'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['table'] = 'field_data_field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['field'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['label'] = 'wages from ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Why didn't this individual receive minimum wage? */
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['id'] = 'field_indv_comp_why_not_min';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['table'] = 'field_data_field_indv_comp_why_not_min';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['field'] = 'field_indv_comp_why_not_min';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['label'] = 'Individ. comp.  Why not min. wage?';
  /* Field: Content: How long (in months) has this person been employed in this job? If more than one job report the job with the longest tenure. */
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['id'] = 'field_indv_comp_time_in_job';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['table'] = 'field_data_field_indv_comp_time_in_job';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['field'] = 'field_indv_comp_time_in_job';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['label'] = 'How long in ind. compet job';
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_indv_comp_occupation']['id'] = 'field_indv_comp_occupation';
  $handler->display->display_options['fields']['field_indv_comp_occupation']['table'] = 'field_data_field_indv_comp_occupation';
  $handler->display->display_options['fields']['field_indv_comp_occupation']['field'] = 'field_indv_comp_occupation';
  $handler->display->display_options['fields']['field_indv_comp_occupation']['label'] = 'Occupation: Ind. compet. job';
  /* Field: Content: Primary funding source for employment support */
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['id'] = 'field_indv_comp_fund_source';
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['table'] = 'field_data_field_indv_comp_fund_source';
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['field'] = 'field_indv_comp_fund_source';
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['label'] = 'Primary funding source for support--ind. comp. job';
  /* Field: Content: Receives paid time off? Include paid vacation, sick, or holiday time.  */
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['id'] = 'field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['table'] = 'field_data_field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['field'] = 'field_indv_comp_paid_time_off';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['label'] = 'Participated in grp. integ. employment';
  $handler->display->display_options['fields']['field_grp_integ_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_grp_integ_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_grp_integ_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_grp_integ_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_grp_integ_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_hrs']['id'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['table'] = 'field_data_field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['field'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['label'] = 'Group integrated wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Receives paid time off?  Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['id'] = 'field_grp_integ_paid_time_off';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['table'] = 'field_data_field_grp_integ_paid_time_off';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['field'] = 'field_grp_integ_paid_time_off';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['label'] = 'Group integ.  paid time off?';
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_grp_integ_occupation']['id'] = 'field_grp_integ_occupation';
  $handler->display->display_options['fields']['field_grp_integ_occupation']['table'] = 'field_data_field_grp_integ_occupation';
  $handler->display->display_options['fields']['field_grp_integ_occupation']['field'] = 'field_grp_integ_occupation';
  $handler->display->display_options['fields']['field_grp_integ_occupation']['label'] = 'Occupation--grp. integ employment';
  /* Field: Content: Location of work */
  $handler->display->display_options['fields']['field_grp_integ_work_location']['id'] = 'field_grp_integ_work_location';
  $handler->display->display_options['fields']['field_grp_integ_work_location']['table'] = 'field_data_field_grp_integ_work_location';
  $handler->display->display_options['fields']['field_grp_integ_work_location']['field'] = 'field_grp_integ_work_location';
  $handler->display->display_options['fields']['field_grp_integ_work_location']['label'] = 'Location of work--grp. integ.';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['label'] = 'Participated in self employment';
  $handler->display->display_options['fields']['field_self_emp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_self_emp_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_self_emp_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_self_emp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_self_emp_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked in business this reporting period *for the two week reporting period only* */
  $handler->display->display_options['fields']['field_self_emp_hrs']['id'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['table'] = 'field_data_field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['field'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['label'] = 'Hours in self employment';
  $handler->display->display_options['fields']['field_self_emp_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross business income *for the last three months* */
  $handler->display->display_options['fields']['field_self_emp_gross_income']['id'] = 'field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['table'] = 'field_data_field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['field'] = 'field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['label'] = 'Self employment gross income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross business expenses *for the last three months* */
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['id'] = 'field_self_emp_gross_expens';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['table'] = 'field_data_field_self_emp_gross_expens';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['field'] = 'field_self_emp_gross_expens';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['label'] = 'Self employment business expenses';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_self_emp_occupation']['id'] = 'field_self_emp_occupation';
  $handler->display->display_options['fields']['field_self_emp_occupation']['table'] = 'field_data_field_self_emp_occupation';
  $handler->display->display_options['fields']['field_self_emp_occupation']['field'] = 'field_self_emp_occupation';
  $handler->display->display_options['fields']['field_self_emp_occupation']['label'] = 'Occupation--self. emp.';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_shl_partic']['id'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['table'] = 'field_data_field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['field'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['label'] = 'Participated in fac. based/shelt. job ';
  $handler->display->display_options['fields']['field_shl_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shl_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_shl_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_shl_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_shl_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_shl_hrs']['id'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['table'] = 'field_data_field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['field'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Fac. based/shel. hours';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_shl_gross_wages']['id'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['table'] = 'field_data_field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['field'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['label'] = 'Fac. based/sheltered emp. wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Receives paid time off?   Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_shl_paid_time_off']['id'] = 'field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['table'] = 'field_data_field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['field'] = 'field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['label'] = 'Fac. base/shelt. employment paid time off?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_com_non_work_partic']['id'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['table'] = 'field_data_field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['field'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['label'] = 'Participated in comm. based non-work';
  $handler->display->display_options['fields']['field_com_non_work_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_com_non_work_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_com_non_work_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_com_non_work_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_com_non_work_partic']['type'] = 'list_key';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did person participate in a volunteer job during this reporting period? */
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['id'] = 'field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['table'] = 'field_data_field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['field'] = 'field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['label'] = 'Particip. in a volunteer job during this reporting period?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_fac_non_work_partic']['id'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['table'] = 'field_data_field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['field'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['label'] = 'Participated in facil. based non work';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fac_non_work_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fac_non_work_partic']['type'] = 'list_key';
  /* Field: Content: Did person participate in unpaid activities in a program setting during this reporting period? */
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['id'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['table'] = 'field_data_field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['field'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['label'] = 'Particip. in unpaid activities in a program setting during rep. per.?';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain choice of other for why no particip.';
  /* Field: Content: Why is this person being deleted from the individuals list? */
  $handler->display->display_options['fields']['field_delete_indiv_why']['id'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['table'] = 'field_data_field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['field'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['label'] = 'Why individual deleted?';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual_data_ga' => 'individual_data_ga',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Reporting period (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['value'] = array(
    116039 => '116039',
  );
  $handler->display->display_options['filters']['field_reporting_period_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['operator_id'] = 'field_reporting_period_target_id_op';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['label'] = 'Reporting period ';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['operator'] = 'field_reporting_period_target_id_op';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['identifier'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'ga-provider-rp/all/download';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '60';
  $export['georgia_data_by_reporting_period'] = $view;

  $view = new view();
  $view->name = 'georgia_provider_admin';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Georgia Provider Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Georgia Provider Admin';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'provider' => 'provider',
  );
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    116038 => '116038',
  );

  /* Display: Providers page */
  $handler = $view->new_display('page', 'Providers page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Provider nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/provider/[nid]/individuals">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['path'] = 'georgia-provider-admin';

  /* Display: Individuals page */
  $handler = $view->new_display('page', 'Individuals page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Georgia Individuals Admin';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'title' => 'title',
    'nid_1' => 'nid_1',
    'nid' => 'nid',
    'og_group_ref' => 'og_group_ref',
    'edit_node' => 'edit_node',
    'nid_2' => 'nid_2',
    'edit_node_1' => 'edit_node_1',
    'field_reporting_period' => 'field_reporting_period',
    'field_cie_individual' => 'field_cie_individual',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cie_individual' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['label'] = 'Provider entity referenced from og_group_ref';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_individual_node']['id'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['field'] = 'reverse_field_individual_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'This individual nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'Provider nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['label'] = 'Provider list';
  $handler->display->display_options['fields']['og_group_ref']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['alter']['text'] = '<a href="/provider/[nid]/individuals">[og_group_ref] </a>';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a href="/node/[nid_1]/edit?destination=georgia-indiv-admin">Edit this individual</a>';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit individual';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid_2']['label'] = 'Edit individual\'s data';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = '<a href="/node/[nid_2]/edit?destination=georgia-indiv-admin">Edit individual data</a>';
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['edit_node_1']['label'] = 'Edit individual data';
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit individual data';
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Individual Authorized for CIE Funds */
  $handler->display->display_options['fields']['field_cie_individual']['id'] = 'field_cie_individual';
  $handler->display->display_options['fields']['field_cie_individual']['table'] = 'field_data_field_cie_individual';
  $handler->display->display_options['fields']['field_cie_individual']['field'] = 'field_cie_individual';
  $handler->display->display_options['fields']['field_cie_individual']['label'] = 'CIE individual';
  $handler->display->display_options['fields']['field_cie_individual']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cie_individual']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_cie_individual']['empty'] = 'No';
  $handler->display->display_options['fields']['field_cie_individual']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cie_individual']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_cie_individual']['type'] = 'list_key';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Reporting period (field_reporting_period) */
  $handler->display->display_options['sorts']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['sorts']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['sorts']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['sorts']['field_reporting_period_target_id']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['sorts']['field_reporting_period_target_id']['order'] = 'DESC';
  /* Sort criterion: Content: Provider (og_group_ref) */
  $handler->display->display_options['sorts']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['sorts']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    116038 => '116038',
  );
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Provider Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['filters']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['filters']['field_last_name_value']['field'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator_id'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['label'] = 'Individual last name';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['operator'] = 'field_last_name_value_op';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['identifier'] = 'field_last_name_value';
  $handler->display->display_options['filters']['field_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Reporting period (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['value'] = array(
    122532 => '122532',
    116039 => '116039',
    122376 => '122376',
  );
  $handler->display->display_options['filters']['field_reporting_period_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['operator_id'] = 'field_reporting_period_target_id_op';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['label'] = 'Reporting period';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['operator'] = 'field_reporting_period_target_id_op';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['identifier'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Individual Authorized for CIE Funds (field_cie_individual) */
  $handler->display->display_options['filters']['field_cie_individual_value']['id'] = 'field_cie_individual_value';
  $handler->display->display_options['filters']['field_cie_individual_value']['table'] = 'field_data_field_cie_individual';
  $handler->display->display_options['filters']['field_cie_individual_value']['field'] = 'field_cie_individual_value';
  $handler->display->display_options['filters']['field_cie_individual_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_cie_individual_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cie_individual_value']['expose']['operator_id'] = 'field_cie_individual_value_op';
  $handler->display->display_options['filters']['field_cie_individual_value']['expose']['label'] = 'Individual Authorized for CIE Funds (field_cie_individual)';
  $handler->display->display_options['filters']['field_cie_individual_value']['expose']['operator'] = 'field_cie_individual_value_op';
  $handler->display->display_options['filters']['field_cie_individual_value']['expose']['identifier'] = 'field_cie_individual_value';
  $handler->display->display_options['filters']['field_cie_individual_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_cie_individual_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'georgia-indiv-admin';
  $export['georgia_provider_admin'] = $view;

  $view = new view();
  $view->name = 'provider_directors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Provider directors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Provider directors';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Provider name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Director name */
  $handler->display->display_options['fields']['field_provider_director_name']['id'] = 'field_provider_director_name';
  $handler->display->display_options['fields']['field_provider_director_name']['table'] = 'field_data_field_provider_director_name';
  $handler->display->display_options['fields']['field_provider_director_name']['field'] = 'field_provider_director_name';
  /* Field: Content: Director email */
  $handler->display->display_options['fields']['field_provider_director_email']['id'] = 'field_provider_director_email';
  $handler->display->display_options['fields']['field_provider_director_email']['table'] = 'field_data_field_provider_director_email';
  $handler->display->display_options['fields']['field_provider_director_email']['field'] = 'field_provider_director_email';
  $handler->display->display_options['fields']['field_provider_director_email']['type'] = 'email_plain';
  /* Field: Content: Director phone number */
  $handler->display->display_options['fields']['field_provider_director_phone']['id'] = 'field_provider_director_phone';
  $handler->display->display_options['fields']['field_provider_director_phone']['table'] = 'field_data_field_provider_director_phone';
  $handler->display->display_options['fields']['field_provider_director_phone']['field'] = 'field_provider_director_phone';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'provider' => 'provider',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'provider' => 'provider',
  );
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['path'] = 'provider-directors';

  /* Display: Md. Provider director download */
  $handler = $view->new_display('views_data_export', 'Md. Provider director download', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-%timestamp-yyyy-%timestamp-mm-%timestamp-dd.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'provider' => 'provider',
  );
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['path'] = 'provider-director-download-md';

  /* Display: Mass. Provider director download */
  $handler = $view->new_display('views_data_export', 'Mass. Provider director download', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-%timestamp-yyyy-%timestamp-mm-%timestamp-dd.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'provider' => 'provider',
  );
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['path'] = 'provider-director-download-ma';

  /* Display: Georgia Provider director download */
  $handler = $view->new_display('views_data_export', 'Georgia Provider director download', 'views_data_export_3');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view-%timestamp-yyyy-%timestamp-mm-%timestamp-dd.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'provider' => 'provider',
  );
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    116038 => '116038',
  );
  $handler->display->display_options['path'] = 'provider-director-download-ga';
  $export['provider_directors'] = $view;

  return $export;
}
