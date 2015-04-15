
@interface UITouchTapInfo : NSObject {

    Q _tapCount;
    f _multiTapDelay;
    f _rejectAsTapThrehold;
    f _viewTouchPauseThreshold;
    {CGPoint="x"d"y"d} _startPosition;
    d _startTime;
}

 - (BOOL) cancelTouchTracking;
 - (BOOL) _touchLocationConsideredMovement:(id)a;
 - (void) clearTapState;
 - (void) releaseAndClearWeakRefs;
 - (void) touchBegan:(id)awithEvent:(id)b;
 - (void) touchMoved:(id)awithEvent:(id)b;
 - (void) touchEnded:(id)awithEvent:(id)b;


@end
