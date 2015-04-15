
@interface UIPrintStatusTableViewController : UITableViewController {

    PKJob* _printJob;
    NSDateFormatter* _sentFormatter;
}

 - (void) dealloc;
 - (double) tableView:(id)a heightForRowAtIndexPath:(id)b ;
 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (long long) numberOfSectionsInTableView:(id)a ;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) viewWillAppear:(BOOL)a ;
 - (void) viewWillDisappear:(BOOL)a ;
 - (void) cancelPrinting;
 - (void) updateCancelButton;
 - (void) popToJobsView;
 - (void) updateJobInfo;
 - (id) initWithJob:(id)a ;


@end
