
@interface _UIFallbackPresentationViewController : UIViewController {

    _UIFallbackPresentationWindow* _presentationWindow;
    UIWindow* _rotationDecider;
}

 - (void) dealloc;
 - (void) didReceiveMemoryWarning;
 - (BOOL) shouldAutorotate;
 - (unsigned long long) supportedInterfaceOrientations;
 - (id) initWithNibName:(id)a bundle:(id)b ;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) viewDidLoad;
 - (void) viewDidUnload;
 - (void) setRotationDecider:(id)a ;
 - (void) _presentViewController:(id)a sendingView:(id)b animated:(BOOL)c ;
 - (id) rotationDecider;


@end
