
@interface UIEvent : NSObject {

    d _timestamp;
}
@property (nonatomic, assign, readonly) NSNumber* type;
@property (nonatomic, assign, readonly) NSNumber* subtype;
@property (nonatomic, assign, readonly) NSNumber* timestamp;

 - (id) _init;
 - (id) _screen;
 - (id) _allPhysicalButtons;
 - (id) touchesForGestureRecognizer:(id)a;
 - (id) allTouches;
 - (^{__GSEvent=}) _gsEvent;
 - (id) _windows;
 - (BOOL) _isKeyDown;
 - (^{__IOHIDEvent=}) _hidEvent;
 - (id) _triggeringPhysicalButton;
 - (Q) _focusHeading;
 - (q) _moveDirection;
 - ({CGPoint=dd}) _digitizerLocation;
 - (void) _sendEventToResponder:(id)a;
 - (d) _wheelVelocity;
 - (q) _modifierFlags;
 - (id) _modifiedInput;
 - (id) _unmodifiedInput;
 - (id) touchesForWindow:(id)a;
 - (id) touchesForView:(id)a;
 - (id) _initWithEvent:(^{__GSEvent=})atouches:(id)b;
 - (id) _touchesForGestureRecognizer:(id)a;
 - (i) _shakeState;
 - (id) _physicalButtonsForWindow:(id)a;
 - (id) _physicalButtonsForResponder:(id)a;
 - (id) _physicalButtonsForGestureRecognizer:(id)a;
 - (void) _setTimestamp:(d)a;
 - (BOOL) isKeyDown;
 - (q) type;
 - (q) subtype;
 - (d) timestamp;


@end
