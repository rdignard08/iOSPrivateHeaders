
@protocol _UIScrollNotification;
@interface UISearchDisplayController : NSObject <_UIScrollNotification> {

    @"UIViewController" _viewController;
    @"UITableView" _tableView;
    @"UIView" _dimmingView;
    @"UISearchBar" _searchBar;
    @"UILabel" _noResultsLabel;
    @"NSString" _noResultsMessage;
    @"NSString" _resultsTitle;
    @"<UISearchDisplayDelegate>" _delegate;
    @"<UITableViewDataSource>" _tableViewDataSource;
    @"<UITableViewDelegate>" _tableViewDelegate;
    ^{__CFArray=} _containingScrollViews;
    double _lastKeyboardAdjustment;
    double _lastFooterAdjustment;
    @"UIPopoverController" _popoverController;
    long long _searchResultsTableViewStyle;
    id _navigationControllerBookkeeper;
    @"NSArray" _savedSelectedCellsWhenViewWillAppear;
    @"UIScrollView" _savedContainingScrollView;
    @"UISearchDisplayControllerContainerView" _containerView;
    unsigned long long _savedSearchBarResizingMask;
    @"UINavigationItem" _navigationItem;
    {CGPoint="x"d"y"d} _containingScrollViewContentOffset;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _searchFieldInNavigationBarFrame;
    @"_UINavigationControllerPalette" _attachedNavigationPalette;
    @"UIButton" _animatingAppearanceNavigationButton;
    double _animatingAppearanceNavigationSearchBarWidth;
    @"UIColor" _dimmingOverlayColor;
    @"UIView" _tableViewBackgroundHeaderView;
    long long _unactivatedBarPosition;
    @"_UISearchControllerDidScrollDelegate" _didScrollDelegate;
    {?="visible"b1"animating"b1"hidIndexBar"b1"hidNavigationBar"b1"noResultsMessageVisible"b1"noResultsMessageAutoDisplay"b1"navigationBarHidingEnabled"b1"dimTableViewOnEmptySearchString"b1"isRotatingWithPopover"b1"cancelButtonManagementDisabled"b1"allowDisablingNavigationBarHiding"b1"showsResultsForEmptyField"b1"searchBarCanBeHoisted"b1"animatingSearchResultsDisappearance"b1"navigationBarShadowWasHidden"b1"hoistingSearchBar"b1} _searchDisplayControllerFlags;
    BOOL _displaysSearchBarInNavigationBar;
    unsigned long long _navigationBarSearchFieldSizing;
    double __activationGapHeight;
    double __additionalNonCollapsingHeightAboveSearchBar;
}
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readwrite, isActive) NSNumber* active;
@property (nonatomic, assign, readonly) UISearchBar* searchBar;
@property (nonatomic, assign, readonly) UIViewController* searchContentsController;
@property (nonatomic, assign, readonly) UITableView* searchResultsTableView;
@property (nonatomic, assign, readwrite) NSNumber* searchResultsDataSource;
@property (nonatomic, assign, readwrite) NSNumber* searchResultsDelegate;
@property (nonatomic, copy, readwrite) NSString* searchResultsTitle;
@property (nonatomic, assign, readwrite) NSNumber* displaysSearchBarInNavigationBar;
@property (nonatomic, assign, readonly) UINavigationItem* navigationItem;
@property (nonatomic, assign, readwrite) NSNumber* noResultsMessageVisible;
@property (nonatomic, assign, readwrite) NSNumber* automaticallyShowsNoResultsMessage;
@property (nonatomic, copy, readwrite) NSString* noResultsMessage;
@property (nonatomic, assign, readwrite, isNavigationBarHidingEnabled) NSNumber* navigationBarHidingEnabled;
@property (nonatomic, assign, readwrite) NSNumber* dimTableViewOnEmptySearchString;
@property (nonatomic, assign, readwrite, _isCancelButtonManagementDisabled, _setCancelButtonManagementDisabled:) NSNumber* cancelButtonManagementDisabled;
@property (nonatomic, assign, readwrite) NSNumber* navigationBarSearchFieldSizing;
@property (nonatomic, assign, readwrite) NSNumber* _activationGapHeight;
@property (nonatomic, assign, readwrite) NSNumber* _additionalNonCollapsingHeightAboveSearchBar;

 - (BOOL) isActive;
 - (void) setActive:(BOOL)a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) navigationItem;
 - (void) _updateBackdropMaskViewsInScrollView:(id)a;
 - (void) _didScroll;
 - (id) _containerView;
 - (void) _clearViewController;
 - (BOOL) hidNavigationBar;
 - (BOOL) displaysSearchBarInNavigationBar;
 - (void) _keyboardWillShow:(id)a;
 - (void) _keyboardWillHide:(id)a;
 - (id) searchBar;
 - (id) _dimmingViewColor;
 - (id) _topShadowView;
 - (id) searchContentsController;
 - (void) _updateSearchBarMaskIfNecessary;
 - (void) _searchBarSuperviewWillChange;
 - (void) _searchBarSuperviewChanged;
 - (void) searchBar:(id)atextDidChange:(id)b;
 - (unsigned long long) navigationBarSearchFieldSizing;
 - (void) searchBar:(id)aselectedScopeButtonIndexDidChange:(long long)b;
 - (void) _animateNavigationBarSearchBarAppearance:(id)a;
 - (BOOL) _searchBarShouldScrollToVisible:(id)a;
 - (void) searchBarCancelButtonClicked:(id)a;
 - (void) searchBarResultsListButtonClicked:(id)a;
 - (void) searchBarTextDidBeginEditing:(id)a;
 - (void) searchBarSearchButtonClicked:(id)a;
 - (void) _managedTableViewDidScroll;
 - (void) _updateNoSearchResultsMessageVisiblity;
 - (id) initWithSearchBar:(id)acontentsController:(id)b;
 - (id) initWithSearchBar:(id)acontentsController:(id)bsearchResultsTableViewStyle:(long long)c;
 - (void) _configureNewSearchBar;
 - (void) _destroyManagedTableView;
 - (id) _containingTableView;
 - (void) _updateTableHeaderBackgroundViewInTableView:(id)aamountScrolledUnder:(double)b;
 - (void) _indexBarFrameChanged:(id)a;
 - (void) _watchContainingTableViewForScrolling:(BOOL)a;
 - (BOOL) _areSearchContentsSplitViewMaster;
 - (void) windowWillAnimateRotation:(id)a;
 - (void) windowDidRotate:(id)a;
 - (void) _configureSearchBarForTableView;
 - (id) noResultsMessage;
 - (BOOL) isNavigationBarHidingEnabled;
 - (id) _containingViewOfClass:(Class)a;
 - (void) setActive:(BOOL)aanimated:(BOOL)b;
 - (id) searchResultsTableView;
 - (id) searchResultsTitle;
 - (void) _popoverClearButtonPressed:(id)a;
 - (BOOL) _searchBarInNavigationControllerComponent;
 - (BOOL) _shouldAccountForStatusBarHeight;
 - (double) _statusBarHeight;
 - ({UIEdgeInsets=dddd}) _tableViewContentInsets;
 - (double) _additionalNonCollapsingHeightAboveSearchBar;
 - (BOOL) _isSearchBarInBar;
 - (void) _adjustTableViewContentInsetsAndOffsetsIgnoringCurrent:(BOOL)a;
 - (id) _createPopoverController;
 - (BOOL) dimTableViewOnEmptySearchString;
 - (void) _cleanUpSearchBar;
 - (void) navigationControllerWillShowViewController:(id)a;
 - (id) _dimmingOverlayColor;
 - (BOOL) _showsResultsForEmptyField;
 - (void) _hoistSearchBar;
 - (void) _setTableViewVisible:(BOOL)ainView:(id)b;
 - (void) _sendDelegateDidBeginDidEndSearch;
 - (void) _popoverKeyboardDidShow:(id)a;
 - (void) _popoverKeyboardDidHide:(id)a;
 - (void) navigationControllerDidShowViewController:(id)a;
 - (void) navigationControllerDidCancelShowingViewController:(id)a;
 - (void) _hideVisibleRefreshControl;
 - (void) _disableParentScrollViews;
 - (void) _enableParentScrollViews;
 - (BOOL) _containedInPopover;
 - (double) _dimmingViewAlpha;
 - (void) set_additionalNonCollapsingHeightAboveSearchBar:(double)a;
 - (void) showHideAnimationDidFinish;
 - (void) _updatePinnedSearchBar;
 - (double) _updateNavigationPalette;
 - (void) _clearSavedSelectedCellsWeUsedWhenHedgingOurBets;
 - (void) _saveSelectedRowsInCaseViewDoesNotReallyAppear;
 - (void) _restoreSelectedCellsInCaseViewDidNotReallyAppear;
 - (void) _setupNoResultsLabelIfNecessary;
 - (void) _configureContainerView;
 - (void) setSearchBar:(id)a;
 - (void) setSearchContentsController:(id)a;
 - (void) popoverController:(id)aanimationCompleted:(long long)b;
 - (BOOL) popoverControllerShouldDismissPopover:(id)a;
 - (void) setSearchResultsDataSource:(id)a;
 - (void) setSearchResultsDelegate:(id)a;
 - (void) setNoResultsMessageVisible:(BOOL)a;
 - (BOOL) noResultsMessageVisible;
 - (void) setAutomaticallyShowsNoResultsMessage:(BOOL)a;
 - (BOOL) automaticallyShowsNoResultsMessage;
 - (void) setNoResultsMessage:(id)a;
 - (void) setNavigationBarHidingEnabled:(BOOL)a;
 - (void) _setAllowDisablingNavigationBarHiding:(BOOL)a;
 - (BOOL) _allowDisablingNavigationBarHiding;
 - (void) setDimTableViewOnEmptySearchString:(BOOL)a;
 - (BOOL) _isCancelButtonManagementDisabled;
 - (void) _setCancelButtonManagementDisabled:(BOOL)a;
 - (id) _noResultsMessageLabel;
 - (void) _setShowsResultsForEmptyField:(BOOL)a;
 - (void) setNavigationBarSearchFieldSizing:(unsigned long long)a;
 - (void) _setDimmingOverlayColor:(id)a;
 - (id) searchResultsDataSource;
 - (id) searchResultsDelegate;
 - (void) setSearchResultsTitle:(id)a;
 - (void) setDisplaysSearchBarInNavigationBar:(BOOL)a;
 - (double) _activationGapHeight;
 - (void) set_activationGapHeight:(double)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;


@end
