
@interface UIPrintingProgressViewController : UITableViewController {

    @"UIPrintingProgress" _printingProgress;
    @"UIPrintingMessageView" _messageView;
    @"UINavigationController" _navController;
    @"UIWindow" _window;
    d _rotationDelay;
}

 - (void) dealloc;
 - (void) show;
 - (Q) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) willAnimateRotationToInterfaceOrientation:(q)aduration:(d)b;
 - (void) didRotateFromInterfaceOrientation:(q)a;
 - (void) setMessage:(id)a;
 - (void) dismissAnimated:(BOOL)a;
 - (void) setDonePrinting:(BOOL)a;
 - (void) doneProgress;
 - (void) cancelProgress;
 - (void) cleanupAfterDismiss;
 - (id) initWithTitle:(id)amessage:(id)bprintingProgress:(id)c;
 - (d) rotationDelay;
 - (BOOL) visible;


@end
