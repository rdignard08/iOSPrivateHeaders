
@interface UIPrinterSetupDisplayPINViewController : UIViewController {

    @"PKPrinter" _printer;
}

 - (void) dealloc;
 - (Q) supportedInterfaceOrientations;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewDidAppear:(BOOL)a;
 - (id) printer;
 - (void) setPrinter:(id)a;
 - (id) initWithPrinter:(id)a;
 - (void) enterPIN;
 - (void) showDisplayMessage:(q)a;


@end
