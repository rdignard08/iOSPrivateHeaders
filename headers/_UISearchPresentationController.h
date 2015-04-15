
@protocol _UISearchControllerPresenting;
@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting> {

    _UISearchPresentationAssistant _assistant;
    UIView _placeholderView;
    NSMapTable _excisedSearchBarConstraitMap;
    NSMapTable _placeholderConstraitMap;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _finalFrameForContainerView;
    {?="searchBarWasTableHeaderView"b1"excisedSearchBarDuringPresentation"b1"searchBarWantedAutolayoutBeforeExcision"b1} _controllerFlags;
}
 + (BOOL) shouldExciseSearchBar:(id)aduringPresentationWithPresenter:(id)b;

 - (void) dealloc;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameOfPresentedViewInContainerView;
 - (BOOL) shouldRemovePresentersView;
 - (BOOL) shouldPresentInFullscreen;
 - (BOOL) _shouldRespectDefinesPresentationContext;
 - (void) presentationTransitionDidEnd:(BOOL)a;
 - (void) dismissalTransitionDidEnd:(BOOL)a;
 - (void) _transitionToDidEnd;
 - (void) _transitionFromDidEnd;
 - (void) presentationTransitionWillBegin;
 - (void) dismissalTransitionWillBegin;
 - (void) _transitionFromWillBegin;
 - (void) _transitionToWillBegin;
 - (void) viewWillTransitionToSize:({CGSize=dd})awithTransitionCoordinator:(id)b;
 - (long long) adaptivePresentationStyle;
 - (id) initWithPresentedViewController:(id)apresentingViewController:(id)b;
 - (BOOL) _shouldKeepCurrentFirstResponder;
 - (void) _transitionToPresentationController:(id)awithTransitionCoordinator:(id)b;
 - (id) _presentationControllerForTraitCollection:(id)a;
 - (id) _presentedViewControllerForPresentationController:(id)atraitCollection:(id)b;
 - (id) searchBarContainerView;
 - (BOOL) searchBarToBecomeTopAttached;
 - (double) statusBarAdjustment;
 - (void) setContentVisible:(BOOL)a;
 - (double) resultsControllerContentOffset;
 - (BOOL) shouldAccountForStatusBar;
 - (id) adaptivePresentationController;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) finalFrameForContainerView;
 - (double) _visibleRefreshControlHeightForTableView:(id)a;
 - (void) _exciseSearchBarFromCurrentContext;
 - (void) _updateContainerFinalFrameForNonExcisedSearchBar;
 - (void) _updatePresentingViewControllerContentScrollViewWithOffsets:({CGSize=dd})atransitionCoordinator:(id)b;
 - (void) _placeSearchBarBackIntoOriginalContext;


@end
