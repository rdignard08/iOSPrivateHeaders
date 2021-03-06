
@protocol NSCoding;
@interface UITransitionView : UIView <NSCoding> {

    UIView* _fromView;
    UIView* _toView;
    NSMutableArray* _frozenSubviews;
    UIResponder* _firstResponderToRemember;
    id _delegate;
    UIWindow* _originalWindow;
    {?="animationInProgress"b1"ignoresInteractionEvents"b1"shouldNotifyDidCompleteImmediately"b1"useViewControllerAppearanceCallbacks"b1"shouldRestoreFromViewAlpha"b1"shouldRasterize"b1"enableRotationAfterTransition"b1"removeFromView"b1} _transitionViewFlags;
    double _curlUpRevealedHeight;
    BOOL _ignoreDirectTouchEvents;
    long long _animationTimingCurve;
}
 + (double) defaultDurationForTransition:(int)a;

 - (void) dealloc;
 - (void) setDelegate:(id)a ;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (void) setIgnoresInteractionEvents:(BOOL)a ;
 - (BOOL) ignoresInteractionEvents;
 - (void) setAnimationTimingCurve:(long long)a ;
 - (double) durationForTransition:(int)a ;
 - (BOOL) shouldNotifyDidCompleteImmediately;
 - (void) notifyDidCompleteTransition:(id)a ;
 - (BOOL) transition:(int)a fromView:(id)b toView:(id)c ;
 - (BOOL) transition:(int)a fromView:(id)b toView:(id)c removeFromView:(BOOL)d ;
 - (void) _didStartTransition;
 - (BOOL) rasterizesOnTransition;
 - (void) _startTransition:(int)a withDuration:(double)b ;
 - (void) _didCompleteTransition:(BOOL)a ;
 - (BOOL) isTransitioning;
 - (void) _transitionDidStop:(id)a finished:(id)b ;
 - (void) setShouldNotifyDidCompleteImmediately:(BOOL)a ;
 - (BOOL) transition:(int)a toView:(id)b ;
 - (id) fromView;
 - (id) toView;
 - (BOOL) _isTransitioningFromFromView:(id)a ;
 - (void) setRasterizesOnTransition:(BOOL)a ;
 - (long long) animationTimingCurve;
 - (BOOL) ignoreDirectTouchEvents;
 - (void) setIgnoreDirectTouchEvents:(BOOL)a ;
 - (double) _curlUpRevealedHeight;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;


@end
