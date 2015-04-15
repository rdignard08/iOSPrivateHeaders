
@interface _UIFocusTouchDebugView : UIView {

    UIView _touchView;
    UIView _boundaryView;
}

 - (void) dealloc;
 - (void) showCurrentTouchAtNormalizedPoint:({CGPoint=dd})a;
 - (void) showNavigationBoundaryWithinNormalizedRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) hideCurrentTouch;
 - (void) hideNavigationBoundary;
 - ({CGPoint=dd}) _scaleNormalizedPoint:({CGPoint=dd})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _scaleNormalizedRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
