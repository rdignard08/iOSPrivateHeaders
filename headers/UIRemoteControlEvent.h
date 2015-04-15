
@interface UIRemoteControlEvent : UIInternalEvent {

    long long _subtype;
}

 - (id) _init;
 - (void) dealloc;
 - (void) _setSubtype:(long long)a ;
 - (id) _windows;
 - (void) _sendEventToResponder:(id)a ;
 - (void) _simpleRemoteActionNotification:(id)a ;
 - (long long) type;
 - (long long) subtype;


@end
