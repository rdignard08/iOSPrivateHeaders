
@interface UIPrintPanelTableViewController : UITableViewController {

    UIPrintPanelViewController* _printPanelViewController;
    long long _rangeRow;
    long long _copiesRow;
    long long _duplexRow;
    long long _paperRow;
    BOOL _contactingPrinter;
    BOOL _printerWarningWasShown;
}

 - (void) _update:(BOOL)a ;
 - (void) dealloc;
 - (BOOL) tableView:(id)a shouldHighlightRowAtIndexPath:(id)b ;
 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (id) tableView:(id)a titleForFooterInSection:(long long)b ;
 - (unsigned long long) supportedInterfaceOrientations;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) viewWillAppear:(BOOL)a ;
 - (void) viewDidLoad;
 - (void) viewDidDisappear:(BOOL)a ;
 - (void) _updateSize;
 - (void) showCancelButton;
 - (id) initWithPrintPanelViewController:(id)a ;
 - (void) clearPrintPanelViewController;
 - (void) setShowContactingPrinter:(BOOL)a ;
 - (void) showContacting;
 - (void) updateCopies:(id)a ;
 - (void) updateDuplex:(id)a ;
 - (void) updatePageRange:({_NSRange=QQ})a ;


@end
