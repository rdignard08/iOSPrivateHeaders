
@protocol PKPrinterBrowserDelegate;
@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {

    @"<UIPrinterBrowserOwner>" _ownerPanelViewController;
    @"PKPrinterBrowser" _printerBrowser;
    @"NSMutableArray" _preferredPrinters;
    @"NSMutableArray" _otherPrinters;
    @"NSMutableArray" _filteredOutPrinters;
    @"NSArray" _lastUsedPrinters;
    @"PKPrinter" _lockedPrinter;
    BOOL _loaded;
    @"UIPrinterSearchingView" _searchingView;
    BOOL _clearCurrentPrinter;
    BOOL _shouldFilterPrinters;
    double _maximumPopoverHeight;
}

 - (void) dealloc;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (id) tableView:(id)atitleForHeaderInSection:(long long)b;
 - (unsigned long long) supportedInterfaceOrientations;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (id) initWithOwnerViewController:(id)a;
 - (void) showCancelButton;
 - (void) stopPrinterBrowser;
 - (void) willEnterForeground;
 - (double) maximumPopoverHeight;
 - (void) adjustPopoverSize;
 - (void) startPrinterBrowser;
 - (void) updateSearching;
 - (id) printerAtIndexPath:(id)a;
 - (void) addPrinter:(id)amoreComing:(BOOL)b;
 - (void) removePrinter:(id)amoreGoing:(BOOL)b;
 - (void) selectPrinter:(id)a;
 - (void) setMaximumPopoverHeight:(double)a;


@end
