<?php

/**
 * @file
 * Definition of views_plugin_row_comment_view.
 */

/**
 * Plugin which performs a comment_view on the resulting object.
 */
class views_plugin_row_comment_view extends views_plugin_row {

  /**
   * {@inheritdoc}
   */
  public $base_field = 'cid';

  /**
   * {@inheritdoc}
   */
  public $base_table = 'comment';

  /**
   * Stores all comments which are preloaded.
   */
  public $comments = array();

  /**
   * Stores all nodes of all comments which are preloaded.
   */
  public $nodes = array();

  /**
   * {@inheritdoc}
   */
  public function summary_title() {
    return t('Settings');
  }

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['links'] = array('default' => TRUE, 'bool' => TRUE);
    $options['view_mode'] = array('default' => 'full');
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $options = $this->options_form_summary_options();
    $form['view_mode'] = array(
      '#type' => 'select',
      '#options' => $options,
      '#title' => t('View mode'),
      '#default_value' => $this->options['view_mode'],
    );

    $form['links'] = array(
      '#type' => 'checkbox',
      '#title' => t('Display links'),
      '#default_value' => $this->options['links'],
    );
  }

  /**
   * Return the main options, which are shown in the summary title.
   */
  public function options_form_summary_options() {
    $entity_info = entity_get_info('comment');
    $options = array();
    if (!empty($entity_info['view modes'])) {
      foreach ($entity_info['view modes'] as $mode => $settings) {
        $options[$mode] = $settings['label'];
      }
    }
    if (empty($options)) {
      $options = array(
        'full' => t('Full content'),
      );
    }

    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function pre_render($result) {
    $cids = array();

    foreach ($result as $row) {
      $cids[] = $row->cid;
    }

    // Load all comments.
    $cresult = comment_load_multiple($cids);
    $nids = array();
    foreach ($cresult as $comment) {
      $comment->depth = count(explode('.', $comment->thread)) - 1;
      $this->comments[$comment->cid] = $comment;
      $nids[] = $comment->nid;
    }

    // Load all nodes of the comments.
    $nodes = node_load_multiple(array_unique($nids));
    foreach ($nodes as $node) {
      $this->nodes[$node->nid] = $node;
    }
  }

}
