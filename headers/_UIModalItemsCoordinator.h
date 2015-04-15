
@interface _UIModalItemsCoordinator : NSObject {

    NSMapTable* _presentingSessionsMapTable;
    NSMapTable* _sessionForItemMapTable;
    _UIModalItemSBViewController* __viewControllerForSBAlerts;
    _UIModalItemHostingWindow* __hostingWindowForSBAlerts;
    _UIModalItemAppViewController* __viewControllerForAlerts;
    _UIModalItemHostingWindow* __hostingWindowForAlerts;
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
 - (void) noteOrientationChangingTo:(long long)a animated:(BOOL)b ;
 - (BOOL) _notifyDelegateModalItem:(id)a tappedButtonAtIndex:(long long)b ;
 - (void) _dismissItem:(id)a withTappedButtonIndex:(long long)b animated:(BOOL)c notifyDelegate:(BOOL)d ;
 - (void) _notifyDelegateWillDismissItem:(id)a withIndex:(long long)b ;
 - (void) _notifyDelegateDidDismissItem:(id)a withIndex:(long long)b ;
 - (void) _notifyDelegateWillPresentItem:(id)a ;
 - (void) _notifyDelegateDidPresentItem:(id)a ;
 - (void) _updateItem:(id)a animated:(BOOL)b ;
 - (id) presentingViewControllerForItem:(id)a create:(BOOL)b ;
 - (void) _addItemToStack:(id)a replacingItem:(id)b forPresentingViewController:(id)c ;
 - (void) _presentItem:(id)a replacingItem:(id)b inViewController:(id)c animated:(BOOL)d ;
 - (id) _presentingViewControllerForSBCompatibility;
 - (id) _presentingViewControllerForAlertCompatibilityCreateIfNeeded:(BOOL)a ;
 - (void) _hideModalItemsForType:(long long)a presentingViewController:(id)b dimSpotlightView:(BOOL)c animated:(BOOL)d ;
 - (id) _viewControllerForSBAlerts;
 - (void) set_viewControllerForSBAlerts:(id)a ;
 - (void) set_hostingWindowForSBAlerts:(id)a ;
 - (id) _hostingWindowForSBAlerts;
 - (id) _viewControllerForAlerts;
 - (void) set_viewControllerForAlerts:(id)a ;
 - (void) set_hostingWindowForAlerts:(id)a ;
 - (id) _hostingWindowForAlerts;
 - (void) _getRidOfViewControllerForSBAlerts;
 - (void) _getRidOfViewControllerForAlerts;
 - (id) sessionForItemMapTable;
 - (id) presentingSessionsMapTable;
 - (void) _showNextModalItemIfNecessaryAfterHidingItem:(id)a showingItem:(id)b animate:(BOOL)c ;
 - (void) _notifyDissmissedItem:(id)a ;
 - (void) setPresentingSessionsMapTable:(id)a ;
 - (void) setSessionForItemMapTable:(id)a ;
 - (id) _presentingSessionForViewController:(id)a ofItemsType:(long long)b ;
 - (void) _showModalItemsForType:(long long)a presentingViewController:(id)b undimSpotlightView:(BOOL)c animated:(BOOL)d ;
 - (id) _presentingViewControllerForAlertCompatibility;
 - (id) _rootViewControllerForModalItem:(id)a ;
 - (id) hostingViewControllerForViewController:(id)a andModalItem:(id)b create:(BOOL)c ;
 - (void) _hidePresentingSessionForModalItem:(id)a keepDimmingView:(BOOL)b animated:(BOOL)c ;
 - (void) hideForSpringBoardAlert:(BOOL)a ;
 - (void) showAfterSpringBoardAlert:(BOOL)a ;
 - (id) init;


@end
