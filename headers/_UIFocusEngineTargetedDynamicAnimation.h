
@interface _UIFocusEngineTargetedDynamicAnimation : _UIDynamicAnimation {

    @? _applier;
    d _value;
    d _targetValue;
    d _convergenceRate;
    d _minimumDifference;
}

 - (void) dealloc;
 - (id) initWithValue:(d)atargetValue:(d)bconvergenceRate:(d)cminimumDifference:(d)d;
 - (void) runWithValueApplier:(@?)acompletion:(@?)b;
 - (BOOL) _animateForInterval:(d)a;
 - (d) targetValue;
 - (void) setTargetValue:(d)a;
 - (d) convergenceRate;
 - (void) setConvergenceRate:(d)a;
 - (d) minimumDifference;
 - (void) setMinimumDifference:(d)a;
 - (void) setValue:(d)a;
 - (d) value;


@end
