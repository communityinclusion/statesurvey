(function($) {


 Drupal.behaviors.genPopup = {
   attach: function (context, settings) {
     $(document).ready(function(){
       var completionfound = $('body').find( 'a#submittrigger');
       if (completionfound.length > 0) {

          if(!$('#remindComplete').hasClass('showComplete'))
            {

                $('#remindComplete').dialog({
                    height: 190,
                    width: 350,
                    modal: true,
                    resizable: true,
                    dialogClass: 'no-close success-dialog'
                 });
              $('#remindComplete').addClass('showComplete');
              $("#remindComplete").dialog({ autoOpen : false, modal : true, show : "blind", hide : "blind"});

              $( "#remindComplete" ).dialog("open");
            }

       }

     });
   }
 }


})(jQuery);
