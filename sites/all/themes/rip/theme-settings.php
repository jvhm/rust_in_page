<?php
/**
 * @file
 * Theme setting callbacks for the rip theme.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function rip_form_system_theme_settings_alter(&$form, &$form_state) {

  $form['rip_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('rip Settings'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
  );
  $form['rip_settings']['breadcrumbs'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show breadcrumbs in a page'),
    '#default_value' => theme_get_setting('breadcrumbs', 'rip'),
    '#description'   => t("Marque esta opção se deseja exibir breadcrumbs nas páginas."),
  );
  $form['rip_settings']['slideshow'] = array(
    '#type' => 'fieldset',
    '#title' => t('Slideshow'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['rip_settings']['slideshow']['slideshow_display'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show Slideshow'),
    '#default_value' => theme_get_setting('slideshow_display', 'rip'),
    '#description'   => t("Marque esta opção para exibir o Slideshow."),
  );
    $form['rip_settings']['slideshow']['slide1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Slide 1'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
   $form['rip_settings']['slideshow']['slide1']['slide1_img'] = array(
    '#type'     => 'managed_file',
    '#title'    => t('Imagem'),
    '#required' => FALSE,
    '#upload_location' => file_default_scheme() . '://theme/slideshow-images/',
    '#default_value' => theme_get_setting('slide1_img'), 
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg'),
    ),
  );
    $form['rip_settings']['slideshow']['slide1']['slide1_des'] = array(
    '#type' => 'textfield',
    '#title' => t('Texto'),
    '#default_value' => theme_get_setting('slide1_des', 'rip'),
    '#description'   => t("Digite o texto de exibição do slide."),
  );
    $form['rip_settings']['slideshow']['slide1']['slide1_url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#description'   => t("Digite a URL para o conteúdo do slide."),
  );
    $form['rip_settings']['slideshow']['slide2'] = array(
    '#type' => 'fieldset',
    '#title' => t('Slide 2'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
   $form['rip_settings']['slideshow']['slide2']['slide2_img'] = array(
    '#type'     => 'managed_file',
    '#title'    => t('Imagem'),
    '#required' => FALSE,
    '#upload_location' => file_default_scheme() . '://theme/slideshow-images/',
    '#default_value' => theme_get_setting('slide2_img'), 
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg'),
    ),
  );    
    $form['rip_settings']['slideshow']['slide2']['slide2_des'] = array(
    '#type' => 'textfield',
    '#title' => t('Texto'),
    '#default_value' => theme_get_setting('slide2_des', 'rip'),
    '#description'   => t("Digite o texto de exibição do slide."),
  );
    $form['rip_settings']['slideshow']['slide1']['slide1_url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#description'   => t("Digite a URL para o conteúdo do slide."),
  );
    $form['rip_settings']['slideshow']['slide3'] = array(
    '#type' => 'fieldset',
    '#title' => t('Slide 3'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
   $form['rip_settings']['slideshow']['slide3']['slide3_img'] = array(
    '#type'     => 'managed_file',
    '#title'    => t('Imagem'),
    '#required' => FALSE,
    '#upload_location' => file_default_scheme() . '://theme/slideshow-images/',
    '#default_value' => theme_get_setting('slide3_img'), 
    '#upload_validators' => array(
      'file_validate_extensions' => array('gif png jpg jpeg'),
    ),
  );     
    $form['rip_settings']['slideshow']['slide3']['slide3_des'] = array(
    '#type' => 'textfield',
    '#title' => t('Texto'),
    '#default_value' => theme_get_setting('slide3_des', 'rip'),
    '#description'   => t("Digite o texto de exibição do slide."),
  );
    $form['rip_settings']['slideshow']['slide1']['slide1_url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#description'   => t("Digite a URL para o conteúdo do slide."),
  );
  $form['rip_settings']['social'] = array(
    '#type' => 'fieldset',
    '#title' => t('Social Icon'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['rip_settings']['social']['display'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show Social Icon'),
    '#default_value' => theme_get_setting('display', 'rip'),
    '#description'   => t("Marque esta opção para exibir o Social Icon."),
  );
    $form['rip_settings']['social']['facebook1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Facebook'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
  $form['rip_settings']['social']['facebook1']['facebook'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook URL'),
    '#default_value' => theme_get_setting('facebook', 'rip'),
    '#description'   => t("Digite a URL da página do perfil no Facebook."),
  );
    $form['rip_settings']['social']['twitter1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Twitter'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );  
   $form['rip_settings']['social']['twitter1']['twitter'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter URL'),
    '#default_value' => theme_get_setting('twitter', 'rip'),
    '#description' => t("Digite a URL da página do perfil no Twitter."),
  );
    $form['rip_settings']['social']['googleplus1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Googleplus'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );    
    $form['rip_settings']['social']['googleplus1']['googleplus'] = array(
    '#type' => 'textfield',
    '#title' => t('GooglePlus URL'),
    '#default_value' => theme_get_setting('googleplus', 'rip'),
    '#description'   => t("Digite a URL da página do perfil no Google Plus."),
  );
    $form['rip_settings']['social']['linkedin1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Linkedin'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );    
  $form['rip_settings']['social']['linkedin1']['linkedin'] = array(
    '#type' => 'textfield',
    '#title' => t('LinkedIn URL'),
    '#default_value' => theme_get_setting('linkedin', 'rip'),
    '#description'   => t("Digite a URL da página do perfil no LinkedIn."),
  );
    $form['rip_settings']['social']['pinterest1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Pinterest'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );   
    $form['rip_settings']['social']['pinterest1']['pinterest'] = array(
    '#type' => 'textfield',
    '#title' => t('Pinterest URL'),
    '#default_value' => theme_get_setting('pinterest', 'rip'),
    '#description'   => t("Digite a URL da página do perfil no Pinterest."),
  );
    $form['rip_settings']['social']['vimeo1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Vimeo'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  ); 
    $form['rip_settings']['social']['vimeo1']['vimeo'] = array(
    '#type' => 'textfield',
    '#title' => t('Vimeo URL'),
    '#default_value' => theme_get_setting('vimeo', 'rip'),
    '#description'   => t("Digite a URL da página do perfil no Vimeo."),
  );
    $form['rip_settings']['social']['youtube1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Youtube'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  ); 
    $form['rip_settings']['social']['youtube1']['youtube'] = array(
    '#type' => 'textfield',
    '#title' => t('Youtube URL'),
    '#default_value' => theme_get_setting('youtube', 'rip'),
    '#description'   => t("Digite a URL da página do perfil no YouTube."),
  );
}
