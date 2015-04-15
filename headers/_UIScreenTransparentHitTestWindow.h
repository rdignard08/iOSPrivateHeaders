
@interface _UIScreenTransparentHitTestWindow : UIWindow {

    UIView* _hitTestableView;
}

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) _updateTransformLayer;
 - (BOOL) pointWithinHitTestInsets:({CGPoint=dd})a;
 - (void) setHitTestInsets:({UIEdgeInsets=dddd})a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
