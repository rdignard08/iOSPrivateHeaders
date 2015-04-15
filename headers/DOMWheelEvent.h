
@interface DOMWheelEvent : DOMMouseEvent {

}

 - (BOOL) isHorizontal;
 - (d) deltaX;
 - (d) deltaY;
 - (d) deltaZ;
 - (I) deltaMode;
 - (i) wheelDeltaX;
 - (i) wheelDeltaY;
 - (i) wheelDelta;
 - (BOOL) webkitDirectionInvertedFromDevice;
 - (void) initWheelEvent:(i)awheelDeltaY:(i)bview:(id)cscreenX:(i)dscreenY:(i)eclientX:(i)fclientY:(i)gctrlKey:(BOOL)haltKey:(BOOL)ishiftKey:(BOOL)jmetaKey:(BOOL)k;


@end
