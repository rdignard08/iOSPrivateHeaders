
@protocol _UISettingsKeyObserver;
@interface _UIMotionAnalyzer : NSObject <_UISettingsKeyObserver> {

    _UIMotionAnalyzerSettings* _settings;
    double _smoothingDegree;
    double _referenceShiftSpeed;
    double _distanceMultiplier;
    BOOL _hasReferenceQuaternion;
    (_GLKQuaternion=""{?="v"(_GLKVector3=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"v"[3f])"s"f}""{?="x"f"y"f"z"f"w"f}"q"[4f]) _referenceQuaternion;
    (_GLKQuaternion=""{?="v"(_GLKVector3=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"v"[3f])"s"f}""{?="x"f"y"f"z"f"w"f}"q"[4f]) _absoluteQuaternion;
    double _lastUpdate;
    double _idleStartTime;
    {UIOffset="horizontal"d"vertical"d} _idleStartOffset;
    double _jumpThreshold;
    double _idleLeeway;
    double _secondsBeforeIdle;
    double _lockValue;
    double _lockStrength;
    UIWindow* _diagnosticsWindow;
    UILabel* _idleIndicator;
    UIView* _horizontalLockIndicator;
    UIView* _verticalLockIndicator;
    _UIViewerRelativeDevicePose* _viewerRelativeDevicePose;
}
@property (nonatomic, assign, readonly) _UIViewerRelativeDevicePose* viewerRelativeDevicePose;

 - (void) reset;
 - (id) description;
 - (void) dealloc;
 - (void) settings:(id)achangedValueForKey:(id)b;
 - (void) updateWithDeviceMotionStruct:(r^{?={?=dddd}{?=fff}{?=fff}{?=fff}iBBB})atimestamp:(double)b;
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
 - (void) _updateIdleStateForRawOffset:({UIOffset=dd})atimestamp:(double)b;
 - (void) _updateReferenceAttitude:((_GLKQuaternion={?=(_GLKVector3={?=fff}{?=fff}{?=fff}[3f])f}{?=ffff}[4f]))atimestamp:(double)b;
 - (void) _resetDirectionalLockWithViewerOffset:({UIOffset=dd})a;
 - (void) _updateDirectionalLockIndicators;
 - (void) _updateAcceleratedOutputRangeFixingOffset:({UIOffset=dd})a;
 - (long long) _directionLockStatus;
 - (BOOL) isIdleGivenTimestamp:(double)a;
 - (float) _referenceShiftRadiansPerSecondForAngle:(float)a;
 - (void) _showIdleUI:(BOOL)a;
 - (void) _createIdleIndicator;
 - (void) _createDirectionLockIndicators;
 - (void) _createDiagnosticsWindow;
 - (double) _directionLockStrength;
 - (id) init;
 - (id) initWithSettings:(id)a;


@end
