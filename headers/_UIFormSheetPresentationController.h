
@interface _UIFormSheetPresentationController : UIPresentationController {

    UIDimmingView* _dimmingView;
    UIDropShadowView* _dropShadowView;
    BOOL _layoutStateShouldAvoidKeyboard;
}

 - (double) _dropShadowCornerRadius;
 - (long long) presentationStyle;
 - (unsigned long long) dropShadowAutoresizingMask;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameOfPresentedViewInContainerView;
 - (BOOL) _shouldHideBottomCorner;
 - (BOOL) shouldSubscribeToKeyboardNotifications;
 - (BOOL) _presentationPotentiallyUnderlapsStatusBar;
 - (void) containerViewDidLayoutSubviews;
 - (BOOL) shouldRemovePresentersView;
 - (BOOL) shouldPresentInFullscreen;
 - (id) _presentationView;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _frameOfPresentedViewControllerViewInSuperview;
 - (BOOL) _shouldOccludeDuringPresentation;
 - (id) presentedView;
 - (void) presentationTransitionDidEnd:(BOOL)a;
 - (void) dismissalTransitionDidEnd:(BOOL)a;
 - (void) _transitionToDidEnd;
 - (void) _transitionFromDidEnd;
 - (void) presentationTransitionWillBegin;
 - (void) dismissalTransitionWillBegin;
 - (void) _transitionFromWillBegin;
 - (void) _transitionToWillBegin;
 - (void) containerViewWillLayoutSubviews;
 - (long long) _defaultPresentationStyleForTraitCollection:(id)a;
 - ({CGSize=dd}) sizeForChildContentContainer:(id)awithParentContainerSize:({CGSize=dd})b;
 - (id) initWithPresentedViewController:(id)apresentingViewController:(id)b;
 - (BOOL) _shouldChangeStatusBarViewController;
 - (void) _keyboardWillShow:(id)a;
 - (void) _keyboardWillHide:(id)a;
 - (void) _changeLayoutModeToAvoidKeyboard:(BOOL)a;


@end
