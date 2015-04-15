
@interface _UIUserDefaultsActivity : UIActivity {

    NSArray _availableActivities;
    _UIActivityUserDefaults _userDefaults;
    UINavigationController _navigationController;
    UIViewController _userDefaultsViewController;
}

 - (id) userDefaults;
 - (id) activityType;
 - (void) dealloc;
 - (id) navigationController;
 - (void) setUserDefaults:(id)a;
 - (id) initWithUserDefaults:(id)a;
 - (void) setAvailableActivities:(id)a;
 - (id) _activityImage;
 - (id) activityTitle;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (id) activityViewController;
 - (void) activityDidFinish:(BOOL)aitems:(id)berror:(id)c;
 - (void) setNavigationController:(id)a;
 - (void) setUserDefaultsViewController:(id)a;
 - (void) _prepareActivityViewControllerIfNeeded;
 - (id) availableActivities;
 - (void) _settingsViewControllerDidDismiss:(id)a;
 - (id) userDefaultsViewController;
 - (void) _cleanup;


@end
