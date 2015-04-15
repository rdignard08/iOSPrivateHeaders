
@interface _UIDynamicAnimation : NSObject {

    @? _completion;
    i _state;
    b1 _began;
    b1 _running;
    b1 _yield;
    b1 _grouped;
    b1 _usesNSTimer;
}
@property (nonatomic, assign, readonly) NSNumber* state;
 + (void) _updateAnimations:(id)atimer:(id)b;
 + (void) _updateAnimations:(id)a;
 + (void) _updateAnimationsWithTimer:(id)a;
 + (id) dynamicAnimationForView:(id)awithInitialValue:(d)bvelocity:(d)ctype:(i)danchorPoint:({CGPoint=dd})e;

 - (void) stop;
 - (id) description;
 - (void) dealloc;
 - (void) runWithCompletion:(@?)a;
 - (BOOL) _animateForInterval:(d)a;
 - (void) _stopAnimation;
 - (BOOL) _usesNSTimer;
 - (void) runWithCompletion:(@?)aforScreen:(id)brunLoopMode:(id)c;
 - (void) _appendSubclassDescription:(id)aatLevel:(i)b;
 - (void) _callAppliers:(@?)aadditionalEndAppliers:(@?)bdone:(BOOL)c;
 - (void) _cancelWithAppliers:(@?)a;
 - (BOOL) _shouldYield;
 - (void) _setShouldYield:(BOOL)a;
 - (void) _setUsesNSTimer:(BOOL)a;
 - (BOOL) _isGrouped;
 - (void) _setGrouped:(BOOL)a;
 - (BOOL) _isRunning;
 - (id) init;
 - (i) state;
 - (void) _appendDescriptionToString:(id)aatLevel:(i)b;


@end
