
@interface UIControl : UIView {

    @"NSMutableArray" _targetActions;
    {CGPoint="x"d"y"d} _previousPoint;
    d _downTime;
    {?="disabled"b1"tracking"b1"touchInside"b1"touchDragged"b1"requiresDisplayOnTracking"b1"highlighted"b1"dontHighlightOnTouchDown"b1"delayActions"b1"allowActionsToQueue"b1"pendingUnhighlight"b1"selected"b1"verticalAlignment"b2"horizontalAlignment"b2"wasLastHighlightSuccessful"b1"touchHasHighlighted"b1} _controlFlags;
}

 - (void) dealloc;
 - (void) addTarget:(id)aaction:(SEL)bforControlEvents:(Q)c;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (BOOL) isTracking;
 - (BOOL) cancelTouchTracking;
 - (BOOL) cancelMouseTracking;
 - (BOOL) canBecomeFirstResponder;
 - (BOOL) canBecomeFocused;
 - (void) _didMoveFromWindow:(id)atoWindow:(id)b;
 - (id) hitTest:({CGPoint=dd})aforEvent:(^{__GSEvent=})b;
 - (void) setHighlighted:(BOOL)a;
 - (void) sendActionsForControlEvents:(Q)a;
 - (void) setContentHorizontalAlignment:(q)a;
 - (void) setContentVerticalAlignment:(q)a;
 - (BOOL) isHighlighted;
 - (BOOL) isSelected;
 - (void) setSelected:(BOOL)a;
 - (void) setTracking:(BOOL)a;
 - (void) _cancelDelayedActions;
 - (void) _sendActionsForEvents:(i)awithEvent:(id)b;
 - (void) cancelTrackingWithEvent:(id)a;
 - (void) _unhighlight;
 - (void) _setLastHighlightSuccessful:(BOOL)a;
 - (BOOL) requiresDisplayOnTracking;
 - (BOOL) shouldTrack;
 - (BOOL) beginTrackingWithTouch:(id)awithEvent:(id)b;
 - (BOOL) continueTrackingWithTouch:(id)awithEvent:(id)b;
 - (BOOL) pointMostlyInside:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) isTouchInside;
 - (void) endTrackingWithTouch:(id)awithEvent:(id)b;
 - (void) _setTouchHasHighlighted:(BOOL)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _clippedHighlightBounds;
 - (void) _sendDelayedActions:(BOOL)a;
 - (void) sendAction:(SEL)ato:(id)bforEvent:(id)c;
 - (void) removeTarget:(id)aaction:(SEL)bforControlEvents:(Q)c;
 - (q) contentVerticalAlignment;
 - (q) contentHorizontalAlignment;
 - (id) allTargets;
 - (Q) allControlEvents;
 - (id) actionsForTarget:(id)aforControlEvent:(Q)b;
 - (d) _highlightCornerRadius;
 - (BOOL) _hasActionForEventMask:(i)a;
 - (void) _setHighlightOnMouseDown:(BOOL)a;
 - (void) _delayActions;
 - (void) _sendDelayedActions;
 - (BOOL) _wasLastHighlightSuccessful;
 - (BOOL) _touchHasHighlighted;
 - (BOOL) touchDragged;
 - (void) setRequiresDisplayOnTracking:(BOOL)a;
 - (BOOL) hasOneOrMoreTargets;
 - (void) addTarget:(id)aaction:(SEL)bforEvents:(i)c;
 - (void) removeTarget:(id)aforEvents:(i)b;
 - (void) _connectInterfaceBuilderEventConnection:(id)a;
 - (Q) state;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;


@end
