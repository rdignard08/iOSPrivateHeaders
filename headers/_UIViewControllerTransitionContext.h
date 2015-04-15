
@protocol UIViewControllerContextTransitioningEx;
@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx> {

    d _previousPercentComplete;
    @"NSArray" _disabledViews;
    {?="interactorImplementsCompletionSpeed"b1"interactorImplementsCompletionCurve"b1"transitionWasCancelled"b1"transitionIsCompleting"b1} _transitionContextFlags;
    BOOL __allowUserInteraction;
    BOOL _rotating;
    BOOL _initiallyInteractive;
    BOOL _isCurrentlyInteractive;
    BOOL _isAnimated;
    BOOL __isPresentation;
    @"NSArray" __containerViews;
    d __percentOffset;
    @"<UIViewControllerAnimatedTransitioning>" __animator;
    @"<UIViewControllerInteractiveTransitioning>" __interactor;
    @"UIView" _containerView;
    @? __willCompleteHandler;
    @? __completionHandler;
    @? __didCompleteHandler;
    d __completionVelocity;
    q __completionCurve;
    @"_UIViewControllerTransitionCoordinator" __auxContext;
    d __duration;
    q __state;
    @? __interactiveUpdateHandler;
    @? __postInteractiveCompletionHandler;
    q _presentationStyle;
}
@property (nonatomic, retain, readwrite, _setContainerViews:) NSArray* _containerViews;
@property (nonatomic, assign, readwrite, _setPercentOffset:) NSNumber* _percentOffset;
@property (nonatomic, assign, readwrite, _setAnimator:) NSNumber* _animator;
@property (nonatomic, assign, readwrite, _setInteractor:) NSNumber* _interactor;
@property (nonatomic, assign, readwrite, _allowUserInteraction, _setAllowUserInteraction:) NSNumber* _allowUserInteraction;
@property (nonatomic, assign, readwrite, _isRotating, _setRotating:) NSNumber* rotating;
@property (nonatomic, assign, readonly, _affineTransform) NSNumber* affineTransform;
@property (nonatomic, assign, readwrite, _setContainerView:) UIView* containerView;
@property (nonatomic, copy, readwrite, _setWillCompleteHandler:) NSNumber* _willCompleteHandler;
@property (nonatomic, copy, readwrite, _setCompletionHandler:) NSNumber* _completionHandler;
@property (nonatomic, copy, readwrite, _setDidCompleteHandler:) NSNumber* _didCompleteHandler;
@property (nonatomic, assign, readwrite, _setInitiallyInteractive:) NSNumber* initiallyInteractive;
@property (nonatomic, assign, readwrite, _setIsCurrentlyInteractive:) NSNumber* isCurrentlyInteractive;
@property (nonatomic, assign, readwrite, _setIsAnimated:) NSNumber* isAnimated;
@property (nonatomic, assign, readwrite, _setCompletionVelocity:) NSNumber* _completionVelocity;
@property (nonatomic, assign, readwrite, _setCompletionCurve:) NSNumber* _completionCurve;
@property (nonatomic, assign, readwrite, _setTransitionIsCompleting:) NSNumber* _transitionIsCompleting;
@property (nonatomic, retain, readwrite, _setAuxContext:) _UIViewControllerTransitionCoordinator* _auxContext;
@property (nonatomic, assign, readwrite, _setDuration:) NSNumber* _duration;
@property (nonatomic, assign, readwrite, _setState:) NSNumber* _state;
@property (nonatomic, copy, readwrite, _setInteractiveUpdateHandler:) NSNumber* _interactiveUpdateHandler;
@property (nonatomic, copy, readwrite, _setPostInteractiveCompletionHandler:) NSNumber* _postInteractiveCompletionHandler;
@property (nonatomic, assign, readwrite, _setPresentationStyle:) NSNumber* presentationStyle;
@property (nonatomic, assign, readwrite, _setIsPresentation:) NSNumber* _isPresentation;
 + (id) _associatedTransitionContextForObject:(id)a;

 - (void) dealloc;
 - (id) containerView;
 - (id) viewControllerForKey:(id)a;
 - (id) viewForKey:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) initialFrameForViewController:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) finalFrameForViewController:(id)a;
 - (BOOL) isInteractive;
 - (q) _completionCurve;
 - (BOOL) _allowUserInteraction;
 - (BOOL) transitionWasCancelled;
 - (void) completeTransition:(BOOL)a;
 - (void) cancelInteractiveTransition;
 - (void) finishInteractiveTransition;
 - (void) updateInteractiveTransition:(d)a;
 - (d) _duration;
 - (q) presentationStyle;
 - (BOOL) isAnimated;
 - (id) _transitionCoordinator;
 - (void) _setCompletionHandler:(@?)a;
 - (void) _setDidCompleteHandler:(@?)a;
 - (void) _setIsAnimated:(BOOL)a;
 - (void) _setContainerView:(id)a;
 - (void) _setCompletionCurve:(q)a;
 - (void) _setAnimator:(id)a;
 - (id) _animator;
 - (void) _setRotating:(BOOL)a;
 - (void) _enableInteractionForDisabledViews;
 - (BOOL) _isPresentation;
 - (void) _setInteractor:(id)a;
 - (void) _setPresentationStyle:(q)a;
 - (@?) _postInteractiveCompletionHandler;
 - (void) _setPostInteractiveCompletionHandler:(@?)a;
 - (void) _setTransitionIsInFlight:(BOOL)a;
 - (void) _setInteractiveUpdateHandler:(@?)a;
 - (void) _setTransitionIsCompleting:(BOOL)a;
 - (id) _auxContext;
 - (void) __runAlongsideAnimations;
 - (void) _setAllowUserInteraction:(BOOL)a;
 - (void) _disableInteractionForViews:(id)a;
 - (d) _completionVelocity;
 - (id) _interactor;
 - (@?) _willCompleteHandler;
 - (void) _setWillCompleteHandler:(@?)a;
 - (BOOL) initiallyInteractive;
 - (@?) _completionHandler;
 - (void) _setIsPresentation:(BOOL)a;
 - (id) _containerViews;
 - ({CGAffineTransform=dddddd}) targetTransform;
 - (BOOL) _isRotating;
 - (BOOL) _transitionIsInFlight;
 - (void) _setAuxContext:(id)a;
 - (void) _setInitiallyInteractive:(BOOL)a;
 - (void) _setIsCurrentlyInteractive:(BOOL)a;
 - ({CGAffineTransform=dddddd}) _affineTransform;
 - (BOOL) isCurrentlyInteractive;
 - (@?) _interactiveUpdateHandler;
 - (d) _percentOffset;
 - (void) _interactivityDidChange:(BOOL)a;
 - (void) _runAlongsideCompletions;
 - (void) _setContainerViews:(id)a;
 - (void) _setPercentOffset:(d)a;
 - (d) _previousPercentComplete;
 - (void) _setPreviousPercentComplete:(d)a;
 - (void) _updateInteractiveTransitionWithoutTrackingPercentComplete:(d)a;
 - (BOOL) _transitionIsCompleting;
 - (@?) _didCompleteHandler;
 - (void) _setCompletionVelocity:(d)a;
 - (id) init;
 - (void) _setState:(q)a;
 - (q) _state;
 - (void) _setDuration:(d)a;


@end
