
@interface DOMGestureEvent : DOMUIEvent {

}

 - (id) target;
 - (float) scale;
 - (float) rotation;
 - (BOOL) ctrlKey;
 - (BOOL) shiftKey;
 - (BOOL) altKey;
 - (BOOL) metaKey;
 - (void) initGestureEvent:(id)a canBubble:(BOOL)b cancelable:(BOOL)c view:(id)d detail:(int)e screenX:(int)f screenY:(int)g clientX:(int)h clientY:(int)i ctrlKey:(BOOL)j altKey:(BOOL)k shiftKey:(BOOL)l metaKey:(BOOL)m target:(id)n scale:(float)o rotation:(float)p ;


@end
