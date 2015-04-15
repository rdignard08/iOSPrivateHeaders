
@interface UIPhysicalKeyboardEvent : UIPhysicalButtonsEvent {

    i _inputFlags;
    @"NSString" _modifiedInput;
    @"NSString" _unmodifiedInput;
    @"NSString" _shiftModifiedInput;
    @"NSString" _commandModifiedInput;
    @"NSString" _markedInput;
    q _modifierFlags;
    @"NSString" _privateInput;
}
 + (id) _eventWithInput:(id)ainputFlags:(i)b;

 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (void) _setHIDEvent:(^{__IOHIDEvent=})akeyboard:(^{__GSKeyboard=})b;
 - (BOOL) _isKeyDown;
 - (q) _keyCode;
 - (BOOL) _matchesKeyCommand:(id)a;
 - (q) _modifierFlags;
 - (q) _gsModifierFlags;
 - (id) _modifiedInput;
 - (i) _inputFlags;
 - (id) _unmodifiedInput;
 - (void) set_modifiedInput:(id)a;
 - (id) _cloneEvent;
 - (void) _privatizeInput;
 - (id) _markedInput;
 - (void) set_modifierFlags:(q)a;
 - (void) set_inputFlags:(i)a;
 - (void) set_unmodifiedInput:(id)a;
 - (void) set_markedInput:(id)a;
 - (void) set_shiftModifiedInput:(id)a;
 - (void) set_commandModifiedInput:(id)a;
 - (void) set_privateInput:(id)a;
 - (id) _commandModifiedInput;
 - (id) _shiftModifiedInput;
 - (id) _privateInput;
 - (q) type;


@end
