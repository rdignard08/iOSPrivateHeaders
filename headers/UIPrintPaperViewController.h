
@interface UIPrintPaperViewController : UITableViewController {

    UIPrintPanelViewController _printPanelViewController;
}

 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (unsigned long long) supportedInterfaceOrientations;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (id) initWithPrintPanelViewController:(id)a;
 - (void) adjustPopoverSize;


@end
