
@protocol _UISettingsKeyObserver;
@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _screenBounds;
    BOOL _useGrapeFlags;
    BOOL _hasRecordedData;
    BOOL _hasDoneInitialBackProjectionTest;
    d _gestureRestrictionFactor;
    {CGPoint="x"d"y"d} _initialTouchLocation;
    d _initialTouchTimestamp;
    q _initialInterfaceOrientation;
    Q _touchedRegion;
    @"UIDelayedAction" _recognitionTimer;
    {CGPoint="x"d"y"d} _lastTouchLocation;
    d _lastTouchTimestamp;
    q _type;
    BOOL _requiresLongPress;
    BOOL _requiresFlatThumb;
    Q _targetEdges;
    q _state;
    Q _recognizedRegion;
    @"<_UIScreenEdgePanRecognizerDelegate>" _delegate;
    @"_UIScreenEdgePanRecognizerSettings" _settings;
}
@property (nonatomic, assign, readwrite) NSNumber* screenBounds;
@property (nonatomic, assign, readwrite) NSNumber* targetEdges;
@property (nonatomic, assign, readwrite) NSNumber* requiresFlatThumb;
@property (nonatomic, assign, readonly) NSNumber* state;
@property (nonatomic, assign, readonly) NSNumber* recognizedRegion;
@property (nonatomic, assign, readonly, isRequiringLongPress) NSNumber* requiringLongPress;
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, retain, readwrite) _UIScreenEdgePanRecognizerSettings* settings;
@property (nonatomic, assign, readwrite) NSNumber* shouldUseGrapeFlags;
@property (nonatomic, assign, readonly) NSNumber* _lastTouchLocation;
 + (BOOL) _edgeSwipeNavigationGestureEnabled;

 - (void) reset;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) settings;
 - (q) _type;
 - (void) incorporateTouchSampleAtLocation:({CGPoint=dd})atimestamp:(d)bmodifier:(q)cinterfaceOrientation:(q)d;
 - (Q) recognizedRegion;
 - (void) setScreenBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (Q) targetEdges;
 - (void) setTargetEdges:(Q)a;
 - ({CGPoint=dd}) _lastTouchLocation;
 - (void) settings:(id)achangedValueForKey:(id)b;
 - (void) setShouldUseGrapeFlags:(BOOL)a;
 - (void) _incorporateIncrementalSampleAtLocation:({CGPoint=dd})atimestamp:(d)bmodifier:(q)cinterfaceOrientation:(q)d;
 - (void) _incorporateInitialTouchAtLocation:({CGPoint=dd})atimestamp:(d)bmodifier:(q)cinterfaceOrientation:(q)d;
 - (Q) _targetEdges;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) screenBounds;
 - (void) _longPressTimerElapsed:(id)a;
 - (void) _idleTimerElapsed:(id)a;
 - (void) _createOrDestoryAnalysisWindowIfNeeded;
 - (BOOL) isRequiringLongPress;
 - (void) setSettings:(id)a;
 - (void) setRequiresFlatThumb:(BOOL)a;
 - (BOOL) shouldUseGrapeFlags;
 - (BOOL) requiresFlatThumb;
 - (q) state;
 - (id) delegate;
 - (void) _setState:(q)a;
 - (id) initWithType:(q)a;


@end
