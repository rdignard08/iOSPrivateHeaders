
@interface _UIMotionAnalyzerSettings : _UISettings {

    BOOL _showIdleIndicator;
    BOOL _jumpEnabled;
    BOOL _playJumpSound;
    BOOL _directionalLockEnabled;
    BOOL _showDirectionalLockIndicators;
    BOOL _referenceShiftEnabled;
    d _inputSmoothingFactor;
    d _referenceShiftSpeed;
    d _idleLeeway;
    d _delayBeforeIdle;
    d _jumpThreshold;
    d _directionalLockThreshold;
    d _directionalLockStickiness;
    d _directionalLockSharpness;
    d _referenceShiftDistanceDependence;
}

 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) setDirectionalLockEnabled:(BOOL)a;
 - (void) setDefaultValues;
 - (void) setInputSmoothingFactor:(d)a;
 - (void) setReferenceShiftEnabled:(BOOL)a;
 - (void) setReferenceShiftSpeed:(d)a;
 - (void) setReferenceShiftDistanceDependence:(d)a;
 - (void) setIdleLeeway:(d)a;
 - (void) setDelayBeforeIdle:(d)a;
 - (void) setShowIdleIndicator:(BOOL)a;
 - (void) setJumpEnabled:(BOOL)a;
 - (void) setJumpThreshold:(d)a;
 - (void) setPlayJumpSound:(BOOL)a;
 - (void) setDirectionalLockThreshold:(d)a;
 - (void) setDirectionalLockStickiness:(d)a;
 - (void) setDirectionalLockSharpness:(d)a;
 - (void) setShowDirectionalLockIndicators:(BOOL)a;
 - (d) inputSmoothingFactor;
 - (BOOL) referenceShiftEnabled;
 - (d) referenceShiftSpeed;
 - (d) referenceShiftDistanceDependence;
 - (d) idleLeeway;
 - (d) delayBeforeIdle;
 - (BOOL) showIdleIndicator;
 - (BOOL) jumpEnabled;
 - (d) jumpThreshold;
 - (BOOL) playJumpSound;
 - (BOOL) directionalLockEnabled;
 - (d) directionalLockThreshold;
 - (d) directionalLockStickiness;
 - (d) directionalLockSharpness;
 - (BOOL) showDirectionalLockIndicators;


@end
