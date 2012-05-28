

// Sets up the tab and it's callbacks.
Drupal.behaviors.feedbacktab = function(context) {
  // @todo Make these settings extensible and configurable with an
  // admin/settings/feedbacktab UI.
  /*var distance = 50;
  var bounceOptions = {
    direction: 'down',
    distance: distance / 2,
    times: 3
  };
  var dialogOptions = {
    position: 'right',
    modal: false,
    minWidth: 200,
    width: 300,
    minHeight: 400,
    height: 480,
    resizable: true,
    draggable: true,
    open: function() {
      tab.hide();
    },
    close: function() {
      tab.show();
    }
  }*/

  // Add the tab to the DOM.
  //var tab = Drupal.theme('feedbacktab').appendTo('body', context);

  // Attach an event handler to clicks on the tab.
  /*tab.click(function() {
    var path = $(this).attr('href');
    help = window.open(path,'help','location=0,status=1,scrollbars=1,resizable=1,width=300,height=500');
    help.focus();
    //help.moveTo(0,0);
  });*/
  $('.ec-help-link').click(function() {
    var path = $(this).attr('href');
    help = window.open(path,'help','location=0,status=1,scrollbars=1,resizable=1,width=550,height=500');
    help.focus();
    //help.moveTo(0,0);
    return false;
  });
  $('.ec-help-link-page').css({background:"#000"});
  $('.ec-help-link-page').css({border:"#666 1px solid"});
  $('.ec-help-link-page').css({color:"#fff"});
  $('.ec-help-link-page').css({padding:"5px"});
  //$('.ec-help-link').css({margin:"5px !important"});
  //$('.ec-help-link').css({font-weight:"bold"});

  /*tab.click(function() {
    //var dialog = Drupal.theme('feedbacktabIframe').dialog(dialogOptions);
    var help = window.open(Drupal.settings.feedbacktab.iframeUri,'help','location=0,status=1,scrollbars=1,resizable=1,width=300,height=500');
    //dialog.dialog({dialogClass: "flora"});
    $('.ui-dialog').css({position:"fixed"});
    $('.ui-dialog').css({top:"5%"});
  });*/

  // Attaches the hover callbacks.
  /*var attachHoverCallbacks = function() {
    tab.hover(function() {
      // Slide the tab out quickly.
      tab.addClass('hover', 80);
    }, function() {
      // Hide it away slowly.
      tab.removeClass('hover', 500);
    });
  };
  attachHoverCallbacks();
  */
};

/*
// Theme function for the tab.
Drupal.theme.prototype.feedbacktab = function() {
  var detail = Drupal.t('<br><strong>Click here to view help related to this page</strong>');
  var content = '<span class="title">' + Drupal.t('Feedback') + '</span>';
  content += '<span class="content">' + detail + '</span>'
  return $('<a class="feedbacktab feedbacktab-right">' + content + '</a>');
};

// Theme function for the dialog box.
Drupal.theme.prototype.feedbacktabIframe = function() {
  // jQuery.dialog() sets the width and height on <iframe>.
  return $('<iframe class="feedbacktab-iframe" src="' + Drupal.settings.feedbacktab.iframeUri + '"> </iframe>');
  //return $('<a class="feedbacktab-iframe" href="' + Drupal.settings.feedbacktab.iframeUri + '"> </a>');

};
*/
