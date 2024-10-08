<?php

/**
 * @file
 * Definition of views_handler_field_node_link_translate.
 */

/**
 * Field handler to present a link node translate.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_node_link_translate extends views_handler_field_node_link {

  /**
   * {@inheritdoc}
   */
  public function render_link($data, $values) {
    // Ensure user has access to edit this node.
    $node = $this->get_value($values);
    $node->status = 1;
    // Unpublished nodes ignore access control.
    if ($node->language == LANGUAGE_NONE || !translation_supported_type($node->type) || !node_access('view', $node) || !user_access('translate content')) {
      return;
    }

    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = "node/$node->nid/translate";
    $this->options['alter']['query'] = drupal_get_destination();

    $text = !empty($this->options['text']) ? $this->options['text'] : t('translate');
    return $text;
  }

}
