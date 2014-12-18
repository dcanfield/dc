/**
 * @file
 * Small javascript to change UI settings on Block Class' admin form.
 */
(function ($) {
  Drupal.behaviors.blockClass = {
    attach: function (context, settings) {
      if ($('#edit-block-class-source', context).attr('value') !== 'predefined') {
        $('.form-item-block-class-predefined-values', context).hide();
      }
      $('#edit-block-class-source', context).change(function () {
        if ($(this).attr('value') !== 'predefined') {
          $('.form-item-block-class-predefined-values', context).hide();
        }
        else {
          $('.form-item-block-class-predefined-values', context).show();
        }
      });
    }
  };
})(jQuery);
