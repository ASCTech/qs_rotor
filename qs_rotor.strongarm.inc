<?php

/**
 * Implementation of hook_strongarm().
 */
function qs_rotor_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_qs_slider';
  $strongarm->value = array(
    'title' => '7',
    'revision_information' => '12',
    'author' => '13',
    'options' => '14',
    'menu' => '11',
    'path' => '16',
    'xmlsitemap' => '15',
  );

  $export['content_extra_weights_qs_slider'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_qs_slider';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_qs_slider'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_qs_slider';
  $strongarm->value = '0';

  $export['upload_qs_slider'] = $strongarm;
  return $export;
}
