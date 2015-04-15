
@interface _UIDynamicValueAnimation : _UIDynamicAnimation {

    @? _applier;
    @? _viewApplier;
    double _value;
    double _velocity;
    double _unitSize;
    double _friction;
    double _decelerationFactor;
    double _decelerationLnFactor;
    double _multiplier;
    NSMutableArray* _activeValues;
    ^v _stepFunction;
}
 + (id) _dynamicValueAnimationMatchingCASpringAnimationWithMass:(double)astiffness:(double)bdamping:(float)cvelocity:(float)dfromValue:(double)etoValue:(double)f;

 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (void) _setMultiplier:(double)a;
 - (void) dealloc;
 - (void) runWithValueApplier:(@?)acompletion:(@?)b;
 - (void) runWithCompletion:(@?)a;
 - (BOOL) _animateForInterval:(double)a;
 - (void) _stopAnimation;
 - (id) initWithValue:(double)avelocity:(double)bunitSize:(double)c;
 - (void) _appendSubclassDescription:(id)aatLevel:(int)b;
 - (void) _setDecelerationFactor:(double)a;
 - (void) addActiveValue:(id)a;
 - (void) _updateStepFunction;
 - (void) runWithValueApplier:(@?)acompletion:(@?)bforScreen:(id)crunLoopMode:(id)d;
 - (void) removeActiveValue:(id)a;
 - (void) setActiveValues:(id)a;
 - (double) _multiplier;
 - (void) _setVelocity:(double)a;
 - (id) activeValues;
 - (id) init;
 - (void) setValue:(double)a;
 - (double) value;
 - (double) friction;
 - (double) velocity;
 - (void) setFriction:(double)a;
 - (void) setVelocity:(double)a;


@end
