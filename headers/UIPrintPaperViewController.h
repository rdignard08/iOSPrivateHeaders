
@interface UIPrintPaperViewController : UITableViewController {

    UIPrintPanelViewController* _printPanelViewController;
}

 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (unsigned long long) supportedInterfaceOrientations;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) viewDidDisappear:(BOOL)a ;
 - (id) initWithPrintPanelViewController:(id)a ;
 - (void) adjustPopoverSize;


@end
