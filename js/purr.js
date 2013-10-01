(function ($) {

  Drupal.behaviors.os2intra_message_notify = {
    attach: function (context, settings) {
      $('.notice .close', context).click(function () {
        console.log('hest');
      });
    }
  };

}(jQuery));
