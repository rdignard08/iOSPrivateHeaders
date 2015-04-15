
@interface _UIWindowRotationAnimationController : _UIWindowAnimationController {

    BOOL _skipCallbacks;
    BOOL _updateStatusBarIfNecessary;
    @? _animations;
    d _duration;
}

 - (d) duration;
 - (@?) animations;
 - (void) setAnimations:(@?)a;
 - (void) dealloc;
 - (d) transitionDuration:(id)a;
 - (void) animateTransition:(id)a;
 - (BOOL) skipCallbacks;
 - (void) setSkipCallbacks:(BOOL)a;
 - (void) setUpdateStatusBarIfNecessary:(BOOL)a;
 - (BOOL) updateStatusBarIfNecessary;
 - (void) setDuration:(d)a;


@end
