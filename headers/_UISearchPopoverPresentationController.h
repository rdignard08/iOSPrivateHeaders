
@protocol _UISearchControllerPresenting;
@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting> {

    _UISearchPresentationAssistant* _assistant;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} finalFrameForContainerView;
}

 - (void) dealloc;
 - (void) _transitionToDidEnd;
 - (void) _transitionFromDidEnd;
 - (void) presentationTransitionWillBegin;
 - (void) _transitionFromWillBegin;
 - (void) _transitionToWillBegin;
 - (long long) adaptivePresentationStyle;
 - (id) initWithPresentedViewController:(id)apresentingViewController:(id)b;
 - (id) _presentationControllerForTraitCollection:(id)a;
 - (id) searchBarContainerView;
 - (BOOL) searchBarToBecomeTopAttached;
 - (double) statusBarAdjustment;
 - (void) setContentVisible:(BOOL)a;
 - (double) resultsControllerContentOffset;
 - (BOOL) shouldAccountForStatusBar;
 - (id) adaptivePresentationController;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) finalFrameForContainerView;
 - (id) _popoverHostingWindow;
 - (id) _presentedViewControllerForSizeClassPair:({?=qq})a;


@end
