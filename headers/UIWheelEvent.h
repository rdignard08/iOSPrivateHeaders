
@interface UIWheelEvent : UIInternalEvent {

    long long _recentScrollDistance;
    NSMutableArray _recentScrollEvents;
    long long lastSubtype;
}

 - (void) dealloc;
 - (void) _setHIDEvent:(^{__IOHIDEvent=})a;
 - (void) _sendEventToResponder:(id)a;
 - (double) _wheelVelocity;
 - (BOOL) _canHaveVelocity;
 - (long long) type;
 - (long long) subtype;


@end
