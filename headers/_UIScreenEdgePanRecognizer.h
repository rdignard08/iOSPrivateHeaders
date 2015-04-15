
@protocol _UISettingsKeyObserver;
@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _screenBounds;
    BOOL _useGrapeFlags;
    BOOL _hasRecordedData;
    BOOL _hasDoneInitialBackProjectionTest;
    double _gestureRestrictionFactor;
    {CGPoint="x"d"y"d} _initialTouchLocation;
    double _initialTouchTimestamp;
    long long _initialInterfaceOrientation;
    unsigned long long _touchedRegion;
    UIDelayedAction* _recognitionTimer;
    {CGPoint="x"d"y"d} _lastTouchLocation;
    double _lastTouchTimestamp;
    long long _type;
    BOOL _requiresLongPress;
    BOOL _requiresFlatThumb;
    unsigned long long _targetEdges;
    long long _state;
    unsigned long long _recognizedRegion;
    <_UIScreenEdgePanRecognizerDelegate>* _delegate;
    _UIScreenEdgePanRecognizerSettings* _settings;
}
@property (nonatomic, assign, readwrite) NSNumber* screenBounds;
@property (nonatomic, assign, readwrite) NSNumber* targetEdges;
@property (nonatomic, assign, readwrite) NSNumber* requiresFlatThumb;
@property (nonatomic, assign, readonly) NSNumber* state;
@property (nonatomic, assign, readonly) NSNumber* recognizedRegion;
@property (nonatomic, assign, readonly, getter=isRequiringLongPress) NSNumber* requiringLongPress;
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, retain, readwrite) _UIScreenEdgePanRecognizerSettings* settings;
@property (nonatomic, assign, readwrite) NSNumber* shouldUseGrapeFlags;
@property (nonatomic, assign, readonly) NSNumber* _lastTouchLocation;
 + (BOOL) _edgeSwipeNavigationGestureEnabled;

 - (void) reset;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) settings;
 - (long long) _type;
 - (void) incorporateTouchSampleAtLocation:({CGPoint=dd})atimestamp:(double)bmodifier:(long long)cinterfaceOrientation:(long long)d;
 - (unsigned long long) recognizedRegion;
 - (void) setScreenBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (unsigned long long) targetEdges;
 - (void) setTargetEdges:(unsigned long long)a;
 - ({CGPoint=dd}) _lastTouchLocation;
 - (void) settings:(id)achangedValueForKey:(id)b;
 - (void) setShouldUseGrapeFlags:(BOOL)a;
 - (void) _incorporateIncrementalSampleAtLocation:({CGPoint=dd})atimestamp:(double)bmodifier:(long long)cinterfaceOrientation:(long long)d;
 - (void) _incorporateInitialTouchAtLocation:({CGPoint=dd})atimestamp:(double)bmodifier:(long long)cinterfaceOrientation:(long long)d;
 - (unsigned long long) _targetEdges;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) screenBounds;
 - (void) _longPressTimerElapsed:(id)a;
 - (void) _idleTimerElapsed:(id)a;
 - (void) _createOrDestoryAnalysisWindowIfNeeded;
 - (BOOL) isRequiringLongPress;
 - (void) setSettings:(id)a;
 - (void) setRequiresFlatThumb:(BOOL)a;
 - (BOOL) shouldUseGrapeFlags;
 - (BOOL) requiresFlatThumb;
 - (long long) state;
 - (id) delegate;
 - (void) _setState:(long long)a;
 - (id) initWithType:(long long)a;


@end
