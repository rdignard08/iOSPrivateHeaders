
@interface UIPrintStatusJobsViewController : UITableViewController {

    NSArray* _jobs;
    BOOL _autoPush;
    UIPrintingMessageView* _noJobsView;
}

 - (void) dealloc;
 - (void) tableView:(id)a didSelectRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (void) tableView:(id)a commitEditingStyle:(long long)b forRowAtIndexPath:(id)c ;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) viewWillAppear:(BOOL)a ;
 - (void) viewWillDisappear:(BOOL)a ;
 - (void) willReappear;
 - (void) pushJob:(id)a animated:(BOOL)b ;
 - (id) visibleJobs;
 - (void) updateTableViewCell:(id)a withJob:(id)b ;
 - (void) updateForJobCountChange;
 - (void) updateJobInfo:(id)a ;
 - (void) pushSingleJobAnimated:(BOOL)a ;
 - (void) handleJobListDidChange;
 - (id) init;


@end
