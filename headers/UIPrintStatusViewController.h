
@interface UIPrintStatusViewController : UINavigationController {

    UIPopoverController* _poverController;
    <UIPrintStatusDelegate>* _printStatusDelegate;
}

 - (void) dealloc;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) viewWillAppear:(BOOL)a ;
 - (void) viewDidLoad;
 - (void) dismissAnimated:(BOOL)a ;
 - (void) popoverControllerDidDismissPopover:(id)a ;
 - (id) printStatusView;
 - (void) presentPrintStatusFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inView:(id)b animated:(BOOL)c ;
 - (void) jobDidCancel;
 - (id) printStatusDelegate;
 - (void) setPrintStatusDelegate:(id)a ;


@end
