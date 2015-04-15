
@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {

    UIScrollView _scrollView;
    SEL _scrollViewAction;
    b1 _hasParentScrollView;
}

 - (void) setDelegate:(id)a;
 - (double) _hysteresis;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) setScrollView:(id)a;
 - (void) removeTarget:(id)aaction:(SEL)b;
 - (id) scrollView;
 - (id) initWithTarget:(id)aaction:(SEL)b;


@end
