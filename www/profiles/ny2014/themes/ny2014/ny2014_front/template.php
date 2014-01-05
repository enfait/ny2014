<?php

function ny2014_front_preprocess_views_view(&$variables){
  if( $variables['view']->name == 'greetings'){
    drupal_add_library('soundmanager2', 'soundmanager2');
  }
}