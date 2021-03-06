
@interface UIPrintInteractionController : NSObject {

    BOOL _hidesNumberOfCopies;
    @? _completionHandler;
    unsigned long long _backgroundTaskIdentifier;
    id _printState;
    BOOL _showsPageRange;
    BOOL _showsPaperSelectionForLoadedPapers;
    UIPrintInfo* _printInfo;
    <UIPrintInteractionControllerDelegate>* _delegate;
    UIPrintPaper* _printPaper;
    UIPrintPageRenderer* _printPageRenderer;
    UIPrintFormatter* _printFormatter;
    id _printingItem;
    NSArray* _printingItems;
    <UIPrintInteractionControllerDelegate>* _printActivityDelegate;
}
@property (nonatomic, retain, readwrite) UIPrintInfo* printInfo;
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readwrite) NSNumber* showsPageRange;
@property (nonatomic, assign, readwrite) NSNumber* showsNumberOfCopies;
@property (nonatomic, assign, readwrite) NSNumber* showsPaperSelectionForLoadedPapers;
@property (nonatomic, assign, readonly) UIPrintPaper* printPaper;
@property (nonatomic, retain, readwrite) UIPrintPageRenderer* printPageRenderer;
@property (nonatomic, retain, readwrite) UIPrintFormatter* printFormatter;
@property (nonatomic, copy, readwrite) NSNumber* printingItem;
@property (nonatomic, copy, readwrite) NSArray* printingItems;
@property (nonatomic, assign, readwrite) NSNumber* printActivityDelegate;
@property (nonatomic, assign, readonly) NSNumber* pageCount;
@property (nonatomic, assign, readwrite) NSNumber* pageRange;
@property (nonatomic, retain, readwrite) NSNumber* printer;
@property (nonatomic, retain, readwrite) UIPrintPaper* paper;
 + (BOOL) isPrintingAvailable;
 + (id) sharedPrintController;
 + (id) printableUTIs;
 + (BOOL) canPrintURL:(id)a;
 + (BOOL) canPrintData:(id)a;

 - (id) _init;
 - (Vv) release;
 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (void) dismissAnimated:(BOOL)a ;
 - (id) printer;
 - (void) setPrinter:(id)a ;
 - (long long) pageCount;
 - (id) printInfo;
 - (BOOL) presentFromRect:({CGRect={CGPoint=dd}{CGSize=dd}})a inView:(id)b animated:(BOOL)c completionHandler:(@?)d ;
 - (BOOL) presentAnimated:(BOOL)a completionHandler:(@?)b ;
 - (BOOL) presentFromBarButtonItem:(id)a animated:(BOOL)b completionHandler:(@?)c ;
 - (void) setPrintPageRenderer:(id)a ;
 - (id) printPageRenderer;
 - (id) _currentPrintInfo;
 - (void) _printPanelDidPresent;
 - (void) _printPanelWillDismiss:(BOOL)a ;
 - (void) _printPanelDidDismiss;
 - (void) _updatePageCount;
 - ({_NSRange=QQ}) pageRange;
 - (void) setPageRange:({_NSRange=QQ})a ;
 - ({CGSize=dd}) _printItemContentSize;
 - (id) paper;
 - (void) setPaper:(id)a ;
 - (BOOL) _canShowDuplex;
 - (BOOL) _canShowPageRange;
 - (BOOL) _canShowCopies;
 - (BOOL) _canShowPaperList;
 - (void) _cleanPrintState;
 - (BOOL) _setupPrintPanel:(@?)a ;
 - (void) _setPrintInfoState:(int)a ;
 - (void) _endPrintJob:(BOOL)a error:(id)b ;
 - (id) printingItem;
 - (id) _paperForPDFItem:(id)a withDuplexMode:(long long)b ;
 - (void) _updatePrintPaper;
 - (void) _startPrinting;
 - (id) _paperForContentType:(long long)a ;
 - (void) _preparePrintInfo;
 - (void) _printPage;
 - (id) _printPageRenderer:(id)a ;
 - (id) _printItem:(id)a ;
 - (void) setPrintingItem:(id)a ;
 - (BOOL) printToPrinter:(id)a completionHandler:(@?)b ;
 - (BOOL) showsNumberOfCopies;
 - (void) setShowsNumberOfCopies:(BOOL)a ;
 - (void) setPrintInfo:(id)a ;
 - (BOOL) showsPageRange;
 - (void) setShowsPageRange:(BOOL)a ;
 - (BOOL) showsPaperSelectionForLoadedPapers;
 - (void) setShowsPaperSelectionForLoadedPapers:(BOOL)a ;
 - (id) printPaper;
 - (id) printFormatter;
 - (void) setPrintFormatter:(id)a ;
 - (id) printingItems;
 - (void) setPrintingItems:(id)a ;
 - (id) printActivityDelegate;
 - (void) setPrintActivityDelegate:(id)a ;
 - (void) _enableManualPrintPage:(BOOL)a ;
 - (void) _manualPrintPage;
 - (void) _cancelManualPrintPage;
 - (id) init;
 - (id) delegate;


@end
