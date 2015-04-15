
@protocol _UISearchControllerPresenting;
@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting> {

    @"_UISearchPresentationAssistant" _assistant;
    @"UIView" _wrapperView;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} finalFrameForContainerView;
}

 - (void) dealloc;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameOfPresentedViewInContainerView;
 - (void) traitCollectionDidChange:(id)a;
 - (BOOL) shouldRemovePresentersView;
 - (BOOL) _shouldRespectDefinesPresentationContext;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameOfPresentedViewControllerViewInSuperview;
 - (id) presentedView;
 - (void) presentationTransitionDidEnd:(BOOL)a;
 - (void) dismissalTransitionDidEnd:(BOOL)a;
 - (void) _transitionToDidEnd;
 - (void) _transitionFromDidEnd;
 - (void) presentationTransitionWillBegin;
 - (void) dismissalTransitionWillBegin;
 - (void) _transitionFromWillBegin;
 - (void) _transitionToWillBegin;
 - (long long) adaptivePresentationStyle;
 - (id) initWithPresentedViewController:(id)apresentingViewController:(id)b;
 - (BOOL) _shouldKeepCurrentFirstResponder;
 - (void) _transitionToPresentationController:(id)awithTransitionCoordinator:(id)b;
 - (id) _presentationControllerForTraitCollection:(id)a;
 - (id) _presentedViewControllerForPresentationController:(id)atraitCollection:(id)b;
 - (id) searchBarContainerView;
 - (BOOL) searchBarToBecomeTopAttached;
 - (double) statusBarAdjustment;
 - (void) _presentedView:(id)aenableFormSheetAccoutrements:(BOOL)b;
 - (void) setContentVisible:(BOOL)a;
 - (BOOL) _shouldSubscribeToKeyboardNotifications;
 - (double) resultsControllerContentOffset;
 - (BOOL) shouldAccountForStatusBar;
 - (id) adaptivePresentationController;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) finalFrameForContainerView;


@end
