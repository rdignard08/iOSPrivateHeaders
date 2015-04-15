
@interface DOMHTMLMarqueeElement : DOMHTMLElement {

}

 - (void) stop;
 - (id) behavior;
 - (void) start;
 - (void) setDirection:(id)a ;
 - (id) direction;
 - (unsigned int) hspace;
 - (void) setHspace:(unsigned int)a ;
 - (unsigned int) vspace;
 - (void) setVspace:(unsigned int)a ;
 - (id) bgColor;
 - (void) setBgColor:(id)a ;
 - (void) setBehavior:(id)a ;
 - (int) loop;
 - (void) setLoop:(int)a ;
 - (int) scrollAmount;
 - (void) setScrollAmount:(int)a ;
 - (int) scrollDelay;
 - (void) setScrollDelay:(int)a ;
 - (BOOL) trueSpeed;
 - (void) setTrueSpeed:(BOOL)a ;
 - (id) width;
 - (id) height;
 - (void) setWidth:(id)a ;
 - (void) setHeight:(id)a ;


@end
