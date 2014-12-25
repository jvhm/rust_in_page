/*
Arquivo com códigos JavaScript utilizados em todas as páginas do site.
*/

(function ($) {
	Drupal.behaviors.fancybox = {
		attach: function (context, settings) {
			$(document).ready(function() {
				$(".fancybox_various").fancybox({
					maxWidth	: 800,
					maxHeight	: 600,
					fitToView	: false,
					width		: '70%',
					height		: '70%',
					autoSize	: false,
					closeClick	: false,
					openEffect	: 'none',
					closeEffect	: 'none'
				});
			});
		}
	};
})(jQuery);