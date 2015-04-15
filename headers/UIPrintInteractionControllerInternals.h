
@interface UIPrintInteractionControllerInternals : NSObject {

    long long _pageCount;
    {_NSRange="location"Q"length"Q} _pageRange;
    long long _currentPage;
    UIPrintPanelViewController _printPanelViewController;
    UIPrintingProgress _printingProgress;
    PKPrinter _printer;
    UIPrintPaper _paper;
    PKPrintSettings _printSettings;
    UIPrintInfo _activePrintInfo;
    int _printInfoState;
    BOOL _supressNotifyDismissed;
    UIPrintPageRenderer _formatterRenderer;
    BOOL _manualPrintPageEnabled;
}

 - (void) dealloc;


@end
