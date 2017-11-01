<?php
/**
 * Implements hook_variable_info().
 */
function vetta24_company_info_variable_info($options) {
  $variables['vetta24_company_info:address'] = array(
    'title' => t('Address', array(), $options),
    'access' => 'administer custom company info',
    'type' => 'text',
  );
  $variables['vetta24_company_info:phone'] = array(
    'title' => t('Phone number', array(), $options),
    'access' => 'administer custom company info',
    'type' => 'string',
  );
  $variables['vetta24_company_info:email'] = array(
    'title' => t('E-mail address', array(), $options),
    'access' => 'administer custom company info',
    'type' => 'string',
  );
   $variables['vetta24_company_info:mail_signature'] = array(
    'title' => t('Email signature', array(), $options),
    'group' => 'vetta24_company_info',
    'access' => 'administer custom company info',
    'type' => 'text_format',
    'token' => TRUE,
    'default' => "--\r\n[site:name]\r\n[site:url]\r\n[variable:vetta24_company_info:phones]\r\n",
  );
  return $variables;
}