
@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {

    UIScrollView* _scrollView;
    SEL _scrollViewAction;
    {CGPoint="x"d"y"d} _reconsideredLockingLocation;
    b2 _lastLockingAxis;
    b2 _lockingAxis;
    b1 _hasChildScrollView;
    b1 _hasParentScrollView;
    b1 _caughtDeceleratingScrollView;
    b1 _directionalLockEnabled;
    b1 _transfersTrackingFromParentScrollView;
}

 - (void) setDelegate:(id)a ;
 - ({CGPoint=dd}) translationInView:(id)a ;
 - ({CGPoint=dd}) velocityInView:(id)a ;
 - (double) _hysteresis;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (void) setDirectionalLockEnabled:(BOOL)a ;
 - (BOOL) isDirectionalLockEnabled;
 - (void) setScrollView:(id)a ;
 - (void) removeTarget:(id)a action:(SEL)b ;
 - (BOOL) _caughtDeceleratingScrollView;
 - (void) _scrollViewDidEndZooming;
 - (BOOL) canBePreventedByGestureRecognizer:(id)a ;
 - (id) scrollView;
 - (void) _resetGestureRecognizer;
 - ({CGPoint=dd}) _adjustSceneReferenceLocation:({CGPoint=dd})a ;
 - (void) _centroidMovedTo:({CGPoint=dd})a atTime:(double)b ;
 - (BOOL) _shouldTryToBeginWithEvent:(id)a ;
 - (BOOL) _canTransferTrackingFromParentPagingScrollView;
 - (BOOL) _shouldTransferTrackingFromParentScrollViewForCurrentOffset;
 - (BOOL) _shouldContinueToWaitToTransferTrackingFromParentScrollView;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
