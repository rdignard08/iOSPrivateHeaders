
@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {

    UIDelayedAction* _touchDelay;
    {CGPoint="x"d"y"d} _startSceneReferenceLocation;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) sendDelayedTouches;
 - (void) _resetGestureRecognizer;
 - (void) clearTimer;
 - (void) sendTouchesShouldBeginForDelayedTouches:(id)a ;
 - (void) sendTouchesShouldBeginForTouches:(id)a withEvent:(id)b ;


@end
