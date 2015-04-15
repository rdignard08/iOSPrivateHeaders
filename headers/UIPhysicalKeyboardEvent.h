
@interface UIPhysicalKeyboardEvent : UIPhysicalButtonsEvent {

    int _inputFlags;
    NSString* _modifiedInput;
    NSString* _unmodifiedInput;
    NSString* _shiftModifiedInput;
    NSString* _commandModifiedInput;
    NSString* _markedInput;
    long long _modifierFlags;
    NSString* _privateInput;
}
 + (id) _eventWithInput:(id)ainputFlags:(int)b;

 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (void) _setHIDEvent:(^{__IOHIDEvent=})a keyboard:(^{__GSKeyboard=})b ;
 - (BOOL) _isKeyDown;
 - (long long) _keyCode;
 - (BOOL) _matchesKeyCommand:(id)a ;
 - (long long) _modifierFlags;
 - (long long) _gsModifierFlags;
 - (id) _modifiedInput;
 - (int) _inputFlags;
 - (id) _unmodifiedInput;
 - (void) set_modifiedInput:(id)a ;
 - (id) _cloneEvent;
 - (void) _privatizeInput;
 - (id) _markedInput;
 - (void) set_modifierFlags:(long long)a ;
 - (void) set_inputFlags:(int)a ;
 - (void) set_unmodifiedInput:(id)a ;
 - (void) set_markedInput:(id)a ;
 - (void) set_shiftModifiedInput:(id)a ;
 - (void) set_commandModifiedInput:(id)a ;
 - (void) set_privateInput:(id)a ;
 - (id) _commandModifiedInput;
 - (id) _shiftModifiedInput;
 - (id) _privateInput;
 - (long long) type;


@end
