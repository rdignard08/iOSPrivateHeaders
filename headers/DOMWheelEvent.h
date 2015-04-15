
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
 - (void) initWheelEvent:(int)awheelDeltaY:(int)bview:(id)cscreenX:(int)dscreenY:(int)eclientX:(int)fclientY:(int)gctrlKey:(BOOL)haltKey:(BOOL)ishiftKey:(BOOL)jmetaKey:(BOOL)k;


@end
