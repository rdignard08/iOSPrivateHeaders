
@interface DOMWheelEvent : DOMMouseEvent {

}

 - (BOOL) isHorizontal;
 - (double) deltaX;
 - (double) deltaY;
 - (double) deltaZ;
 - (unsigned int) deltaMode;
 - (int) wheelDeltaX;
 - (int) wheelDeltaY;
 - (int) wheelDelta;
 - (BOOL) webkitDirectionInvertedFromDevice;
 - (void) initWheelEvent:(int)a wheelDeltaY:(int)b view:(id)c screenX:(int)d screenY:(int)e clientX:(int)f clientY:(int)g ctrlKey:(BOOL)h altKey:(BOOL)i shiftKey:(BOOL)j metaKey:(BOOL)k ;


@end
