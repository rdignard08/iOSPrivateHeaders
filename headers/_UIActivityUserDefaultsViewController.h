
@interface _UIActivityUserDefaultsViewController : UITableViewController {

    NSArray* _activities;
    _UIActivityUserDefaults* _userDefaults;
    UIImage* _placeholderImage;
}

 - (id) userDefaults;
 - (void) dealloc;
 - (long long) tableView:(id)a editingStyleForRowAtIndexPath:(id)b ;
 - (BOOL) tableView:(id)a shouldIndentWhileEditingRowAtIndexPath:(id)b ;
 - (long long) tableView:(id)a numberOfRowsInSection:(long long)b ;
 - (id) tableView:(id)a cellForRowAtIndexPath:(id)b ;
 - (void) tableView:(id)a moveRowAtIndexPath:(id)b toIndexPath:(id)c ;
 - (void) viewDidLoad;
 - (void) setUserDefaults:(id)a ;
 - (id) activities;
 - (void) setActivities:(id)a ;
 - (void) setPlaceholderImage:(id)a ;
 - (long long) preferredActivityCategory;
 - (id) activityForRowAtIndexPath:(id)a ;
 - (id) settingsImageForActivity:(id)a ;
 - (void) toggleActivityHiddenForControl:(id)a ;
 - (void) toggleActivityHiddenForRowAtIndexPath:(id)a ;
 - (id) initWithActivities:(id)a userDefaults:(id)b ;
 - (id) placeholderImage;


@end
