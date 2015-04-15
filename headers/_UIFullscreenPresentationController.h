
@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController {

    UIView* _counterRotatedView;
    double _counterRotatedAngle;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _counterRotatedOriginalBounds;
    long long _originalOrientation;
    long long _computedOrientation;
}

 - (void) dealloc;
 - (long long) presentationStyle;
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
 - (void) _placeCounterRotationViewWithView:(id)ainWindow:(id)bfromOrientation:(long long)ctoOrientation:(long long)dforce:(BOOL)e;


@end
