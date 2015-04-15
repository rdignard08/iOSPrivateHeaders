
@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {

    UIDelayedAction* _swipeFailureDelay;
    {CGPoint="x"d"y"d} _startLocation;
    {CGPoint="x"d"y"d} _lastLocation;
    double _lastTime;
    int _directionalFailureCount;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) _resetGestureRecognizer;
 - (void) clearTimer;
 - (void) enoughTimeElapsed:(id)a ;
 - (void) _processNewLocation:({CGPoint=dd})a ;


@end
