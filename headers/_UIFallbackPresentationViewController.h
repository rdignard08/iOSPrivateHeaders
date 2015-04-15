
@interface _UIFallbackPresentationViewController : UIViewController {

    @"_UIFallbackPresentationWindow" _presentationWindow;
    @"UIWindow" _rotationDecider;
}

 - (void) dealloc;
 - (void) didReceiveMemoryWarning;
 - (BOOL) shouldAutorotate;
 - (Q) supportedInterfaceOrientations;
 - (id) initWithNibName:(id)abundle:(id)b;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewDidLoad;
 - (void) viewDidUnload;
 - (void) setRotationDecider:(id)a;
 - (void) _presentViewController:(id)asendingView:(id)banimated:(BOOL)c;
 - (id) rotationDecider;


@end
