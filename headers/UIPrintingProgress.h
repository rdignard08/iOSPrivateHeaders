
@interface UIPrintingProgress : NSObject {

    @"NSString" _printerName;
    @? _cancelHandler;
    d _startTime;
    d _displayTime;
    @"UIAlertView" _alert;
    @"UIPrintingProgressViewController" _viewController;
    BOOL _donePrinting;
    BOOL _forceDisplayAsAlert;
}

 - (void) dealloc;
 - (void) alertView:(id)aclickedButtonAtIndex:(q)b;
 - (void) alertViewCancel:(id)a;
 - (void) didPresentAlertView:(id)a;
 - (id) initWithPrinterName:(id)aforceDisplayAsAlert:(BOOL)bcancelHandler:(@?)c;
 - (void) setPrintInfoState:(i)a;
 - (void) setPage:(q)aofPage:(q)b;
 - (d) nextPrintDelay;
 - (void) hideProgressAnimated:(BOOL)a;
 - (BOOL) progressVisible;
 - (void) progressCancel;
 - (void) showProgress:(id)aimmediately:(BOOL)b;
 - (void) endProgress;


@end
