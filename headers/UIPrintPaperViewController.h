
@interface UIPrintPaperViewController : UITableViewController {

    @"UIPrintPanelViewController" _printPanelViewController;
}

 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (Q) supportedInterfaceOrientations;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (id) initWithPrintPanelViewController:(id)a;
 - (void) adjustPopoverSize;


@end
