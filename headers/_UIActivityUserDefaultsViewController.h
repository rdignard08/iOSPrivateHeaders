
@interface _UIActivityUserDefaultsViewController : UITableViewController {

    NSArray* _activities;
    _UIActivityUserDefaults* _userDefaults;
    UIImage* _placeholderImage;
}

 - (id) userDefaults;
 - (void) dealloc;
 - (long long) tableView:(id)aeditingStyleForRowAtIndexPath:(id)b;
 - (BOOL) tableView:(id)ashouldIndentWhileEditingRowAtIndexPath:(id)b;
 - (long long) tableView:(id)anumberOfRowsInSection:(long long)b;
 - (id) tableView:(id)acellForRowAtIndexPath:(id)b;
 - (void) tableView:(id)amoveRowAtIndexPath:(id)btoIndexPath:(id)c;
 - (void) viewDidLoad;
 - (void) setUserDefaults:(id)a;
 - (id) activities;
 - (void) setActivities:(id)a;
 - (void) setPlaceholderImage:(id)a;
 - (long long) preferredActivityCategory;
 - (id) activityForRowAtIndexPath:(id)a;
 - (id) settingsImageForActivity:(id)a;
 - (void) toggleActivityHiddenForControl:(id)a;
 - (void) toggleActivityHiddenForRowAtIndexPath:(id)a;
 - (id) initWithActivities:(id)auserDefaults:(id)b;
 - (id) placeholderImage;


@end
