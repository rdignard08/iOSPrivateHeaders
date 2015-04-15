
@interface UIMoveEvent : UIInternalEvent {

    long long _moveDirection;
    unsigned long long _focusHeading;
}

 - (void) _setMoveDirection:(long long)a ;
 - (void) _setFocusHeading:(unsigned long long)a ;
 - (unsigned long long) _focusHeading;
 - (long long) _moveDirection;
 - (void) _sendEventToResponder:(id)a ;
 - (long long) type;


@end
