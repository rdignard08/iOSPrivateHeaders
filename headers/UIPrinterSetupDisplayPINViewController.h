
@interface UIPrinterSetupDisplayPINViewController : UIViewController {

    @"PKPrinter" _printer;
}

 - (void) dealloc;
 - (unsigned long long) supportedInterfaceOrientations;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) viewDidAppear:(BOOL)a;
 - (id) printer;
 - (void) setPrinter:(id)a;
 - (id) initWithPrinter:(id)a;
 - (void) enterPIN;
 - (void) showDisplayMessage:(long long)a;


@end
