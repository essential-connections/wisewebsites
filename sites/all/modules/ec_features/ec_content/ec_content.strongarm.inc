<?php


/**
 * Implementation of hook_strongarm().
 */
function ec_content_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_mediaplayer';
  $strongarm->value = array(
    'clip' => array(
      'autoPlay' => 'false',
      'autoBuffering' => 'false',
      'scaling' => 'scale',
      'start' => '',
      'duration' => '',
      'accelerated' => 'false',
      'bufferLength' => '',
      'provider' => '',
      'fadeInSpeed' => '',
      'fadeOutSpeed' => '',
      'linkUrl' => '',
      'linkWindow' => '_blank',
      'live' => 'false',
      'cuePointMultiplier' => '',
    ),
    'controls' => array(
      'backgroundGradient' => 'medium',
      'progressGradient' => 'medium',
      'bufferGradient' => 'none',
      'sliderGradient' => 'none',
      'autoHide' => 'fullscreen',
      'play' => 'true',
      'volume' => 'true',
      'mute' => 'true',
      'time' => 'true',
      'stop' => 'false',
      'playlist' => 'false',
      'fullscreen' => 'true',
      'scrubber' => 'true',
    ),
    'canvas' => array(
      'height' => '375',
      'width' => '500',
      'backgroundImage' => '',
      'backgroundRepeat' => 'repeat',
      'backgroundGradient' => 'low',
      'border' => '',
      'borderRadius' => '',
    ),
  );

  $export['flowplayer3_mediaplayer'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_mediaplayer_file';
  $strongarm->value = 'flowplayer-3.1.1.swf';

  $export['flowplayer3_mediaplayer_file'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_mediaplayer_stream_plugin';
  $strongarm->value = 'flowplayer.rtmp-3.0.2.swf';

  $export['flowplayer3_mediaplayer_stream_plugin'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_palette';
  $strongarm->value = array(
    'backgroundColor' => '#000000',
    'controlbarbackgroundColor' => '#000000',
    'timeColor' => '#01daff',
    'durationColor' => '#ffffff',
    'progressColor' => '#015b7a',
    'bufferColor' => '#6c9cbc',
    'sliderColor' => '#000000',
    'buttonColor' => '#889aa4',
    'buttonOverColor' => '#92b2bd',
  );

  $export['flowplayer3_palette'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_product_key';
  $strongarm->value = '';

  $export['flowplayer3_product_key'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'flowplayer3_scheme';
  $strongarm->value = '#000000,#000000,#01daff,#ffffff,#015b7a,#6c9cbc,#000000,#889aa4,#92b2bd';

  $export['flowplayer3_scheme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_border_size';
  $strongarm->value = '10';

  $export['lightbox2_border_size'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_box_color';
  $strongarm->value = 'fff';

  $export['lightbox2_box_color'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_disable_close_click';
  $strongarm->value = 1;

  $export['lightbox2_disable_close_click'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_disable_resize';
  $strongarm->value = 0;

  $export['lightbox2_disable_resize'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_disable_zoom';
  $strongarm->value = 0;

  $export['lightbox2_disable_zoom'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_download_link_text';
  $strongarm->value = '';

  $export['lightbox2_download_link_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_enable_contact';
  $strongarm->value = 0;

  $export['lightbox2_enable_contact'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_enable_login';
  $strongarm->value = 0;

  $export['lightbox2_enable_login'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_enable_video';
  $strongarm->value = 0;

  $export['lightbox2_enable_video'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_fadein_speed';
  $strongarm->value = '0.4';

  $export['lightbox2_fadein_speed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_flv_player_flashvars';
  $strongarm->value = '';

  $export['lightbox2_flv_player_flashvars'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_flv_player_path';
  $strongarm->value = '/flvplayer.swf';

  $export['lightbox2_flv_player_path'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_font_color';
  $strongarm->value = '000';

  $export['lightbox2_font_color'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_force_show_nav';
  $strongarm->value = 0;

  $export['lightbox2_force_show_nav'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_image_count_str';
  $strongarm->value = 'Image !current of !total';

  $export['lightbox2_image_count_str'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_imagefield_group_node_id';
  $strongarm->value = '1';

  $export['lightbox2_imagefield_group_node_id'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_imagefield_use_node_title';
  $strongarm->value = 0;

  $export['lightbox2_imagefield_use_node_title'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_js_location';
  $strongarm->value = 'header';

  $export['lightbox2_js_location'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_keys_close';
  $strongarm->value = 'c x 27';

  $export['lightbox2_keys_close'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_keys_next';
  $strongarm->value = 'n 39';

  $export['lightbox2_keys_next'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_keys_play_pause';
  $strongarm->value = '32';

  $export['lightbox2_keys_play_pause'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_keys_previous';
  $strongarm->value = 'p 37';

  $export['lightbox2_keys_previous'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_keys_zoom';
  $strongarm->value = 'z';

  $export['lightbox2_keys_zoom'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_lite';
  $strongarm->value = 0;

  $export['lightbox2_lite'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_loop_items';
  $strongarm->value = 0;

  $export['lightbox2_loop_items'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_node_link_target';
  $strongarm->value = 1;

  $export['lightbox2_node_link_target'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_node_link_text';
  $strongarm->value = '';

  $export['lightbox2_node_link_text'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_overlay_color';
  $strongarm->value = '000';

  $export['lightbox2_overlay_color'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_overlay_opacity';
  $strongarm->value = '0.8';

  $export['lightbox2_overlay_opacity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_page_count_str';
  $strongarm->value = 'Page !current of !total';

  $export['lightbox2_page_count_str'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_page_init_action';
  $strongarm->value = 'page_disable';

  $export['lightbox2_page_init_action'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_page_list';
  $strongarm->value = '';

  $export['lightbox2_page_list'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_resize_sequence';
  $strongarm->value = '0';

  $export['lightbox2_resize_sequence'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_resize_speed';
  $strongarm->value = '0.4';

  $export['lightbox2_resize_speed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_slidedown_speed';
  $strongarm->value = '0.6';

  $export['lightbox2_slidedown_speed'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_top_position';
  $strongarm->value = '';

  $export['lightbox2_top_position'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_use_alt_layout';
  $strongarm->value = 1;

  $export['lightbox2_use_alt_layout'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lightbox2_video_count_str';
  $strongarm->value = 'Video !current of !total';

  $export['lightbox2_video_count_str'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_flv_display';
  $strongarm->value = 'flowplayer3_mediaplayer';

  $export['swftools_flv_display'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_flv_display_list';
  $strongarm->value = 'flowplayer3_mediaplayer';

  $export['swftools_flv_display_list'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_media_display_list';
  $strongarm->value = 'flowplayer3_mediaplayer';

  $export['swftools_media_display_list'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_mp3_display';
  $strongarm->value = 'flowplayer3_mediaplayer';

  $export['swftools_mp3_display'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'swftools_mp3_display_list';
  $strongarm->value = 'flowplayer3_mediaplayer';

  $export['swftools_mp3_display_list'] = $strongarm;
  return $export;
}
