
@protocol UIPrinterBrowserOwner, UINavigationControllerDelegate;
@interface UIPrinterPickerViewController : UIViewController <UIPrinterBrowserOwner, UINavigationControllerDelegate> {

    @"UIPrinterPickerController" _printerPickerController;
    @"UINavigationController" _navigationController;
    @"UIPrinterBrowserViewController" _printerBrowserViewController;
    @"UIViewController" _parentController;
    @"UIViewController" _originalViewControllerInNav;
    @"UIPopoverController" _poverController;
    @"UIWindow" _window;
    BOOL _dismissed;
    BOOL _animated;
    BOOL _observingRotation;
    BOOL _parentHasNoPopover;
    BOOL _userSelectedPrinter;
    @"PKPrinter" _printer;
}

 - (void) dealloc;
 - (Q) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) navigationController:(id)awillShowViewController:(id)banimated:(BOOL)c;
 - (void) navigationController:(id)adidShowViewController:(id)banimated:(BOOL)c;
 - (void) printerBrowserViewDidDisappear;
 - (void) _presentWindow;
 - (void) _keyWindowWillRotate:(id)a;
 - (void) _presentInParentAnimated:(BOOL)a;
 - (void) dismissAnimated:(BOOL)a;
 - (void) dismissPrinterPickerAnimated:(BOOL)a;
 - (BOOL) filtersPrinters;
 - (void) cancelPrinting;
 - (void) setUserSelectedPrinter:(BOOL)a;
 - (BOOL) shouldShowPrinter:(id)a;
 - (id) printer;
 - (void) setPrinter:(id)a;
 - (id) initWithPrinterPickerController:(id)ainParentController:(id)b;
 - (void) presentPrinterPickerPanelAnimated:(BOOL)a;
 - (void) presentPrinterPickerPanelFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)banimated:(BOOL)c;
 - (void) presentPrinterPickerPanelFromBarButtonItem:(id)aanimated:(BOOL)b;
 - (void) popoverControllerDidDismissPopover:(id)a;
 - (BOOL) userSelectedPrinter;


@end
