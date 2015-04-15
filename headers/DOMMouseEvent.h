
@interface DOMMouseEvent : DOMUIEvent {

}

 - (unsigned short) button;
 - (int) x;
 - (int) y;
 - (BOOL) ctrlKey;
 - (BOOL) shiftKey;
 - (BOOL) altKey;
 - (BOOL) metaKey;
 - (int) screenX;
 - (int) screenY;
 - (int) clientX;
 - (int) clientY;
 - (id) relatedTarget;
 - (int) offsetX;
 - (int) offsetY;
 - (id) fromElement;
 - (id) toElement;
 - (void) initMouseEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)ddetail:(int)escreenX:(int)fscreenY:(int)gclientX:(int)hclientY:(int)ictrlKey:(BOOL)jaltKey:(BOOL)kshiftKey:(BOOL)lmetaKey:(BOOL)mbutton:(unsigned short)nrelatedTarget:(id)o;
 - (void) initMouseEvent:(id)a;


@end
