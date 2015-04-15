
@interface UIPrintStatusJobsViewController : UITableViewController {

    NSArray _jobs;
    BOOL _autoPush;
    UIPrintingMessageView _noJobsView;
}

 - (void) dealloc;
 - (void) tableView:(id)adidSelectRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (void) tableView:(id)acommitEditingStyle:(long long)bforRowAtIndexPath:(id)c;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
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
