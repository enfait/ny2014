// http://packery.metafizzy.co/packery.pkgd.js added as external resource

(function ($, sm2) {

    Drupal.behaviors.ny2014 = {
        attach: function (context, settings) {
            var $container = $('.view-greetings .view-content').packery(
                {
                    gutter: 10
                }
            );



            $('.view-greetings .node-greeting').on('click', function(event){
                var $target = $(event.currentTarget);
                $target.addClass('big');
                $container.packery('fit', $(event.currentTarget).parent()[0]);
                var $link = $target.find('.field-name-field-audio a');
                var someSound = sm2.createSound({
                    url:$link.attr('href')
                });
                someSound.play({
                    onstop:function() {
                        someSound.finish();
                    },
                    onfinish: function() {
                        $target.removeClass('big');
                        $container.packery();
                    }
                });
            });


        }
    };

})(jQuery, soundManager);

