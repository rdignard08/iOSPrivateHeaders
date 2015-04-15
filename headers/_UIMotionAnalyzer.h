
@protocol _UISettingsKeyObserver;
@interface _UIMotionAnalyzer : NSObject <_UISettingsKeyObserver> {

    @"_UIMotionAnalyzerSettings" _settings;
    d _smoothingDegree;
    d _referenceShiftSpeed;
    d _distanceMultiplier;
    BOOL _hasReferenceQuaternion;
    (_GLKQuaternion=""{?="v"(_GLKVector3=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"v"[3f])"s"f}""{?="x"f"y"f"z"f"w"f}"q"[4f]) _referenceQuaternion;
    (_GLKQuaternion=""{?="v"(_GLKVector3=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"v"[3f])"s"f}""{?="x"f"y"f"z"f"w"f}"q"[4f]) _absoluteQuaternion;
    d _lastUpdate;
    d _idleStartTime;
    {UIOffset="horizontal"d"vertical"d} _idleStartOffset;
    d _jumpThreshold;
    d _idleLeeway;
    d _secondsBeforeIdle;
    d _lockValue;
    d _lockStrength;
    @"UIWindow" _diagnosticsWindow;
    @"UILabel" _idleIndicator;
    @"UIView" _horizontalLockIndicator;
    @"UIView" _verticalLockIndicator;
    @"_UIViewerRelativeDevicePose" _viewerRelativeDevicePose;
}
@property (nonatomic, assign, readonly) _UIViewerRelativeDevicePose* viewerRelativeDevicePose;

 - (void) reset;
 - (id) description;
 - (void) dealloc;
 - (void) settings:(id)achangedValueForKey:(id)b;
 - (void) updateWithDeviceMotionStruct:(r^{?={?=dddd}{?=fff}{?=fff}{?=fff}iBBB})atimestamp:(d)b;
 - (id) viewerRelativeDevicePose;
 - (void) _shiftReferenceToYieldRelativeQuaternion:((_GLKQuaternion={?=(_GLKVector3={?=fff}{?=fff}{?=fff}[3f])f}{?=ffff}[4f]))a;
 - ((_GLKQuaternion={?=(_GLKVector3={?=fff}{?=fff}{?=fff}[3f])f}{?=ffff}[4f])) _relativeQuaternion;
 - (void) updateWithDeviceMotion:(id)a;
 - (void) _updateSettings;
 - (void) _tearDownDiagnosticsWindow;
 - (void) _tearDownDirectionLockIndicators;
 - (void) _tearDownIdleIndicator;
 - ({UIOffset=dd}) _currentRawOffset:((_GLKQuaternion={?=(_GLKVector3={?=fff}{?=fff}{?=fff}[3f])f}{?=ffff}[4f]))a;
 - (void) _updateSmoothedOffsetForRawOffset:({UIOffset=dd})a;
 - (void) _updateIdleStateForRawOffset:({UIOffset=dd})atimestamp:(d)b;
 - (void) _updateReferenceAttitude:((_GLKQuaternion={?=(_GLKVector3={?=fff}{?=fff}{?=fff}[3f])f}{?=ffff}[4f]))atimestamp:(d)b;
 - (void) _resetDirectionalLockWithViewerOffset:({UIOffset=dd})a;
 - (void) _updateDirectionalLockIndicators;
 - (void) _updateAcceleratedOutputRangeFixingOffset:({UIOffset=dd})a;
 - (q) _directionLockStatus;
 - (BOOL) isIdleGivenTimestamp:(d)a;
 - (f) _referenceShiftRadiansPerSecondForAngle:(f)a;
 - (void) _showIdleUI:(BOOL)a;
 - (void) _createIdleIndicator;
 - (void) _createDirectionLockIndicators;
 - (void) _createDiagnosticsWindow;
 - (d) _directionLockStrength;
 - (id) init;
 - (id) initWithSettings:(id)a;


@end
