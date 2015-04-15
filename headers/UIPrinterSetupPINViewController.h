
@interface UIPrinterSetupPINViewController : UIViewController {

    @"PKPrinter" _printer;
    @"UIPrinterSetupConnectingView" _connectingView;
    @"UIPrinterSetupPINView" _PINView;
    @"UIScrollView" _scrollView;
}

 - (void) dealloc;
 - (Q) supportedInterfaceOrientations;
 - (void) setScrollView:(id)a;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewDidAppear:(BOOL)a;
 - (id) scrollView;
 - (id) printer;
 - (void) setPrinter:(id)a;
 - (id) initWithPrinter:(id)a;
 - (void) setConnectingView:(id)a;
 - (void) setPINView:(id)a;
 - (void) connectToPrinter;
 - (void) showSetup;
 - (void) showFailure;
 - (void) connected:(BOOL)a;
 - (id) connectingView;
 - (id) PINView;


@end
