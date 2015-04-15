
@interface UIControl : UIView {

    NSMutableArray* _targetActions;
    {CGPoint="x"d"y"d} _previousPoint;
    double _downTime;
    {?="disabled"b1"tracking"b1"touchInside"b1"touchDragged"b1"requiresDisplayOnTracking"b1"highlighted"b1"dontHighlightOnTouchDown"b1"delayActions"b1"allowActionsToQueue"b1"pendingUnhighlight"b1"selected"b1"verticalAlignment"b2"horizontalAlignment"b2"wasLastHighlightSuccessful"b1"touchHasHighlighted"b1} _controlFlags;
}

 - (void) dealloc;
 - (void) addTarget:(id)a action:(SEL)b forControlEvents:(unsigned long long)c ;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (BOOL) isTracking;
 - (BOOL) cancelTouchTracking;
 - (BOOL) cancelMouseTracking;
 - (BOOL) canBecomeFirstResponder;
 - (BOOL) canBecomeFocused;
 - (void) _didMoveFromWindow:(id)a toWindow:(id)b ;
 - (id) hitTest:({CGPoint=dd})a forEvent:(^{__GSEvent=})b ;
 - (void) setHighlighted:(BOOL)a ;
 - (void) sendActionsForControlEvents:(unsigned long long)a ;
 - (void) setContentHorizontalAlignment:(long long)a ;
 - (void) setContentVerticalAlignment:(long long)a ;
 - (BOOL) isHighlighted;
 - (BOOL) isSelected;
 - (void) setSelected:(BOOL)a ;
 - (void) setTracking:(BOOL)a ;
 - (void) _cancelDelayedActions;
 - (void) _sendActionsForEvents:(int)a withEvent:(id)b ;
 - (void) cancelTrackingWithEvent:(id)a ;
 - (void) _unhighlight;
 - (void) _setLastHighlightSuccessful:(BOOL)a ;
 - (BOOL) requiresDisplayOnTracking;
 - (BOOL) shouldTrack;
 - (BOOL) beginTrackingWithTouch:(id)a withEvent:(id)b ;
 - (BOOL) continueTrackingWithTouch:(id)a withEvent:(id)b ;
 - (BOOL) pointMostlyInside:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) isTouchInside;
 - (void) endTrackingWithTouch:(id)a withEvent:(id)b ;
 - (void) _setTouchHasHighlighted:(BOOL)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _clippedHighlightBounds;
 - (void) _sendDelayedActions:(BOOL)a ;
 - (void) sendAction:(SEL)a to:(id)b forEvent:(id)c ;
 - (void) removeTarget:(id)a action:(SEL)b forControlEvents:(unsigned long long)c ;
 - (long long) contentVerticalAlignment;
 - (long long) contentHorizontalAlignment;
 - (id) allTargets;
 - (unsigned long long) allControlEvents;
 - (id) actionsForTarget:(id)a forControlEvent:(unsigned long long)b ;
 - (double) _highlightCornerRadius;
 - (BOOL) _hasActionForEventMask:(int)a ;
 - (void) _setHighlightOnMouseDown:(BOOL)a ;
 - (void) _delayActions;
 - (void) _sendDelayedActions;
 - (BOOL) _wasLastHighlightSuccessful;
 - (BOOL) _touchHasHighlighted;
 - (BOOL) touchDragged;
 - (void) setRequiresDisplayOnTracking:(BOOL)a ;
 - (BOOL) hasOneOrMoreTargets;
 - (void) addTarget:(id)a action:(SEL)b forEvents:(int)c ;
 - (void) removeTarget:(id)a forEvents:(int)b ;
 - (void) _connectInterfaceBuilderEventConnection:(id)a ;
 - (unsigned long long) state;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a ;


@end
