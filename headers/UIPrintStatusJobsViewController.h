
@interface UIPrintStatusJobsViewController : UITableViewController {

    @"NSArray" _jobs;
    BOOL _autoPush;
    @"UIPrintingMessageView" _noJobsView;
}

 - (void) dealloc;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (q) tableView:(id)anumberOfRowsInSection:(q)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (void) tableView:(id)acommitEditingStyle:(q)bforRowAtIndexPath:(id)c;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) willReappear;
 - (void) pushJob:(id)aanimated:(BOOL)b;
 - (id) visibleJobs;
 - (void) updateTableViewCell:(id)awithJob:(id)b;
 - (void) updateForJobCountChange;
 - (void) updateJobInfo:(id)a;
 - (void) pushSingleJobAnimated:(BOOL)a;
 - (void) handleJobListDidChange;
 - (id) init;


@end
