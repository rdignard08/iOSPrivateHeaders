
@interface UIPrintStatusViewController : UINavigationController {

    @"UIPopoverController" _poverController;
    @"<UIPrintStatusDelegate>" _printStatusDelegate;
}

 - (void) dealloc;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewDidLoad;
 - (void) dismissAnimated:(BOOL)a;
 - (void) popoverControllerDidDismissPopover:(id)a;
 - (id) printStatusView;
 - (void) presentPrintStatusFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)banimated:(BOOL)c;
 - (void) jobDidCancel;
 - (id) printStatusDelegate;
 - (void) setPrintStatusDelegate:(id)a;


@end
