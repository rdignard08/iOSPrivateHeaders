
@protocol UIAdaptivePresentationControllerDelegate;
@interface _UIAlertControllerPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate> {

    UIView* _dimmingView;
    _UIKeyboardLayoutAlignmentView* keyboardLayoutAlignmentView;
    UIView* keyboardLayoutAlignmentAvailableSpaceView;
    BOOL constraintsPrepared;
    BOOL _chromeHidden;
    BOOL __isCurrentContext;
    BOOL __shouldRespectNearestCurrentContextPresenter;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameOfPresentedViewInContainerView;
 - (void) _containerViewWillLayoutSubviews;
 - (BOOL) shouldRemovePresentersView;
 - (BOOL) shouldPresentInFullscreen;
 - (BOOL) _shouldRespectDefinesPresentationContext;
 - (id) presentedView;
 - (void) presentationTransitionDidEnd:(BOOL)a;
 - (void) presentationTransitionWillBegin;
 - (void) dismissalTransitionWillBegin;
 - (void) containerViewWillLayoutSubviews;
 - (long long) adaptivePresentationStyleForPresentationController:(id)a;
 - (long long) adaptivePresentationStyle;
 - (id) initWithPresentedViewController:(id)apresentingViewController:(id)b;
 - (id) presentationController:(id)aviewControllerForAdaptivePresentationStyle:(long long)b;
 - (BOOL) _shouldChangeStatusBarViewController;
 - (BOOL) _preserveResponderAcrossWindows;
 - (id) _dimmingView;
 - (void) _prepareConstraintsIfNecessary;
 - (BOOL) _isCurrentContext;
 - (BOOL) _shouldRespectNearestCurrentContextPresenter;
 - (void) _prepareDimmingViewIfNecessary;
 - (void) _occludePresentingWindow:(BOOL)a;
 - (id) _presentedAlertController;
 - (long long) attributeToAlignAlertControllerViewBy;
 - (double) constantForAligningAlertControllerToAvailableSpace;
 - (void) _setChromeHidden:(BOOL)a;
 - (BOOL) _isChromeHidden;
 - (void) _setIsCurrentContext:(BOOL)a;
 - (void) _setShouldRespectNearestCurrentContextPresenter:(BOOL)a;


@end
