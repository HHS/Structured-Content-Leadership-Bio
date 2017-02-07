<?php
/**
 * @file
 * hhs_gov_content_type_leadership_bio.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hhs_gov_content_type_leadership_bio_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_leadership_bio';
  $strongarm->value = 0;
  $export['comment_anonymous_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_leadership_bio';
  $strongarm->value = 0;
  $export['comment_default_mode_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_leadership_bio';
  $strongarm->value = '50';
  $export['comment_default_per_page_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_leadership_bio';
  $strongarm->value = 0;
  $export['comment_form_location_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_leadership_bio';
  $strongarm->value = '0';
  $export['comment_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_leadership_bio';
  $strongarm->value = '1';
  $export['comment_preview_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_leadership_bio';
  $strongarm->value = 0;
  $export['comment_subject_field_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__leadership_bio';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'long_title_view_mode' => array(
        'custom_settings' => FALSE,
      ),
      'year_month_list_view_mode' => array(
        'custom_settings' => FALSE,
      ),
      'abridged_bio' => array(
        'custom_settings' => TRUE,
      ),
      'regions_leaders_info' => array(
        'custom_settings' => TRUE,
      ),
      'oga_leadership' => array(
        'custom_settings' => TRUE,
      ),
      'blog_short_title_display' => array(
        'custom_settings' => FALSE,
      ),
      'regions_leaders_contact_info' => array(
        'custom_settings' => FALSE,
      ),
      'region_with_no_leadership' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '13',
        ),
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '11',
        ),
        'redirect' => array(
          'weight' => '12',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'rabbit_hole' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'nodehierarchy_children' => array(
          'default' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'abridged_bio' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'regions_leaders_info' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'oga_leadership' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
        'nodehierarchy_children_links' => array(
          'default' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'abridged_bio' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
          'regions_leaders_info' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'oga_leadership' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'maxlength_js_label_leadership_bio';
  $strongarm->value = 'Content limited to @limit characters, remaining: <strong>@remaining</strong>';
  $export['maxlength_js_label_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_leadership_bio';
  $strongarm->value = array();
  $export['menu_options_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_leadership_bio';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_leadership_bio';
  $strongarm->value = array(
    0 => 'promote',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_leadership_bio';
  $strongarm->value = '1';
  $export['node_preview_leadership_bio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_leadership_bio';
  $strongarm->value = 0;
  $export['node_submitted_leadership_bio'] = $strongarm;

  return $export;
}
