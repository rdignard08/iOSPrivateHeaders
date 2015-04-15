
@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {

    @"UIDelayedAction" _swipeFailureDelay;
    {CGPoint="x"d"y"d} _startLocation;
    {CGPoint="x"d"y"d} _lastLocation;
    d _lastTime;
    i _directionalFailureCount;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) _resetGestureRecognizer;
 - (void) clearTimer;
 - (void) enoughTimeElapsed:(id)a;
 - (void) _processNewLocation:({CGPoint=dd})a;


@end
