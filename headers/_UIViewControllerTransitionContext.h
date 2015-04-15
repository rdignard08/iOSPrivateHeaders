
@protocol UIViewControllerContextTransitioningEx;
@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx> {

    double _previousPercentComplete;
    NSArray* _disabledViews;
    {?="interactorImplementsCompletionSpeed"b1"interactorImplementsCompletionCurve"b1"transitionWasCancelled"b1"transitionIsCompleting"b1} _transitionContextFlags;
    BOOL __allowUserInteraction;
    BOOL _rotating;
    BOOL _initiallyInteractive;
    BOOL _isCurrentlyInteractive;
    BOOL _isAnimated;
    BOOL __isPresentation;
    NSArray* __containerViews;
    double __percentOffset;
    <UIViewControllerAnimatedTransitioning>* __animator;
    <UIViewControllerInteractiveTransitioning>* __interactor;
    UIView* _containerView;
    @? __willCompleteHandler;
    @? __completionHandler;
    @? __didCompleteHandler;
    double __completionVelocity;
    long long __completionCurve;
    _UIViewControllerTransitionCoordinator* __auxContext;
    double __duration;
    long long __state;
    @? __interactiveUpdateHandler;
    @? __postInteractiveCompletionHandler;
    long long _presentationStyle;
}
@property (nonatomic, retain, readwrite, setter=_setContainerViews:) NSArray* _containerViews;
@property (nonatomic, assign, readwrite, setter=_setPercentOffset:) NSNumber* _percentOffset;
@property (nonatomic, assign, readwrite, setter=_setAnimator:) NSNumber* _animator;
@property (nonatomic, assign, readwrite, setter=_setInteractor:) NSNumber* _interactor;
@property (nonatomic, assign, readwrite, getter=_allowUserInteraction, setter=_setAllowUserInteraction:) NSNumber* _allowUserInteraction;
@property (nonatomic, assign, readwrite, getter=_isRotating, setter=_setRotating:) NSNumber* rotating;
@property (nonatomic, assign, readonly, getter=_affineTransform) NSNumber* affineTransform;
@property (nonatomic, assign, readwrite, setter=_setContainerView:) UIView* containerView;
@property (nonatomic, copy, readwrite, setter=_setWillCompleteHandler:) NSNumber* _willCompleteHandler;
@property (nonatomic, copy, readwrite, setter=_setCompletionHandler:) NSNumber* _completionHandler;
@property (nonatomic, copy, readwrite, setter=_setDidCompleteHandler:) NSNumber* _didCompleteHandler;
@property (nonatomic, assign, readwrite, setter=_setInitiallyInteractive:) NSNumber* initiallyInteractive;
@property (nonatomic, assign, readwrite, setter=_setIsCurrentlyInteractive:) NSNumber* isCurrentlyInteractive;
@property (nonatomic, assign, readwrite, setter=_setIsAnimated:) NSNumber* isAnimated;
@property (nonatomic, assign, readwrite, setter=_setCompletionVelocity:) NSNumber* _completionVelocity;
@property (nonatomic, assign, readwrite, setter=_setCompletionCurve:) NSNumber* _completionCurve;
@property (nonatomic, assign, readwrite, setter=_setTransitionIsCompleting:) NSNumber* _transitionIsCompleting;
@property (nonatomic, retain, readwrite, setter=_setAuxContext:) _UIViewControllerTransitionCoordinator* _auxContext;
@property (nonatomic, assign, readwrite, setter=_setDuration:) NSNumber* _duration;
@property (nonatomic, assign, readwrite, setter=_setState:) NSNumber* _state;
@property (nonatomic, copy, readwrite, setter=_setInteractiveUpdateHandler:) NSNumber* _interactiveUpdateHandler;
@property (nonatomic, copy, readwrite, setter=_setPostInteractiveCompletionHandler:) NSNumber* _postInteractiveCompletionHandler;
@property (nonatomic, assign, readwrite, setter=_setPresentationStyle:) NSNumber* presentationStyle;
@property (nonatomic, assign, readwrite, setter=_setIsPresentation:) NSNumber* _isPresentation;
 + (id) _associatedTransitionContextForObject:(id)a;

 - (void) dealloc;
 - (id) containerView;
 - (id) viewControllerForKey:(id)a ;
 - (id) viewForKey:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) initialFrameForViewController:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) finalFrameForViewController:(id)a ;
 - (BOOL) isInteractive;
 - (long long) _completionCurve;
 - (BOOL) _allowUserInteraction;
 - (BOOL) transitionWasCancelled;
 - (void) completeTransition:(BOOL)a ;
 - (void) cancelInteractiveTransition;
 - (void) finishInteractiveTransition;
 - (void) updateInteractiveTransition:(double)a ;
 - (double) _duration;
 - (long long) presentationStyle;
 - (BOOL) isAnimated;
 - (id) _transitionCoordinator;
 - (void) _setCompletionHandler:(@?)a ;
 - (void) _setDidCompleteHandler:(@?)a ;
 - (void) _setIsAnimated:(BOOL)a ;
 - (void) _setContainerView:(id)a ;
 - (void) _setCompletionCurve:(long long)a ;
 - (void) _setAnimator:(id)a ;
 - (id) _animator;
 - (void) _setRotating:(BOOL)a ;
 - (void) _enableInteractionForDisabledViews;
 - (BOOL) _isPresentation;
 - (void) _setInteractor:(id)a ;
 - (void) _setPresentationStyle:(long long)a ;
 - (@?) _postInteractiveCompletionHandler;
 - (void) _setPostInteractiveCompletionHandler:(@?)a ;
 - (void) _setTransitionIsInFlight:(BOOL)a ;
 - (void) _setInteractiveUpdateHandler:(@?)a ;
 - (void) _setTransitionIsCompleting:(BOOL)a ;
 - (id) _auxContext;
 - (void) __runAlongsideAnimations;
 - (void) _setAllowUserInteraction:(BOOL)a ;
 - (void) _disableInteractionForViews:(id)a ;
 - (double) _completionVelocity;
 - (id) _interactor;
 - (@?) _willCompleteHandler;
 - (void) _setWillCompleteHandler:(@?)a ;
 - (BOOL) initiallyInteractive;
 - (@?) _completionHandler;
 - (void) _setIsPresentation:(BOOL)a ;
 - (id) _containerViews;
 - ({CGAffineTransform=dddddd}) targetTransform;
 - (BOOL) _isRotating;
 - (BOOL) _transitionIsInFlight;
 - (void) _setAuxContext:(id)a ;
 - (void) _setInitiallyInteractive:(BOOL)a ;
 - (void) _setIsCurrentlyInteractive:(BOOL)a ;
 - ({CGAffineTransform=dddddd}) _affineTransform;
 - (BOOL) isCurrentlyInteractive;
 - (@?) _interactiveUpdateHandler;
 - (double) _percentOffset;
 - (void) _interactivityDidChange:(BOOL)a ;
 - (void) _runAlongsideCompletions;
 - (void) _setContainerViews:(id)a ;
 - (void) _setPercentOffset:(double)a ;
 - (double) _previousPercentComplete;
 - (void) _setPreviousPercentComplete:(double)a ;
 - (void) _updateInteractiveTransitionWithoutTrackingPercentComplete:(double)a ;
 - (BOOL) _transitionIsCompleting;
 - (@?) _didCompleteHandler;
 - (void) _setCompletionVelocity:(double)a ;
 - (id) init;
 - (void) _setState:(long long)a ;
 - (long long) _state;
 - (void) _setDuration:(double)a ;


@end
