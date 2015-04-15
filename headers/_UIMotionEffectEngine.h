
@interface _UIMotionEffectEngine : NSObject {

    _UIAssociationTable* _effectViewAssociationTable;
    _UILazyMapTable* _analyzerSettingsToAnalyzers;
    NSMapTable* _analyzersToEffects;
    NSMapTable* _analyzersToHistories;
    NSMapTable* _suspendedViewsToEffectSets;
    CMMotionManager* _motionManager;
    NSOperationQueue* _motionEventQueue;
    BOOL _hasReceivedAtLeastOneMotionEventSinceStarting;
    {?="quaternion"{?="w"d"x"d"y"d"z"d}"userAcceleration"{?="x"f"y"f"z"f}"rotationRate"{?="x"f"y"f"z"f}"magneticField"{?="x"f"y"f"z"f}"magneticFieldCalibrationLevel"i"doingYawCorrection"B"doingBiasEstimation"B"isInitialized"B} _pendingDeviceMotionStruct;
    double _pendingDeviceMotionTimestamp;
    int _pendingDeviceMotionLock;
    CADisplayLink* _displayLink;
    BOOL _generatingUpdates;
    NSMutableSet* _suspendReasons;
    {?="w"d"x"d"y"d"z"d} _lastDeviceQuaternion;
    double _lastUpdateTimestamp;
    BOOL _slowUpdatesEnabled;
    BOOL _pendingSlowDown;
    long long _sensorStatus;
    BOOL _allAnalyzersAreCentered;
    BOOL _hasAppliedAtLeastOneUpdateSinceStarting;
    BOOL _isPendingReset;
    _UIMotionEffectEngineLogger* _motionLogger;
    int _thermalNotificationToken;
    int _screenDimmingNotificationToken;
    long long _targetInterfaceOrientation;
}
@property (nonatomic, assign, readonly) NSArray* suspensionReasons;
@property (nonatomic, assign, readwrite, setter=_setTargetInterfaceOrientation:) NSNumber* _targetInterfaceOrientation;
 + (BOOL) _motionEffectsSupported;
 + (BOOL) _motionEffectsEnabled;

 - (void) dealloc;
 - (void) beginSuspendingMotionEffectsForView:(id)a ;
 - (void) beginApplyingMotionEffect:(id)a toView:(id)b ;
 - (BOOL) _motionEffect:(id)a belongsToView:(id)b ;
 - (void) endApplyingMotionEffect:(id)a toView:(id)b ;
 - (BOOL) _hasMotionEffectsForView:(id)a ;
 - (void) endSuspendingMotionEffectsForView:(id)a ;
 - (void) _unregisterAllMotionEffectsForView:(id)a ;
 - (void) beginSuspendingForReason:(id)a ;
 - (void) endSuspendingForReason:(id)a ;
 - (void) resetMotionAnalysis;
 - (id) _motionEffectsForView:(id)a ;
 - (BOOL) _motionEffectsAreSuspendedForView:(id)a ;
 - (void) _setTargetInterfaceOrientation:(long long)a ;
 - (long long) _targetInterfaceOrientation;
 - (id) suspensionReasons;
 - (void) _startOrStopGeneratingUpdates;
 - (void) _stopGeneratingUpdates;
 - (void) _unapplyAllEffects;
 - (void) _updateDisplayLinkInterval;
 - (BOOL) _isSuspended;
 - (void) _toggleSlowUpdates;
 - (BOOL) _shouldSuspendApplicationForHysteresisGivenLastAppliedViewerOffset:({UIOffset=dd})a newViewerOffset:({UIOffset=dd})b wasSuspendingApplicationForHysteresis:(BOOL)c ;
 - (void) _applyEffectsFromAnalyzer:(id)a ;
 - (BOOL) _shouldGenerateUpdates;
 - (void) _startGeneratingUpdates;
 - (void) _handleLatestDeviceMotion;
 - (void) _unregisterMotionEffect:(id)a fromView:(id)b ;
 - (void) _scheduleUpdateWithDeviceMotion:(r^{?={?=dddd}{?=fff}{?=fff}{?=fff}iBBB})a timestamp:(double)b ;
 - (void) _setMotionManagerSensorStatus:(long long)a ;
 - (id) debugDescription;
 - (id) init;


@end
