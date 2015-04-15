
@protocol UIPrinterBrowserOwner, UINavigationControllerDelegate;
@interface UIPrinterPickerViewController : UIViewController <UIPrinterBrowserOwner, UINavigationControllerDelegate> {

    UIPrinterPickerController* _printerPickerController;
    UINavigationController* _navigationController;
    UIPrinterBrowserViewController* _printerBrowserViewController;
    UIViewController* _parentController;
    UIViewController* _originalViewControllerInNav;
    UIPopoverController* _poverController;
    UIWindow* _window;
    BOOL _dismissed;
    BOOL _animated;
    BOOL _observingRotation;
    BOOL _parentHasNoPopover;
    BOOL _userSelectedPrinter;
    PKPrinter* _printer;
}

 - (void) dealloc;
 - (unsigned long long) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) navigationController:(id)a willShowViewController:(id)b animated:(BOOL)c ;
 - (void) navigationController:(id)a didShowViewController:(id)b animated:(BOOL)c ;
 - (void) printerBrowserViewDidDisappear;
 - (void) _presentWindow;
 - (void) _keyWindowWillRotate:(id)a ;
 - (void) _presentInParentAnimated:(BOOL)a ;
 - (void) dismissAnimated:(BOOL)a ;
 - (void) dismissPrinterPickerAnimated:(BOOL)a ;
 - (BOOL) filtersPrinters;
 - (void) cancelPrinting;
 - (void) setUserSelectedPrinter:(BOOL)a ;
 - (BOOL) shouldShowPrinter:(id)a ;
 - (id) printer;
 - (void) setPrinter:(id)a ;
 - (id) initWithPrinterPickerController:(id)a inParentController:(id)b ;
 - (void) presentPrinterPickerPanelAnimated:(BOOL)a ;
 - (void) presentPrinterPickerPanelFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inView:(id)b animated:(BOOL)c ;
 - (void) presentPrinterPickerPanelFromBarButtonItem:(id)a animated:(BOOL)b ;
 - (void) popoverControllerDidDismissPopover:(id)a ;
 - (BOOL) userSelectedPrinter;


@end
