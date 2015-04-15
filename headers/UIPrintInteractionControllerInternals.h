
@interface UIPrintInteractionControllerInternals : NSObject {

    q _pageCount;
    {_NSRange="location"Q"length"Q} _pageRange;
    q _currentPage;
    @"UIPrintPanelViewController" _printPanelViewController;
    @"UIPrintingProgress" _printingProgress;
    @"PKPrinter" _printer;
    @"UIPrintPaper" _paper;
    @"PKPrintSettings" _printSettings;
    @"UIPrintInfo" _activePrintInfo;
    i _printInfoState;
    BOOL _supressNotifyDismissed;
    @"UIPrintPageRenderer" _formatterRenderer;
    BOOL _manualPrintPageEnabled;
}

 - (void) dealloc;


@end
