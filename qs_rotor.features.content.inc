<?php

/**
 * Implementation of hook_content_default_fields().
 */
function qs_rotor_content_default_fields() {
  $fields = array();

  // Exported field: field_ascslider_image
  $fields['qs_slider-field_ascslider_image'] = array(
    'field_name' => 'field_ascslider_image',
    'type_name' => 'qs_slider',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'Front_A_default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'Front_A_default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '1 MB',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '8',
      'description' => 'Image to be displayed on rotor. Recommended file size: 16-17 KB. ',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_ascslider_order
  $fields['qs_slider-field_ascslider_order'] = array(
    'field_name' => 'field_ascslider_order',
    'type_name' => 'qs_slider',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '1',
    'allowed_values' => '1
2
3
4
5
6
7
8',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '2',
      'default_value' => array(
        '0' => array(
          'value' => '1',
          '_error_element' => 'default_value_widget][field_ascslider_order][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Order',
      'weight' => '10',
      'description' => 'Number (1-8) this image will be in the rotation of images. Lower numbers display first, higher later. ',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_ascslider_url
  $fields['qs_slider-field_ascslider_url'] = array(
    'field_name' => 'field_ascslider_url',
    'type_name' => 'qs_slider',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link Address',
      'weight' => '9',
      'description' => 'The address that the user will be taken to when they click on the image.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_caption
  $fields['qs_slider-field_caption'] = array(
    'field_name' => 'field_caption',
    'type_name' => 'qs_slider',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '55',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '55',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_caption][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Caption',
      'weight' => '6',
      'description' => 'This is an optional field to display text at the bottom of your rotor image.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Caption');
  t('Image');
  t('Link Address');
  t('Order');

  return $fields;
}
