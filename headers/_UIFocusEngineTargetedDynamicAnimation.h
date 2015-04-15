
@interface _UIFocusEngineTargetedDynamicAnimation : _UIDynamicAnimation {

    @? _applier;
    double _value;
    double _targetValue;
    double _convergenceRate;
    double _minimumDifference;
}

 - (void) dealloc;
 - (id) initWithValue:(double)atargetValue:(double)bconvergenceRate:(double)cminimumDifference:(double)d;
 - (void) runWithValueApplier:(@?)acompletion:(@?)b;
 - (BOOL) _animateForInterval:(double)a;
 - (double) targetValue;
 - (void) setTargetValue:(double)a;
 - (double) convergenceRate;
 - (void) setConvergenceRate:(double)a;
 - (double) minimumDifference;
 - (void) setMinimumDifference:(double)a;
 - (void) setValue:(double)a;
 - (double) value;


@end
