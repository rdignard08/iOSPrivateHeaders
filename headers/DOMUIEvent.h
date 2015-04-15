
@interface DOMUIEvent : DOMEvent {

}

 - (i) keyCode;
 - (i) charCode;
 - (i) pageX;
 - (i) pageY;
 - (id) view;
 - (i) detail;
 - (i) layerX;
 - (i) layerY;
 - (i) which;
 - (void) initUIEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)ddetail:(i)e;
 - (void) initUIEvent:(id)a;


@end
