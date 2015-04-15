
@protocol UIViewControllerRestoration, UIAlertControllerContaining, UIActivityGroupViewControllerDelegate, UIActivityGroupViewControllerDataSource, SFAirDropActivityViewControllerDelegate;
@interface UIActivityViewController : UIViewController <UIViewControllerRestoration, UIAlertControllerContaining, UIActivityGroupViewControllerDelegate, UIActivityGroupViewControllerDataSource, SFAirDropActivityViewControllerDelegate> {

    BOOL _useBlackPopoverStyle;
    BOOL _showKeyboardAutomatically;
    BOOL _allowsEmbedding;
    BOOL _willDismissActivityViewController;
    BOOL _performActivityForStateRestoration;
    BOOL _shouldMatchOnlyUserElectedExtensions;
    @? _completionHandler;
    @? _completionWithItemsHandler;
    @"NSArray" _excludedActivityTypes;
    @"UIActivity" _activity;
    @"NSArray" _includedActivityTypes;
    q _excludedActivityCategories;
    @"NSArray" _activityTypeOrder;
    @"NSString" _mailAutosaveIdentifier;
    @? _preCompletionHandler;
    @"<UIActivityViewControllerDelegate>" _airDropDelegate;
    @"UIViewController" _activityViewController;
    @"NSArray" _activityItems;
    @"NSArray" _applicationActivities;
    @"UIAlertController" _activityAlertController;
    @"_UIAlertControllerShimPresenter" _activityAlertControllerShimPresenter;
    @"_UIActivityGroupListViewController" _activityGroupListViewController;
    @"UIAlertAction" _activityAlertCancelAction;
    @"NSOperationQueue" _activityItemProviderOperationQueue;
    q _totalProviderCount;
    q _completedProviderCount;
    Q _backgroundTaskIdentifier;
    q _originalPopoverBackgroundStyle;
    Class _originalPopoverBackgroundViewClass;
    @"NSString" _subject;
    @"SFAirDropActivityViewController" _airDropViewController;
    @? __popoverDismissalAction;
    @"_UIActivityApplicationExtensionDiscovery" _applicationExtensionDiscovery;
}
 + (id) _activeActivityViewControllers;
 + (id) viewControllerWithRestorationIdentifierPath:(id)acoder:(id)b;
 + (id) _dataTypeIdentifierForActivityItem:(id)aactivity:(id)b;
 + (id) _itemProviderForActivityItem:(id)atypeIdentifier:(id)bactivity:(id)c;
 + (id) _subjectForActivityItem:(id)aactivity:(id)b;
 + (id) _thumbnailImageForActivityItem:(id)aactivity:(id)b;
 + (id) _attachmentNameForActivityItem:(id)aactivity:(id)b;
 + (void) _reloadImageForActivity:(id)a;
 + (void) _addActivityItem:(id)aactivityViewController:(id)boriginalActivityItem:(id)c;
 + (void) _clearActivityItems:(id)a;

 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (void) dealloc;
 - (Q) supportedInterfaceOrientations;
 - (void) encodeRestorableStateWithCoder:(id)a;
 - (void) decodeRestorableStateWithCoder:(id)a;
 - (void) viewDidLayoutSubviews;
 - (@?) completionHandler;
 - (void) preferredContentSizeDidChangeForChildContentContainer:(id)a;
 - (void) viewWillTransitionToSize:({CGSize=dd})awithTransitionCoordinator:(id)b;
 - (void) setModalPresentationStyle:(q)a;
 - (void) dismissViewControllerAnimated:(BOOL)acompletion:(@?)b;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewWillAppear:(BOOL)a;
 - (void) _setPopoverController:(id)a;
 - (void) viewDidLoad;
 - (void) viewDidAppear:(BOOL)a;
 - (void) viewWillDisappear:(BOOL)a;
 - (void) viewDidDisappear:(BOOL)a;
 - (id) _presentationControllerForPresentedController:(id)apresentingController:(id)bsourceController:(id)c;
 - (BOOL) _requiresCustomPresentationController;
 - (void) presentViewController:(id)aanimated:(BOOL)bcompletion:(@?)c;
 - (void) willRotateToInterfaceOrientation:(q)aduration:(d)b;
 - (void) _didResignContentViewControllerOfPopover:(id)a;
 - (id) _containedAlertController;
 - (id) activityGroupViewController:(id)aavailableActivitiesInCategory:(q)b;
 - (void) activityGroupViewController:(id)adidSelectActivity:(id)b;
 - (void) setCompletionWithItemsHandler:(@?)a;
 - (BOOL) sourceIsManaged;
 - (void) setSubject:(id)a;
 - (void) _performActivity:(id)a;
 - (BOOL) _shouldShowSystemActivity:(id)a;
 - (void) _prepareActivity:(id)a;
 - (id) activityViewController;
 - (id) activity;
 - (id) initWithActivityItems:(id)aapplicationActivities:(id)b;
 - (void) setExcludedActivityTypes:(id)a;
 - (void) setActivityViewController:(id)a;
 - (void) setCompletionHandler:(@?)a;
 - (void) _cancel;
 - (id) _availableActivities;
 - (id) airDropViewController;
 - (void) setAirDropViewController:(id)a;
 - (void) _reloadImageForActivity:(id)a;
 - (id) activityGroupListViewController;
 - (void) setActivityItems:(id)a;
 - (void) setApplicationActivities:(id)a;
 - (void) _notifyReloadImageForActivity:(id)a;
 - (void) setWillDismissActivityViewController:(BOOL)a;
 - (void) setActivityAlertCancelAction:(id)a;
 - (void) setActivityAlertController:(id)a;
 - (id) activityAlertController;
 - (void) setActivityAlertControllerShimPresenter:(id)a;
 - (id) _availableActivitiesForItems:(id)aapplicationExtensionActivities:(id)b;
 - (id) applicationExtensionDiscovery;
 - (void) setApplicationExtensionDiscovery:(id)a;
 - (BOOL) shouldMatchOnlyUserElectedExtensions;
 - (id) _activityItemValues;
 - (void) _updateActivities:(id)aanimated:(BOOL)b;
 - (id) excludedActivityTypes;
 - (q) excludedActivityCategories;
 - (id) includedActivityTypes;
 - (id) activityItems;
 - (id) activityTypeOrder;
 - (id) _availableActivitiesForItems:(id)a;
 - (void) _updateActivityItems:(id)aanimated:(BOOL)b;
 - (void) setShouldMatchOnlyUserElectedExtensions:(BOOL)a;
 - (id) _newActivityGroupViewControllerForItems:(id)acategory:(q)buserDefaults:(id)c;
 - (BOOL) allowsEmbedding;
 - (id) activityAlertControllerShimPresenter;
 - (void) _updatePreferredContentSizes;
 - (void) _setDarkStyleOnLegacyApp;
 - (void) _removeFromActiveActivityViewControllers;
 - (void) setPreCompletionHandler:(@?)a;
 - (BOOL) willDismissActivityViewController;
 - (void) setActivity:(id)a;
 - (void) setActivityItemProviderOperationQueue:(id)a;
 - (void) _cleanupActivityWithSuccess:(BOOL)aitems:(id)berror:(id)c;
 - (BOOL) performActivityForStateRestoration;
 - (void) _cleanupActivityWithSuccess:(BOOL)a;
 - (BOOL) showKeyboardAutomatically;
 - (id) mailAutosaveIdentifier;
 - (id) subject;
 - (void) _prepareActivity:(id)acompletion:(@?)b;
 - (void) setPerformActivityForStateRestoration:(BOOL)a;
 - (void) _addToActiveActivityViewControllers;
 - (void) set_popoverDismissalAction:(@?)a;
 - (void) _resetAfterActivity:(BOOL)a;
 - (void) _executeActivity;
 - (BOOL) useBlackPopoverStyle;
 - (@?) _popoverDismissalAction;
 - (id) activityItemProviderOperationQueue;
 - (id) activityAlertCancelAction;
 - (void) _changeActionButtonToDone;
 - (void) airDropActivityRequestingSharedItemsWithCompletionHandler:(@?)a;
 - (void) airDropActivityDidSuccessfullyCompleteTransfer;
 - (void) airDropActivityDidSuccessfullyStartTransfer;
 - (void) _updateActivityItems:(id)a;
 - (d) _displayHeight;
 - (void) _mailAutosaveWithHandler:(@?)a;
 - (id) _titleForActivity:(id)a;
 - (void) _performActivityOfType:(id)a;
 - (@?) completionWithItemsHandler;
 - (void) setUseBlackPopoverStyle:(BOOL)a;
 - (void) setShowKeyboardAutomatically:(BOOL)a;
 - (void) setIncludedActivityTypes:(id)a;
 - (void) setExcludedActivityCategories:(q)a;
 - (void) setActivityTypeOrder:(id)a;
 - (void) setAllowsEmbedding:(BOOL)a;
 - (void) setMailAutosaveIdentifier:(id)a;
 - (@?) preCompletionHandler;
 - (id) airDropDelegate;
 - (void) setAirDropDelegate:(id)a;
 - (id) applicationActivities;
 - (void) setActivityGroupListViewController:(id)a;
 - (q) totalProviderCount;
 - (void) setTotalProviderCount:(q)a;
 - (q) completedProviderCount;
 - (void) setCompletedProviderCount:(q)a;
 - (q) originalPopoverBackgroundStyle;
 - (void) setOriginalPopoverBackgroundStyle:(q)a;
 - (Class) originalPopoverBackgroundViewClass;
 - (void) setOriginalPopoverBackgroundViewClass:(Class)a;
 - (void) setBackgroundTaskIdentifier:(Q)a;
 - (Q) backgroundTaskIdentifier;


@end