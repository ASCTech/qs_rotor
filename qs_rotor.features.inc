<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function qs_rotor_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function qs_rotor_imagecache_default_presets() {
  $items = array(
    'Front_Single' => array(
      'presetname' => 'Front_Single',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '470',
            'height' => '263',
          ),
        ),
      ),
    ),
    'Front_Double' => array(
      'presetname' => 'Front_Double',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '470',
            'height' => '583',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function qs_rotor_node_info() {
  $items = array(
    'qs_slider' => array(
      'name' => t('Rotor'),
      'module' => 'features',
      'description' => t('Image to display in slider block on front page. '),
      'has_title' => '1',
      'title_label' => t('Alternate Text'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function qs_rotor_views_api() {
  return array(
    'api' => '2',
  );
}
