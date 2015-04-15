
@interface DOMMouseEvent : DOMUIEvent {

}

 - (S) button;
 - (i) x;
 - (i) y;
 - (BOOL) ctrlKey;
 - (BOOL) shiftKey;
 - (BOOL) altKey;
 - (BOOL) metaKey;
 - (i) screenX;
 - (i) screenY;
 - (i) clientX;
 - (i) clientY;
 - (id) relatedTarget;
 - (i) offsetX;
 - (i) offsetY;
 - (id) fromElement;
 - (id) toElement;
 - (void) initMouseEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)ddetail:(i)escreenX:(i)fscreenY:(i)gclientX:(i)hclientY:(i)ictrlKey:(BOOL)jaltKey:(BOOL)kshiftKey:(BOOL)lmetaKey:(BOOL)mbutton:(S)nrelatedTarget:(id)o;
 - (void) initMouseEvent:(id)a;


@end
