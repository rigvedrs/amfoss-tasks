var message = "I Love FOSS!";    //message 
var interval = 1  ;            // in seconds 
var count = 10 ;              //number of times to send
var i = 0 ;

var timer = setInterval(function(){
	document.getElementsByClassName('composer_rich_textarea')[0].innerHTML = message;
	$('.im_submit').trigger('mousedown');	
	i++;
	if( i  == count )
	clearInterval(timer);
	} , interval * 1000 ) ;
