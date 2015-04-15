
@interface UIRemoteControlEvent : UIInternalEvent {

    q _subtype;
}

 - (id) _init;
 - (void) dealloc;
 - (void) _setSubtype:(q)a;
 - (id) _windows;
 - (void) _sendEventToResponder:(id)a;
 - (void) _simpleRemoteActionNotification:(id)a;
 - (q) type;
 - (q) subtype;


@end
