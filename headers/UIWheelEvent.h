
@interface UIWheelEvent : UIInternalEvent {

    q _recentScrollDistance;
    @"NSMutableArray" _recentScrollEvents;
    q lastSubtype;
}

 - (void) dealloc;
 - (void) _setHIDEvent:(^{__IOHIDEvent=})a;
 - (void) _sendEventToResponder:(id)a;
 - (d) _wheelVelocity;
 - (BOOL) _canHaveVelocity;
 - (q) type;
 - (q) subtype;


@end
