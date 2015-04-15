
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
 - (void) initUIEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)ddetail:(int)e;
 - (void) initUIEvent:(id)a;


@end
