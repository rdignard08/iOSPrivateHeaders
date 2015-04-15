
@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {

    UIScrollView* _scrollView;
    SEL _scrollViewAction;
    b1 _hasParentScrollView;
}

 - (void) setDelegate:(id)a ;
 - (double) _hysteresis;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) setScrollView:(id)a ;
 - (void) removeTarget:(id)a action:(SEL)b ;
 - (id) scrollView;
 - (id) initWithTarget:(id)a action:(SEL)b ;


@end
