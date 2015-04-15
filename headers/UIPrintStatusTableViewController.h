
@interface UIPrintStatusTableViewController : UITableViewController {

    PKJob* _printJob;
    NSDateFormatter* _sentFormatter;
}

 - (void) dealloc;
 - (double) tableView:(id)aheightForRowAtIndexPath:(id)b;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (long long) numberOfSectionsInTableView:(id)a;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) cancelPrinting;
 - (void) updateCancelButton;
 - (void) popToJobsView;
 - (void) updateJobInfo;
 - (id) initWithJob:(id)a;


@end
