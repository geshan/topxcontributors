<?php

// $Id$

/* return an admin settings form */
function topxcontributors_settings_form() {
  $options = node_get_types('names');
 
  
  $form['topxcontributors_nodetypes'] = array(
    '#type' => 'select',
    '#title' => t('Select Node Types'),
    '#default_value' => variable_get('topxcontributors_nodetypes', 'blog'),
    '#options' => $options,
    '#multiple' => TRUE,
    '#description' => t('<b>Select the node types to show as top contributor blocks.</b>'),
    '#required' => TRUE,
  );
  
  $form['topxcontributors_xvalue'] = array(
    '#type' => 'textfield',
    '#title' => t('No. Of Contributors'),
    '#default_value' => variable_get('topxcontributors_xvalue', 5),
    '#size' => 60,
    '#maxlength' => 2,
    '#required' => TRUE,
      
  );


  return system_settings_form($form);
  
}