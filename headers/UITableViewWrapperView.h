
@interface UITableViewWrapperView : UIScrollView {

    NSMutableArray* _stuckToBackViews;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) pointInside:({CGPoint=dd})a withEvent:(id)b ;
 - (BOOL) gestureRecognizerShouldBegin:(id)a ;
 - (void) touchesBegan:(id)a withEvent:(id)b ;
 - (void) touchesMoved:(id)a withEvent:(id)b ;
 - (void) touchesEnded:(id)a withEvent:(id)b ;
 - (void) touchesCancelled:(id)a withEvent:(id)b ;
 - (BOOL) _forwardsToParentScroller;
 - (void) handleSwipeBeginning:(id)a ;
 - (void) _stickViewToBack:(id)a ;
 - (void) _unstickView:(id)a ;
 - (id) stuckToBackViews;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) willRemoveSubview:(id)a ;


@end
