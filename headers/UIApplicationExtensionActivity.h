
@interface UIApplicationExtensionActivity : UIActivity {

    NSExtension* _applicationExtension;
    NSExtensionItem* __injectedExtensionItem;
    UIViewController* _extensionViewController;
    id _extensionContextIdentifier;
    UIViewController* _presenterViewController;
    @? _presenterCompletion;
    _UIActivityBundleHelper* _activityBundleHelper;
    NSString* _localizedExtensionBundleName;
    UIImage* _renderedActivityImage;
    UIImage* _renderedActivitySettingsImage;
    @? _extensionRequestCleanupCompletion;
}
 + (long long) activityCategory;
 + (id) _applicationExtensionActivitiesForItems:(id)a;

 - (id) activityType;
 - (void) dealloc;
 - (id) _activityImage;
 - (id) activityTitle;
 - (id) applicationExtension;
 - (id) _activitySettingsImage;
 - (BOOL) canPerformWithActivityItems:(id)a;
 - (void) setApplicationExtension:(id)a;
 - (void) set_injectedExtensionItem:(id)a;
 - (id) localizedExtensionBundleName;
 - (id) activityBundleHelper;
 - (void) setLocalizedExtensionBundleName:(id)a;
 - (id) renderedActivityImage;
 - (void) setRenderedActivityImage:(id)a;
 - (id) renderedActivitySettingsImage;
 - (void) setRenderedActivitySettingsImage:(id)a;
 - (id) _injectedExtensionItem;
 - (BOOL) _isServiceExtension;
 - (void) setExtensionRequestCleanupCompletion:(@?)a;
 - (void) _instantiateExtensionViewControllerWithInputItems:(id)a;
 - (void) setPresenterViewController:(id)a;
 - (void) setPresenterCompletion:(@?)a;
 - (void) _presentExtensionViewControllerIfPossible;
 - (id) extensionViewController;
 - (@?) extensionRequestCleanupCompletion;
 - (void) setExtensionViewController:(id)a;
 - (id) presenterViewController;
 - (@?) presenterCompletion;
 - (id) initWithApplicationExtension:(id)a;
 - (void) _injectedJavaScriptResult:(id)a;
 - (BOOL) _canBeExcludedByActivityViewController:(id)a;
 - (void) prepareWithActivityItems:(id)a;
 - (BOOL) _presentActivityOnViewController:(id)aanimated:(BOOL)bcompletion:(@?)c;
 - (BOOL) _dismissActivityFromViewController:(id)aanimated:(BOOL)bcompletion:(@?)c;
 - (void) setActivityBundleHelper:(id)a;
 - (id) debugDescription;
 - (void) _cleanup;
 - (void) setExtensionContextIdentifier:(id)a;
 - (id) extensionContextIdentifier;


@end
