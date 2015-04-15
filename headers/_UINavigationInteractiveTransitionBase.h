
@protocol UIGestureRecognizerDelegate;
@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate> {

    @"UIView" _gestureRecognizerView;
    @"UIPanGestureRecognizer" _gestureRecognizer;
    q __interactionState;
    BOOL __transitionWasStopped;
    BOOL __stoppedTransitionWasCancelled;
    @"UIViewController" __parent;
    BOOL __useAugmentedShouldPopDecisionProcedure;
    BOOL __completesTransitionOnEnd;
    @"CADisplayLink" _displayLink;
    [3d] _timestamps;
    [3d] _velocities;
    [3d] _accelerations;
    BOOL _shouldReverseTranslation;
    BOOL _springAnimationIsPending;
    BOOL _inSpringAnimation;
    @"_UINavigationParallaxTransition" _animationController;
    @"<_UINavigationInteractiveTransitionBaseDelegate>" _delegate;
    Q _sampleCount;
    d _totalDistance;
    d _skipTimeStamp;
    d _previousTimeStamp;
    d _previousDisplacement;
    d _previousVelocity;
    d _previousAcceleration;
    d _averageVelocity;
    d _averageAcceleration;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) _resetInteractionController;
 - (void) _setInteractionState:(q)a;
 - (void) _setCompletesTransitionOnEnd:(BOOL)a;
 - (void) setAnimationController:(id)a;
 - (void) handleNavigationTransition:(id)a;
 - (void) setGestureRecognizer:(id)a;
 - (id) gestureRecognizer;
 - (id) gestureRecognizerView;
 - (void) cancelInteractiveTransition;
 - (void) finishInteractiveTransition;
 - (void) _stopInteractiveTransition;
 - (void) startInteractiveTransition:(id)a;
 - (void) startInteractiveTransition;
 - (id) animationController;
 - (void) _updateStatistics:(id)afirstSample:(BOOL)bfinalSample:(BOOL)c;
 - (BOOL) springAnimationIsPending;
 - (BOOL) popGesture:(id)awithRemainingDuration:(d)bshouldPopWithVelocity:(^d)c;
 - (BOOL) _completesTransitionOnEnd;
 - (void) setNotInteractiveTransition;
 - (BOOL) gestureRecognizerShouldBegin:(id)a;
 - (BOOL) gestureRecognizer:(id)ashouldRecognizeSimultaneouslyWithGestureRecognizer:(id)b;
 - (BOOL) gestureRecognizer:(id)ashouldReceiveTouch:(id)b;
 - (id) initWithGestureRecognizerView:(id)aanimator:(id)bdelegate:(id)c;
 - (id) _navigationGesture;
 - (void) _completeStoppedInteractiveTransition;
 - (BOOL) _gestureRecognizer:(id)ashouldBeRequiredToFailByGestureRecognizer:(id)b;
 - (BOOL) shouldReverseTranslation;
 - (void) setShouldReverseTranslation:(BOOL)a;
 - (q) _interactionState;
 - (BOOL) _transitionWasStopped;
 - (void) _setTransitionWasStopped:(BOOL)a;
 - (BOOL) _stoppedTransitionWasCancelled;
 - (void) _setStoppedTransitionWasCancelled:(BOOL)a;
 - (id) _parent;
 - (void) _setParent:(id)a;
 - (BOOL) _useAugmentedShouldPopDecisionProcedure;
 - (void) _setUseAugmentedShouldPopDecisionProcedure:(BOOL)a;
 - (void) setSpringAnimationIsPending:(BOOL)a;
 - (BOOL) inSpringAnimation;
 - (void) setInSpringAnimation:(BOOL)a;
 - (Q) sampleCount;
 - (void) setSampleCount:(Q)a;
 - (d) totalDistance;
 - (void) setTotalDistance:(d)a;
 - (d) skipTimeStamp;
 - (void) setSkipTimeStamp:(d)a;
 - (d) previousTimeStamp;
 - (void) setPreviousTimeStamp:(d)a;
 - (d) previousDisplacement;
 - (void) setPreviousDisplacement:(d)a;
 - (d) previousVelocity;
 - (void) setPreviousVelocity:(d)a;
 - (d) previousAcceleration;
 - (void) setPreviousAcceleration:(d)a;
 - (d) averageVelocity;
 - (void) setAverageVelocity:(d)a;
 - (d) averageAcceleration;
 - (void) setAverageAcceleration:(d)a;
 - (id) delegate;


@end
