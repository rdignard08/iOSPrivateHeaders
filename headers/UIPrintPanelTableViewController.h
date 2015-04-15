
@interface UIPrintPanelTableViewController : UITableViewController {

    @"UIPrintPanelViewController" _printPanelViewController;
    q _rangeRow;
    q _copiesRow;
    q _duplexRow;
    q _paperRow;
    BOOL _contactingPrinter;
    BOOL _printerWarningWasShown;
}

 - (void) _update:(BOOL)a;
 - (void) dealloc;
 - (BOOL) tableView:(id)ashouldHighlightRowAtIndexPath:(id)b;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (id) tableView:(id)atitleForFooterInSection:(q)b;
 - (Q) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewDidLoad;
 - (void) viewDidDisappear:(BOOL)a;
 - (void) _updateSize;
 - (void) showCancelButton;
 - (id) initWithPrintPanelViewController:(id)a;
 - (void) clearPrintPanelViewController;
 - (void) setShowContactingPrinter:(BOOL)a;
 - (void) showContacting;
 - (void) updateCopies:(id)a;
 - (void) updateDuplex:(id)a;
 - (void) updatePageRange:({_NSRange=QQ})a;


@end
