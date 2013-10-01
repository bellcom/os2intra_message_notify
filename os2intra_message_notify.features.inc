<?php
/**
 * @file
 * os2intra_message_notify.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2intra_message_notify_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function os2intra_message_notify_node_info() {
  $items = array(
    'os2intra_message_notification' => array(
      'name' => t('os2intra_message_notification'),
      'base' => 'node_content',
      'description' => t('Messages to be shown in popup'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}