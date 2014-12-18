<?php

/*
 * Contact shortcode
 */
function sooperthemes_basic_shortcodes_contact($attrs, $content = null) {
  extract(shortcode_attrs(array(
    'fullname' => '',
    'address' => '',
    'city' => '',
    'state' => '',
    'zip' => '',
    'country' => '',
    'phone' => '',
    'email' => '',
    'xclass' => '',
    ), $attrs));


  $items = array();
  $full_address = array();
  if ($fullname) $full_address[] = $fullname;
  if ($address) $full_address[] = $address;
  if ($city) $full_address[] = $city;
  if ($state) $full_address[] = $state;
  if ($zip) $full_address[] = $zip;
  if ($country) $full_address[] = $country;
  $items[] = array('data' => implode(', ', $full_address), 'class' => array('icons-address'));
  if ($phone) $items[] = array('data' => $phone, 'class' => array('icons-phone'));
  if ($email) $items[] = array('data' => $email, 'class' => array('icons-email'));

  return theme('item_list',
    array(
      'items' => $items,
      'title' => NULL,
      'type' => 'ul',
      'attributes' => array('class' => array('contact-info'))
    )
  );
}

function sooperthemes_basic_shortcodes_contact_tips($format, $long) {
  $output = '<p><strong>[contact fullname="John Smith" address="Park lane 5" city="LA" state="California" zip="12345" phone="555-55-555" email="info@example.com"][/contact]</strong></p>';
  return $output;
}

function sooperthemes_basic_shortcodes_contact_attributes($form, $form_state) {
  $form['fullname'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'contact'),
      ),
    ),
  );
  $form['address'] = array(
    '#type' => 'textfield',
    '#title' => t('Address'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'contact'),
      ),
    ),
  );
  $form['city'] = array(
    '#type' => 'textfield',
    '#title' => t('City'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'contact'),
      ),
    ),
  );
  $form['state'] = array(
    '#type' => 'textfield',
    '#title' => t('State / Province'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'contact'),
      ),
    ),
  );
  $form['zip'] = array(
    '#type' => 'textfield',
    '#title' => t('Zip / Postal code'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'contact'),
      ),
    ),
  );
  $form['phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone number'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'contact'),
      ),
    ),
  );
  $form['email'] = array(
    '#type' => 'textfield',
    '#title' => t('Email'),
    '#size' => 30,
    '#maxlength' => 30,
    '#states' => array(
      'visible' => array(
        ':input[name="shortcode"]' => array('value' => 'contact'),
      ),
    ),
  );
  return $form;
}