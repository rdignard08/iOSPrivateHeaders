
@interface _UIDynamicValueAnimation : _UIDynamicAnimation {

    @? _applier;
    @? _viewApplier;
    d _value;
    d _velocity;
    d _unitSize;
    d _friction;
    d _decelerationFactor;
    d _decelerationLnFactor;
    d _multiplier;
    @"NSMutableArray" _activeValues;
    ^v _stepFunction;
}
 + (id) _dynamicValueAnimationMatchingCASpringAnimationWithMass:(d)astiffness:(d)bdamping:(f)cvelocity:(f)dfromValue:(d)etoValue:(d)f;

 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (void) _setMultiplier:(d)a;
 - (void) dealloc;
 - (void) runWithValueApplier:(@?)acompletion:(@?)b;
 - (void) runWithCompletion:(@?)a;
 - (BOOL) _animateForInterval:(d)a;
 - (void) _stopAnimation;
 - (id) initWithValue:(d)avelocity:(d)bunitSize:(d)c;
 - (void) _appendSubclassDescription:(id)aatLevel:(i)b;
 - (void) _setDecelerationFactor:(d)a;
 - (void) addActiveValue:(id)a;
 - (void) _updateStepFunction;
 - (void) runWithValueApplier:(@?)acompletion:(@?)bforScreen:(id)crunLoopMode:(id)d;
 - (void) removeActiveValue:(id)a;
 - (void) setActiveValues:(id)a;
 - (d) _multiplier;
 - (void) _setVelocity:(d)a;
 - (id) activeValues;
 - (id) init;
 - (void) setValue:(d)a;
 - (d) value;
 - (d) friction;
 - (d) velocity;
 - (void) setFriction:(d)a;
 - (void) setVelocity:(d)a;


@end
