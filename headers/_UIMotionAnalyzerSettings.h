
@interface _UIMotionAnalyzerSettings : _UISettings {

    BOOL _showIdleIndicator;
    BOOL _jumpEnabled;
    BOOL _playJumpSound;
    BOOL _directionalLockEnabled;
    BOOL _showDirectionalLockIndicators;
    BOOL _referenceShiftEnabled;
    double _inputSmoothingFactor;
    double _referenceShiftSpeed;
    double _idleLeeway;
    double _delayBeforeIdle;
    double _jumpThreshold;
    double _directionalLockThreshold;
    double _directionalLockStickiness;
    double _directionalLockSharpness;
    double _referenceShiftDistanceDependence;
}

 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setDirectionalLockEnabled:(BOOL)a;
 - (void) setDefaultValues;
 - (void) setInputSmoothingFactor:(double)a;
 - (void) setReferenceShiftEnabled:(BOOL)a;
 - (void) setReferenceShiftSpeed:(double)a;
 - (void) setReferenceShiftDistanceDependence:(double)a;
 - (void) setIdleLeeway:(double)a;
 - (void) setDelayBeforeIdle:(double)a;
 - (void) setShowIdleIndicator:(BOOL)a;
 - (void) setJumpEnabled:(BOOL)a;
 - (void) setJumpThreshold:(double)a;
 - (void) setPlayJumpSound:(BOOL)a;
 - (void) setDirectionalLockThreshold:(double)a;
 - (void) setDirectionalLockStickiness:(double)a;
 - (void) setDirectionalLockSharpness:(double)a;
 - (void) setShowDirectionalLockIndicators:(BOOL)a;
 - (double) inputSmoothingFactor;
 - (BOOL) referenceShiftEnabled;
 - (double) referenceShiftSpeed;
 - (double) referenceShiftDistanceDependence;
 - (double) idleLeeway;
 - (double) delayBeforeIdle;
 - (BOOL) showIdleIndicator;
 - (BOOL) jumpEnabled;
 - (double) jumpThreshold;
 - (BOOL) playJumpSound;
 - (BOOL) directionalLockEnabled;
 - (double) directionalLockThreshold;
 - (double) directionalLockStickiness;
 - (double) directionalLockSharpness;
 - (BOOL) showDirectionalLockIndicators;


@end
