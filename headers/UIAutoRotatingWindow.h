
@interface UIAutoRotatingWindow : UIWindow {

    q _interfaceOrientation;
    BOOL _unknownOrientation;
}
 + (id) sharedPopoverHostingWindow;

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aattached:(BOOL)b;
 - (void) _didRemoveSubview:(id)a;
 - (void) updateForOrientation:(q)a;
 - (void) commonInit;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
