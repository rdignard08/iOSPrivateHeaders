
@interface UIMoveEvent : UIInternalEvent {

    q _moveDirection;
    Q _focusHeading;
}

 - (void) _setMoveDirection:(q)a;
 - (void) _setFocusHeading:(Q)a;
 - (Q) _focusHeading;
 - (q) _moveDirection;
 - (void) _sendEventToResponder:(id)a;
 - (q) type;


@end
