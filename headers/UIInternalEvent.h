
@interface UIInternalEvent : UIEvent {

    ^{__GSEvent=} _gsEvent;
    ^{__IOHIDEvent=} _hidEvent;
}

 - (void) dealloc;
 - (id) _screen;
 - (^{__GSEvent=}) _gsEvent;
 - (^{__IOHIDEvent=}) _hidEvent;
 - (void) _setHIDEvent:(^{__IOHIDEvent=})a;
 - (void) _setGSEvent:(^{__GSEvent=})a;


@end
