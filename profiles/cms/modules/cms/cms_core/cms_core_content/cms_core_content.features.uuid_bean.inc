<?php
/**
 * @file
 * cms_core_content.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function cms_core_content_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'LA Office',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'la-office',
    'view_mode' => 'default',
    'created' => 1413830451,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '1a55ba17-4db1-4c7b-9acf-a943dc11e40a',
    'uuid' => '1aeda41e-ea0f-466c-94bc-99ae7ffe238d',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<h3>LA Office</h3>

<p>[contact address="Park Lane 5" city=LA zip="12345 AB" phone=555-55-12345 email=info@example.com][/contact]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Preblock 2: Shortcodes',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'preblock-2-shortcodes',
    'view_mode' => 'default',
    'created' => 1415267551,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'aa265a80-5015-4656-a42b-bf39b3b25671',
    'uuid' => '2422704c-78cc-4a59-a4f7-39accd03fd4c',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>[box heading="Amazing Shortcodes" icon="th" layout="icon-inline-title" icon_style="circle"]On top of the fully loaded CKEditor set-up with Media library, we give you shortcodes to create beautiful layouts and engaging content. Our shortcodes allow you to add add rich content to any block, you can even use shortcodes to include all Drupal blocks and views in content![/box]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Social links',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'social-links',
    'view_mode' => 'default',
    'created' => 1413830858,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'fa3cfbdb-6b5f-48e7-8738-a5b6e86fafc1',
    'uuid' => '2440d5fc-e4b5-487c-89ed-bf335499d88a',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>[social type="inline" style="circle" color="inherit" size="2x" hover="pulse" Twitter="#" Facebook="#" YouTube="#" Drupal="#|9 Years on D.O.!"][/social]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Preblock 1: Time Saver icon-white',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'preblock-1-time-saver-icon-white',
    'view_mode' => 'default',
    'created' => 1418141102,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '718ab1e3-dde3-4a10-b026-e7b352b57e4a',
    'uuid' => '28336abd-8e35-4bbc-8cbe-b52ef7b3d887',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>[box heading="A Real Time-Saver" icon="clock-o" layout="icon-inline-title" icon_style="circle" icon_color="white" icon_border="white"]CMS Powerstart is the ultimate shortcut to a production-ready Drupal website. It saves you those boring hours of initial work and takes care of responsive design, SEO settings, performance settings and comes with advances content types and views out of the box[/box]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Preblock 3: Bootstrap icon-white',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'preblock-3-bootstrap-icon-white',
    'view_mode' => 'default',
    'created' => 1418141294,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '018df400-c98a-450c-8383-e65ca4b8ba12',
    'uuid' => '3bf4538f-18f8-4a6a-96cb-e4caa5830d2b',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>[box heading="Bootstrap 3" icon="twitter" layout="icon-inline-title" icon_style="circle" icon_color="white" icon_border="white"]Bootstrap 3 is so awesome for responsive design! And Powerstart has awesome Bootstrap 3 integration. It is integrated in our views and content types to create responsive, mobile-friendly content. You will also love our Shortcode Generator which supports all Bootstrap 3 elements in a WYSIWYG interface![/box]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Preblock 2: Shortcodes icon-white',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'preblock-2-shortcodes-icon-white',
    'view_mode' => 'default',
    'created' => 1418142697,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'e97e9575-1147-4f86-aa71-5525067c7a33',
    'uuid' => '3cda9c20-3b64-430b-b4cf-7aba88f57b4d',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>[box heading="Amazing Shortcodes" icon="th" layout="icon-inline-title" icon_style="circle" icon_color="white" icon_border="white"]On top of the fully loaded CKEditor set-up with Media library, we give you shortcodes to create beautiful layouts and engaging content. Our shortcodes allow you to add add rich content to any block, you can even use shortcodes to include all Drupal blocks and views in content![/box]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Facebook Widget',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'facebook-widget',
    'view_mode' => 'default',
    'created' => 1415129922,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '1ba4fc70-8fff-4752-91ee-be2c1fbe3e7b',
    'uuid' => '4543a147-4d81-44b2-a4b4-6f82ce1ba5a8',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&appId=568856383201152&version=v2.0";
  fjs.parentNode.insertBefore(js, fjs);
}(document, \'script\', \'facebook-jssdk\'));</script>
<div class="fb-like-box" data-href="https://www.facebook.com/sooperthemes" data-colorscheme="light" data-width="270" data-show-faces="true" data-header="false" data-stream="false" data-show-border="true"></div>',
          'format' => 'unfiltered_html',
          'safe_value' => '<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&appId=568856383201152&version=v2.0";
  fjs.parentNode.insertBefore(js, fjs);
}(document, \'script\', \'facebook-jssdk\'));</script>
<div class="fb-like-box" data-href="https://www.facebook.com/sooperthemes" data-colorscheme="light" data-width="270" data-show-faces="true" data-header="false" data-stream="false" data-show-border="true"></div>',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Preblock 1: Time Saver',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'preblock-1-time-saver',
    'view_mode' => 'default',
    'created' => 1415266674,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '7d66b658-b3ef-4102-8a8f-45a0929a290d',
    'uuid' => '52b9c4b5-ffbb-4c46-9b91-a7a2b4725d10',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>[box heading="A Real Time-Saver" icon="clock-o" layout="icon-inline-title" icon_style="circle"]CMS Powerstart is the ultimate shortcut to a production-ready Drupal website. It saves you those boring hours of initial work and takes care of responsive design, SEO settings, performance settings and comes with advances content types and views out of the box[/box]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'New York Office',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'new-york-office',
    'view_mode' => 'default',
    'created' => 1413829986,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => 'b87c50f0-0195-4d53-ac37-6a9b033099e4',
    'uuid' => '53c16019-8308-4638-b664-563e8726decd',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<h3>New York Office</h3>

<p>[contact address="5th Avenue 271B" city=LA zip="12345 AB" phone=555-55-12345 email=info@example.com][/contact]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Preblock 1: Time Saver icon-link',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'preblock-1-time-saver-icon-link',
    'view_mode' => 'default',
    'created' => 1418142872,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '9988deda-838d-4329-979a-6e4f01e6a1b5',
    'uuid' => '9aaeb1a1-1acd-4457-8677-fa1b1ca8f71a',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>[box heading="A Real Time-Saver" icon="clock-o" layout="icon-inline-title" icon_style="circle" icon_color="link" icon_border="link"]CMS Powerstart is the ultimate shortcut to a production-ready Drupal website. It saves you those boring hours of initial work and takes care of responsive design, SEO settings, performance settings and comes with advances content types and views out of the box[/box]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Preblock 2: Shortcodes icon-link',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'preblock-2-shortcodes-icon-link',
    'view_mode' => 'default',
    'created' => 1418142924,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '6a6c5704-7ccd-48de-bc62-0d80fac13f1c',
    'uuid' => '9f71bc90-6398-4f32-920d-63482fff22ea',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>[box heading="Amazing Shortcodes" icon="th" layout="icon-inline-title" icon_style="circle" icon_color="link" icon_border="link"]On top of the fully loaded CKEditor set-up with Media library, we give you shortcodes to create beautiful layouts and engaging content. Our shortcodes allow you to add add rich content to any block, you can even use shortcodes to include all Drupal blocks and views in content![/box]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Drupal CMS Powerstart',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'drupal-cms-powerstart',
    'view_mode' => 'default',
    'created' => 1413830605,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '115c5d60-cd32-4694-9e74-7d6339a959c6',
    'uuid' => 'b8e41eb4-dda6-43e0-9a2f-3bb68dc62aa3',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<h1 style="text-align:center;">Drupal CMS Powerstart Content Types</h1>

<p style="text-align:center;">The backend is based on the CMS Powerstart distribution, <a href="https://www.drupal.org/project/cms" target="_blank&quot;">read more</a></p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Preblock 3: Bootstrap icon-link',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'preblock-3-bootstrap-icon-link',
    'view_mode' => 'default',
    'created' => 1418143102,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '2c98a428-dadc-41dc-bb46-182f7dc5df30',
    'uuid' => 'bb5a4aae-08f8-4138-b593-05e52f712e83',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>[box heading="Bootstrap 3" icon="twitter" layout="icon-inline-title" icon_style="circle" icon_color="link" icon_border="link"]Bootstrap 3 is so awesome for responsive design! And Powerstart has awesome Bootstrap 3 integration. It is integrated in our views and content types to create responsive, mobile-friendly content. You will also love our Shortcode Generator which supports all Bootstrap 3 elements in a WYSIWYG interface![/box]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Preblock 3: Bootstrap',
    'description' => NULL,
    'title' => '',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'preblock-3-bootstrap',
    'view_mode' => 'default',
    'created' => 1415267904,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '2d6dc266-4dc7-4b81-bf87-c8696c1f418e',
    'uuid' => 'c519df83-3cb8-49d7-935b-c6d08ef81bdc',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>[box heading="Bootstrap 3" icon="twitter" layout="icon-inline-title" icon_style="circle"]Bootstrap 3 is so awesome for responsive design! And Powerstart has awesome Bootstrap 3 integration. It is integrated in our views and content types to create responsive, mobile-friendly content. You will also love our Shortcode Generator which supports all Bootstrap 3 elements in a WYSIWYG interface![/box]</p>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  $beans[] = array(
    'label' => 'Welcome to Drupal CMS Powerstart',
    'description' => NULL,
    'title' => 'Welcome to Drupal CMS Powerstart',
    'type' => 'content_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'welcome-to-drupal-cms-powerstart',
    'view_mode' => 'default',
    'created' => 1413832529,
    'log' => '',
    'uid' => 0,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '814aaf0e-db18-43e4-8fc9-cc1d943e6774',
    'uuid' => 'e35f2bd3-a97c-477b-bd63-583ad0a6b0db',
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p><img alt="Portrait" class="phototron-image" data-license="https://creativecommons.org/licenses/by-sa/2.0/" data-source="https://www.flickr.com/photos/kk/3905212994/in/set-72157622323170600" src="http://i.imgur.com/uaWeCc1.jpg"></p>

<div class="row">
	<div class="col-md-6">
		<p>Explore CMS Kickstart and create engaging Drupal sites with ease. CMS Kickstart works with any theme and comes with handy tools for custom layouts!</p>
	</div>
</div>
',
          'format' => 'wysiwyg_full',
        ),
      ),
    ),
    'field_page_attachments' => array(),
    'url_alias' => array(),
  );
  return $beans;
}
