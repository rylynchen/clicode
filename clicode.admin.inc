<?php

/**
 * Administration page for clicode.
 */
function clicode_settings() {
  $form['clicode_server_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Licode服务地址'),
    '#default_value' => variable_get('clicode_server_url', ''),
    '#description' => t('格式：http://www.baidu.com'),
    '#required' => TRUE,
  );
  $form['clicode_server_port'] = array(
    '#type' => 'textfield',
    '#title' => t('Licode服务端口号'),
    '#default_value' => variable_get('clicode_server_port', ''),
    '#required' => TRUE,
  );
  $form['clicode_iframe_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Iframe宽度'),
    '#default_value' => variable_get('clicode_iframe_width', ''),
    '#required' => TRUE,
  );
  $form['clicode_iframe_height'] = array(
    '#type' => 'textfield',
    '#title' => t('Iframe高度'),
    '#default_value' => variable_get('clicode_iframe_height', ''),
    '#required' => TRUE,
  );
  return system_settings_form($form);
}