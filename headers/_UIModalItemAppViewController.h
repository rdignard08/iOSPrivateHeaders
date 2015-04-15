
@interface _UIModalItemAppViewController : UIViewController {

    @"UIWindow" _rotationDelegate;
}

 - (void) dealloc;
 - (BOOL) shouldAutorotate;
 - (unsigned long long) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (long long) preferredInterfaceOrientationForPresentation;
 - (id) rotationDelegate;
 - (void) setRotationDelegate:(id)a;


@end
