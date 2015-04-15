
@interface UIPrintStatusTableViewController : UITableViewController {

    @"PKJob" _printJob;
    @"NSDateFormatter" _sentFormatter;
}

 - (void) dealloc;
 - (d) tableView:(id)aheightForRowAtIndexPath:(id)b;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (q) numberOfSectionsInTableView:(id)a;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) cancelPrinting;
 - (void) updateCancelButton;
 - (void) popToJobsView;
 - (void) updateJobInfo;
 - (id) initWithJob:(id)a;


@end
