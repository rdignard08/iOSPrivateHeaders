
@interface DOMUIEvent : DOMEvent {

}

 - (int) keyCode;
 - (int) charCode;
 - (int) pageX;
 - (int) pageY;
 - (id) view;
 - (int) detail;
 - (int) layerX;
 - (int) layerY;
 - (int) which;
 - (void) initUIEvent:(id)a canBubble:(BOOL)b cancelable:(BOOL)c view:(id)d detail:(int)e ;
 - (void) initUIEvent:(id)a ;


@end
