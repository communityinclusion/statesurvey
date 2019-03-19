<?php
print drupal_render($form['title']);
print "Fuck you all and you too.";
//print drupal_render($form['field_of_the_total_number_of_ind']);
//print drupal_render($form['additional_settings']);
//print drupal_render($form['actions']);

print drupal_render_children($form);
