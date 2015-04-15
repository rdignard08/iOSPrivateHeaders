
@interface UITableViewWrapperView : UIScrollView {

    @"NSMutableArray" _stuckToBackViews;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (void) touchesBegan:(id)awithEvent:(id)b;
 - (void) touchesMoved:(id)awithEvent:(id)b;
 - (void) touchesEnded:(id)awithEvent:(id)b;
 - (void) touchesCancelled:(id)awithEvent:(id)b;
 - (BOOL) _forwardsToParentScroller;
 - (void) handleSwipeBeginning:(id)a;
 - (void) _stickViewToBack:(id)a;
 - (void) _unstickView:(id)a;
 - (id) stuckToBackViews;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) willRemoveSubview:(id)a;


@end
