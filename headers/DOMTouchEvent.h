
@interface DOMTouchEvent : DOMUIEvent {

}

 - (float) scale;
 - (id) touches;
 - (float) rotation;
 - (BOOL) ctrlKey;
 - (BOOL) shiftKey;
 - (BOOL) altKey;
 - (BOOL) metaKey;
 - (id) targetTouches;
 - (id) changedTouches;
 - (void) initTouchEvent:(id)a canBubble:(BOOL)b cancelable:(BOOL)c view:(id)d detail:(int)e screenX:(int)f screenY:(int)g clientX:(int)h clientY:(int)i ctrlKey:(BOOL)j altKey:(BOOL)k shiftKey:(BOOL)l metaKey:(BOOL)m touches:(id)n targetTouches:(id)o changedTouches:(id)p scale:(float)q rotation:(float)r ;


@end
