
@protocol UIPrinterBrowserOwner;
@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner> {

    UIPrintInteractionController* _printInteractionController;
    UIPrintInfo* _observedPrintInfo;
    UINavigationController* _navigationController;
    UIPrintPanelTableViewController* _tableViewController;
    UIViewController* _parentController;
    UIPopoverController* _poverController;
    UIWindow* _window;
    PKPrinter* _printer;
    BOOL _dismissed;
    BOOL _animated;
    BOOL _observingRotation;
}
@property (nonatomic, retain, readwrite) NSNumber* printer;
@property (nonatomic, assign, readonly) NSNumber* pageCount;
@property (nonatomic, assign, readwrite) NSNumber* pageRange;
@property (nonatomic, assign, readwrite) NSNumber* duplex;
@property (nonatomic, assign, readonly) NSArray* paperList;
@property (nonatomic, retain, readwrite) UIPrintPaper* paper;
@property (nonatomic, assign, readwrite) NSNumber* copies;
@property (nonatomic, assign, readonly) NSNumber* showDuplex;
@property (nonatomic, assign, readonly) NSNumber* showPageRange;
@property (nonatomic, assign, readonly) NSNumber* showCopies;
@property (nonatomic, assign, readonly) NSNumber* showPaper;
@property (nonatomic, assign, readonly) NSNumber* showPaperSelection;
@property (nonatomic, assign, readonly) NSNumber* showPrinterWarning;

 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (void) dealloc;
 - (unsigned long long) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) printerBrowserViewDidDisappear;
 - (void) _presentWindow;
 - (void) _keyWindowWillRotate:(id)a;
 - (void) _presentInParentAnimated:(BOOL)a;
 - (void) dismissAnimated:(BOOL)a;
 - (BOOL) filtersPrinters;
 - (void) cancelPrinting;
 - (id) printer;
 - (void) setPrinter:(id)a;
 - (void) popoverControllerDidDismissPopover:(id)a;
 - (long long) pageCount;
 - (BOOL) duplex;
 - (void) setDuplex:(BOOL)a;
 - (long long) copies;
 - (void) setCopies:(long long)a;
 - (void) printPanelDidDisappear;
 - (void) printPaperViewDidDisappear;
 - (void) printRangeViewDidDisappear;
 - (void) dismissPrintPanel:(BOOL)aanimated:(BOOL)b;
 - (BOOL) showPageRange;
 - ({_NSRange=QQ}) pageRange;
 - (void) setPageRange:({_NSRange=QQ})a;
 - (id) _removeRollsFrom:(id)a;
 - (id) paper;
 - (void) setPaper:(id)a;
 - (id) paperList;
 - (BOOL) showPaper;
 - (id) initWithPrintInterationController:(id)ainParentController:(id)b;
 - (void) presentPrintPanelAnimated:(BOOL)a;
 - (void) presentPrintPanelFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})ainView:(id)banimated:(BOOL)c;
 - (void) presentPrintPanelFromBarButtonItem:(id)aanimated:(BOOL)b;
 - (void) startPrinting;
 - (BOOL) showDuplex;
 - (BOOL) showCopies;
 - (BOOL) showPrinterWarning;
 - (BOOL) showPaperSelection;


@end
