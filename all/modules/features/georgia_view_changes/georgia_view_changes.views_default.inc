<?php

/**
 * @file
 * georgia_view_changes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function georgia_view_changes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Maryland_data_by_reporting_period_corrected';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Maryland data by reporting period';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Maryland data by reporting period';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
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
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['name']['label'] = 'Region';
  /* Field: Content: State, region, and county */
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
    'format_type' => 'long',
    'custom_date_format' => '',
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
  /* Field: Content: Total hours worked for this reporting period */
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
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
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
  $handler->display->display_options['path'] = 'maryland-data-by-reporting-period';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-md-individuals-%timestamp-mm-%timestamp-dd-%timestamp-yyyy.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'md-provider-rp/all/download';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '60';
  $export['Maryland_data_by_reporting_period_corrected'] = $view;

  $view = new view();
  $view->name = 'admin_view_user_groups_providers_';
  $view->description = 'Show groups of a user.';
  $view->tag = 'og';
  $view->base_table = 'og_membership';
  $view->human_name = 'Admin view User groups (providers)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'User is not a member of any group.';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['id'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['field'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['relationship'] = 'og_group_provider_state_ref_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_area_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_office']['type'] = 'shs_default';
  $handler->display->display_options['fields']['field_area_office']['settings'] = array(
    'linked' => 0,
  );
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_provider_vendor_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_default_classes'] = FALSE;
  /* Field: SData: Submit completed data */
  $handler->display->display_options['fields']['submit_completed']['id'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['submit_completed']['field'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['label'] = '';
  $handler->display->display_options['fields']['submit_completed']['alter']['text'] = '<hr /><h4>Submit your data:</h4>
<p><strong>[submit_completed]</p>';
  $handler->display->display_options['fields']['submit_completed']['element_type'] = 'p';
  $handler->display->display_options['fields']['submit_completed']['element_label_colon'] = FALSE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<p><a href="/provider/[nid]/download">Download a spreadsheet with [title] data.</a><br /><a href="/provider/[nid]/deleted">Download list of individuals deleted from this provider, in this reporting period, with reasons for deletion</a><br /><a href="/prov/[nid]/summary">View a summary of this provider\'s data for the reporting period.</a></p>
<hr />';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Contextual filter: We pass the user ID as the Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator_id'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['label'] = 'State (og_group_provider_state_ref)';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['identifier'] = 'og_group_provider_state_ref_target_id';

  /* Display: Admin view User Group (Provider) block */
  $handler = $view->new_display('block', 'Admin view User Group (Provider) block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '40,80,120';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'See the <a href="/admin-help">Admin Help page</a> for data management tools and instructions in using the site';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['id'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['field'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_area_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_office']['type'] = 'shs_default';
  $handler->display->display_options['fields']['field_area_office']['settings'] = array(
    'linked' => 0,
  );
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Statenid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_provider_vendor_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_default_classes'] = FALSE;
  /* Field: Content: Legacy reporting period--use non-CIE bi-annual period only */
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['id'] = 'field_legacy_reporting_period_1';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['table'] = 'field_data_field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['field'] = 'field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['label'] = '';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['alter']['text'] = '[field_legacy_reporting_period_1]';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period_1']['id'] = 'field_current_reporting_period_1';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['label'] = '';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period_1']['alter']['text'] = '[field_current_reporting_period_1]';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_reporting_period_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period_2']['id'] = 'field_current_reporting_period_2';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['label'] = '';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period_2']['alter']['text'] = '<li><a href="/provider/[nid]/[field_current_reporting_period_2-target_id]/deleted">Download list of individuals deleted from this provider, in the current reporting period, [field_current_reporting_period_1], with reasons for deletion</a></li>';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_reporting_period_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period_2']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Legacy reporting period--use non-CIE bi-annual period only */
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['id'] = 'field_legacy_reporting_period_2';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['table'] = 'field_data_field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['field'] = 'field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['label'] = '';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['alter']['text'] = '<li><a href="/provider/[nid]/[field_legacy_reporting_period_2-target_id]/deleted">Download list of individuals deleted from this provider, in the past reporting period, [field_legacy_reporting_period_1], with reasons for deletion</a></li>';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['label'] = '';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['alter']['text'] = '<li><a href="/provider/[nid]/[field_current_reporting_period-target_id]/[nid_1]/download">Download a spreadsheet with [title] data for the current reporting period, [field_current_reporting_period_1].</a></li>';
  $handler->display->display_options['fields']['field_current_reporting_period']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_reporting_period']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Legacy reporting period--use non-CIE bi-annual period only */
  $handler->display->display_options['fields']['field_legacy_reporting_period']['id'] = 'field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['table'] = 'field_data_field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['field'] = 'field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['label'] = 'Legacy reporting period';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period']['alter']['text'] = '<li><a href="/provider/[nid]/[field_legacy_reporting_period-target_id]/[nid_1]/download">Download a spreadsheet with [title] data for the past reporting period, [field_legacy_reporting_period_1].</a></li>';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: SData: Submit completed data */
  $handler->display->display_options['fields']['submit_completed']['id'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['submit_completed']['field'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['label'] = '';
  $handler->display->display_options['fields']['submit_completed']['alter']['text'] = '<hr /><h4>Submit your data:</h4>
<p><strong>[submit_completed]</p>';
  $handler->display->display_options['fields']['submit_completed']['element_type'] = 'p';
  $handler->display->display_options['fields']['submit_completed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['submit_completed']['empty'] = '<div><p><strong>The bi-annual reporting period is now closed.</strong></p></div>';
  /* Field: SData: Submit completed CIE data */
  $handler->display->display_options['fields']['submit_completed_cie']['id'] = 'submit_completed_cie';
  $handler->display->display_options['fields']['submit_completed_cie']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['submit_completed_cie']['field'] = 'submit_completed_cie';
  $handler->display->display_options['fields']['submit_completed_cie']['label'] = '';
  $handler->display->display_options['fields']['submit_completed_cie']['alter']['text'] = 'Submit CIE data';
  $handler->display->display_options['fields']['submit_completed_cie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['submit_completed_cie']['hide_empty'] = TRUE;
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<ul>[field_legacy_reporting_period][field_current_reporting_period][field_legacy_reporting_period_2][field_current_reporting_period_2]<li><a href="/prov/[nid]/summary">View a summary of this provider\'s data for the current reporting period, [field_current_reporting_period_1].</a></li></ul>
<hr />';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    116038 => '116038',
    7 => '7',
    10 => '10',
  );
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator_id'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['identifier'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  $handler->display->display_options['block_description'] = 'Admin front page';

  /* Display: Mass. Admin provider status */
  $handler = $view->new_display('views_data_export', 'Mass. Admin provider status', 'views_data_export_1');
  $handler->display->display_options['display_description'] = 'Admin provider status';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-providers-status-%timestamp-yyyy-%timestamp-mm-%timestamp-dd.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['id'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['field'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['relationship'] = 'og_group_provider_state_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_individual_target_id']['id'] = 'field_individual_target_id';
  $handler->display->display_options['relationships']['field_individual_target_id']['table'] = 'field_data_field_individual';
  $handler->display->display_options['relationships']['field_individual_target_id']['field'] = 'field_individual_target_id';
  $handler->display->display_options['relationships']['field_individual_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['field_individual_target_id']['label'] = 'Individual data node referenced from field_individual';
  /* Relationship: OG membership: User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_area_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_office']['type'] = 'shs_default';
  $handler->display->display_options['fields']['field_area_office']['settings'] = array(
    'linked' => 0,
  );
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_provider_vendor_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_default_classes'] = FALSE;
  /* Field: SData: Submit completed data */
  $handler->display->display_options['fields']['submit_completed']['id'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['submit_completed']['field'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['label'] = '';
  $handler->display->display_options['fields']['submit_completed']['alter']['text'] = '[submit_completed]';
  $handler->display->display_options['fields']['submit_completed']['element_type'] = 'p';
  $handler->display->display_options['fields']['submit_completed']['element_label_colon'] = FALSE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator_id'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['label'] = 'State (og_group_provider_state_ref)';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['identifier'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['path'] = 'all-providers/status/ma';

  /* Display: Maryland Admin provider status */
  $handler = $view->new_display('views_data_export', 'Maryland Admin provider status', 'views_data_export_2');
  $handler->display->display_options['display_description'] = 'Admin provider status';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-providers-status-%timestamp-yyyy-%timestamp-mm-%timestamp-dd.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['id'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['field'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['relationship'] = 'og_group_provider_state_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_individual_target_id']['id'] = 'field_individual_target_id';
  $handler->display->display_options['relationships']['field_individual_target_id']['table'] = 'field_data_field_individual';
  $handler->display->display_options['relationships']['field_individual_target_id']['field'] = 'field_individual_target_id';
  $handler->display->display_options['relationships']['field_individual_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['field_individual_target_id']['label'] = 'Individual data node referenced from field_individual';
  /* Relationship: OG membership: User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_area_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_office']['type'] = 'shs_default';
  $handler->display->display_options['fields']['field_area_office']['settings'] = array(
    'linked' => 0,
  );
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_provider_vendor_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_default_classes'] = FALSE;
  /* Field: SData: Submit completed data */
  $handler->display->display_options['fields']['submit_completed']['id'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['submit_completed']['field'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['label'] = '';
  $handler->display->display_options['fields']['submit_completed']['alter']['text'] = '[submit_completed]';
  $handler->display->display_options['fields']['submit_completed']['element_type'] = 'p';
  $handler->display->display_options['fields']['submit_completed']['element_label_colon'] = FALSE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator_id'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['label'] = 'State (og_group_provider_state_ref)';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['identifier'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['path'] = 'all-providers/status/md';

  /* Display: MD Provider count complete */
  $handler = $view->new_display('block', 'MD Provider count complete', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_area_office' => 'field_area_office',
    'created' => 'created',
    'nid_1' => 'nid_1',
    'title' => 'title',
    'field_provider_vendor_name' => 'field_provider_vendor_name',
    'submit_completed' => 'submit_completed',
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
    'field_area_office' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
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
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_provider_vendor_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'submit_completed' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'See the <a href="/admin-help">Admin Help page</a> for data management tools and instructions in using the site';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_area_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_office']['type'] = 'shs_default';
  $handler->display->display_options['fields']['field_area_office']['settings'] = array(
    'linked' => 0,
  );
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Statenid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/provider/[nid]/individuals" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_provider_vendor_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_default_classes'] = FALSE;
  /* Field: SData: Count completed inds. per provider */
  $handler->display->display_options['fields']['count_completed']['id'] = 'count_completed';
  $handler->display->display_options['fields']['count_completed']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['count_completed']['field'] = 'count_completed';
  $handler->display->display_options['fields']['count_completed']['label'] = '';
  $handler->display->display_options['fields']['count_completed']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: We pass the user ID as the Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator_id'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['identifier'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    6 => '6',
    1 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Md. Provider count completed';

  /* Display: Mass. Provider count complete */
  $handler = $view->new_display('block', 'Mass. Provider count complete', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_area_office' => 'field_area_office',
    'created' => 'created',
    'nid_1' => 'nid_1',
    'title' => 'title',
    'field_provider_vendor_name' => 'field_provider_vendor_name',
    'submit_completed' => 'submit_completed',
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
    'field_area_office' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
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
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_provider_vendor_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'submit_completed' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'See the <a href="/admin-help">Admin Help page</a> for data management tools and instructions in using the site';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_area_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_office']['type'] = 'shs_default';
  $handler->display->display_options['fields']['field_area_office']['settings'] = array(
    'linked' => 0,
  );
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Statenid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/provider/[nid]/individuals" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_provider_vendor_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_default_classes'] = FALSE;
  /* Field: SData: Count completed inds. per provider */
  $handler->display->display_options['fields']['count_completed']['id'] = 'count_completed';
  $handler->display->display_options['fields']['count_completed']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['count_completed']['field'] = 'count_completed';
  $handler->display->display_options['fields']['count_completed']['label'] = '';
  $handler->display->display_options['fields']['count_completed']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: We pass the user ID as the Entity ID. */
  $handler->display->display_options['arguments']['etid']['id'] = 'etid';
  $handler->display->display_options['arguments']['etid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['etid']['field'] = 'etid';
  $handler->display->display_options['arguments']['etid']['ui_name'] = 'We pass the user ID as the Entity ID.';
  $handler->display->display_options['arguments']['etid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['etid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['etid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['etid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['etid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['etid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['etid']['validate']['type'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['group'] = 1;
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator_id'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['identifier'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    6 => '6',
    1 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  $handler->display->display_options['filters']['entity_type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Mass. Provider count completed';

  /* Display: Georgia Admin provider view block */
  $handler = $view->new_display('block', 'Georgia Admin provider view block', 'block_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '40,80,120';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<!--<p>See the <a href="/node/116046">Georgia Admin Help page</a> for data management tools and instructions in using the site</p> --><p><a class="btn btn-danger" href="/user/logout">Log out</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_area_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_office']['type'] = 'shs_default';
  $handler->display->display_options['fields']['field_area_office']['settings'] = array(
    'linked' => 0,
  );
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Statenid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_provider_vendor_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_default_classes'] = FALSE;
  /* Field: SData: Submit completed data */
  $handler->display->display_options['fields']['submit_completed']['id'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['submit_completed']['field'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['label'] = '';
  $handler->display->display_options['fields']['submit_completed']['alter']['text'] = '<hr /><h4>Submit your data:</h4>
<p><strong>[submit_completed]</p>';
  $handler->display->display_options['fields']['submit_completed']['element_type'] = 'p';
  $handler->display->display_options['fields']['submit_completed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['submit_completed']['empty'] = '<div><p><strong>The bi-annual reporting period is now closed.</strong></p></div>';
  /* Field: SData: Submit completed CIE data */
  $handler->display->display_options['fields']['submit_completed_cie']['id'] = 'submit_completed_cie';
  $handler->display->display_options['fields']['submit_completed_cie']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['submit_completed_cie']['field'] = 'submit_completed_cie';
  $handler->display->display_options['fields']['submit_completed_cie']['label'] = '';
  $handler->display->display_options['fields']['submit_completed_cie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['submit_completed_cie']['hide_empty'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period_1']['id'] = 'field_current_reporting_period_1';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['label'] = '';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period_1']['alter']['text'] = '[field_current_reporting_period_1]';
  $handler->display->display_options['fields']['field_current_reporting_period_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_reporting_period_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Legacy reporting period--use non-CIE bi-annual period only */
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['id'] = 'field_legacy_reporting_period_1';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['table'] = 'field_data_field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['field'] = 'field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['label'] = '';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['alter']['text'] = '[field_legacy_reporting_period_1]';
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period_2']['id'] = 'field_current_reporting_period_2';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['label'] = '';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period_2']['alter']['text'] = '<li><a href="/provider/[nid]/[field_current_reporting_period_2-target_id]/deleted">Download list of individuals deleted from this provider, in the current reporting period, [field_current_reporting_period_1], with reasons for deletion</a></li>';
  $handler->display->display_options['fields']['field_current_reporting_period_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_reporting_period_2']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_current_reporting_period_2']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Legacy reporting period--use non-CIE bi-annual period only */
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['id'] = 'field_legacy_reporting_period_2';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['table'] = 'field_data_field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['field'] = 'field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['label'] = 'Legacy reporting period';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['alter']['text'] = '<li><a href="/provider/[nid]/[field_legacy_reporting_period_2-target_id]/deleted">Download list of individuals deleted from this provider, in the past reporting period, [field_legacy_reporting_period_1], with reasons for deletion</a></li>';
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period_2']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['label'] = '';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['alter']['text'] = '<li><a href="/provider/[nid]/[field_current_reporting_period-target_id]/[nid_1]/download">Download a spreadsheet with [title] data for the current reporting period, [field_current_reporting_period_1].</a></li>';
  $handler->display->display_options['fields']['field_current_reporting_period']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Legacy reporting period--use non-CIE bi-annual period only */
  $handler->display->display_options['fields']['field_legacy_reporting_period']['id'] = 'field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['table'] = 'field_data_field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['field'] = 'field_legacy_reporting_period';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['label'] = '';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period']['alter']['text'] = '<li><a href="/provider/[nid]/[field_legacy_reporting_period-target_id]/[nid_1]/download">Download a spreadsheet with [title] data for the past reporting period, [field_legacy_reporting_period_1].</a></li>';
  $handler->display->display_options['fields']['field_legacy_reporting_period']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_legacy_reporting_period']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_legacy_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<ul>[field_legacy_reporting_period][field_current_reporting_period][field_legacy_reporting_period_2][field_current_reporting_period_2]<li><a href="/prov/[nid]/summary">View a summary of this provider\'s data for the reporting period.</a></li></ul>
<hr />';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    116038 => '116038',
  );
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator_id'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['identifier'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  $handler->display->display_options['block_description'] = 'Georgia Admin front page';

  /* Display: Georgia Admin provider status */
  $handler = $view->new_display('views_data_export', 'Georgia Admin provider status', 'views_data_export_3');
  $handler->display->display_options['display_description'] = 'Georgia Admin provider status';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-ga-providers-status-%timestamp-yyyy-%timestamp-mm-%timestamp-dd.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['id'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['field'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['relationship'] = 'og_group_provider_state_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_individual_target_id']['id'] = 'field_individual_target_id';
  $handler->display->display_options['relationships']['field_individual_target_id']['table'] = 'field_data_field_individual';
  $handler->display->display_options['relationships']['field_individual_target_id']['field'] = 'field_individual_target_id';
  $handler->display->display_options['relationships']['field_individual_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['field_individual_target_id']['label'] = 'Individual data node referenced from field_individual';
  /* Relationship: OG membership: User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_area_office']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_office']['type'] = 'shs_default';
  $handler->display->display_options['fields']['field_area_office']['settings'] = array(
    'linked' => 0,
  );
  /* Field: OG membership: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'og_membership';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Member since';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title']['label'] = 'Provider name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_provider_vendor_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_provider_vendor_name']['element_default_classes'] = FALSE;
  /* Field: SData: Submit completed data */
  $handler->display->display_options['fields']['submit_completed']['id'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['submit_completed']['field'] = 'submit_completed';
  $handler->display->display_options['fields']['submit_completed']['label'] = 'Status message';
  $handler->display->display_options['fields']['submit_completed']['alter']['text'] = '[submit_completed]';
  $handler->display->display_options['fields']['submit_completed']['element_type'] = 'p';
  $handler->display->display_options['fields']['submit_completed']['element_label_colon'] = FALSE;
  /* Field: SData: Submit completed CIE data */
  $handler->display->display_options['fields']['submit_completed_cie']['id'] = 'submit_completed_cie';
  $handler->display->display_options['fields']['submit_completed_cie']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['submit_completed_cie']['field'] = 'submit_completed_cie';
  $handler->display->display_options['fields']['submit_completed_cie']['label'] = '';
  $handler->display->display_options['fields']['submit_completed_cie']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['submit_completed_cie']['hide_empty'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Entity_type */
  $handler->display->display_options['filters']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['filters']['entity_type']['value'] = 'user';
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    116038 => '116038',
  );
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator_id'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['label'] = 'State (og_group_provider_state_ref)';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['operator'] = 'og_group_provider_state_ref_target_id_op';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['expose']['identifier'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['path'] = 'all-providers/status/ga';
  $export['admin_view_user_groups_providers_'] = $view;

  $view = new view();
  $view->name = 'clone_of_download_individual_data';
  $view->description = 'Show all content (nodes) of a group.';
  $view->tag = 'og';
  $view->base_table = 'node';
  $view->human_name = 'All Maryland individs by reporting period';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'All Maryland by reporting period';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 40,80,160';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_2' => 'nid_2',
    'field_last_name' => 'field_last_name',
    'field_first_name' => 'field_first_name',
    'field_dob' => 'field_dob',
    'field_area_office' => 'field_area_office',
    'nid_1' => 'nid_1',
    'id_1' => 'edit_node',
    'nothing' => 'edit_node',
    'edit_node' => 'edit_node',
    'delete_membership' => 'edit_node',
    'nothing_1' => 'edit_node',
    'og_group_ref' => 'og_group_ref',
    'id' => 'id',
    'title' => 'title',
    'title_1' => 'title_1',
    'title_2' => 'title_2',
    'field_current_reporting_period' => 'field_current_reporting_period',
    'field_reporting_period' => 'field_reporting_period',
    'type' => 'type',
    'field_individual_data_type' => 'field_individual_data_type',
    'check_ind' => 'check_ind',
  );
  $handler->display->display_options['style_options']['default'] = 'field_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dob' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_area_office' => array(
      'sortable' => 1,
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
    'id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'delete_membership' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 0,
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
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_individual_data_type' => array(
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No individuals found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Individual data content from referencing individuals */
  $handler->display->display_options['relationships']['reverse_field_individual_node']['id'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['field'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['ui_name'] = 'Individual data content from referencing individuals';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['label'] = 'Individual Data content from field_individual';
  /* Relationship: Provider node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['label'] = 'Reporting period entity referenced from field_reporting_period';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['relationships']['parent']['label'] = 'Parent term';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  $handler->display->display_options['fields']['field_area_office']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Delete (unpublish) individual */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete (unpublish) individual';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete individual';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit/?delete=[id_1]&provnum=[nid_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['label'] = 'wages from ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_cont_partic']['id'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['table'] = 'field_data_field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['field'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_cont_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['label'] = 'Individual contracted hours';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['id'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['table'] = 'field_data_field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['field'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['label'] = 'Indiv. contracted. wages';
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
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['label'] = 'Indiv. contr.  why not min. wage?';
  /* Field: Content: Receives paid time off?  Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['id'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['table'] = 'field_data_field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['field'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['label'] = 'Ind. contract.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['id'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['table'] = 'field_data_field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['field'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['label'] = 'Indiv. contract.  set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['label'] = 'Group integ.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['id'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['table'] = 'field_data_field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['field'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['label'] = 'Group integ.  set aside contract?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_income']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Fac. based/shel. hours';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_shl_gross_wages']['id'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['table'] = 'field_data_field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['field'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['label'] = 'Fac. base/shelt. employment paid time off?';
  /* Field: Content: Is this job part of a set-aside contract?  (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_shlt_set_aside']['id'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['table'] = 'field_data_field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['field'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shlt_set_aside']['label'] = 'Fac. based/shelt. Set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_com_non_work_partic']['id'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['table'] = 'field_data_field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['field'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['label'] = 'Cmmty. based non-work: did person paticipate in unpaid activities in integrated setting?';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_fac_non_work_partic']['id'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['table'] = 'field_data_field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['field'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain your choice of other for why no particip.';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['check_ind']['id'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['check_ind']['field'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['check_ind']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['check_ind']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['trim'] = TRUE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: Content: First name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['group'] = 1;
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_individual_data_type';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'type';
  /* Filter criterion: Content: Reporting period (field_reporting_period) */
  $handler->display->display_options['filters']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['operator_id'] = 'field_reporting_period_target_id_op';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['expose']['label'] = 'Reporting period';
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
  $handler->display->display_options['filters']['field_reporting_period_target_id']['group_info']['label'] = 'Reporting period (field_reporting_period)';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['group_info']['identifier'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['field_reporting_period_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_reporting_period_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: State (og_group_state_ref) */
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['id'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['field'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['relationship'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['value'] = array(
    7 => '7',
  );

  /* Display: All Maryland by reporting period */
  $handler = $view->new_display('views_data_export', 'All Maryland by reporting period', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-individuals-%timestamp-mm-%timestamp-dd-%timestamp-yyyy.csv';
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
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = 'Region';
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  $handler->display->display_options['fields']['field_area_office']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Delete (unpublish) individual */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete (unpublish) individual';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete individual';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit/?delete=[id_1]&provnum=[nid_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['label'] = 'Individ. comp.  Why not min. wage?';
  /* Field: Content: Receives paid time off? Include paid vacation, sick, or holiday time.  */
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['id'] = 'field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['table'] = 'field_data_field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['field'] = 'field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['label'] = 'Ind. comp. paid time off?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_cont_partic']['id'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['table'] = 'field_data_field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['field'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_cont_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['label'] = 'Individual contracted hours';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['id'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['table'] = 'field_data_field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['field'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['label'] = 'Indiv. contracted. wages';
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
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['label'] = 'Indiv. contr.  why not min. wage?';
  /* Field: Content: Receives paid time off?  Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['id'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['table'] = 'field_data_field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['field'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['label'] = 'Ind. contract.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['id'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['table'] = 'field_data_field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['field'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['label'] = 'Indiv. contract.  set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['label'] = 'Group integ.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['id'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['table'] = 'field_data_field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['field'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['label'] = 'Group integ.  set aside contract?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_income']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Fac. based/shel. hours';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_shl_gross_wages']['id'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['table'] = 'field_data_field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['field'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['label'] = 'Fac. base/shelt. employment paid time off?';
  /* Field: Content: Is this job part of a set-aside contract?  (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_shlt_set_aside']['id'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['table'] = 'field_data_field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['field'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shlt_set_aside']['label'] = 'Fac. based/shelt. Set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_com_non_work_partic']['id'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['table'] = 'field_data_field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['field'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['label'] = 'Cmmty. based non-work: did person paticipate in unpaid activities in integrated setting?';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_fac_non_work_partic']['id'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['table'] = 'field_data_field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['field'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain your choice of other for why no particip.';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['check_ind']['id'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['check_ind']['field'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['check_ind']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['check_ind']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['trim'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: Content: First name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'provider-rp/all/md/download';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page_1' => 'page_1',
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '60';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Download all Maryland individuals by reporting period';
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
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_provider_vendor_name']['exclude'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = 'Region';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  $handler->display->display_options['fields']['field_area_office']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Delete (unpublish) individual */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete (unpublish) individual';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete individual';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit/?delete=[id_1]&provnum=[nid_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['label'] = 'wages from ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_cont_partic']['id'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['table'] = 'field_data_field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['field'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_cont_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['label'] = 'Individual contracted hours';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['id'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['table'] = 'field_data_field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['field'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['label'] = 'Indiv. contracted. wages';
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
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['label'] = 'Indiv. contr.  why not min. wage?';
  /* Field: Content: Receives paid time off?  Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['id'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['table'] = 'field_data_field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['field'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['label'] = 'Ind. contract.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['id'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['table'] = 'field_data_field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['field'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['label'] = 'Indiv. contract.  set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['label'] = 'Group integ.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['id'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['table'] = 'field_data_field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['field'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['label'] = 'Group integ.  set aside contract?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_income']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Fac. based/shel. hours';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_shl_gross_wages']['id'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['table'] = 'field_data_field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['field'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['label'] = 'Fac. base/shelt. employment paid time off?';
  /* Field: Content: Is this job part of a set-aside contract?  (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_shlt_set_aside']['id'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['table'] = 'field_data_field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['field'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shlt_set_aside']['label'] = 'Fac. based/shelt. Set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_com_non_work_partic']['id'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['table'] = 'field_data_field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['field'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['label'] = 'Cmmty. based non-work: did person paticipate in unpaid activities in integrated setting?';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_fac_non_work_partic']['id'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['table'] = 'field_data_field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['field'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain your choice of other for why no particip.';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['check_ind']['id'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['check_ind']['field'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['check_ind']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['check_ind']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['trim'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'all-maryland/select-rp';
  $export['clone_of_download_individual_data'] = $view;

  $view = new view();
  $view->name = 'download_deleted';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'download deleted';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'download deleted';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Individual node referenced from field_individual */
  $handler->display->display_options['relationships']['field_individual_target_id']['id'] = 'field_individual_target_id';
  $handler->display->display_options['relationships']['field_individual_target_id']['table'] = 'field_data_field_individual';
  $handler->display->display_options['relationships']['field_individual_target_id']['field'] = 'field_individual_target_id';
  $handler->display->display_options['relationships']['field_individual_target_id']['ui_name'] = 'Individual node referenced from field_individual';
  $handler->display->display_options['relationships']['field_individual_target_id']['label'] = 'Individual node referenced from field_individual';
  /* Relationship: Provider node referenced from og_group_ref */
  $handler->display->display_options['relationships']['og_group_ref_target_id']['id'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['field'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['ui_name'] = 'Provider node referenced from og_group_ref';
  $handler->display->display_options['relationships']['og_group_ref_target_id']['label'] = 'Provider node referenced from og_group_ref';
  /* Relationship: State referenced from Provider */
  $handler->display->display_options['relationships']['og_group_state_ref_target_id']['id'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_state_ref_target_id']['field'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_state_ref_target_id']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['relationships']['og_group_state_ref_target_id']['ui_name'] = 'State referenced from Provider';
  $handler->display->display_options['relationships']['og_group_state_ref_target_id']['label'] = 'State referenced from Provider';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider name';
  /* Field: Content: State */
  $handler->display->display_options['fields']['og_group_provider_state_ref']['id'] = 'og_group_provider_state_ref';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['field'] = 'og_group_provider_state_ref';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_provider_state_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'field_individual_target_id';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref_1']['id'] = 'og_group_ref_1';
  $handler->display->display_options['fields']['og_group_ref_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_1']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Why is this person being deleted from the individuals list? */
  $handler->display->display_options['fields']['field_delete_indiv_why']['id'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['table'] = 'field_data_field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['field'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['label'] = 'Why is this person being deleted?';
  /* Field: Content: Why is this person being deleted from the individuals list? */
  $handler->display->display_options['fields']['field_delete_indiv_why_ga']['id'] = 'field_delete_indiv_why_ga';
  $handler->display->display_options['fields']['field_delete_indiv_why_ga']['table'] = 'field_data_field_delete_indiv_why_ga';
  $handler->display->display_options['fields']['field_delete_indiv_why_ga']['field'] = 'field_delete_indiv_why_ga';
  $handler->display->display_options['fields']['field_delete_indiv_why_ga']['label'] = '';
  $handler->display->display_options['fields']['field_delete_indiv_why_ga']['element_label_colon'] = FALSE;
  /* Field: Content: Explain your selection of "other" as reason for deletion of the individual */
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['id'] = 'field_delete_indiv_why_other';
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['table'] = 'field_data_field_delete_indiv_why_other';
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['field'] = 'field_delete_indiv_why_other';
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['label'] = 'Explain your selection of other as reason for deletion';
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
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Contextual filter: Content: Reporting period (field_reporting_period) */
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  $handler->display->display_options['filters']['group_type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual_data_ga' => 'individual_data_ga',
    'individual_data_ma' => 'individual_data_ma',
    'individual_data' => 'individual_data',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Why is this person being deleted from the individuals list? (field_delete_indiv_why) */
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['id'] = 'field_delete_indiv_why_value';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['table'] = 'field_data_field_delete_indiv_why';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['field'] = 'field_delete_indiv_why_value';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['group'] = 2;
  /* Filter criterion: Content: Why is this person being deleted from the individuals list? (field_delete_indiv_why_ga) */
  $handler->display->display_options['filters']['field_delete_indiv_why_ga_value']['id'] = 'field_delete_indiv_why_ga_value';
  $handler->display->display_options['filters']['field_delete_indiv_why_ga_value']['table'] = 'field_data_field_delete_indiv_why_ga';
  $handler->display->display_options['filters']['field_delete_indiv_why_ga_value']['field'] = 'field_delete_indiv_why_ga_value';
  $handler->display->display_options['filters']['field_delete_indiv_why_ga_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_delete_indiv_why_ga_value']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'provider/%/%/download-deleted';

  /* Display: provider dl deleted */
  $handler = $view->new_display('views_data_export', 'provider dl deleted', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title-deleted-individuals.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'provider/%/%/deleted';

  /* Display: DL all deleted */
  $handler = $view->new_display('views_data_export', 'DL all deleted', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-deleted-individuals-%timestamp-yyyy-%timestamp-mm-%timestamp-dd.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'individual_data' => 'individual_data',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['group'] = 1;
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_current_reporting_period';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_reporting_period';
  /* Filter criterion: Content: Why is this person being deleted from the individuals list? (field_delete_indiv_why) */
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['id'] = 'field_delete_indiv_why_value';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['table'] = 'field_data_field_delete_indiv_why';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['field'] = 'field_delete_indiv_why_value';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['group'] = 1;
  $handler->display->display_options['path'] = 'provider/all/deleted';

  /* Display: Mass DL all deleted */
  $handler = $view->new_display('views_data_export', 'Mass DL all deleted', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-deleted-ma-individuals-%timestamp-yyyy-%timestamp-mm-%timestamp-dd.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider name';
  /* Field: Content: State */
  $handler->display->display_options['fields']['og_group_provider_state_ref']['id'] = 'og_group_provider_state_ref';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['field'] = 'og_group_provider_state_ref';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_provider_state_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'field_individual_target_id';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref_1']['id'] = 'og_group_ref_1';
  $handler->display->display_options['fields']['og_group_ref_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_1']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Why is this person being deleted from the individuals list? */
  $handler->display->display_options['fields']['field_delete_indiv_why']['id'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['table'] = 'field_data_field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['field'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['label'] = 'Why is this person being deleted?';
  /* Field: Content: Explain your selection of "other" as reason for deletion of the individual */
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['id'] = 'field_delete_indiv_why_other';
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['table'] = 'field_data_field_delete_indiv_why_other';
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['field'] = 'field_delete_indiv_why_other';
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['label'] = 'Explain your selection of other as reason for deletion';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual_data_ma' => 'individual_data_ma',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Why is this person being deleted from the individuals list? (field_delete_indiv_why) */
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['id'] = 'field_delete_indiv_why_value';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['table'] = 'field_data_field_delete_indiv_why';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['field'] = 'field_delete_indiv_why_value';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_delete_indiv_why_value']['group'] = 1;
  $handler->display->display_options['path'] = 'provider/all-ma/deleted';

  /* Display: Georgia DL all deleted */
  $handler = $view->new_display('views_data_export', 'Georgia DL all deleted', 'views_data_export_4');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-deleted-ga-individuals-%timestamp-yyyy-%timestamp-mm-%timestamp-dd.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_individual_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider name';
  /* Field: Content: State */
  $handler->display->display_options['fields']['og_group_provider_state_ref']['id'] = 'og_group_provider_state_ref';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['field'] = 'og_group_provider_state_ref';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['relationship'] = 'og_group_ref_target_id';
  $handler->display->display_options['fields']['og_group_provider_state_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_provider_state_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'field_individual_target_id';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref_1']['id'] = 'og_group_ref_1';
  $handler->display->display_options['fields']['og_group_ref_1']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref_1']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Explain your selection of "other" as reason for deletion of the individual */
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['id'] = 'field_delete_indiv_why_other';
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['table'] = 'field_data_field_delete_indiv_why_other';
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['field'] = 'field_delete_indiv_why_other';
  $handler->display->display_options['fields']['field_delete_indiv_why_other']['label'] = 'Explain your selection of other as reason for deletion';
  /* Field: Content: Why is this person being deleted from the individuals list? */
  $handler->display->display_options['fields']['field_delete_indiv_why_ga']['id'] = 'field_delete_indiv_why_ga';
  $handler->display->display_options['fields']['field_delete_indiv_why_ga']['table'] = 'field_data_field_delete_indiv_why_ga';
  $handler->display->display_options['fields']['field_delete_indiv_why_ga']['field'] = 'field_delete_indiv_why_ga';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Content: Why is this person being deleted from the individuals list? (field_delete_indiv_why_ga) */
  $handler->display->display_options['filters']['field_delete_indiv_why_ga_value']['id'] = 'field_delete_indiv_why_ga_value';
  $handler->display->display_options['filters']['field_delete_indiv_why_ga_value']['table'] = 'field_data_field_delete_indiv_why_ga';
  $handler->display->display_options['filters']['field_delete_indiv_why_ga_value']['field'] = 'field_delete_indiv_why_ga_value';
  $handler->display->display_options['filters']['field_delete_indiv_why_ga_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'provider/all-ga/deleted';
  $export['download_deleted'] = $view;

  $view = new view();
  $view->name = 'download_individual_data';
  $view->description = 'Show all content (nodes) of a group.';
  $view->tag = 'og';
  $view->base_table = 'node';
  $view->human_name = 'Download individual data';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 40,80,160';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_2' => 'nid_2',
    'field_last_name' => 'field_last_name',
    'field_first_name' => 'field_first_name',
    'field_dob' => 'field_dob',
    'field_area_office' => 'field_area_office',
    'nid_1' => 'nid_1',
    'id_1' => 'edit_node',
    'nothing' => 'edit_node',
    'edit_node' => 'edit_node',
    'delete_membership' => 'edit_node',
    'nothing_1' => 'edit_node',
    'og_group_ref' => 'og_group_ref',
    'id' => 'id',
    'title' => 'title',
    'title_1' => 'title_1',
    'title_2' => 'title_2',
    'field_current_reporting_period' => 'field_current_reporting_period',
    'field_reporting_period' => 'field_reporting_period',
    'type' => 'type',
    'field_individual_data_type' => 'field_individual_data_type',
    'check_ind' => 'check_ind',
  );
  $handler->display->display_options['style_options']['default'] = 'field_last_name';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'field_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dob' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_area_office' => array(
      'sortable' => 1,
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
    'id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 0,
    ),
    'delete_membership' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'og_group_ref' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 0,
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
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_individual_data_type' => array(
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' ';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No individuals found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Individual data content from referencing individuals */
  $handler->display->display_options['relationships']['reverse_field_individual_node']['id'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['field'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['ui_name'] = 'Individual data content from referencing individuals';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['label'] = 'Individual Data content from field_individual';
  /* Relationship: Provider node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['label'] = 'Reporting period entity referenced from field_reporting_period';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['relationships']['parent']['label'] = 'Parent term';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  $handler->display->display_options['fields']['field_area_office']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Delete (unpublish) individual */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete (unpublish) individual';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete individual';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit/?delete=[id_1]&provnum=[nid_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['label'] = 'wages from ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_cont_partic']['id'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['table'] = 'field_data_field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['field'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_cont_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['label'] = 'Individual contracted hours';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['id'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['table'] = 'field_data_field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['field'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['label'] = 'Indiv. contracted. wages';
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
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['label'] = 'Indiv. contr.  why not min. wage?';
  /* Field: Content: Receives paid time off?  Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['id'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['table'] = 'field_data_field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['field'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['label'] = 'Ind. contract.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['id'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['table'] = 'field_data_field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['field'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['label'] = 'Indiv. contract.  set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['label'] = 'Group integ.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['id'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['table'] = 'field_data_field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['field'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['label'] = 'Group integ.  set aside contract?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_income']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Fac. based/shel. hours';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_shl_gross_wages']['id'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['table'] = 'field_data_field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['field'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['label'] = 'Fac. base/shelt. employment paid time off?';
  /* Field: Content: Is this job part of a set-aside contract?  (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_shlt_set_aside']['id'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['table'] = 'field_data_field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['field'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shlt_set_aside']['label'] = 'Fac. based/shelt. Set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_com_non_work_partic']['id'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['table'] = 'field_data_field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['field'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['label'] = 'Cmmty. based non-work: did person paticipate in unpaid activities in integrated setting?';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_fac_non_work_partic']['id'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['table'] = 'field_data_field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['field'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain your choice of other for why no particip.';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['check_ind']['id'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['check_ind']['field'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['check_ind']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['check_ind']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['trim'] = TRUE;
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: Content: First name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['group'] = 1;
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_reporting_period';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_current_reporting_period';
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['group'] = 1;
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_individual_data_type';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'type';

  /* Display: Metadata attachment */
  $handler = $view->new_display('attachment', 'Metadata attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Provider node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['id'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['field'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_current_reporting_period_target_id']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<h2>%1</h2>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Deadline date */
  $handler->display->display_options['fields']['field_rp_deadline_date']['id'] = 'field_rp_deadline_date';
  $handler->display->display_options['fields']['field_rp_deadline_date']['table'] = 'field_data_field_rp_deadline_date';
  $handler->display->display_options['fields']['field_rp_deadline_date']['field'] = 'field_rp_deadline_date';
  $handler->display->display_options['fields']['field_rp_deadline_date']['relationship'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['fields']['field_rp_deadline_date']['label'] = '';
  $handler->display->display_options['fields']['field_rp_deadline_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rp_deadline_date']['alter']['text'] = '<h4>Reporting due date: [field_rp_deadline_date]</h4>';
  $handler->display->display_options['fields']['field_rp_deadline_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rp_deadline_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Field: Date range */
  $handler->display->display_options['fields']['field_rp_date_range']['id'] = 'field_rp_date_range';
  $handler->display->display_options['fields']['field_rp_date_range']['table'] = 'field_data_field_rp_date_range';
  $handler->display->display_options['fields']['field_rp_date_range']['field'] = 'field_rp_date_range';
  $handler->display->display_options['fields']['field_rp_date_range']['relationship'] = 'field_current_reporting_period_target_id';
  $handler->display->display_options['fields']['field_rp_date_range']['label'] = '';
  $handler->display->display_options['fields']['field_rp_date_range']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rp_date_range']['alter']['text'] = '<h4>Reporting period: a two-week period within  the date range [field_rp_date_range]</h4>';
  $handler->display->display_options['fields']['field_rp_date_range']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rp_date_range']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'provider' => 'provider',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'provider' => 'provider',
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
    'page_2' => 0,
  );

  /* Display: MD Provider Individual Data export */
  $handler = $view->new_display('views_data_export', 'MD Provider Individual Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls_phpexcel';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title-%timestamp-mm-%timestamp-dd-%timestamp-yyyy.xlsx';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['excel_type'] = 'excel2007';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  $handler->display->display_options['fields']['field_area_office']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Delete (unpublish) individual */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete (unpublish) individual';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete individual';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit/?delete=[id_1]&provnum=[nid_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['label'] = 'wages from ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_cont_partic']['id'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['table'] = 'field_data_field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['field'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_cont_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['label'] = 'Individual contracted hours';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['id'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['table'] = 'field_data_field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['field'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['label'] = 'Indiv. contracted. wages';
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
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['label'] = 'Indiv. contr.  why not min. wage?';
  /* Field: Content: Receives paid time off?  Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['id'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['table'] = 'field_data_field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['field'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['label'] = 'Ind. contract.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['id'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['table'] = 'field_data_field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['field'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['label'] = 'Indiv. contract.  set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['label'] = 'Group integ.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['id'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['table'] = 'field_data_field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['field'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['label'] = 'Group integ.  set aside contract?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_income']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Fac. based/shel. hours';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_shl_gross_wages']['id'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['table'] = 'field_data_field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['field'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['label'] = 'Fac. base/shelt. employment paid time off?';
  /* Field: Content: Is this job part of a set-aside contract?  (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_shlt_set_aside']['id'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['table'] = 'field_data_field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['field'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shlt_set_aside']['label'] = 'Fac. based/shelt. Set aside?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_com_non_work_partic']['id'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['table'] = 'field_data_field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['field'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['label'] = 'Cmmty. based non-work: did person paticipate in unpaid activities in integrated setting?';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_fac_non_work_partic']['id'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['table'] = 'field_data_field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['field'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain your choice of other for why no particip.';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['check_ind']['id'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['check_ind']['field'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['check_ind']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['check_ind']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['trim'] = TRUE;
  /* Field: Content: Was the individual's non-participation in this activity related to COVID-19? */
  $handler->display->display_options['fields']['field_indv_comp_covid']['id'] = 'field_indv_comp_covid';
  $handler->display->display_options['fields']['field_indv_comp_covid']['table'] = 'field_data_field_indv_comp_covid';
  $handler->display->display_options['fields']['field_indv_comp_covid']['field'] = 'field_indv_comp_covid';
  $handler->display->display_options['fields']['field_indv_comp_covid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_covid']['label'] = 'non-participation in ind. compet. work related to COVID-19?';
  /* Field: Content: Was the individual's non-participation in this activity related to COVID-19? */
  $handler->display->display_options['fields']['field_indv_cont_covid']['id'] = 'field_indv_cont_covid';
  $handler->display->display_options['fields']['field_indv_cont_covid']['table'] = 'field_data_field_indv_cont_covid';
  $handler->display->display_options['fields']['field_indv_cont_covid']['field'] = 'field_indv_cont_covid';
  $handler->display->display_options['fields']['field_indv_cont_covid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_covid']['label'] = 'non-participation in ind. contr. work related to COVID-19?';
  /* Field: Content: Was the individual's non-participation in this activity related to COVID-19? */
  $handler->display->display_options['fields']['field_grp_integ_covid']['id'] = 'field_grp_integ_covid';
  $handler->display->display_options['fields']['field_grp_integ_covid']['table'] = 'field_data_field_grp_integ_covid';
  $handler->display->display_options['fields']['field_grp_integ_covid']['field'] = 'field_grp_integ_covid';
  $handler->display->display_options['fields']['field_grp_integ_covid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_covid']['label'] = 'non-participation in grp. integ. work related to COVID-19?';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_fac_non_work_supports']['id'] = 'field_fac_non_work_supports';
  $handler->display->display_options['fields']['field_fac_non_work_supports']['table'] = 'field_data_field_fac_non_work_supports';
  $handler->display->display_options['fields']['field_fac_non_work_supports']['field'] = 'field_fac_non_work_supports';
  $handler->display->display_options['fields']['field_fac_non_work_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_fac_non_work_supports']['label'] = 'Supports received for fac. based non work';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_indv_comp_supports']['id'] = 'field_indv_comp_supports';
  $handler->display->display_options['fields']['field_indv_comp_supports']['table'] = 'field_data_field_indv_comp_supports';
  $handler->display->display_options['fields']['field_indv_comp_supports']['field'] = 'field_indv_comp_supports';
  $handler->display->display_options['fields']['field_indv_comp_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_supports']['label'] = 'Supports received for ind. compet. work';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['id'] = 'field_com_non_wrk_supports';
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['table'] = 'field_data_field_com_non_wrk_supports';
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['field'] = 'field_com_non_wrk_supports';
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['label'] = 'Supports received for comm. non work';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_indv_cont_supports']['id'] = 'field_indv_cont_supports';
  $handler->display->display_options['fields']['field_indv_cont_supports']['table'] = 'field_data_field_indv_cont_supports';
  $handler->display->display_options['fields']['field_indv_cont_supports']['field'] = 'field_indv_cont_supports';
  $handler->display->display_options['fields']['field_indv_cont_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_supports']['label'] = 'Supports received for ind. cont. work';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_self_emp_supports']['id'] = 'field_self_emp_supports';
  $handler->display->display_options['fields']['field_self_emp_supports']['table'] = 'field_data_field_self_emp_supports';
  $handler->display->display_options['fields']['field_self_emp_supports']['field'] = 'field_self_emp_supports';
  $handler->display->display_options['fields']['field_self_emp_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_self_emp_supports']['label'] = 'Supports received for self emp.';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_shl_supports']['id'] = 'field_shl_supports';
  $handler->display->display_options['fields']['field_shl_supports']['table'] = 'field_data_field_shl_supports';
  $handler->display->display_options['fields']['field_shl_supports']['field'] = 'field_shl_supports';
  $handler->display->display_options['fields']['field_shl_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_supports']['label'] = 'Supports received for fac. based work';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_grp_integ_supports']['id'] = 'field_grp_integ_supports';
  $handler->display->display_options['fields']['field_grp_integ_supports']['table'] = 'field_data_field_grp_integ_supports';
  $handler->display->display_options['fields']['field_grp_integ_supports']['field'] = 'field_grp_integ_supports';
  $handler->display->display_options['fields']['field_grp_integ_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_supports']['label'] = 'Supports received for grp. integ.';
  $handler->display->display_options['path'] = 'provider/%/7/download';

  /* Display: All Maryland individual data */
  $handler = $view->new_display('views_data_export', 'All Maryland individual data', 'views_data_export_2');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-individuals-%timestamp-mm-%timestamp-dd-%timestamp-yyyy.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
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
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = 'Region';
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  $handler->display->display_options['fields']['field_area_office']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Delete (unpublish) individual */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete (unpublish) individual';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete individual';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit/?delete=[id_1]&provnum=[nid_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Was the individual's non-participation in this activity related to COVID-19? */
  $handler->display->display_options['fields']['field_indv_comp_covid_1']['id'] = 'field_indv_comp_covid_1';
  $handler->display->display_options['fields']['field_indv_comp_covid_1']['table'] = 'field_data_field_indv_comp_covid';
  $handler->display->display_options['fields']['field_indv_comp_covid_1']['field'] = 'field_indv_comp_covid';
  $handler->display->display_options['fields']['field_indv_comp_covid_1']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_covid_1']['label'] = 'Non-participation in ind. comp. related to COVID-19?';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['label'] = 'Individ. comp.  Why not min. wage?';
  /* Field: Content: Receives paid time off? Include paid vacation, sick, or holiday time.  */
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['id'] = 'field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['table'] = 'field_data_field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['field'] = 'field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['label'] = 'Ind. comp. paid time off?';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_indv_comp_supports']['id'] = 'field_indv_comp_supports';
  $handler->display->display_options['fields']['field_indv_comp_supports']['table'] = 'field_data_field_indv_comp_supports';
  $handler->display->display_options['fields']['field_indv_comp_supports']['field'] = 'field_indv_comp_supports';
  $handler->display->display_options['fields']['field_indv_comp_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_supports']['label'] = 'What supports received for ind. comp.?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_cont_partic']['id'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['table'] = 'field_data_field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['field'] = 'field_indv_cont_partic';
  $handler->display->display_options['fields']['field_indv_cont_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_partic']['label'] = 'Participated in indiv. cotract. employ.?';
  $handler->display->display_options['fields']['field_indv_cont_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_cont_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_cont_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_cont_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_cont_partic']['type'] = 'list_key';
  /* Field: Content: Was the individual's non-participation in this activity related to COVID-19? */
  $handler->display->display_options['fields']['field_indv_cont_covid_1']['id'] = 'field_indv_cont_covid_1';
  $handler->display->display_options['fields']['field_indv_cont_covid_1']['table'] = 'field_data_field_indv_cont_covid';
  $handler->display->display_options['fields']['field_indv_cont_covid_1']['field'] = 'field_indv_cont_covid';
  $handler->display->display_options['fields']['field_indv_cont_covid_1']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_covid_1']['label'] = 'Non-participation in ind. cont. related to COVID-19?';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_hrs']['id'] = 'field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['table'] = 'field_data_field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['field'] = 'field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['label'] = 'Individual contracted hours';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['id'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['table'] = 'field_data_field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['field'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['label'] = 'Indiv. contracted. wages';
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
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_why_no_min']['label'] = 'Indiv. contr.  why not min. wage?';
  /* Field: Content: Receives paid time off?  Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['id'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['table'] = 'field_data_field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['field'] = 'field_indv_cont_paid_time_off';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_paid_time_off']['label'] = 'Ind. contract.  paid time off?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['id'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['table'] = 'field_data_field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['field'] = 'field_indv_contr_set_aside';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_contr_set_aside']['label'] = 'Indiv. contract.  set aside?';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_indv_cont_supports']['id'] = 'field_indv_cont_supports';
  $handler->display->display_options['fields']['field_indv_cont_supports']['table'] = 'field_data_field_indv_cont_supports';
  $handler->display->display_options['fields']['field_indv_cont_supports']['field'] = 'field_indv_cont_supports';
  $handler->display->display_options['fields']['field_indv_cont_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_supports']['label'] = 'What supports received for ind. cont.?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_partic']['label'] = 'Participated in grp. integ. employment';
  $handler->display->display_options['fields']['field_grp_integ_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_grp_integ_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_grp_integ_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_grp_integ_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_grp_integ_partic']['type'] = 'list_key';
  /* Field: Content: Was the individual's non-participation in this activity related to COVID-19? */
  $handler->display->display_options['fields']['field_grp_integ_covid_1']['id'] = 'field_grp_integ_covid_1';
  $handler->display->display_options['fields']['field_grp_integ_covid_1']['table'] = 'field_data_field_grp_integ_covid';
  $handler->display->display_options['fields']['field_grp_integ_covid_1']['field'] = 'field_grp_integ_covid';
  $handler->display->display_options['fields']['field_grp_integ_covid_1']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_covid_1']['label'] = 'Non-participation in grp. integ. related to COVID-19?';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_hrs']['id'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['table'] = 'field_data_field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['field'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['label'] = 'Group integ.  paid time off?';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_grp_integ_supports']['id'] = 'field_grp_integ_supports';
  $handler->display->display_options['fields']['field_grp_integ_supports']['table'] = 'field_data_field_grp_integ_supports';
  $handler->display->display_options['fields']['field_grp_integ_supports']['field'] = 'field_grp_integ_supports';
  $handler->display->display_options['fields']['field_grp_integ_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_supports']['label'] = 'What supports received for grp. integ.?';
  /* Field: Content: Is this job part of a set aside contract?   (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['id'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['table'] = 'field_data_field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['field'] = 'field_grp_integr_set_aside';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integr_set_aside']['label'] = 'Group integ.  set aside contract?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_income']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['label'] = 'Self employment business expenses';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_self_emp_supports']['id'] = 'field_self_emp_supports';
  $handler->display->display_options['fields']['field_self_emp_supports']['table'] = 'field_data_field_self_emp_supports';
  $handler->display->display_options['fields']['field_self_emp_supports']['field'] = 'field_self_emp_supports';
  $handler->display->display_options['fields']['field_self_emp_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_self_emp_supports']['label'] = 'What supports received for self. emp.?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_shl_partic']['id'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['table'] = 'field_data_field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['field'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Fac. based/shel. hours';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_shl_gross_wages']['id'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['table'] = 'field_data_field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['field'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_shl_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['label'] = 'Fac. base/shelt. employment paid time off?';
  /* Field: Content: Is this job part of a set-aside contract?  (Ability One, NIB, and Maryland Works) */
  $handler->display->display_options['fields']['field_shlt_set_aside']['id'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['table'] = 'field_data_field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['field'] = 'field_shlt_set_aside';
  $handler->display->display_options['fields']['field_shlt_set_aside']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shlt_set_aside']['label'] = 'Fac. based/shelt. Set aside?';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_shl_supports']['id'] = 'field_shl_supports';
  $handler->display->display_options['fields']['field_shl_supports']['table'] = 'field_data_field_shl_supports';
  $handler->display->display_options['fields']['field_shl_supports']['field'] = 'field_shl_supports';
  $handler->display->display_options['fields']['field_shl_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_supports']['label'] = 'What supports received for fac. based job?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_com_non_work_partic']['id'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['table'] = 'field_data_field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['field'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic']['label'] = 'Cmmty. based non-work: did person paticipate in unpaid activities in integrated setting?';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['id'] = 'field_com_non_wrk_supports';
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['table'] = 'field_data_field_com_non_wrk_supports';
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['field'] = 'field_com_non_wrk_supports';
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['label'] = 'What supports received for com. non work?';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_fac_non_work_partic']['id'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['table'] = 'field_data_field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['field'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_fac_non_work_supports']['id'] = 'field_fac_non_work_supports';
  $handler->display->display_options['fields']['field_fac_non_work_supports']['table'] = 'field_data_field_fac_non_work_supports';
  $handler->display->display_options['fields']['field_fac_non_work_supports']['field'] = 'field_fac_non_work_supports';
  $handler->display->display_options['fields']['field_fac_non_work_supports']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_fac_non_work_supports']['label'] = 'What supports received for fac. non work?';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain your choice of other for why no particip.';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['check_ind']['id'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['check_ind']['field'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['check_ind']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['check_ind']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['trim'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: Content: First name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['group'] = 1;
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_reporting_period';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_current_reporting_period';
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['group'] = 1;
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_individual_data_type';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'type';
  /* Filter criterion: Content: State (og_group_state_ref) */
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['id'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['field'] = 'og_group_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['relationship'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['og_group_state_ref_target_id']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['path'] = 'provider/all/md/download';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '60';

  /* Display: MA Provider Individual Data export */
  $handler = $view->new_display('views_data_export', 'MA Provider Individual Data export', 'views_data_export_3');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls_phpexcel';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title-%timestamp-mm-%timestamp-dd-%timestamp-yyyy.xlsx';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['excel_type'] = 'excel2007';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  $handler->display->display_options['fields']['field_area_office']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Delete (unpublish) individual */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete (unpublish) individual';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete individual';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit/?delete=[id_1]&provnum=[nid_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['label'] = 'wages from ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Please select a reason why the individual is making less than the Massachusetts minimum wage. */
  $handler->display->display_options['fields']['field_indv_emp_less']['id'] = 'field_indv_emp_less';
  $handler->display->display_options['fields']['field_indv_emp_less']['table'] = 'field_data_field_indv_emp_less';
  $handler->display->display_options['fields']['field_indv_emp_less']['field'] = 'field_indv_emp_less';
  $handler->display->display_options['fields']['field_indv_emp_less']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_emp_less']['label'] = 'Why less than min wage';
  /* Field: Content: If you selected "Other" above explain why the individual was paid less than the minimum wage.  */
  $handler->display->display_options['fields']['field_indv_emp_less_other']['id'] = 'field_indv_emp_less_other';
  $handler->display->display_options['fields']['field_indv_emp_less_other']['table'] = 'field_data_field_indv_emp_less_other';
  $handler->display->display_options['fields']['field_indv_emp_less_other']['field'] = 'field_indv_emp_less_other';
  $handler->display->display_options['fields']['field_indv_emp_less_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_emp_less_other']['label'] = 'why less than min--other';
  /* Field: Content: Receives paid time off? */
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['id'] = 'field_indv_paid_time_y_n';
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['table'] = 'field_data_field_indv_paid_time_y_n';
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['field'] = 'field_indv_paid_time_y_n';
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['label'] = 'paid time off?';
  /* Field: Content: Eligible for employer paid health insurance? */
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['id'] = 'field_indv_comp_health_ins_y_n';
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['table'] = 'field_data_field_indv_comp_health_ins_y_n';
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['field'] = 'field_indv_comp_health_ins_y_n';
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['label'] = 'elig. for empl. health ins.';
  /* Field: Content: Did the individual enter a new individual job in the past 12 months? */
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['id'] = 'field_indv_comp_new_job_y_n';
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['table'] = 'field_data_field_indv_comp_new_job_y_n';
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['field'] = 'field_indv_comp_new_job_y_n';
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['label'] = 'new job in past year';
  /* Field: Content: Date of hire */
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['id'] = 'field_indv_emp_hire_date';
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['table'] = 'field_data_field_indv_emp_hire_date';
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['field'] = 'field_indv_emp_hire_date';
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['settings'] = array(
    'format_type' => 'short_no_time',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Worked in an individual job 10 of the last 12 months? */
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['id'] = 'field_indv_comp10_of_12_y_n';
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['table'] = 'field_data_field_indv_comp10_of_12_y_n';
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['field'] = 'field_indv_comp10_of_12_y_n';
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['label'] = 'ind. job 10 of the last 12 ';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['label'] = 'Group integrated wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Please select a reason why the individual is making less than the Massachusetts minimum wage. */
  $handler->display->display_options['fields']['field_grp_sup_less']['id'] = 'field_grp_sup_less';
  $handler->display->display_options['fields']['field_grp_sup_less']['table'] = 'field_data_field_grp_sup_less';
  $handler->display->display_options['fields']['field_grp_sup_less']['field'] = 'field_grp_sup_less';
  $handler->display->display_options['fields']['field_grp_sup_less']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_sup_less']['label'] = 'reason less than min wage';
  /* Field: Content: If you selected "Other" above explain why the individual was paid less than the minimum wage.  */
  $handler->display->display_options['fields']['field_grp_sup_less_other']['id'] = 'field_grp_sup_less_other';
  $handler->display->display_options['fields']['field_grp_sup_less_other']['table'] = 'field_data_field_grp_sup_less_other';
  $handler->display->display_options['fields']['field_grp_sup_less_other']['field'] = 'field_grp_sup_less_other';
  $handler->display->display_options['fields']['field_grp_sup_less_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_sup_less_other']['label'] = 'less than min other';
  /* Field: Content: Location of work */
  $handler->display->display_options['fields']['field_grp_location_of_work']['id'] = 'field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['table'] = 'field_data_field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['field'] = 'field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Number of workers with a disability on site */
  $handler->display->display_options['fields']['field_grp_num_of_workers']['id'] = 'field_grp_num_of_workers';
  $handler->display->display_options['fields']['field_grp_num_of_workers']['table'] = 'field_data_field_grp_num_of_workers';
  $handler->display->display_options['fields']['field_grp_num_of_workers']['field'] = 'field_grp_num_of_workers';
  $handler->display->display_options['fields']['field_grp_num_of_workers']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_num_of_workers']['label'] = 'Num of workers with a disability ';
  /* Field: Content: Worked in group supported employment 10 of the last 12 months? */
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['id'] = 'field_grp_10_of_12_y_n';
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['table'] = 'field_data_field_grp_10_of_12_y_n';
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['field'] = 'field_grp_10_of_12_y_n';
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['label'] = 'Worked group supp. 10 of the last 12';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_income']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['label'] = 'Self employment business expenses';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_job_search_partic']['id'] = 'field_job_search_partic';
  $handler->display->display_options['fields']['field_job_search_partic']['table'] = 'field_data_field_job_search_partic';
  $handler->display->display_options['fields']['field_job_search_partic']['field'] = 'field_job_search_partic';
  $handler->display->display_options['fields']['field_job_search_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_job_search_partic']['label'] = 'Job search--participated?';
  $handler->display->display_options['fields']['field_job_search_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job_search_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_job_search_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_job_search_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_job_search_partic']['type'] = 'list_key';
  /* Field: Content: Discovery or Career Planning activities (yes/no)? */
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['id'] = 'field_job_search_discov_plan_y_n';
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['table'] = 'field_data_field_job_search_discov_plan_y_n';
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['field'] = 'field_job_search_discov_plan_y_n';
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['label'] = 'Discovery or Career Planning';
  /* Field: Content: Job development activities (yes/no)? */
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['id'] = 'field_job_search_job_dev_y_n';
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['table'] = 'field_data_field_job_search_job_dev_y_n';
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['field'] = 'field_job_search_job_dev_y_n';
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['label'] = 'Job development activities';
  /* Field: Content: Did not participate in other day support wrap-around services during the reporting period. */
  $handler->display->display_options['fields']['field_day_program_partic']['id'] = 'field_day_program_partic';
  $handler->display->display_options['fields']['field_day_program_partic']['table'] = 'field_data_field_day_program_partic';
  $handler->display->display_options['fields']['field_day_program_partic']['field'] = 'field_day_program_partic';
  $handler->display->display_options['fields']['field_day_program_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_day_program_partic']['label'] = 'Participated in other day support wrap-around services';
  $handler->display->display_options['fields']['field_day_program_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_day_program_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_day_program_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_day_program_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_day_program_partic']['type'] = 'list_key';
  /* Field: Content: Community Based Day Services (yes/no)? */
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['id'] = 'field_day_program_commun_y_n';
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['table'] = 'field_data_field_day_program_commun_y_n';
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['field'] = 'field_day_program_commun_y_n';
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['label'] = 'Community Based Day Services';
  /* Field: Content: Day Habilitation Program (yes/no)? */
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['id'] = 'field_day_program_dayhab_y_n';
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['table'] = 'field_data_field_day_program_dayhab_y_n';
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['field'] = 'field_day_program_dayhab_y_n';
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['label'] = 'Day Habilitation Program';
  /* Field: Content: Other Day Support Services (yes/no)? */
  $handler->display->display_options['fields']['field_day_program_other_y_n']['id'] = 'field_day_program_other_y_n';
  $handler->display->display_options['fields']['field_day_program_other_y_n']['table'] = 'field_data_field_day_program_other_y_n';
  $handler->display->display_options['fields']['field_day_program_other_y_n']['field'] = 'field_day_program_other_y_n';
  $handler->display->display_options['fields']['field_day_program_other_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_day_program_other_y_n']['label'] = 'Other Day Support Services?';
  /* Field: Content: Specify support services if you answered yes to 'Other Day Support Services' above. */
  $handler->display->display_options['fields']['field_day_program_other_explain']['id'] = 'field_day_program_other_explain';
  $handler->display->display_options['fields']['field_day_program_other_explain']['table'] = 'field_data_field_day_program_other_explain';
  $handler->display->display_options['fields']['field_day_program_other_explain']['field'] = 'field_day_program_other_explain';
  $handler->display->display_options['fields']['field_day_program_other_explain']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_day_program_other_explain']['label'] = 'Specify Other Day Support Services';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain your choice of other for why no particip.';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['check_ind']['id'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['check_ind']['field'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['check_ind']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['check_ind']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['trim'] = TRUE;
  $handler->display->display_options['path'] = 'provider/%/10/download';

  /* Display: All Mass. Individual data */
  $handler = $view->new_display('views_data_export', 'All Mass. Individual data', 'views_data_export_4');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-ma-individs-%timestamp-mm-%timestamp-dd-%timestamp-yyyy.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
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
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['relationship'] = 'og_membership_related_node_group';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['label'] = 'Region';
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  $handler->display->display_options['fields']['field_area_office']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Delete (unpublish) individual */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete (unpublish) individual';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete individual';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit/?delete=[id_1]&provnum=[nid_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['label'] = 'wages from ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Please select a reason why the individual is making less than the Massachusetts minimum wage. */
  $handler->display->display_options['fields']['field_indv_emp_less']['id'] = 'field_indv_emp_less';
  $handler->display->display_options['fields']['field_indv_emp_less']['table'] = 'field_data_field_indv_emp_less';
  $handler->display->display_options['fields']['field_indv_emp_less']['field'] = 'field_indv_emp_less';
  $handler->display->display_options['fields']['field_indv_emp_less']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_emp_less']['label'] = 'Why less than min wage';
  /* Field: Content: If you selected "Other" above explain why the individual was paid less than the minimum wage.  */
  $handler->display->display_options['fields']['field_indv_emp_less_other']['id'] = 'field_indv_emp_less_other';
  $handler->display->display_options['fields']['field_indv_emp_less_other']['table'] = 'field_data_field_indv_emp_less_other';
  $handler->display->display_options['fields']['field_indv_emp_less_other']['field'] = 'field_indv_emp_less_other';
  $handler->display->display_options['fields']['field_indv_emp_less_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_emp_less_other']['label'] = 'why less than min--other';
  /* Field: Content: Receives paid time off? */
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['id'] = 'field_indv_paid_time_y_n';
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['table'] = 'field_data_field_indv_paid_time_y_n';
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['field'] = 'field_indv_paid_time_y_n';
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['label'] = 'paid time off?';
  /* Field: Content: Eligible for employer paid health insurance? */
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['id'] = 'field_indv_comp_health_ins_y_n';
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['table'] = 'field_data_field_indv_comp_health_ins_y_n';
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['field'] = 'field_indv_comp_health_ins_y_n';
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['label'] = 'elig. for empl. health ins.';
  /* Field: Content: Did the individual enter a new individual job in the past 12 months? */
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['id'] = 'field_indv_comp_new_job_y_n';
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['table'] = 'field_data_field_indv_comp_new_job_y_n';
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['field'] = 'field_indv_comp_new_job_y_n';
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['label'] = 'new job in past year';
  /* Field: Content: Date of hire */
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['id'] = 'field_indv_emp_hire_date';
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['table'] = 'field_data_field_indv_emp_hire_date';
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['field'] = 'field_indv_emp_hire_date';
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['settings'] = array(
    'format_type' => 'short_no_time',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Worked in an individual job 10 of the last 12 months? */
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['id'] = 'field_indv_comp10_of_12_y_n';
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['table'] = 'field_data_field_indv_comp10_of_12_y_n';
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['field'] = 'field_indv_comp10_of_12_y_n';
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['label'] = 'ind. job 10 of the last 12 ';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['label'] = 'Group integrated wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Please select a reason why the individual is making less than the Massachusetts minimum wage. */
  $handler->display->display_options['fields']['field_grp_sup_less']['id'] = 'field_grp_sup_less';
  $handler->display->display_options['fields']['field_grp_sup_less']['table'] = 'field_data_field_grp_sup_less';
  $handler->display->display_options['fields']['field_grp_sup_less']['field'] = 'field_grp_sup_less';
  $handler->display->display_options['fields']['field_grp_sup_less']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_sup_less']['label'] = 'reason less than min wage';
  /* Field: Content: If you selected "Other" above explain why the individual was paid less than the minimum wage.  */
  $handler->display->display_options['fields']['field_grp_sup_less_other']['id'] = 'field_grp_sup_less_other';
  $handler->display->display_options['fields']['field_grp_sup_less_other']['table'] = 'field_data_field_grp_sup_less_other';
  $handler->display->display_options['fields']['field_grp_sup_less_other']['field'] = 'field_grp_sup_less_other';
  $handler->display->display_options['fields']['field_grp_sup_less_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_sup_less_other']['label'] = 'less than min other';
  /* Field: Content: Location of work */
  $handler->display->display_options['fields']['field_grp_location_of_work']['id'] = 'field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['table'] = 'field_data_field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['field'] = 'field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Number of workers with a disability on site */
  $handler->display->display_options['fields']['field_grp_num_of_workers']['id'] = 'field_grp_num_of_workers';
  $handler->display->display_options['fields']['field_grp_num_of_workers']['table'] = 'field_data_field_grp_num_of_workers';
  $handler->display->display_options['fields']['field_grp_num_of_workers']['field'] = 'field_grp_num_of_workers';
  $handler->display->display_options['fields']['field_grp_num_of_workers']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_num_of_workers']['label'] = 'Num of workers with a disability ';
  /* Field: Content: Worked in group supported employment 10 of the last 12 months? */
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['id'] = 'field_grp_10_of_12_y_n';
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['table'] = 'field_data_field_grp_10_of_12_y_n';
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['field'] = 'field_grp_10_of_12_y_n';
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['label'] = 'Worked group supp. 10 of the last 12';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_income']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['label'] = 'Self employment business expenses';
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_job_search_partic']['id'] = 'field_job_search_partic';
  $handler->display->display_options['fields']['field_job_search_partic']['table'] = 'field_data_field_job_search_partic';
  $handler->display->display_options['fields']['field_job_search_partic']['field'] = 'field_job_search_partic';
  $handler->display->display_options['fields']['field_job_search_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_job_search_partic']['label'] = 'Job search--participated?';
  $handler->display->display_options['fields']['field_job_search_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job_search_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_job_search_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_job_search_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_job_search_partic']['type'] = 'list_key';
  /* Field: Content: Discovery or Career Planning activities (yes/no)? */
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['id'] = 'field_job_search_discov_plan_y_n';
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['table'] = 'field_data_field_job_search_discov_plan_y_n';
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['field'] = 'field_job_search_discov_plan_y_n';
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['label'] = 'Discovery or Career Planning';
  /* Field: Content: Job development activities (yes/no)? */
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['id'] = 'field_job_search_job_dev_y_n';
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['table'] = 'field_data_field_job_search_job_dev_y_n';
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['field'] = 'field_job_search_job_dev_y_n';
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['label'] = 'Job development activities';
  /* Field: Content: Did not participate in other day support wrap-around services during the reporting period. */
  $handler->display->display_options['fields']['field_day_program_partic']['id'] = 'field_day_program_partic';
  $handler->display->display_options['fields']['field_day_program_partic']['table'] = 'field_data_field_day_program_partic';
  $handler->display->display_options['fields']['field_day_program_partic']['field'] = 'field_day_program_partic';
  $handler->display->display_options['fields']['field_day_program_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_day_program_partic']['label'] = 'Participated in other day support wrap-around services';
  $handler->display->display_options['fields']['field_day_program_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_day_program_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_day_program_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_day_program_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_day_program_partic']['type'] = 'list_key';
  /* Field: Content: Community Based Day Services (yes/no)? */
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['id'] = 'field_day_program_commun_y_n';
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['table'] = 'field_data_field_day_program_commun_y_n';
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['field'] = 'field_day_program_commun_y_n';
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['label'] = 'Community Based Day Services';
  /* Field: Content: Day Habilitation Program (yes/no)? */
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['id'] = 'field_day_program_dayhab_y_n';
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['table'] = 'field_data_field_day_program_dayhab_y_n';
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['field'] = 'field_day_program_dayhab_y_n';
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['label'] = 'Day Habilitation Program';
  /* Field: Content: Other Day Support Services (yes/no)? */
  $handler->display->display_options['fields']['field_day_program_other_y_n']['id'] = 'field_day_program_other_y_n';
  $handler->display->display_options['fields']['field_day_program_other_y_n']['table'] = 'field_data_field_day_program_other_y_n';
  $handler->display->display_options['fields']['field_day_program_other_y_n']['field'] = 'field_day_program_other_y_n';
  $handler->display->display_options['fields']['field_day_program_other_y_n']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_day_program_other_y_n']['label'] = 'Other Day Support Services?';
  /* Field: Content: Specify support services if you answered yes to 'Other Day Support Services' above. */
  $handler->display->display_options['fields']['field_day_program_other_explain']['id'] = 'field_day_program_other_explain';
  $handler->display->display_options['fields']['field_day_program_other_explain']['table'] = 'field_data_field_day_program_other_explain';
  $handler->display->display_options['fields']['field_day_program_other_explain']['field'] = 'field_day_program_other_explain';
  $handler->display->display_options['fields']['field_day_program_other_explain']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_day_program_other_explain']['label'] = 'Specify Other Day Support Services';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain your choice of other for why no particip.';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['check_ind']['id'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['check_ind']['field'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['check_ind']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['check_ind']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['trim'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'og_membership_related_node_group';
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: Content: First name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['group'] = 1;
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_reporting_period';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_current_reporting_period';
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['group'] = 1;
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_individual_data_type';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'type';
  /* Filter criterion: Content: State (og_group_provider_state_ref) */
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['relationship'] = 'field_reporting_period_target_id';
  $handler->display->display_options['filters']['og_group_provider_state_ref_target_id']['value'] = array(
    10 => '10',
  );
  $handler->display->display_options['path'] = 'provider/all/ma/download';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '60';

  /* Display: GA Provider Individual Data export */
  $handler = $view->new_display('views_data_export', 'GA Provider Individual Data export', 'views_data_export_5');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
    7 => '7',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls_phpexcel';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title-%timestamp-mm-%timestamp-dd-%timestamp-yyyy.xlsx';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['excel_type'] = 'excel2007';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  $handler->display->display_options['fields']['field_area_office']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Delete (unpublish) individual */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete (unpublish) individual';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete individual';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit/?delete=[id_1]&provnum=[nid_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['label'] = 'Why not minimum wage?';
  /* Field: Content: How long (in months) has this person been employed in this job? If more than one job report the job with the longest tenure. */
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['id'] = 'field_indv_comp_time_in_job';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['table'] = 'field_data_field_indv_comp_time_in_job';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['field'] = 'field_indv_comp_time_in_job';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['label'] = 'How long (in months)  in ind. compet. job';
  /* Field: Content: Receives paid time off? Include paid vacation, sick, or holiday time.  */
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['id'] = 'field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['table'] = 'field_data_field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['field'] = 'field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['label'] = 'Receives paid time off?';
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_indv_comp_occupation']['id'] = 'field_indv_comp_occupation';
  $handler->display->display_options['fields']['field_indv_comp_occupation']['table'] = 'field_data_field_indv_comp_occupation';
  $handler->display->display_options['fields']['field_indv_comp_occupation']['field'] = 'field_indv_comp_occupation';
  $handler->display->display_options['fields']['field_indv_comp_occupation']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Primary funding source for employment support */
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['id'] = 'field_indv_comp_fund_source';
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['table'] = 'field_data_field_indv_comp_fund_source';
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['field'] = 'field_indv_comp_fund_source';
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Other funding source */
  $handler->display->display_options['fields']['field_indv_comp_other_source']['id'] = 'field_indv_comp_other_source';
  $handler->display->display_options['fields']['field_indv_comp_other_source']['table'] = 'field_data_field_indv_comp_other_source';
  $handler->display->display_options['fields']['field_indv_comp_other_source']['field'] = 'field_indv_comp_other_source';
  $handler->display->display_options['fields']['field_indv_comp_other_source']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['label'] = 'Receives paid time off? ';
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_grp_integ_occupation']['id'] = 'field_grp_integ_occupation';
  $handler->display->display_options['fields']['field_grp_integ_occupation']['table'] = 'field_data_field_grp_integ_occupation';
  $handler->display->display_options['fields']['field_grp_integ_occupation']['field'] = 'field_grp_integ_occupation';
  $handler->display->display_options['fields']['field_grp_integ_occupation']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Location of work */
  $handler->display->display_options['fields']['field_grp_location_of_work']['id'] = 'field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['table'] = 'field_data_field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['field'] = 'field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_income']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_occupation']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_shl_partic']['id'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['table'] = 'field_data_field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['field'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_partic']['label'] = 'Participated in facility based work';
  $handler->display->display_options['fields']['field_shl_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shl_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_shl_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_shl_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_shl_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_shl_hrs']['id'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['table'] = 'field_data_field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['field'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Hours worked for pay in fac. based work';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['id'] = 'field_indv_comp_gross_wages_1';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['table'] = 'field_data_field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['field'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['label'] = 'Gross wages in fac. based work';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Receives paid time off?   Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_shl_paid_time_off']['id'] = 'field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['table'] = 'field_data_field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['field'] = 'field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['label'] = 'Receives paid time off in fac. based work';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_com_non_work_partic']['id'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['table'] = 'field_data_field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['field'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_work_partic']['label'] = 'Participated in com. based non work';
  $handler->display->display_options['fields']['field_com_non_work_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_com_non_work_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_com_non_work_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_com_non_work_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_com_non_work_partic']['type'] = 'list_key';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['label'] = 'Hours in comm. based non work';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did person participate in a volunteer job during this reporting period? */
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['id'] = 'field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['table'] = 'field_data_field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['field'] = 'field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['label'] = ' participated in a volunteer job';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_fac_non_work_partic']['id'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['table'] = 'field_data_field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['field'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['label'] = 'Participated in fac. based non work';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fac_non_work_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fac_non_work_partic']['type'] = 'list_key';
  /* Field: Content: Did person participate in unpaid activities in a program setting during this reporting period? */
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['id'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['table'] = 'field_data_field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['field'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['label'] = 'Participated in unpaid activities in a program setting';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain your choice of other for why no particip.';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['check_ind']['id'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['table'] = 'sdata_rp';
  $handler->display->display_options['fields']['check_ind']['field'] = 'check_ind';
  $handler->display->display_options['fields']['check_ind']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['max_length'] = '12';
  $handler->display->display_options['fields']['check_ind']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['check_ind']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['check_ind']['alter']['trim'] = TRUE;
  $handler->display->display_options['path'] = 'nul-provider/%/116038/download';

  /* Display: copy Ga provider individual data */
  $handler = $view->new_display('views_data_export', 'copy Ga provider individual data', 'views_data_export_6');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
    7 => '7',
    6 => '6',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls_phpexcel';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%1-title-%timestamp-mm-%timestamp-dd-%timestamp-yyyy.xlsx';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['excel_type'] = 'excel2007';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  /* Field: Content: Date of birth */
  $handler->display->display_options['fields']['field_dob']['id'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['table'] = 'field_data_field_dob';
  $handler->display->display_options['fields']['field_dob']['field'] = 'field_dob';
  $handler->display->display_options['fields']['field_dob']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/d/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office']['id'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office']['label'] = 'County';
  $handler->display->display_options['fields']['field_area_office']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Delete (unpublish) individual */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Delete (unpublish) individual';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'delete individual';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid]/edit/?delete=[id_1]&provnum=[nid_1]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['og_group_ref']['id'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_group_ref']['field'] = 'og_group_ref';
  $handler->display->display_options['fields']['og_group_ref']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['og_group_ref']['exclude'] = TRUE;
  $handler->display->display_options['fields']['og_group_ref']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['og_group_ref']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'State';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_indv_comp_partic']['id'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['table'] = 'field_data_field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['field'] = 'field_indv_comp_partic';
  $handler->display->display_options['fields']['field_indv_comp_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_partic']['label'] = 'Participated in Ind. compet. employment';
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_indv_comp_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_indv_comp_partic']['type'] = 'list_key';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_why_not_min']['label'] = 'Why not minimum wage?';
  /* Field: Content: How long (in months) has this person been employed in this job? If more than one job report the job with the longest tenure. */
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['id'] = 'field_indv_comp_time_in_job';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['table'] = 'field_data_field_indv_comp_time_in_job';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['field'] = 'field_indv_comp_time_in_job';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_time_in_job']['label'] = 'How long (in months)  in ind. compet. job';
  /* Field: Content: Receives paid time off? Include paid vacation, sick, or holiday time.  */
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['id'] = 'field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['table'] = 'field_data_field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['field'] = 'field_indv_comp_paid_time_off';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_paid_time_off']['label'] = 'Receives paid time off?';
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_indv_comp_occupation']['id'] = 'field_indv_comp_occupation';
  $handler->display->display_options['fields']['field_indv_comp_occupation']['table'] = 'field_data_field_indv_comp_occupation';
  $handler->display->display_options['fields']['field_indv_comp_occupation']['field'] = 'field_indv_comp_occupation';
  $handler->display->display_options['fields']['field_indv_comp_occupation']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Primary funding source for employment support */
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['id'] = 'field_indv_comp_fund_source';
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['table'] = 'field_data_field_indv_comp_fund_source';
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['field'] = 'field_indv_comp_fund_source';
  $handler->display->display_options['fields']['field_indv_comp_fund_source']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Other funding source */
  $handler->display->display_options['fields']['field_indv_comp_other_source']['id'] = 'field_indv_comp_other_source';
  $handler->display->display_options['fields']['field_indv_comp_other_source']['table'] = 'field_data_field_indv_comp_other_source';
  $handler->display->display_options['fields']['field_indv_comp_other_source']['field'] = 'field_indv_comp_other_source';
  $handler->display->display_options['fields']['field_indv_comp_other_source']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_grp_integ_partic']['id'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['table'] = 'field_data_field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['field'] = 'field_grp_integ_partic';
  $handler->display->display_options['fields']['field_grp_integ_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_paid_time_off']['label'] = 'Receives paid time off? ';
  /* Field: Content: Occupation */
  $handler->display->display_options['fields']['field_grp_integ_occupation']['id'] = 'field_grp_integ_occupation';
  $handler->display->display_options['fields']['field_grp_integ_occupation']['table'] = 'field_data_field_grp_integ_occupation';
  $handler->display->display_options['fields']['field_grp_integ_occupation']['field'] = 'field_grp_integ_occupation';
  $handler->display->display_options['fields']['field_grp_integ_occupation']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Location of work */
  $handler->display->display_options['fields']['field_grp_location_of_work']['id'] = 'field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['table'] = 'field_data_field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['field'] = 'field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_self_emp_partic']['id'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['table'] = 'field_data_field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['field'] = 'field_self_emp_partic';
  $handler->display->display_options['fields']['field_self_emp_partic']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_income']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_gross_expens']['relationship'] = 'reverse_field_individual_node';
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
  $handler->display->display_options['fields']['field_self_emp_occupation']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_shl_partic']['id'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['table'] = 'field_data_field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['field'] = 'field_shl_partic';
  $handler->display->display_options['fields']['field_shl_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_partic']['label'] = 'Participated in facility based work';
  $handler->display->display_options['fields']['field_shl_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_shl_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_shl_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_shl_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_shl_partic']['type'] = 'list_key';
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_shl_hrs']['id'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['table'] = 'field_data_field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['field'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Hours worked for pay in fac. based work';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['id'] = 'field_indv_comp_gross_wages_1';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['table'] = 'field_data_field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['field'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['label'] = 'Gross wages in fac. based work';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages_1']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Receives paid time off?   Include paid vacation, sick, or holiday time. */
  $handler->display->display_options['fields']['field_shl_paid_time_off']['id'] = 'field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['table'] = 'field_data_field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['field'] = 'field_shl_paid_time_off';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_paid_time_off']['label'] = 'Receives paid time off in fac. based work';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_com_non_work_partic']['id'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['table'] = 'field_data_field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['field'] = 'field_com_non_work_partic';
  $handler->display->display_options['fields']['field_com_non_work_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_work_partic']['label'] = 'Participated in com. based non work';
  $handler->display->display_options['fields']['field_com_non_work_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_com_non_work_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_com_non_work_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_com_non_work_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_com_non_work_partic']['type'] = 'list_key';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['label'] = 'Hours in comm. based non work';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did person participate in a volunteer job during this reporting period? */
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['id'] = 'field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['table'] = 'field_data_field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['field'] = 'field_com_non_work_vol_partic_2';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_work_vol_partic_2']['label'] = ' participated in a volunteer job';
  /* Field: Content: Did not participate in this activity */
  $handler->display->display_options['fields']['field_fac_non_work_partic']['id'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['table'] = 'field_data_field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['field'] = 'field_fac_non_work_partic';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['label'] = 'Participated in fac. based non work';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fac_non_work_partic']['alter']['text'] = 'no';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['empty'] = 'yes';
  $handler->display->display_options['fields']['field_fac_non_work_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_fac_non_work_partic']['type'] = 'list_key';
  /* Field: Content: Did person participate in unpaid activities in a program setting during this reporting period? */
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['id'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['table'] = 'field_data_field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['field'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['label'] = 'Participated in unpaid activities in a program setting';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain your choice of other for why no particip.';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Contextual filter: Content: Reporting period (field_reporting_period) */
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_reporting_period_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['group'] = 1;
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_individual_data_type';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'type';
  $handler->display->display_options['path'] = 'provider/%/%/116038/download';
  $export['download_individual_data'] = $view;

  $view = new view();
  $view->name = 'individual_summary';
  $view->description = 'Show all content (nodes) of a group.';
  $view->tag = 'og';
  $view->base_table = 'node';
  $view->human_name = 'Individual summary';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Number Participating by Activity';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_2' => 'nid_2',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_current_reporting_period' => 'field_current_reporting_period',
    'field_reporting_period' => 'field_reporting_period',
    'type' => 'type',
    'field_individual_data_type' => 'field_individual_data_type',
    'nid_1' => 'nid_1',
    'field_indv_comp_hrs_1' => 'field_indv_comp_hrs_1',
    'field_indv_cont_hrs_1' => 'field_indv_cont_hrs_1',
    'field_indv_comp_hrs' => 'field_indv_comp_hrs',
    'field_indv_comp_gross_wages' => 'field_indv_comp_gross_wages',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_current_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '',
    ),
    'field_individual_data_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_comp_hrs_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_cont_hrs_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_comp_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_comp_gross_wages' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '0';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No individuals found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: Individual data content from referencing individuals */
  $handler->display->display_options['relationships']['reverse_field_individual_node']['id'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['field'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['ui_name'] = 'Individual data content from referencing individuals';
  $handler->display->display_options['relationships']['reverse_field_individual_node']['label'] = 'Individual Data content from field_individual';
  /* Relationship: Provider node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Provider node from OG membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['id'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['field'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['label'] = 'State referenced from og_group_provider_state_ref';
  $handler->display->display_options['relationships']['og_group_provider_state_ref_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['id'] = 'field_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['field'] = 'field_reporting_period_target_id';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['relationships']['field_reporting_period_target_id']['label'] = 'Reporting period entity referenced from field_reporting_period';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['id'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['table'] = 'field_data_field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['field'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['label'] = 'Individual competitive job';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['id'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['table'] = 'field_data_field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['field'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['label'] = 'Individual contracted job';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross business income *for the last three months* */
  $handler->display->display_options['fields']['field_self_emp_gross_income']['id'] = 'field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['table'] = 'field_data_field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['field'] = 'field_self_emp_gross_income';
  /* Sort criterion: Content: Last name (field_last_name) */
  $handler->display->display_options['sorts']['field_last_name_value']['id'] = 'field_last_name_value';
  $handler->display->display_options['sorts']['field_last_name_value']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['sorts']['field_last_name_value']['field'] = 'field_last_name_value';
  /* Sort criterion: Content: First name (field_first_name) */
  $handler->display->display_options['sorts']['field_first_name_value']['id'] = 'field_first_name_value';
  $handler->display->display_options['sorts']['field_first_name_value']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['sorts']['field_first_name_value']['field'] = 'field_first_name_value';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: Group_type */
  $handler->display->display_options['filters']['group_type']['id'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['table'] = 'og_membership';
  $handler->display->display_options['filters']['group_type']['field'] = 'group_type';
  $handler->display->display_options['filters']['group_type']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['group_type']['value'] = array(
    'node' => 'node',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'field_reporting_period';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'field_current_reporting_period';
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare_1']['id'] = 'fields_compare_1';
  $handler->display->display_options['filters']['fields_compare_1']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare_1']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare_1']['right_field'] = 'field_individual_data_type';
  $handler->display->display_options['filters']['fields_compare_1']['left_field'] = 'type';

  /* Display: provider summary */
  $handler = $view->new_display('page', 'provider summary', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Average Hours of Participation by Activity';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_2' => 'nid_2',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_current_reporting_period' => 'field_current_reporting_period',
    'field_reporting_period' => 'field_reporting_period',
    'type' => 'type',
    'field_individual_data_type' => 'field_individual_data_type',
    'nid_1' => 'nid_1',
    'field_indv_comp_hrs' => 'field_indv_comp_hrs',
    'field_indv_cont_hrs' => 'field_indv_cont_hrs',
    'field_grp_integ_hrs' => 'field_grp_integ_hrs',
    'field_self_emp_hrs' => 'field_self_emp_hrs',
    'field_shl_hrs' => 'field_shl_hrs',
    'field_com_non_wrk_hours' => 'field_com_non_wrk_hours',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_current_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '',
    ),
    'field_individual_data_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_comp_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '',
    ),
    'field_indv_cont_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_grp_integ_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_self_emp_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_shl_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_com_non_wrk_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Average Hours of Participation by Activity';
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '0';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="clearfix"><a class="viewButton btn" href="/node/add/individual?p=!1">Add new individual</a><a class="viewButton btn" href="/">Back to main page</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['label'] = 'Individual competitive: average hours';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_hrs']['id'] = 'field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['table'] = 'field_data_field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['field'] = 'field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['label'] = 'Individual contracted: average hours';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_hrs']['id'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['table'] = 'field_data_field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['field'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated: average hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked in business this reporting period *for the two week reporting period only* */
  $handler->display->display_options['fields']['field_self_emp_hrs']['id'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['table'] = 'field_data_field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['field'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_self_emp_hrs']['label'] = 'Self employment: average hours';
  $handler->display->display_options['fields']['field_self_emp_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_shl_hrs']['id'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['table'] = 'field_data_field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['field'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Facility based/sheltered: average hours';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['label'] = 'Unpaid community activities: average hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'provider/%/summary';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Percent of total hours in activity for two-week period';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_2' => 'nid_2',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_current_reporting_period' => 'field_current_reporting_period',
    'field_reporting_period' => 'field_reporting_period',
    'type' => 'type',
    'field_individual_data_type' => 'field_individual_data_type',
    'nid_1' => 'nid_1',
    'field_indv_comp_hrs_1' => 'field_indv_comp_hrs_1',
    'field_indv_cont_hrs_1' => 'field_indv_cont_hrs_1',
    'field_grp_integ_hrs' => 'field_grp_integ_hrs',
    'field_self_emp_hrs' => 'field_self_emp_hrs',
    'field_shl_hrs' => 'field_shl_hrs',
    'field_com_non_wrk_hours' => 'field_com_non_wrk_hours',
    'expression_1' => 'expression_1',
    'expression' => 'expression',
    'expression_2' => 'expression_2',
    'expression_3' => 'expression_3',
    'expression_4' => 'expression_4',
    'expression_5' => 'expression_5',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_current_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '',
    ),
    'field_individual_data_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_comp_hrs_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_cont_hrs_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '[field_indv_cont_hrs_1]/[field_indv_cont_hrs_1]',
    ),
    'field_grp_integ_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_self_emp_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_shl_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_com_non_wrk_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'expression_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_indv_comp_hrs_1]/[expression_1]) * 100',
    ),
    'expression' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_indv_cont_hrs_1]/[expression]) * 100',
    ),
    'expression_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_grp_integ_hrs]/[expression_2]) * 100',
    ),
    'expression_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_self_emp_hrs]/[expression_3]) * 100',
    ),
    'expression_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_shl_hrs]/[expression_4]) * 100',
    ),
    'expression_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_com_non_wrk_hours]/[expression_5]) * 100',
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Percent of total hours in activity for two-week period';
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '0';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['id'] = 'field_indv_comp_hrs_1';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['label'] = 'Inidividual competitive work total hours';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['element_wrapper_class'] = 'hideCol';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_hrs_1']['id'] = 'field_indv_cont_hrs_1';
  $handler->display->display_options['fields']['field_indv_cont_hrs_1']['table'] = 'field_data_field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs_1']['field'] = 'field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs_1']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_hrs_1']['label'] = 'Individual contracted, total hours';
  $handler->display->display_options['fields']['field_indv_cont_hrs_1']['element_wrapper_class'] = 'hideCol';
  $handler->display->display_options['fields']['field_indv_cont_hrs_1']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_hrs']['id'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['table'] = 'field_data_field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['field'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated: total hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['element_wrapper_class'] = 'hideCol';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked in business this reporting period *for the two week reporting period only* */
  $handler->display->display_options['fields']['field_self_emp_hrs']['id'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['table'] = 'field_data_field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['field'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_self_emp_hrs']['label'] = 'Self employment: total hours';
  $handler->display->display_options['fields']['field_self_emp_hrs']['element_wrapper_class'] = 'hideCol';
  $handler->display->display_options['fields']['field_self_emp_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_shl_hrs']['id'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['table'] = 'field_data_field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['field'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Facility based/sheltered: total hours';
  $handler->display->display_options['fields']['field_shl_hrs']['element_wrapper_class'] = 'hideCol';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['label'] = 'Community based, unpaid: total hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['element_wrapper_class'] = 'hideCol';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Individual competitive hours percentage';
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '1';
  $handler->display->display_options['fields']['expression_1']['separator'] = '';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Math: individual contracted percent hours';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '1';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['label'] = 'Group integrated: hours percentage';
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '1';
  $handler->display->display_options['fields']['expression_2']['separator'] = '';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_3']['id'] = 'expression_3';
  $handler->display->display_options['fields']['expression_3']['table'] = 'views';
  $handler->display->display_options['fields']['expression_3']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_3']['label'] = 'Self employment: hours percentage';
  $handler->display->display_options['fields']['expression_3']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_3']['precision'] = '1';
  $handler->display->display_options['fields']['expression_3']['separator'] = '';
  $handler->display->display_options['fields']['expression_3']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_4']['id'] = 'expression_4';
  $handler->display->display_options['fields']['expression_4']['table'] = 'views';
  $handler->display->display_options['fields']['expression_4']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_4']['label'] = 'Facility based/sheltered: Hours percentage';
  $handler->display->display_options['fields']['expression_4']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_4']['precision'] = '1';
  $handler->display->display_options['fields']['expression_4']['separator'] = '';
  $handler->display->display_options['fields']['expression_4']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_5']['id'] = 'expression_5';
  $handler->display->display_options['fields']['expression_5']['table'] = 'views';
  $handler->display->display_options['fields']['expression_5']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_5']['label'] = 'Community based activity: hours percentage';
  $handler->display->display_options['fields']['expression_5']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_5']['precision'] = '1';
  $handler->display->display_options['fields']['expression_5']['separator'] = '';
  $handler->display->display_options['fields']['expression_5']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Attachment 2 */
  $handler = $view->new_display('attachment', 'Attachment 2', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Number Participating by Activity';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_2' => 'nid_2',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_current_reporting_period' => 'field_current_reporting_period',
    'field_reporting_period' => 'field_reporting_period',
    'type' => 'type',
    'field_individual_data_type' => 'field_individual_data_type',
    'nid_1' => 'nid_1',
    'nid_3' => 'nid_3',
    'field_indv_comp_hrs' => 'field_indv_comp_hrs',
    'field_indv_cont_hrs' => 'field_indv_cont_hrs',
    'field_grp_integ_hrs' => 'field_grp_integ_hrs',
    'field_self_emp_hrs' => 'field_self_emp_hrs',
    'field_shl_hrs' => 'field_shl_hrs',
    'field_fac_non_work_yn_partic' => 'field_fac_non_work_yn_partic',
    'field_com_non_wrk_hours' => 'field_com_non_wrk_hours',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_current_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '',
    ),
    'field_individual_data_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_comp_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_cont_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_grp_integ_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_self_emp_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_shl_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_fac_non_work_yn_partic' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_com_non_wrk_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Number Participating by Activity';
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '0';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_3']['id'] = 'nid_3';
  $handler->display->display_options['fields']['nid_3']['table'] = 'node';
  $handler->display->display_options['fields']['nid_3']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_3']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid_3']['label'] = 'Total Served (unduplicated count)';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['label'] = 'Individual competitive job';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_hrs']['id'] = 'field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['table'] = 'field_data_field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['field'] = 'field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['label'] = 'Individual contracted job';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_hrs']['id'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['table'] = 'field_data_field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['field'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated job';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked in business this reporting period *for the two week reporting period only* */
  $handler->display->display_options['fields']['field_self_emp_hrs']['id'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['table'] = 'field_data_field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['field'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_self_emp_hrs']['label'] = 'Self employment';
  $handler->display->display_options['fields']['field_self_emp_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_shl_hrs']['id'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['table'] = 'field_data_field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['field'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Facility based job';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Did person participate in unpaid activities in a program setting during this reporting period? */
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['id'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['table'] = 'field_data_field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['field'] = 'field_fac_non_work_yn_partic';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_fac_non_work_yn_partic']['label'] = 'Facility based non work';
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['label'] = 'Community based non work';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );

  /* Display: Attachment 3 */
  $handler = $view->new_display('attachment', 'Attachment 3', 'attachment_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_2' => 'nid_2',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_current_reporting_period' => 'field_current_reporting_period',
    'field_reporting_period' => 'field_reporting_period',
    'type' => 'type',
    'field_individual_data_type' => 'field_individual_data_type',
    'nid_1' => 'nid_1',
    'nid_3' => 'nid_3',
    'field_indv_comp_gross_wages' => 'field_indv_comp_gross_wages',
    'field_indv_cont_gross_wages' => 'field_indv_cont_gross_wages',
    'field_grp_integ_gross_wages' => 'field_grp_integ_gross_wages',
    'field_self_emp_gross_income' => 'field_self_emp_gross_income',
    'field_shl_gross_wages' => 'field_shl_gross_wages',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_current_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '',
    ),
    'field_individual_data_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_comp_gross_wages' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_cont_gross_wages' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_grp_integ_gross_wages' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_self_emp_gross_income' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_shl_gross_wages' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_average' => 'views_aggregator_average',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Mean two-week wage*';
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '0';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_3']['id'] = 'nid_3';
  $handler->display->display_options['fields']['nid_3']['table'] = 'node';
  $handler->display->display_options['fields']['nid_3']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_3']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid_3']['label'] = 'Total served (unduplicated count)';
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['id'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['table'] = 'field_data_field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['field'] = 'field_indv_comp_gross_wages';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['label'] = 'Individual competitive job';
  $handler->display->display_options['fields']['field_indv_comp_gross_wages']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['id'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['table'] = 'field_data_field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['field'] = 'field_indv_cont_gross_wages';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['label'] = 'Individual contracted job';
  $handler->display->display_options['fields']['field_indv_cont_gross_wages']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['id'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['table'] = 'field_data_field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['field'] = 'field_grp_integ_gross_wages';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['label'] = 'Group integrated job';
  $handler->display->display_options['fields']['field_grp_integ_gross_wages']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross business income *for the last three months* */
  $handler->display->display_options['fields']['field_self_emp_gross_income']['id'] = 'field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['table'] = 'field_data_field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['field'] = 'field_self_emp_gross_income';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['label'] = 'Self employment*';
  $handler->display->display_options['fields']['field_self_emp_gross_income']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Gross wages earned this reporting period */
  $handler->display->display_options['fields']['field_shl_gross_wages']['id'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['table'] = 'field_data_field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['field'] = 'field_shl_gross_wages';
  $handler->display->display_options['fields']['field_shl_gross_wages']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_gross_wages']['label'] = 'Facility based job';
  $handler->display->display_options['fields']['field_shl_gross_wages']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: pto and set aside percentages attach */
  $handler = $view->new_display('attachment', 'pto and set aside percentages attach', 'attachment_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Percent of total hours in activity for two-week period';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'nid_2' => 'nid_2',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_current_reporting_period' => 'field_current_reporting_period',
    'field_reporting_period' => 'field_reporting_period',
    'type' => 'type',
    'field_individual_data_type' => 'field_individual_data_type',
    'nid_1' => 'nid_1',
    'field_indv_comp_hrs' => 'field_indv_comp_hrs',
    'field_indv_comp_hrs_1' => 'field_indv_comp_hrs_1',
    'field_indv_cont_hrs' => 'field_indv_cont_hrs',
    'field_grp_integ_hrs' => 'field_grp_integ_hrs',
    'field_self_emp_hrs' => 'field_self_emp_hrs',
    'field_shl_hrs' => 'field_shl_hrs',
    'field_com_non_wrk_hours' => 'field_com_non_wrk_hours',
    'expression_1' => 'expression_1',
    'expression' => 'expression',
    'expression_2' => 'expression_2',
    'expression_3' => 'expression_3',
    'expression_4' => 'expression_4',
    'expression_5' => 'expression_5',
    'field_paid_time_off_sum' => 'field_paid_time_off_sum',
    'field_ind_cont_paid_time_off_sum' => 'field_ind_cont_paid_time_off_sum',
    'field_group_integrated_paid_time' => 'field_group_integrated_paid_time',
    'expression_6' => 'expression_6',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_current_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_reporting_period' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '',
    ),
    'field_individual_data_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_comp_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_comp_hrs_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_indv_cont_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_grp_integ_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_count' => 'views_aggregator_count',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_self_emp_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_shl_hrs' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'field_com_non_wrk_hours' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'expression_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_indv_comp_hrs_1]/[expression_1]) * 100',
    ),
    'expression' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_indv_cont_hrs_1]/[expression]) * 100',
    ),
    'expression_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_grp_integ_hrs]/[expression_2]) * 100',
    ),
    'expression_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_self_emp_hrs]/[expression_3]) * 100',
    ),
    'expression_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_shl_hrs]/[expression_4]) * 100',
    ),
    'expression_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_com_non_wrk_hours]/[expression_5]) * 100',
    ),
    'field_paid_time_off_sum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_paid_time_off_sum]/[field_indv_comp_hrs_1])* 100',
    ),
    'field_ind_cont_paid_time_off_sum' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_ind_cont_paid_time_off_sum]/[field_indv_cont_hrs]) * 100',
    ),
    'field_group_integrated_paid_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 1,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_group_integrated_paid_time]/[field_grp_integ_hrs])*100',
    ),
    'expression_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_sum' => 'views_aggregator_sum',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_expression',
      'aggr_par_column' => '([field_group_integrated_paid_time]/[expression_6] )*100',
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'Percent of total hours in activity for two-week period';
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '0';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: individual_nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['ui_name'] = 'individual_nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['title']['label'] = 'ID title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['title_1']['label'] = 'Provider';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  /* Field: Content: Current reporting period */
  $handler->display->display_options['fields']['field_current_reporting_period']['id'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['table'] = 'field_data_field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['field'] = 'field_current_reporting_period';
  $handler->display->display_options['fields']['field_current_reporting_period']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_current_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Reporting period */
  $handler->display->display_options['fields']['field_reporting_period']['id'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['table'] = 'field_data_field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['field'] = 'field_reporting_period';
  $handler->display->display_options['fields']['field_reporting_period']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_reporting_period']['label'] = 'ID Reporting period';
  $handler->display->display_options['fields']['field_reporting_period']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reporting_period']['settings'] = array(
    'link' => 0,
  );
  /* Field: Individual data content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['type']['ui_name'] = 'Individual data content type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: State individual data content type */
  $handler->display->display_options['fields']['field_individual_data_type']['id'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['table'] = 'field_data_field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['field'] = 'field_individual_data_type';
  $handler->display->display_options['fields']['field_individual_data_type']['relationship'] = 'og_group_provider_state_ref_target_id';
  $handler->display->display_options['fields']['field_individual_data_type']['ui_name'] = 'State individual data content type';
  $handler->display->display_options['fields']['field_individual_data_type']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['empty'] = '!1';
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs']['id'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['label'] = 'Indiv. competitive hrs pto';
  $handler->display->display_options['fields']['field_indv_comp_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Total hours worked for this reporting period */
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['id'] = 'field_indv_comp_hrs_1';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['table'] = 'field_data_field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['field'] = 'field_indv_comp_hrs';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['label'] = 'Inidividual competitive work total hours';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['element_wrapper_class'] = 'hideCol';
  $handler->display->display_options['fields']['field_indv_comp_hrs_1']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_indv_cont_hrs']['id'] = 'field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['table'] = 'field_data_field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['field'] = 'field_indv_cont_hrs';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['label'] = 'Individual contracted hours';
  $handler->display->display_options['fields']['field_indv_cont_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_grp_integ_hrs']['id'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['table'] = 'field_data_field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['field'] = 'field_grp_integ_hrs';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['label'] = 'Group integrated: total hours';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['element_wrapper_class'] = 'hideCol';
  $handler->display->display_options['fields']['field_grp_integ_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked in business this reporting period *for the two week reporting period only* */
  $handler->display->display_options['fields']['field_self_emp_hrs']['id'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['table'] = 'field_data_field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['field'] = 'field_self_emp_hrs';
  $handler->display->display_options['fields']['field_self_emp_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_self_emp_hrs']['label'] = 'Self employment: total hours';
  $handler->display->display_options['fields']['field_self_emp_hrs']['element_wrapper_class'] = 'hideCol';
  $handler->display->display_options['fields']['field_self_emp_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours worked for pay this reporting period */
  $handler->display->display_options['fields']['field_shl_hrs']['id'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['table'] = 'field_data_field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['field'] = 'field_shl_hrs';
  $handler->display->display_options['fields']['field_shl_hrs']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_shl_hrs']['label'] = 'Facility based/sheltered: total hours';
  $handler->display->display_options['fields']['field_shl_hrs']['element_wrapper_class'] = 'hideCol';
  $handler->display->display_options['fields']['field_shl_hrs']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['id'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['table'] = 'field_data_field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['field'] = 'field_com_non_wrk_hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['label'] = 'Community based, unpaid: total hours';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['element_wrapper_class'] = 'hideCol';
  $handler->display->display_options['fields']['field_com_non_wrk_hours']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_1']['id'] = 'expression_1';
  $handler->display->display_options['fields']['expression_1']['table'] = 'views';
  $handler->display->display_options['fields']['expression_1']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_1']['label'] = 'Individual competitive hours percentage';
  $handler->display->display_options['fields']['expression_1']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_1']['precision'] = '1';
  $handler->display->display_options['fields']['expression_1']['separator'] = '';
  $handler->display->display_options['fields']['expression_1']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = 'Math: individual contracted percent hours';
  $handler->display->display_options['fields']['expression']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression']['precision'] = '1';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_2']['id'] = 'expression_2';
  $handler->display->display_options['fields']['expression_2']['table'] = 'views';
  $handler->display->display_options['fields']['expression_2']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_2']['label'] = 'Group integrated: hours percentage';
  $handler->display->display_options['fields']['expression_2']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_2']['precision'] = '1';
  $handler->display->display_options['fields']['expression_2']['separator'] = '';
  $handler->display->display_options['fields']['expression_2']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_3']['id'] = 'expression_3';
  $handler->display->display_options['fields']['expression_3']['table'] = 'views';
  $handler->display->display_options['fields']['expression_3']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_3']['label'] = 'Self employment: hours percentage';
  $handler->display->display_options['fields']['expression_3']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_3']['precision'] = '1';
  $handler->display->display_options['fields']['expression_3']['separator'] = '';
  $handler->display->display_options['fields']['expression_3']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_4']['id'] = 'expression_4';
  $handler->display->display_options['fields']['expression_4']['table'] = 'views';
  $handler->display->display_options['fields']['expression_4']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_4']['label'] = 'Facility based/sheltered: Hours percentage';
  $handler->display->display_options['fields']['expression_4']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_4']['precision'] = '1';
  $handler->display->display_options['fields']['expression_4']['separator'] = '';
  $handler->display->display_options['fields']['expression_4']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_5']['id'] = 'expression_5';
  $handler->display->display_options['fields']['expression_5']['table'] = 'views';
  $handler->display->display_options['fields']['expression_5']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_5']['label'] = 'Community based activity: hours percentage';
  $handler->display->display_options['fields']['expression_5']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_5']['precision'] = '1';
  $handler->display->display_options['fields']['expression_5']['separator'] = '';
  $handler->display->display_options['fields']['expression_5']['expression'] = '[field_indv_comp_hrs_1] + [field_indv_cont_hrs_1] + [field_grp_integ_hrs] + [field_self_emp_hrs] + [field_shl_hrs] + [field_com_non_wrk_hours]';
  /* Field: Content: Individual competitive paid time off summary */
  $handler->display->display_options['fields']['field_paid_time_off_sum']['id'] = 'field_paid_time_off_sum';
  $handler->display->display_options['fields']['field_paid_time_off_sum']['table'] = 'field_data_field_paid_time_off_sum';
  $handler->display->display_options['fields']['field_paid_time_off_sum']['field'] = 'field_paid_time_off_sum';
  $handler->display->display_options['fields']['field_paid_time_off_sum']['relationship'] = 'reverse_field_individual_node';
  $handler->display->display_options['fields']['field_paid_time_off_sum']['label'] = 'Individ Competitive paid time off summary';
  /* Field: Content: Individual Contracted Paid time off summary */
  $handler->display->display_options['fields']['field_ind_cont_paid_time_off_sum']['id'] = 'field_ind_cont_paid_time_off_sum';
  $handler->display->display_options['fields']['field_ind_cont_paid_time_off_sum']['table'] = 'field_data_field_ind_cont_paid_time_off_sum';
  $handler->display->display_options['fields']['field_ind_cont_paid_time_off_sum']['field'] = 'field_ind_cont_paid_time_off_sum';
  $handler->display->display_options['fields']['field_ind_cont_paid_time_off_sum']['relationship'] = 'reverse_field_individual_node';
  /* Field: Content: Group integrated paid time off summary */
  $handler->display->display_options['fields']['field_group_integrated_paid_time']['id'] = 'field_group_integrated_paid_time';
  $handler->display->display_options['fields']['field_group_integrated_paid_time']['table'] = 'field_data_field_group_integrated_paid_time';
  $handler->display->display_options['fields']['field_group_integrated_paid_time']['field'] = 'field_group_integrated_paid_time';
  $handler->display->display_options['fields']['field_group_integrated_paid_time']['relationship'] = 'reverse_field_individual_node';
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression_6']['id'] = 'expression_6';
  $handler->display->display_options['fields']['expression_6']['table'] = 'views';
  $handler->display->display_options['fields']['expression_6']['field'] = 'expression';
  $handler->display->display_options['fields']['expression_6']['label'] = 'Math expression Group integ';
  $handler->display->display_options['fields']['expression_6']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['expression_6']['precision'] = '1';
  $handler->display->display_options['fields']['expression_6']['separator'] = '';
  $handler->display->display_options['fields']['expression_6']['expression'] = '([field_group_integrated_paid_time] /[field_grp_integ_hrs]) * 100';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $export['individual_summary'] = $view;

  $view = new view();
  $view->name = 'list_provider_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'List MD/MA provider users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'List provider users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    8 => '8',
    7 => '7',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: First and last name */
  $handler->display->display_options['fields']['field_first_and_last_name']['id'] = 'field_first_and_last_name';
  $handler->display->display_options['fields']['field_first_and_last_name']['table'] = 'field_data_field_first_and_last_name';
  $handler->display->display_options['fields']['field_first_and_last_name']['field'] = 'field_first_and_last_name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Group membership */
  $handler->display->display_options['fields']['og_user_node']['id'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['table'] = 'og_membership';
  $handler->display->display_options['fields']['og_user_node']['field'] = 'og_user_node';
  $handler->display->display_options['fields']['og_user_node']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  $handler->display->display_options['fields']['og_user_node']['delta_offset'] = '0';
  /* Sort criterion: User: Group membership (og_user_node) */
  $handler->display->display_options['sorts']['og_user_node_target_id']['id'] = 'og_user_node_target_id';
  $handler->display->display_options['sorts']['og_user_node_target_id']['table'] = 'og_membership';
  $handler->display->display_options['sorts']['og_user_node_target_id']['field'] = 'og_user_node_target_id';
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'list-provider-users';

  /* Display: Download MD providers */
  $handler = $view->new_display('views_data_export', 'Download MD providers', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List provider users MD';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'provider_users_md.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'provider-users-md';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Download MA providers */
  $handler = $view->new_display('views_data_export', 'Download MA providers', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List provider users MA';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'provider_users_ma.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'provider-users-ma';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Download GA providers */
  $handler = $view->new_display('views_data_export', 'Download GA providers', 'views_data_export_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'List provider users MA';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'provider_users_ga.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['path'] = 'provider-users-ga';
  $handler->display->display_options['sitename_title'] = 0;
  $export['list_provider_users'] = $view;

  $view = new view();
  $view->name = 'maryland_data_by_reporting_period';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Maryland data by reporting period';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Maryland data by reporting period';
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
  /* Field: Content: State, region, and county */
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
  /* Field: Content: Total hours worked for this reporting period */
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
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
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
  /* Field: Content: State, region, and county */
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
  /* Field: Content: Was the individual's non-participation in this activity related to COVID-19? */
  $handler->display->display_options['fields']['field_indv_comp_covid']['id'] = 'field_indv_comp_covid';
  $handler->display->display_options['fields']['field_indv_comp_covid']['table'] = 'field_data_field_indv_comp_covid';
  $handler->display->display_options['fields']['field_indv_comp_covid']['field'] = 'field_indv_comp_covid';
  $handler->display->display_options['fields']['field_indv_comp_covid']['label'] = 'non-participation in ind. comp. related to COVID-19?';
  /* Field: Content: Total hours worked for this reporting period */
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
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_indv_comp_supports']['id'] = 'field_indv_comp_supports';
  $handler->display->display_options['fields']['field_indv_comp_supports']['table'] = 'field_data_field_indv_comp_supports';
  $handler->display->display_options['fields']['field_indv_comp_supports']['field'] = 'field_indv_comp_supports';
  $handler->display->display_options['fields']['field_indv_comp_supports']['label'] = 'Supports received for ind. comp.';
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
  /* Field: Content: Was the individual's non-participation in this activity related to COVID-19? */
  $handler->display->display_options['fields']['field_indv_cont_covid']['id'] = 'field_indv_cont_covid';
  $handler->display->display_options['fields']['field_indv_cont_covid']['table'] = 'field_data_field_indv_cont_covid';
  $handler->display->display_options['fields']['field_indv_cont_covid']['field'] = 'field_indv_cont_covid';
  $handler->display->display_options['fields']['field_indv_cont_covid']['label'] = 'non-participation in ind. cont. related to COVID-19?';
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
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_indv_cont_supports']['id'] = 'field_indv_cont_supports';
  $handler->display->display_options['fields']['field_indv_cont_supports']['table'] = 'field_data_field_indv_cont_supports';
  $handler->display->display_options['fields']['field_indv_cont_supports']['field'] = 'field_indv_cont_supports';
  $handler->display->display_options['fields']['field_indv_cont_supports']['label'] = 'Supports received for ind. contr.';
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
  /* Field: Content: Was the individual's non-participation in this activity related to COVID-19? */
  $handler->display->display_options['fields']['field_grp_integ_covid']['id'] = 'field_grp_integ_covid';
  $handler->display->display_options['fields']['field_grp_integ_covid']['table'] = 'field_data_field_grp_integ_covid';
  $handler->display->display_options['fields']['field_grp_integ_covid']['field'] = 'field_grp_integ_covid';
  $handler->display->display_options['fields']['field_grp_integ_covid']['label'] = 'non-participation in grp. integ. related to COVID-19?';
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
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_grp_integ_supports']['id'] = 'field_grp_integ_supports';
  $handler->display->display_options['fields']['field_grp_integ_supports']['table'] = 'field_data_field_grp_integ_supports';
  $handler->display->display_options['fields']['field_grp_integ_supports']['field'] = 'field_grp_integ_supports';
  $handler->display->display_options['fields']['field_grp_integ_supports']['label'] = 'Supports received for grp. integ.';
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
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_self_emp_supports']['id'] = 'field_self_emp_supports';
  $handler->display->display_options['fields']['field_self_emp_supports']['table'] = 'field_data_field_self_emp_supports';
  $handler->display->display_options['fields']['field_self_emp_supports']['field'] = 'field_self_emp_supports';
  $handler->display->display_options['fields']['field_self_emp_supports']['label'] = 'Supports received for self emp.';
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
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_shl_supports']['id'] = 'field_shl_supports';
  $handler->display->display_options['fields']['field_shl_supports']['table'] = 'field_data_field_shl_supports';
  $handler->display->display_options['fields']['field_shl_supports']['field'] = 'field_shl_supports';
  $handler->display->display_options['fields']['field_shl_supports']['label'] = 'Supports received for fac. based work';
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
  /* Field: Content: Hours spent in unpaid activities in an integrated community setting during this reporting period */
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
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['id'] = 'field_com_non_wrk_supports';
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['table'] = 'field_data_field_com_non_wrk_supports';
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['field'] = 'field_com_non_wrk_supports';
  $handler->display->display_options['fields']['field_com_non_wrk_supports']['label'] = 'Supports received for com. non work';
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
  /* Field: Content: What supports did this person receive for participation in this outcome? */
  $handler->display->display_options['fields']['field_fac_non_work_supports']['id'] = 'field_fac_non_work_supports';
  $handler->display->display_options['fields']['field_fac_non_work_supports']['table'] = 'field_data_field_fac_non_work_supports';
  $handler->display->display_options['fields']['field_fac_non_work_supports']['field'] = 'field_fac_non_work_supports';
  $handler->display->display_options['fields']['field_fac_non_work_supports']['label'] = 'Supports received for fac. non work';
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
  $handler->display->display_options['path'] = 'maryland-data-by-reporting-period';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-md-individuals-%timestamp-mm-%timestamp-dd-%timestamp-yyyy.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'md-provider-rp/all/download';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '60';
  $export['maryland_data_by_reporting_period'] = $view;

  $view = new view();
  $view->name = 'mass_individ_data_by_rep_period';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mass. individ data by rep. period';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Massachusetts data by reporting period';
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
  /* Field: Content: State, region, and county */
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
  /* Field: Content: Total hours worked for this reporting period */
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
  /* Field: Content: Please select a reason why the individual is making less than the Massachusetts minimum wage. */
  $handler->display->display_options['fields']['field_grp_sup_less']['id'] = 'field_grp_sup_less';
  $handler->display->display_options['fields']['field_grp_sup_less']['table'] = 'field_data_field_grp_sup_less';
  $handler->display->display_options['fields']['field_grp_sup_less']['field'] = 'field_grp_sup_less';
  $handler->display->display_options['fields']['field_grp_sup_less']['label'] = 'Why less than min. wage';
  /* Field: Content: If you selected "Other" above explain why the individual was paid less than the minimum wage.  */
  $handler->display->display_options['fields']['field_grp_sup_less_other']['id'] = 'field_grp_sup_less_other';
  $handler->display->display_options['fields']['field_grp_sup_less_other']['table'] = 'field_data_field_grp_sup_less_other';
  $handler->display->display_options['fields']['field_grp_sup_less_other']['field'] = 'field_grp_sup_less_other';
  $handler->display->display_options['fields']['field_grp_sup_less_other']['label'] = 'Why less than min.--other';
  /* Field: Content: Receives paid time off? */
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['id'] = 'field_indv_paid_time_y_n';
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['table'] = 'field_data_field_indv_paid_time_y_n';
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['field'] = 'field_indv_paid_time_y_n';
  $handler->display->display_options['fields']['field_indv_paid_time_y_n']['label'] = 'paid time off?';
  /* Field: Content: Eligible for employer paid health insurance? */
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['id'] = 'field_indv_comp_health_ins_y_n';
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['table'] = 'field_data_field_indv_comp_health_ins_y_n';
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['field'] = 'field_indv_comp_health_ins_y_n';
  $handler->display->display_options['fields']['field_indv_comp_health_ins_y_n']['label'] = 'elig. for empl. health ins.';
  /* Field: Content: Did the individual enter a new individual job in the past 12 months? */
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['id'] = 'field_indv_comp_new_job_y_n';
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['table'] = 'field_data_field_indv_comp_new_job_y_n';
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['field'] = 'field_indv_comp_new_job_y_n';
  $handler->display->display_options['fields']['field_indv_comp_new_job_y_n']['label'] = 'new job in past year?';
  /* Field: Content: Date of hire */
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['id'] = 'field_indv_emp_hire_date';
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['table'] = 'field_data_field_indv_emp_hire_date';
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['field'] = 'field_indv_emp_hire_date';
  $handler->display->display_options['fields']['field_indv_emp_hire_date']['settings'] = array(
    'format_type' => 'short_no_time',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Worked in an individual job 10 of the last 12 months? */
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['id'] = 'field_indv_comp10_of_12_y_n';
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['table'] = 'field_data_field_indv_comp10_of_12_y_n';
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['field'] = 'field_indv_comp10_of_12_y_n';
  $handler->display->display_options['fields']['field_indv_comp10_of_12_y_n']['label'] = 'ind. job 10 of the last 12 ';
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
    'scale' => '2',
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
  /* Field: Content: Please select a reason why the individual is making less than the Massachusetts minimum wage. */
  $handler->display->display_options['fields']['field_grp_sup_less_1']['id'] = 'field_grp_sup_less_1';
  $handler->display->display_options['fields']['field_grp_sup_less_1']['table'] = 'field_data_field_grp_sup_less';
  $handler->display->display_options['fields']['field_grp_sup_less_1']['field'] = 'field_grp_sup_less';
  $handler->display->display_options['fields']['field_grp_sup_less_1']['label'] = 'reason less than min wage';
  /* Field: Content: If you selected "Other" above explain why the individual was paid less than the minimum wage.  */
  $handler->display->display_options['fields']['field_grp_sup_less_other_1']['id'] = 'field_grp_sup_less_other_1';
  $handler->display->display_options['fields']['field_grp_sup_less_other_1']['table'] = 'field_data_field_grp_sup_less_other';
  $handler->display->display_options['fields']['field_grp_sup_less_other_1']['field'] = 'field_grp_sup_less_other';
  $handler->display->display_options['fields']['field_grp_sup_less_other_1']['label'] = 'less than min other';
  /* Field: Content: Location of work */
  $handler->display->display_options['fields']['field_grp_location_of_work']['id'] = 'field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['table'] = 'field_data_field_grp_location_of_work';
  $handler->display->display_options['fields']['field_grp_location_of_work']['field'] = 'field_grp_location_of_work';
  /* Field: Content: Number of workers with a disability on site */
  $handler->display->display_options['fields']['field_grp_num_of_workers']['id'] = 'field_grp_num_of_workers';
  $handler->display->display_options['fields']['field_grp_num_of_workers']['table'] = 'field_data_field_grp_num_of_workers';
  $handler->display->display_options['fields']['field_grp_num_of_workers']['field'] = 'field_grp_num_of_workers';
  $handler->display->display_options['fields']['field_grp_num_of_workers']['label'] = 'Num of workers with a disability ';
  /* Field: Content: Worked in group supported employment 10 of the last 12 months? */
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['id'] = 'field_grp_10_of_12_y_n';
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['table'] = 'field_data_field_grp_10_of_12_y_n';
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['field'] = 'field_grp_10_of_12_y_n';
  $handler->display->display_options['fields']['field_grp_10_of_12_y_n']['label'] = 'Worked group supp. 10 of the last 12';
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
  $handler->display->display_options['fields']['field_job_search_partic']['id'] = 'field_job_search_partic';
  $handler->display->display_options['fields']['field_job_search_partic']['table'] = 'field_data_field_job_search_partic';
  $handler->display->display_options['fields']['field_job_search_partic']['field'] = 'field_job_search_partic';
  $handler->display->display_options['fields']['field_job_search_partic']['label'] = 'Job search--participated?';
  $handler->display->display_options['fields']['field_job_search_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_job_search_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_job_search_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_job_search_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_job_search_partic']['type'] = 'list_key';
  /* Field: Content: Discovery or Career Planning activities (yes/no)? */
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['id'] = 'field_job_search_discov_plan_y_n';
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['table'] = 'field_data_field_job_search_discov_plan_y_n';
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['field'] = 'field_job_search_discov_plan_y_n';
  $handler->display->display_options['fields']['field_job_search_discov_plan_y_n']['label'] = 'Discovery or Career Planning ';
  /* Field: Content: Job development activities (yes/no)? */
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['id'] = 'field_job_search_job_dev_y_n';
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['table'] = 'field_data_field_job_search_job_dev_y_n';
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['field'] = 'field_job_search_job_dev_y_n';
  $handler->display->display_options['fields']['field_job_search_job_dev_y_n']['label'] = 'Job development activities';
  /* Field: Content: Did not participate in other day support wrap-around services during the reporting period. */
  $handler->display->display_options['fields']['field_day_program_partic']['id'] = 'field_day_program_partic';
  $handler->display->display_options['fields']['field_day_program_partic']['table'] = 'field_data_field_day_program_partic';
  $handler->display->display_options['fields']['field_day_program_partic']['field'] = 'field_day_program_partic';
  $handler->display->display_options['fields']['field_day_program_partic']['label'] = 'participated in other day support and wraparound?';
  $handler->display->display_options['fields']['field_day_program_partic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_day_program_partic']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_day_program_partic']['empty'] = 'Yes';
  $handler->display->display_options['fields']['field_day_program_partic']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_day_program_partic']['type'] = 'list_key';
  /* Field: Content: Community Based Day Services (yes/no)? */
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['id'] = 'field_day_program_commun_y_n';
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['table'] = 'field_data_field_day_program_commun_y_n';
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['field'] = 'field_day_program_commun_y_n';
  $handler->display->display_options['fields']['field_day_program_commun_y_n']['label'] = 'Community Based Day Services ';
  /* Field: Content: Day Habilitation Program (yes/no)? */
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['id'] = 'field_day_program_dayhab_y_n';
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['table'] = 'field_data_field_day_program_dayhab_y_n';
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['field'] = 'field_day_program_dayhab_y_n';
  $handler->display->display_options['fields']['field_day_program_dayhab_y_n']['label'] = 'Day Hab. Program';
  /* Field: Content: Other Day Support Services (yes/no)? */
  $handler->display->display_options['fields']['field_day_program_other_y_n']['id'] = 'field_day_program_other_y_n';
  $handler->display->display_options['fields']['field_day_program_other_y_n']['table'] = 'field_data_field_day_program_other_y_n';
  $handler->display->display_options['fields']['field_day_program_other_y_n']['field'] = 'field_day_program_other_y_n';
  $handler->display->display_options['fields']['field_day_program_other_y_n']['label'] = 'Other Day Support Services?';
  /* Field: Content: Specify support services if you answered yes to 'Other Day Support Services' above. */
  $handler->display->display_options['fields']['field_day_program_other_explain']['id'] = 'field_day_program_other_explain';
  $handler->display->display_options['fields']['field_day_program_other_explain']['table'] = 'field_data_field_day_program_other_explain';
  $handler->display->display_options['fields']['field_day_program_other_explain']['field'] = 'field_day_program_other_explain';
  $handler->display->display_options['fields']['field_day_program_other_explain']['label'] = 'Specify Other Day Support Services';
  /* Field: Content: You have checked all the "did not participate" boxes on this form. Why didn't this individual participate in an activity? */
  $handler->display->display_options['fields']['field_indv_data_partic_why']['id'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['table'] = 'field_data_field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['field'] = 'field_indv_data_partic_why';
  $handler->display->display_options['fields']['field_indv_data_partic_why']['label'] = 'Reason for no activity participation';
  /* Field: Content: Explain your choice of "Other." */
  $handler->display->display_options['fields']['field_indv_data_partic_other']['id'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['table'] = 'field_data_field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['field'] = 'field_indv_data_partic_other';
  $handler->display->display_options['fields']['field_indv_data_partic_other']['label'] = 'Explain your choice of other for why no particip.';
  /* Field: Content: Why is this person being deleted from the individuals list? */
  $handler->display->display_options['fields']['field_delete_indiv_why']['id'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['table'] = 'field_data_field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['field'] = 'field_delete_indiv_why';
  $handler->display->display_options['fields']['field_delete_indiv_why']['label'] = 'Why individ. was deleted';
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
    'individual_data_ma' => 'individual_data_ma',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
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
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
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
  $handler->display->display_options['path'] = 'mass-data-by-reporting-period';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'all-mass-individuals-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'mass-provider-rp/all/download';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '60';
  $export['mass_individ_data_by_rep_period'] = $view;

  $view = new view();
  $view->name = 'simple_hierarchical_select_test';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Simple hierarchical select test';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Simple hierarchical select test';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_area_office' => 'field_area_office',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
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
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Identifier';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Vendor id */
  $handler->display->display_options['fields']['field_provider_vendor_name']['id'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['table'] = 'field_data_field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['field'] = 'field_provider_vendor_name';
  $handler->display->display_options['fields']['field_provider_vendor_name']['label'] = 'Vendor name';
  /* Field: Content: State, region, and county */
  $handler->display->display_options['fields']['field_area_office_1']['id'] = 'field_area_office_1';
  $handler->display->display_options['fields']['field_area_office_1']['table'] = 'field_data_field_area_office';
  $handler->display->display_options['fields']['field_area_office_1']['field'] = 'field_area_office';
  $handler->display->display_options['fields']['field_area_office_1']['label'] = 'Area office';
  $handler->display->display_options['fields']['field_area_office_1']['type'] = 'shs_default';
  $handler->display->display_options['fields']['field_area_office_1']['settings'] = array(
    'linked' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: Has taxonomy terms (with depth; Simple hierarchical select) */
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['id'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['field'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['value'] = '';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator_id'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['operator'] = 'shs_term_node_tid_depth_op';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['identifier'] = 'shs_term_node_tid_depth';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['vocabulary'] = 'area_office';
  $handler->display->display_options['filters']['shs_term_node_tid_depth']['depth'] = '2';

  /* Display: Area office page */
  $handler = $view->new_display('page', 'Area office page', 'page');
  $handler->display->display_options['path'] = 'simple-hierarchical-select-test';

  /* Display: Region page */
  $handler = $view->new_display('page', 'Region page', 'page_1');
  $handler->display->display_options['path'] = 'simple-hierarchical-select-test';

  /* Display: State page */
  $handler = $view->new_display('page', 'State page', 'page_2');
  $handler->display->display_options['path'] = 'simple-hierarchical-select-test';
  $export['simple_hierarchical_select_test'] = $view;

  return $export;
}
