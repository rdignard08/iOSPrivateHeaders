
@interface _UIWindowRotationAnimationController : _UIWindowAnimationController {

    BOOL _skipCallbacks;
    BOOL _updateStatusBarIfNecessary;
    @? _animations;
    double _duration;
}

 - (double) duration;
 - (@?) animations;
 - (void) setAnimations:(@?)a;
 - (void) dealloc;
 - (double) transitionDuration:(id)a;
 - (void) animateTransition:(id)a;
 - (BOOL) skipCallbacks;
 - (void) setSkipCallbacks:(BOOL)a;
 - (void) setUpdateStatusBarIfNecessary:(BOOL)a;
 - (BOOL) updateStatusBarIfNecessary;
 - (void) setDuration:(double)a;


@end
