
@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {

    @? _applier;
    @"NSMutableArray" _animations;
    @"NSMutableArray" _runningAnimations;
}

 - (id) animations;
 - (void) setAnimations:(id)a;
 - (void) dealloc;
 - (void) runWithGroupApplier:(@?)acompletion:(@?)b;
 - (void) runWithGroupApplier:(@?)acompletion:(@?)bforScreen:(id)crunLoopMode:(id)d;
 - (void) runWithCompletion:(@?)a;
 - (BOOL) _animateForInterval:(d)a;
 - (void) _stopAnimation;
 - (void) _appendSubclassDescription:(id)aatLevel:(i)b;
 - (void) removeAnimation:(id)a;
 - (void) addAnimation:(id)a;


@end
