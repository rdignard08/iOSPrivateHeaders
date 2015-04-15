
@interface UIPrintingProgressViewController : UITableViewController {

    UIPrintingProgress _printingProgress;
    UIPrintingMessageView _messageView;
    UINavigationController _navController;
    UIWindow _window;
    double _rotationDelay;
}

 - (void) dealloc;
 - (void) show;
 - (unsigned long long) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) willAnimateRotationToInterfaceOrientation:(long long)aduration:(double)b;
 - (void) didRotateFromInterfaceOrientation:(long long)a;
 - (void) setMessage:(id)a;
 - (void) dismissAnimated:(BOOL)a;
 - (void) setDonePrinting:(BOOL)a;
 - (void) doneProgress;
 - (void) cancelProgress;
 - (void) cleanupAfterDismiss;
 - (id) initWithTitle:(id)amessage:(id)bprintingProgress:(id)c;
 - (double) rotationDelay;
 - (BOOL) visible;


@end
