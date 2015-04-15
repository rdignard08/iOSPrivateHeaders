
@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {

    @"UIView" _counterRotatedView;
    d _counterRotatedAngle;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _counterRotatedOriginalBounds;
    q _originalOrientation;
    q _computedOrientation;
}

 - (void) dealloc;
 - (q) presentationStyle;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frameOfPresentedViewInContainerView;
 - (void) _setPresentedViewController:(id)a;
 - (BOOL) shouldRemovePresentersView;
 - (BOOL) shouldPresentInFullscreen;
 - (BOOL) _shouldRespectDefinesPresentationContext;
 - (void) _adjustOrientationIfNecessaryInWindow:(id)aforViewController:(id)bpreservingViewController:(id)c;
 - (void) transitionDidFinish:(BOOL)a;
 - (void) presentationTransitionDidEnd:(BOOL)a;
 - (void) dismissalTransitionDidEnd:(BOOL)a;
 - (void) _removeCounterRotation;
 - (BOOL) _invokesDelegatesOnOrientationChange;
 - (void) _placeCounterRotationViewWithView:(id)ainWindow:(id)bfromOrientation:(q)ctoOrientation:(q)dforce:(BOOL)e;


@end
