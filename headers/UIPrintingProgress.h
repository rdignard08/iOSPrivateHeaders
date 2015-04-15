
@interface UIPrintingProgress : NSObject {

    NSString* _printerName;
    @? _cancelHandler;
    double _startTime;
    double _displayTime;
    UIAlertView* _alert;
    UIPrintingProgressViewController* _viewController;
    BOOL _donePrinting;
    BOOL _forceDisplayAsAlert;
}

 - (void) dealloc;
 - (void) alertView:(id)a clickedButtonAtIndex:(long long)b ;
 - (void) alertViewCancel:(id)a ;
 - (void) didPresentAlertView:(id)a ;
 - (id) initWithPrinterName:(id)a forceDisplayAsAlert:(BOOL)b cancelHandler:(@?)c ;
 - (void) setPrintInfoState:(int)a ;
 - (void) setPage:(long long)a ofPage:(long long)b ;
 - (double) nextPrintDelay;
 - (void) hideProgressAnimated:(BOOL)a ;
 - (BOOL) progressVisible;
 - (void) progressCancel;
 - (void) showProgress:(id)a immediately:(BOOL)b ;
 - (void) endProgress;


@end
