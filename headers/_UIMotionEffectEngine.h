
@interface _UIMotionEffectEngine : NSObject {

    @"_UIAssociationTable" _effectViewAssociationTable;
    @"_UILazyMapTable" _analyzerSettingsToAnalyzers;
    @"NSMapTable" _analyzersToEffects;
    @"NSMapTable" _analyzersToHistories;
    @"NSMapTable" _suspendedViewsToEffectSets;
    @"CMMotionManager" _motionManager;
    @"NSOperationQueue" _motionEventQueue;
    BOOL _hasReceivedAtLeastOneMotionEventSinceStarting;
    {?="quaternion"{?="w"d"x"d"y"d"z"d}"userAcceleration"{?="x"f"y"f"z"f}"rotationRate"{?="x"f"y"f"z"f}"magneticField"{?="x"f"y"f"z"f}"magneticFieldCalibrationLevel"i"doingYawCorrection"B"doingBiasEstimation"B"isInitialized"B} _pendingDeviceMotionStruct;
    d _pendingDeviceMotionTimestamp;
    i _pendingDeviceMotionLock;
    @"CADisplayLink" _displayLink;
    BOOL _generatingUpdates;
    @"NSMutableSet" _suspendReasons;
    {?="w"d"x"d"y"d"z"d} _lastDeviceQuaternion;
    d _lastUpdateTimestamp;
    BOOL _slowUpdatesEnabled;
    BOOL _pendingSlowDown;
    q _sensorStatus;
    BOOL _allAnalyzersAreCentered;
    BOOL _hasAppliedAtLeastOneUpdateSinceStarting;
    BOOL _isPendingReset;
    @"_UIMotionEffectEngineLogger" _motionLogger;
    i _thermalNotificationToken;
    i _screenDimmingNotificationToken;
    q _targetInterfaceOrientation;
}
@property (nonatomic, assign, readonly) NSArray* suspensionReasons;
@property (nonatomic, assign, readwrite, _setTargetInterfaceOrientation:) NSNumber* _targetInterfaceOrientation;
 + (BOOL) _motionEffectsSupported;
 + (BOOL) _motionEffectsEnabled;

 - (void) dealloc;
 - (void) beginSuspendingMotionEffectsForView:(id)a;
 - (void) beginApplyingMotionEffect:(id)atoView:(id)b;
 - (BOOL) _motionEffect:(id)abelongsToView:(id)b;
 - (void) endApplyingMotionEffect:(id)atoView:(id)b;
 - (BOOL) _hasMotionEffectsForView:(id)a;
 - (void) endSuspendingMotionEffectsForView:(id)a;
 - (void) _unregisterAllMotionEffectsForView:(id)a;
 - (void) beginSuspendingForReason:(id)a;
 - (void) endSuspendingForReason:(id)a;
 - (void) resetMotionAnalysis;
 - (id) _motionEffectsForView:(id)a;
 - (BOOL) _motionEffectsAreSuspendedForView:(id)a;
 - (void) _setTargetInterfaceOrientation:(q)a;
 - (q) _targetInterfaceOrientation;
 - (id) suspensionReasons;
 - (void) _startOrStopGeneratingUpdates;
 - (void) _stopGeneratingUpdates;
 - (void) _unapplyAllEffects;
 - (void) _updateDisplayLinkInterval;
 - (BOOL) _isSuspended;
 - (void) _toggleSlowUpdates;
 - (BOOL) _shouldSuspendApplicationForHysteresisGivenLastAppliedViewerOffset:({UIOffset=dd})anewViewerOffset:({UIOffset=dd})bwasSuspendingApplicationForHysteresis:(BOOL)c;
 - (void) _applyEffectsFromAnalyzer:(id)a;
 - (BOOL) _shouldGenerateUpdates;
 - (void) _startGeneratingUpdates;
 - (void) _handleLatestDeviceMotion;
 - (void) _unregisterMotionEffect:(id)afromView:(id)b;
 - (void) _scheduleUpdateWithDeviceMotion:(r^{?={?=dddd}{?=fff}{?=fff}{?=fff}iBBB})atimestamp:(d)b;
 - (void) _setMotionManagerSensorStatus:(q)a;
 - (id) debugDescription;
 - (id) init;


@end
