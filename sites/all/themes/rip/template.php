<?php
/**
 * @file
 * Contains theme override functions and preprocess functions for the theme.
 */

/**
 * Implements hook_html_head_alter().
 */
function rip_html_head_alter(&$head_elements) {
  $head_elements['system_meta_content_type']['#attributes'] = array(
    'charset' => 'utf-8'
  );
}

/**
 * Insert themed breadcrumb page navigation at top of the node content.
 */
function rip_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Use CSS to hide titile .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    // Comment below line to hide current page to breadcrumb.
    $breadcrumb[] = drupal_get_title();
    $output .= '<nav class="breadcrumb">' . implode(' » ', $breadcrumb) . '</nav>';
    return $output;
  }
}

/**
 * Override or insert variables into the page template.
 */
function rip_preprocess_page(&$vars) {
  if (isset($vars['main_menu'])) {
    $vars['main_menu'] = theme('links__system_main_menu', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'class' => array('links', 'main-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    ));
  }
  else {
    $vars['main_menu'] = FALSE;
  }
  if (isset($vars['secondary_menu'])) {
    $vars['secondary_menu'] = theme('links__system_secondary_menu', array(
      'links' => $vars['secondary_menu'],
      'attributes' => array(
        'class' => array('links', 'secondary-menu', 'clearfix'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    ));
  }
  else {
    $vars['secondary_menu'] = FALSE;
  }
  if (module_exists('i18n_menu')) {
    $vars['main_menu_tree'] = i18n_menu_translated_tree(variable_get('menu_main_links_source', 'main-menu'));
  }
  else {
    $vars['main_menu_tree'] = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
  }
  $vars['display'] = theme_get_setting('display', 'rip');
  $vars['slideshow_display'] = theme_get_setting('slideshow_display', 'rip');
  $vars['slide1_des'] = theme_get_setting('slide1_des', 'rip');
  $vars['slide2_des'] = theme_get_setting('slide2_des', 'rip');
  $vars['slide3_des'] = theme_get_setting('slide3_des', 'rip');
  $slideimage1 = theme_get_setting('slide1_img');
  if (!empty($slideimage1)) {
  $slideimage1image_url = file_create_url(file_load($slideimage1)->uri);
  }
  if (!empty($slideimage1)) {
  $vars['img1'] = $slideimage1image_url;
  }
  else{
    $vars['img1'] = base_path() . drupal_get_path('theme', 'rip') . '/images/slide-image-1.jpg';
  }
  $slideimage2 = theme_get_setting('slide2_img');
  if (!empty($slideimage2)) {
  $slideimage2image_url = file_create_url(file_load($slideimage2)->uri);
  }
  if (!empty($slideimage2)) {
  $vars['img2'] = $slideimage2image_url;
  }
  else{
    $vars['img2'] = base_path() . drupal_get_path('theme', 'rip') . '/images/slide-image-2.jpg';
  }

  $slideimage3 = theme_get_setting('slide3_img');
  if (!empty($slideimage3)) {
  $slideimage3image_url = file_create_url(file_load($slideimage3)->uri);
  }
  if (!empty($slideimage3)) {
  $vars['img3'] = $slideimage3image_url;
  }
  else{
  $vars['img3'] = base_path() . drupal_get_path('theme', 'rip') . '/images/slide-image-3.jpg';
  }

  //$vars['img1'] = base_path() . drupal_get_path('theme', 'rip') . '/images/slide-image-1.jpg';
  //$vars['img2'] = base_path() . drupal_get_path('theme', 'rip') . '/images/slide-image-2.jpg';
  //$vars['img3'] = base_path() . drupal_get_path('theme', 'rip') . '/images/slide-image-3.jpg';
  $vars['twitter'] = theme_get_setting('twitter', 'rip');
  $vars['facebook'] = theme_get_setting('facebook', 'rip');
  $vars['googleplus'] = theme_get_setting('googleplus', 'rip');
  $vars['linkedin'] = theme_get_setting('linkedin', 'rip');
  $vars['pinterest'] = theme_get_setting('pinterest', 'rip');
  $vars['vimeo'] = theme_get_setting('vimeo', 'rip');
  $vars['youtube'] = theme_get_setting('youtube', 'rip');
  $vars['theme_path_social'] = base_path() . drupal_get_path('theme', 'rip');
  $vars['footer_copyright'] = theme_get_setting('footer_copyright');
  $vars['footer_developed'] = theme_get_setting('footer_developed');
  $vars['footer_developedby_url'] = filter_xss_admin(theme_get_setting('footer_developedby_url', 'rip'));
  $vars['footer_developedby'] = filter_xss_admin(theme_get_setting('footer_developedby', 'rip'));
  
}
/**
 * Add Google Fonts.
 */
function rip_preprocess_html(&$variables) {
  drupal_add_css('http://fonts.googleapis.com/css?family=Volkhov:400,400italic', array('type' => 'external'));
  drupal_add_css('http://fonts.googleapis.com/css?family=Ubuntu', array('type' => 'external'));
  drupal_add_css('http://fonts.googleapis.com/css?family=Dancing+Script', array('type' => 'external'));
}

/**
 * Duplicate of theme_menu_local_tasks() but adds clearfix to tabs.
 */
function rip_menu_local_tasks(&$variables) {
  $output = '';

  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary clearfix">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary clearfix">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/**
 * Override or insert variables into the node template.
 */
function rip_preprocess_node(&$variables) {
  $node = $variables['node'];
  if ($variables['view_mode'] == 'full' && node_is_page($variables['node'])) {
    $variables['classes_array'][] = 'node-full';
  }
}

function rip_page_alter($page) {
  $viewport = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array(
    'name' => 'viewport',
    'content' => 'width=device-width'
    ),
  );
  drupal_add_html_head($viewport, 'viewport');
}
