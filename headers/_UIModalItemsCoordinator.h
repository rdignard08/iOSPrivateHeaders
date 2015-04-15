
@interface _UIModalItemsCoordinator : NSObject {

    NSMapTable _presentingSessionsMapTable;
    NSMapTable _sessionForItemMapTable;
    _UIModalItemSBViewController __viewControllerForSBAlerts;
    _UIModalItemHostingWindow __hostingWindowForSBAlerts;
    _UIModalItemAppViewController __viewControllerForAlerts;
    _UIModalItemHostingWindow __hostingWindowForAlerts;
}
@property (nonatomic, retain, readwrite) NSMapTable* presentingSessionsMapTable;
@property (nonatomic, retain, readwrite) NSMapTable* sessionForItemMapTable;
@property (nonatomic, retain, readwrite) _UIModalItemSBViewController* _viewControllerForSBAlerts;
@property (nonatomic, retain, readwrite) _UIModalItemHostingWindow* _hostingWindowForSBAlerts;
@property (nonatomic, retain, readwrite) _UIModalItemAppViewController* _viewControllerForAlerts;
@property (nonatomic, retain, readwrite) _UIModalItemHostingWindow* _hostingWindowForAlerts;
 + (void) noteOrientationChangingTo:(long long)aanimated:(BOOL)b;
 + (id) sharedModalItemsCoordinator;
 + (void) _resaturateUIForSB;
 + (void) _desaturateUIForSB;
 + (void) _getRidOfViewControllerForSBAlerts;
 + (void) _getRidOfViewControllerForAlerts;

 - (void) dealloc;
 - (void) noteOrientationChangingTo:(long long)aanimated:(BOOL)b;
 - (BOOL) _notifyDelegateModalItem:(id)atappedButtonAtIndex:(long long)b;
 - (void) _dismissItem:(id)awithTappedButtonIndex:(long long)banimated:(BOOL)cnotifyDelegate:(BOOL)d;
 - (void) _notifyDelegateWillDismissItem:(id)awithIndex:(long long)b;
 - (void) _notifyDelegateDidDismissItem:(id)awithIndex:(long long)b;
 - (void) _notifyDelegateWillPresentItem:(id)a;
 - (void) _notifyDelegateDidPresentItem:(id)a;
 - (void) _updateItem:(id)aanimated:(BOOL)b;
 - (id) presentingViewControllerForItem:(id)acreate:(BOOL)b;
 - (void) _addItemToStack:(id)areplacingItem:(id)bforPresentingViewController:(id)c;
 - (void) _presentItem:(id)areplacingItem:(id)binViewController:(id)canimated:(BOOL)d;
 - (id) _presentingViewControllerForSBCompatibility;
 - (id) _presentingViewControllerForAlertCompatibilityCreateIfNeeded:(BOOL)a;
 - (void) _hideModalItemsForType:(long long)apresentingViewController:(id)bdimSpotlightView:(BOOL)canimated:(BOOL)d;
 - (id) _viewControllerForSBAlerts;
 - (void) set_viewControllerForSBAlerts:(id)a;
 - (void) set_hostingWindowForSBAlerts:(id)a;
 - (id) _hostingWindowForSBAlerts;
 - (id) _viewControllerForAlerts;
 - (void) set_viewControllerForAlerts:(id)a;
 - (void) set_hostingWindowForAlerts:(id)a;
 - (id) _hostingWindowForAlerts;
 - (void) _getRidOfViewControllerForSBAlerts;
 - (void) _getRidOfViewControllerForAlerts;
 - (id) sessionForItemMapTable;
 - (id) presentingSessionsMapTable;
 - (void) _showNextModalItemIfNecessaryAfterHidingItem:(id)ashowingItem:(id)banimate:(BOOL)c;
 - (void) _notifyDissmissedItem:(id)a;
 - (void) setPresentingSessionsMapTable:(id)a;
 - (void) setSessionForItemMapTable:(id)a;
 - (id) _presentingSessionForViewController:(id)aofItemsType:(long long)b;
 - (void) _showModalItemsForType:(long long)apresentingViewController:(id)bundimSpotlightView:(BOOL)canimated:(BOOL)d;
 - (id) _presentingViewControllerForAlertCompatibility;
 - (id) _rootViewControllerForModalItem:(id)a;
 - (id) hostingViewControllerForViewController:(id)aandModalItem:(id)bcreate:(BOOL)c;
 - (void) _hidePresentingSessionForModalItem:(id)akeepDimmingView:(BOOL)banimated:(BOOL)c;
 - (void) hideForSpringBoardAlert:(BOOL)a;
 - (void) showAfterSpringBoardAlert:(BOOL)a;
 - (id) init;


@end
