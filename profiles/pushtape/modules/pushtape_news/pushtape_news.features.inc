<?php
/**
 * @file
 * pushtape_news.features.inc
 */

/**
 * Implements hook_views_api().
 */
function pushtape_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pushtape_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('A quick news update.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
