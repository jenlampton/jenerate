<?php

/**
 * @file Exported configation for the flexslider on the homepage.
 */

$preset = new stdClass();
$preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
$preset->api_version = 1;
$preset->name = 'homepage';
$preset->title = 'Homepage';
$preset->theme = 'classic';
$preset->imagestyle_normal = 'homeslide';
$preset->imagestyle_thumbnail = '';
$preset->options = array(
  'namespace' => 'flex-',
  'selector' => '.slides > li',
  'easing' => 'linear',
  'direction' => 'horizontal',
  'reverse' => 0,
  'smoothHeight' => 1,
  'startAt' => '0',
  'animationSpeed' => '1000',
  'initDelay' => '0',
  'useCSS' => 1,
  'touch' => 1,
  'video' => 0,
  'keyboard' => 1,
  'multipleKeyboard' => 0,
  'mousewheel' => 0,
  'controlsContainer' => '.flex-control-nav-container',
  'sync' => '',
  'asNavFor' => '',
  'itemWidth' => '0',
  'itemMargin' => '0',
  'minItems' => '0',
  'maxItems' => '0',
  'move' => '0',
  'animation' => 'slide',
  'slideshow' => 1,
  'slideshowSpeed' => '5000',
  'directionNav' => 1,
  'controlNav' => '0',
  'prevText' => 'Previous',
  'nextText' => 'Next',
  'pausePlay' => 0,
  'pauseText' => 'Pause',
  'playText' => 'Play',
  'randomize' => 0,
  'thumbCaptions' => 0,
  'thumbCaptionsBoth' => 0,
  'animationLoop' => 1,
  'pauseOnAction' => 1,
  'pauseOnHover' => 0,
  'manualControls' => '',
);

