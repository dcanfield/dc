/**
 * @file
 * A JavaScript file that styles the page with bootstrap classes.
 *
 * @see sass/styles.scss for more info
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {
// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.cmsBootstrap3 = {
  attach: function(context, settings) {
    $('.node .links a, .field-blog-tags a').addClass('btn btn-default');
    $('#comments .links a').addClass('btn-sm');
    $('.region-sidebar-first .block .view ul, .region-sidebar-second .block .view ul').addClass('nav');
    $('.user-picture img').addClass('img-circle');
    $('.view-display-id-portfolio img').addClass('thumbnail');
  }
};


})(jQuery, Drupal, this, this.document);
