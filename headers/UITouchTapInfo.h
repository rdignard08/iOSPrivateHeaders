
@interface UITouchTapInfo : NSObject {

    unsigned long long _tapCount;
    float _multiTapDelay;
    float _rejectAsTapThrehold;
    float _viewTouchPauseThreshold;
    {CGPoint="x"d"y"d} _startPosition;
    double _startTime;
}

 - (BOOL) cancelTouchTracking;
 - (BOOL) _touchLocationConsideredMovement:(id)a ;
 - (void) clearTapState;
 - (void) releaseAndClearWeakRefs;
 - (void) touchBegan:(id)a withEvent:(id)b ;
 - (void) touchMoved:(id)a withEvent:(id)b ;
 - (void) touchEnded:(id)a withEvent:(id)b ;


@end
