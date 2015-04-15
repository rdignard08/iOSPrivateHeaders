
@protocol UICoordinateSpace, _UITraitEnvironmentInternal, UIFocusContainer, UITraitEnvironment;
@interface UIScreen : NSObject <UICoordinateSpace, _UITraitEnvironmentInternal, UIFocusContainer, UITraitEnvironment> {

    id _display;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _bounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _referenceBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _interfaceOrientedBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _unjailedReferenceBounds;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _mainSceneReferenceBounds;
    long long _interfaceOrientation;
    double _scale;
    double _touchScaleFactor;
    double _horizontalScale;
    long long _userInterfaceIdiom;
    NSDictionary* _capabilities;
    UIWindow* _screenDisablingWindow;
    double _startedPausingWindows;
    NSMutableArray* _pausedWindows;
    _UIScreenTransparentHitTestWindow* _extendedJailHitTestWindow;
    NSArray* _availableDisplayModes;
    double _pointsPerInch;
    _UIScreenFixedCoordinateSpace* _fixedCoordinateSpace;
    <UIFocusContainer>* _focusedItem;
    {?="bitsPerComponent"b4"initialized"b1"connected"b1"overscanCompensation"b2"screenUpdatesDisabled"b1"wantsWideContentMargins"b1"queriedDeviceContentMargins"b1"hasCalculatedPointsPerInch"b1"screenCreatedFBSDisplay"b1} _screenFlags;
    BOOL _wantsSoftwareDimming;
    BOOL _jailUsesHitTestWindow;
    UITraitCollection* _defaultTraitCollection;
    UITraitCollection* _overrideTraitCollection;
    UITraitCollection* _lastNotifiedTraitCollection;
    FBSDisplay* _fbsDisplay;
    UISoftwareDimmingWindow* _softwareDimmingWindow;
    long long _lastNotifiedBacklightLevel;
    double _jailScale;
    long long _jailOrientation;
    UIWindow<UIFocusContainer>* __focusedWindow;
    {CGSize="width"d"height"d} _jailSize;
    {CGPoint="x"d"y"d} _jailOffset;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _jailTouchInsets;
}
@property (nonatomic, assign, readonly) NSNumber* bounds;
@property (nonatomic, assign, readonly) NSNumber* applicationFrame;
@property (nonatomic, assign, readonly) NSNumber* scale;
@property (nonatomic, copy, readonly) NSArray* availableModes;
@property (nonatomic, retain, readonly) UIScreenMode* preferredMode;
@property (nonatomic, retain, readwrite) UIScreenMode* currentMode;
@property (nonatomic, assign, readwrite) NSNumber* overscanCompensation;
@property (nonatomic, retain, readonly) UIScreen* mirroredScreen;
@property (nonatomic, assign, readwrite) NSNumber* brightness;
@property (nonatomic, assign, readwrite) NSNumber* wantsSoftwareDimming;
@property (atomic, assign, readonly) NSNumber* coordinateSpace;
@property (atomic, assign, readonly) NSNumber* fixedCoordinateSpace;
@property (nonatomic, assign, readonly) NSNumber* nativeBounds;
@property (nonatomic, assign, readonly) NSNumber* nativeScale;
@property (nonatomic, assign, readonly) NSNumber* _referenceBounds;
@property (nonatomic, assign, readonly, getter=_unjailedReferenceBounds) NSNumber* _unjailedReferenceBounds;
@property (nonatomic, assign, readwrite, getter=_jailSize, setter=_setJailSize:) NSNumber* jailSize;
@property (nonatomic, assign, readwrite, getter=_jailOffset, setter=_setJailOffset:) NSNumber* jailOffset;
@property (nonatomic, assign, readwrite, getter=_jailScale, setter=_setJailScale:) NSNumber* jailScale;
@property (nonatomic, assign, readwrite, getter=_jailOrientation, setter=_setJailOrientation:) NSNumber* jailOrientation;
@property (nonatomic, assign, readwrite, getter=_jailTouchInsets, setter=_setJailTouchInsets:) NSNumber* jailTouchInsets;
@property (nonatomic, assign, readwrite, getter=_jailUsesHitTestWindow, setter=_setJailUsesHitTestWindow:) NSNumber* jailUsesHitTestWindow;
@property (nonatomic, assign, readonly) NSNumber* focusedItem;
@property (nonatomic, assign, readonly) NSNumber* supportsFocus;
@property (nonatomic, assign, readwrite, setter=_setFocusedWindow:) NSNumber* _focusedWindow;
@property (nonatomic, assign, readwrite, setter=_setInterfaceOrientation:) NSNumber* _interfaceOrientation;
@property (nonatomic, retain, readwrite, setter=_setSoftwareDimmingWindow:) UISoftwareDimmingWindow* _softwareDimmingWindow;
@property (nonatomic, assign, readwrite, setter=_setLastNotifiedBacklightLevel:) NSNumber* _lastNotifiedBacklightLevel;
@property (nonatomic, retain, readwrite) FBSDisplay* fbsDisplay;
@property (nonatomic, assign, readwrite, getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:) UITraitCollection* defaultTraitCollection;
@property (nonatomic, assign, readwrite, getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:) UITraitCollection* overrideTraitCollection;
@property (nonatomic, retain, readwrite, getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:) UITraitCollection* lastNotifiedTraitCollection;
@property (nonatomic, assign, readonly) UITraitCollection* traitCollection;
@property (nonatomic, assign, readonly) NSNumber* preferredFocusedItem;
@property (nonatomic, assign, readonly) UIView* focusedView;
 + (void) initialize;
 + (id) __createPlugInScreenForFBSDisplay:(id)a;
 + (void) _FBSDisplayDidPossiblyConnect:(id)awithScene:(id)bandPost:(BOOL)c;
 + (void) _FBSDisplayDidPossiblyDisconnect:(id)aforSceneDestruction:(id)b;
 + (id) _workspaceCapableScreens;
 + (void) _enumerateScreensWithBlock:(@?)a;
 + (void) _prepareScreensForAppResume;
 + (id) screens;
 + (void) _beginDisableScreenUpdatesForSnapshot;
 + (void) _endDisableScreenUpdates;
 + ({CGAffineTransform=dddddd}) transformToRotateScreen:(double)a;
 + (id) _carScreen;
 + (id) _screenWithDisplayName:(id)a;
 + ({CGAffineTransform=dddddd}) transformForScreenOriginRotation:(double)a;
 + (id) _screenWithDisplayID:(id)a;
 + (void) _FBSDisplayDidPossiblyConnect:(id)awithScene:(id)b;
 + (void) _beginDisableScreenUpdatesForSnapshotUsingSnapshotCover:(BOOL)a;
 + (id) __sceneTrackingQueue;
 + (id) __availableScenes;
 + (BOOL) _shouldDisableJail;
 + (void) _videoOutSettingsChanged;
 + (id) _watchScreen;
 + (id) _screenWithIntegerDisplayID:(unsigned int)a;
 + (void) _FBSDisplayDidPossiblyConnect:(id)a;
 + (void) _FBSDisplayDidPossiblyDisconnect:(id)a;
 + (id) __connectedFBSDisplays;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})atoView:(id)b;
 + (id) mainScreen;
 + ({CGPoint=dd}) convertPoint:({CGPoint=dd})afromView:(id)b;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})afromView:(id)b;
 + ({CGPoint=dd}) convertPoint:({CGPoint=dd})atoView:(id)b;

 - (void) observeValueForKeyPath:(id)a ofObject:(id)b change:(id)c context:(^v)d ;
 - (id) _name;
 - (double) scale;
 - (id) description;
 - (void) dealloc;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _boundsForInterfaceOrientation:(long long)a ;
 - (long long) _userInterfaceIdiom;
 - (id) snapshotViewAfterScreenUpdates:(BOOL)a ;
 - (id) snapshotView;
 - (id) fbsDisplay;
 - (void) _setInterfaceOrientation:(long long)a ;
 - (id) _defaultTraitCollectionForInterfaceOrientation:(long long)a ;
 - (unsigned int) _integerDisplayID;
 - (BOOL) _isMainScreen;
 - (void) _updateUserInterfaceIdiom;
 - (void) _setScale:(double)a ;
 - (void) _enumerateWindowsWithBlock:(@?)a ;
 - (BOOL) supportsFocus;
 - (id) focusedItem;
 - (id) focusedView;
 - (void) _setMainSceneReferenceBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (id) traitCollection;
 - (BOOL) _areBoundsJailed;
 - (double) _touchScaleFactor;
 - (BOOL) _wantsWideContentMargins;
 - (id) preferredFocusedItem;
 - (void) _setFocusedItem:(id)a ;
 - (double) _scale;
 - (double) _pointsPerInch;
 - (int) bitsPerComponent;
 - (double) _rotation;
 - (long long) _jailOrientation;
 - (double) _jailScale;
 - (double) _horizontalPixelScale;
 - ({CGPoint=dd}) _positionForWindowTransformLayerInJail:(BOOL)a offsetByScreenJail:(BOOL)b ;
 - ({UIEdgeInsets=dddd}) _jailedBoundsEdgeInsets;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _realDisplayBounds;
 - (void) setNeedsPreferredFocusedItemUpdate;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _mainSceneReferenceBounds;
 - (long long) _interfaceOrientation;
 - (void) _prepareForWindow;
 - (id) _displayID;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _unjailedReferenceBounds;
 - (BOOL) _isDisplayPointWithinExtendedJailBounds:({CGPoint=dd})a ;
 - (BOOL) isAncestorOfItem:(id)a ;
 - (long long) _imageOrientation;
 - (void) traitCollectionDidChange:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a toCoordinateSpace:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fromCoordinateSpace:(id)b ;
 - (id) coordinateSpace;
 - (BOOL) shouldChangeFocusedItem:(id)a heading:(unsigned long long)b ;
 - (void) focusedViewWillChange;
 - (void) focusedViewDidChange;
 - (id) _traitCollectionForChildEnvironment:(id)a ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a toCoordinateSpace:(id)b ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a fromCoordinateSpace:(id)b ;
 - (id) snapshot;
 - (void) _setUserInterfaceIdiom:(long long)a ;
 - (id) _lastNotifiedTraitCollection;
 - (id) mirroredScreen;
 - (id) _capabilityForKey:(id)a ;
 - (BOOL) _isRightHandDrive;
 - (id) _overrideTraitCollection;
 - (id) currentMode;
 - (void) _setLastNotifiedTraitCollection:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _applicationFrameForInterfaceOrientation:(long long)a usingStatusbarHeight:(double)b ignoreStatusBar:(BOOL)c ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _interfaceOrientedBounds;
 - (void) _setExternalDeviceShouldInputText:(BOOL)a ;
 - (id) initWithDisplay:(id)a ;
 - (id) availableModes;
 - (void) setFbsDisplay:(id)a ;
 - (void) _connectScreen;
 - (void) _computeMetrics;
 - (BOOL) _isWorkspaceCapable;
 - (void) _updateAvailableDisplayModes;
 - (void) _updateOverscanCompensationAllowingBackgroundUpdate:(BOOL)a ;
 - (void) _disableScreenUpdates:(BOOL)a ;
 - (void) _enableScreenUpdates;
 - (void) _setMainSceneReferenceBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a computingMetricsIfNecessary:(BOOL)b ;
 - (void) _disconnectScreen;
 - (void) _beginObservingBacklightLevelNotifications;
 - (void) _endObservingBacklightLevelNotifications;
 - (void) _setSoftwareDimmingWindow:(id)a ;
 - (BOOL) _isCarScreen;
 - (BOOL) _hasWindows;
 - (BOOL) _overscanAdjustmentNeedsUpdate;
 - (BOOL) _isOverscanned;
 - (BOOL) _hasStatusBar;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _applicationFrameForInterfaceOrientation:(long long)a usingStatusbarHeight:(double)b ;
 - (BOOL) _isExternal;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _applicationFrameForInterfaceOrientation:(long long)a ;
 - (id) preferredMode;
 - (void) setCurrentMode:(id)a ;
 - (void) _updateTraits;
 - (void) _updateCapabilities;
 - (void) _setDefaultTraitCollection:(id)a ;
 - (void) _willTransitionToTraitCollection:(id)a ;
 - (void) _notifyTraitsChangedAndPropagateToAllWindows;
 - (id) _capabilities;
 - (BOOL) _jailUsesHitTestWindow;
 - (BOOL) _isUIElementLimited:(id)a ;
 - (id) _softwareDimmingWindow;
 - (long long) _lastNotifiedBacklightLevel;
 - (void) _setLastNotifiedBacklightLevel:(long long)a ;
 - (void) _postBrightnessDidChangeNotificationIfAppropriate;
 - (BOOL) _supportsBrightness;
 - (float) rawBrightnessForBacklightLevel:(float)a ;
 - (id) _lazySoftwareDimmingWindow;
 - (double) nativeScale;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _nativeDisplayBounds;
 - (void) _ensureConnectedIfPossible;
 - ({UIEdgeInsets=dddd}) _rawJailedBoundsEdgeInsets;
 - ({CGPoint=dd}) _positionForWindowTransformLayerInJail:(BOOL)a ;
 - (BOOL) _isRotatable;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _boundsInPixels;
 - (double) _refreshRate;
 - (void) setBitsPerComponent:(int)a ;
 - (int) screenType;
 - (long long) overscanCompensation;
 - (void) setOverscanCompensation:(long long)a ;
 - (unsigned int) _seed;
 - (id) fixedCoordinateSpace;
 - (void) _setOverrideTraitCollection:(id)a ;
 - (void) _setCapability:(id)a forKey:(id)b ;
 - (long long) _workspaceCapableScreenType;
 - (void) _setJailSize:({CGSize=dd})a ;
 - (void) _setJailTouchInsets:({UIEdgeInsets=dddd})a ;
 - (void) _setJailUsesHitTestWindow:(BOOL)a ;
 - (BOOL) _areListsLimited;
 - (BOOL) _areMusicListsLimited;
 - (void) setBrightness:(double)a ;
 - (double) brightness;
 - (id) _snapshotExcludingWindows:(id)a withRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) nativeBounds;
 - ({CGSize=dd}) _jailSize;
 - (id) _defaultTraitCollection;
 - (BOOL) wantsSoftwareDimming;
 - (void) setWantsSoftwareDimming:(BOOL)a ;
 - ({CGPoint=dd}) _jailOffset;
 - (void) _setJailOffset:({CGPoint=dd})a ;
 - (void) _setJailScale:(double)a ;
 - (void) _setJailOrientation:(long long)a ;
 - ({UIEdgeInsets=dddd}) _jailTouchInsets;
 - (id) _focusedWindow;
 - (void) _setFocusedWindow:(id)a ;
 - (void) _setSpeed:(double)a forWindow:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (id) _display;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _referenceBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) applicationFrame;
 - (id) displayLinkWithTarget:(id)a selector:(SEL)b ;


@end
