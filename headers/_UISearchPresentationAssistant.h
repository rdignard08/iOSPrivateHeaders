
@protocol UIDimmingViewDelegate;
@interface _UISearchPresentationAssistant : NSObject <UIDimmingViewDelegate> {

    @"UIPresentationController" _searchPresentationController;
    @"UIView" _searchBarContainerView;
    @"UIDimmingView" _dimmingView;
    BOOL _isFormSheetPresentation;
    BOOL _presentationWasAnimated;
    @"UIPresentationController<_UISearchControllerPresenting>" _adaptivePresentationController;
    @"<UIViewControllerTransitionCoordinator>" _transitioningToSizeCoordinator;
}
@property (nonatomic, assign, readwrite) NSNumber* presentationWasAnimated;
@property (nonatomic, assign, readwrite) NSNumber* adaptivePresentationController;
@property (nonatomic, retain, readwrite) NSNumber* transitioningToSizeCoordinator;

 - (void) dealloc;
 - (id) initWithSearchPresentationController:(id)a;
 - (void) setPresentationWasAnimated:(BOOL)a;
 - (void) ensureAppropriatelySizedSearchBar:(id)a;
 - (id) searchBarContainerView;
 - (BOOL) searchBarToBecomeTopAttached;
 - (d) statusBarAdjustment;
 - (id) dimmingView;
 - (void) setAdaptivePresentationController:(id)a;
 - (d) resultsControllerContentOffset;
 - (BOOL) shouldAccountForStatusBar;
 - (id) adaptivePresentationController;
 - (void) dimmingViewWasTapped:(id)a;
 - (BOOL) presentationIsPopoverToOverFullScreenAdaptation;
 - (id) _searchBarContainerSuperview;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) optimalFrameForSearchBar:(id)a;
 - (BOOL) _currentTransitionIsRotating;
 - (BOOL) searchBarWillResizeForScopeBar;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _containerFrame;
 - (BOOL) _statusBarPreferredHiddenForInterfaceOrientation:(q)a;
 - (id) locateNavigationController;
 - (d) _statusBarHeightChangeDueToRotation;
 - (BOOL) _statusBarPreferredHidden;
 - (void) removeContainerViewFromSuperview;
 - ({CGSize=dd}) updateSearchBarContainerFrame;
 - (BOOL) presentationWasAnimated;
 - (id) transitioningToSizeCoordinator;
 - (void) setTransitioningToSizeCoordinator:(id)a;


@end
