
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
 - (void) initMouseEvent:(id)a canBubble:(BOOL)b cancelable:(BOOL)c view:(id)d detail:(int)e screenX:(int)f screenY:(int)g clientX:(int)h clientY:(int)i ctrlKey:(BOOL)j altKey:(BOOL)k shiftKey:(BOOL)l metaKey:(BOOL)m button:(unsigned short)n relatedTarget:(id)o ;
 - (void) initMouseEvent:(id)a ;


@end
