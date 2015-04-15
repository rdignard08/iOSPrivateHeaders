
@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {

    @? _applier;
    NSMutableArray* _animations;
    NSMutableArray* _runningAnimations;
}

 - (id) animations;
 - (void) setAnimations:(id)a ;
 - (void) dealloc;
 - (void) runWithGroupApplier:(@?)a completion:(@?)b ;
 - (void) runWithGroupApplier:(@?)a completion:(@?)b forScreen:(id)c runLoopMode:(id)d ;
 - (void) runWithCompletion:(@?)a ;
 - (BOOL) _animateForInterval:(double)a ;
 - (void) _stopAnimation;
 - (void) _appendSubclassDescription:(id)a atLevel:(int)b ;
 - (void) removeAnimation:(id)a ;
 - (void) addAnimation:(id)a ;


@end
