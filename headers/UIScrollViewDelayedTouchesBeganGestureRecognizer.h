
@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {

    UIDelayedAction _touchDelay;
    {CGPoint="x"d"y"d} _startSceneReferenceLocation;
}

 - (void) dealloc;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (void) sendDelayedTouches;
 - (void) _resetGestureRecognizer;
 - (void) clearTimer;
 - (void) sendTouchesShouldBeginForDelayedTouches:(id)a;
 - (void) sendTouchesShouldBeginForTouches:(id)awithEvent:(id)b;


@end
