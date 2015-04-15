
@protocol NSISEngineDelegate;
@interface UIWindow : UIView <NSISEngineDelegate> {

    id _delegate;
    double _windowLevel;
    double _windowSublevel;
    id _layerContext;
    UIView* _lastMouseDownView;
    UIView* _lastMouseEnteredView;
    UIResponder* _firstResponder;
    id _fingerInfo;
    id _touchData;
    long long _viewOrientation;
    UIView* _exclusiveTouchView;
    NSUndoManager* _undoManager;
    UIScreen* _screen;
    CALayer* _transformLayer;
    NSMutableArray* _rotationViewControllers;
    UIViewController* _rootViewController;
    UIColor* _savedBackgroundColor;
    NSMutableSet* _subtreeMonitoringViews;
    NSMutableSet* _tintViews;
    id _currentTintView;
    {?="delegateWillRotate"b1"delegateDidRotate"b1"delegateWillAnimateFirstHalf"b1"delegateDidAnimationFirstHalf"b1"delegateWillAnimateSecondHalf"b1"autorotatesToPortrait"b1"autorotatesToPortraitUpsideDown"b1"autorotatesToLandscapeLeft"b1"autorotatesToLandscapeRight"b1"dontBecomeKeyOnOrderFront"b1"output"b1"inGesture"b1"bitsPerComponent"b4"autorotates"b1"isRotating"b1"isUsingOnePartRotationAnimation"b1"isHandlingContentRotation"b1"disableAutorotationCount"b4"needsAutorotationWhenReenabled"b1"forceTwoPartRotationAnimation"b1"orderKeyboardInAfterRotating"b1"roundedCorners"b4"resizesToFullScreen"b1"keepContextInBackground"b1"ignoreSetHidden"b1"forceVisibleOnInit"b1"settingFirstResponder"b1"legacyOrientationChecks"b1"windowResizedToFullScreen"b1"statusBarFollowsOrientation"b1"secure"b1"isMainSceneSized"b1"debugNeedsHighlightItemOverlayUpdate"b1} _windowFlags;
    id _windowController;
    BOOL _attachable;
    NSString* _debugName;
    FBSScene* _scene;
    _UISystemGestureGateGestureRecognizer* _systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer* _systemGestureGateForTouches;
    UITraitCollection* _traitCollection;
    UITraitCollection* _destinationTraitCollection;
    ^{__CFDictionary=} _touchMap;
    long long _containedGestureRecognizerMaximumState;
    double _lastTouchTimestamp;
    b1 _systemGesturesArePossible;
    long long _verticalSizeClassStateRestorationOverride;
    long long _horizontalSizeClassStateRestorationOverride;
    _UIFocusEngine* _focusEngine;
    BOOL _shouldDisableTransformLayerScalingForSnapshotting;
    BOOL __containedGestureRecognizersShouldRespectGestureServerInstructions;
    BOOL __usesLegacySupportedOrientationChecks;
    BOOL __shouldHitTestEntireScreen;
    _UIViewControllerNullAnimationTransitionCoordinator* _traitCollectionChangeTransitionCoordinator;
    NSArray* _windowInternalConstraints;
    NSArray* _rootViewConstraints;
    @? _deferredLaunchBlock;
    long long _toWindowOrientation;
    long long _fromWindowOrientation;
    _UIWindowAnimationController* __animationController;
    @? __shouldPreventRotationHook;
    long long __deferredLaunchOrientation;
}
 + (void) initialize;
 + (BOOL) _isSystemWindow;
 + (id) allWindowsIncludingInternalWindows:(BOOL)aonlyVisibleWindows:(BOOL)b;
 + (id) keyWindow;
 + (void) _executeDeferredLaunchBlocks;
 + (id) _statusBarControllingWindow;
 + (unsigned int) _synchronizeDrawingAcrossProcesses;
 + (void) _noteStatusBarHeightChanged:(double)aoldHeight:(double)bforAutolayoutRootViewsOnly:(BOOL)c;
 + (void) _synchronizeDrawing;
 + (void) _noteStatusBarHeightChanged:(double)aoldHeight:(double)b;
 + (id) _topVisibleWindowPassingTest:(@?)a;
 + (void) _prepareWindowsForAppSuspend;
 + (id) allWindowsIncludingInternalWindows:(BOOL)aonlyVisibleWindows:(BOOL)bforScreen:(id)c;
 + (^v) createIOSurfaceWithContextIds:(r^I)acount:(unsigned long long)bframe:({CGRect={CGPoint=dd}{CGSize=dd}})c;
 + (id) _externalKeyWindow;
 + (void) _prepareWindowsPassingTestForAppResume:(@?)a;
 + (void) _synchronizeDrawingAcrossProcessesOverPort:(unsigned int)a;
 + (void) _prepareWindowsForAppResume;
 + (void) adjustForAccessibilityIfNeeded:(id)a;
 + (BOOL) _isSecure;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) constrainFrameToScreen:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 + (BOOL) _transformLayerRotationsAreEnabled;
 + (unsigned int) _synchronizeDrawingAcrossProcessesWithPreCommitHandler:(@?)a;
 + (void) _synchronizeDrawingAcrossProcessesOverPort:(unsigned int)awithPreCommitHandler:(@?)b;
 + (unsigned long long) _keyWindowStackSize;
 + (void) __popKeyWindow:(id)afindNewKeyWindowIfStackEmpty:(BOOL)b;
 + (void) _popKeyWindow:(id)a;
 + (^v) createIOSurfaceOnScreen:(id)awithContextIds:(r^I)bcount:(unsigned long long)cframe:({CGRect={CGPoint=dd}{CGSize=dd}})dusePurpleGfx:(BOOL)eoutTransform:(^{CGAffineTransform=dddddd})f;
 + (^v) createIOSurfaceFromScreen:(id)a;
 + (^v) createIOSurfaceWithContextId:(unsigned int)aframe:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 + (id) _hitTestToPoint:({CGPoint=dd})aforEvent:(id)bwindowServerHitTestWindow:(id)cscreen:(id)d;
 + (void) _enumerateWindowsIncludingInternalWindows:(BOOL)aonlyVisibleWindows:(BOOL)bwithBlock:(@?)c;
 + (Class) layerClass;
 + (void) _setAllWindowsKeepContextInBackground:(BOOL)a;
 + (void) _setTransformLayerRotationsAreEnabled:(BOOL)a;
 + (void) _clearKeyWindowStack;
 + (void) _setKeyWindowStackEnabled:(BOOL)a;
 + (void) _pushKeyWindow:(id)a;
 + (void) _popKeyWindow;
 + (void) _removeWindowFromStack:(id)a;
 + (^v) createIOSurfaceWithContextIds:(r^I)acount:(unsigned long long)bframe:({CGRect={CGPoint=dd}{CGSize=dd}})coutTransform:(^{CGAffineTransform=dddddd})d;
 + (^v) createIOSurfaceWithContextIds:(r^I)acount:(unsigned long long)bframe:({CGRect={CGPoint=dd}{CGSize=dd}})cusePurpleGfx:(BOOL)doutTransform:(^{CGAffineTransform=dddddd})e;
 + (^v) createScreenIOSurface;
 + (id) _findWithDisplayPoint:({CGPoint=dd})a;

 - (id) copyIOSurfaceSnapshotView:(long long)a;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (id) _screen;
 - (BOOL) pointInside:({CGPoint=dd})awithEvent:(id)b;
 - (void) layoutSubviews;
 - (id) _animationController;
 - (BOOL) _clearMouseView;
 - (BOOL) _isTextEffectsWindow;
 - (id) _initWithOrientation:(long long)a;
 - (void) setResizesToFullScreen:(BOOL)a;
 - (void) _resizeWindowToFullScreenIfNecessary;
 - (BOOL) canPerformAction:(SEL)awithSender:(id)b;
 - (void) setWindowLevel:(double)a;
 - (void) _orderFrontWithoutMakingKey;
 - (unsigned int) _contextId;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _sceneReferenceBounds;
 - (BOOL) _windowControlsStatusBarOrientation;
 - (id) _currentTintView;
 - (BOOL) _shouldZoom;
 - (BOOL) _includeInDefaultImageSnapshot;
 - (BOOL) _needsShakesWhenInactive;
 - (^{__CFDictionary=}) _touchMap;
 - (void) synchronizeDrawingWithID:(int)a;
 - (id) _touchData;
 - (BOOL) _canActAsKeyWindowForScreen:(id)a;
 - (id) _deepestUnambiguousResponder;
 - (BOOL) _shouldParticipateInVirtualResizing;
 - (void) _willTransitionToVirtualHorizontalSizeClass:(long long)avirtualVerticalSizeClass:(long long)b;
 - (long long) _windowInterfaceOrientation;
 - (void) _adjustSizeClassesAndResizeWindowToFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _updateWindowTraits;
 - (id) rootViewController;
 - (id) _scene;
 - (void) _beginModalSession;
 - (void) _endModalSession;
 - (void) _setSecure:(BOOL)a;
 - (BOOL) _isWindowServerHostingManaged;
 - (id) traitCollection;
 - (double) windowLevel;
 - (void) _setShouldDisableTransformLayerScalingForSnapshotting:(BOOL)a;
 - (void) _clearSizeClassesForStateRestoration;
 - (void) _setFirstResponder:(id)a;
 - (void) _setStateRestorationVerticalSizeClass:(long long)ahorizontalSizeClass:(long long)b;
 - (void) _setSystemGestureRecognitionIsPossible:(BOOL)aandTouchesAreCancelled:(BOOL)b;
 - ({CGPoint=dd}) _clampPointToScreenJail:({CGPoint=dd})a;
 - ({CGPoint=dd}) warpPoint:({CGPoint=dd})a;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})afromWindow:(id)b;
 - (id) _exclusiveTouchView;
 - (void) _setExclusiveTouchView:(id)a;
 - (BOOL) _isConstrainedByScreenJail;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _sceneBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})afromWindow:(id)b;
 - (BOOL) _isHostedInAnotherProcess;
 - (void) _setTouchMap:(^{__CFDictionary=})a;
 - (void) beginDisablingInterfaceAutorotation;
 - (void) endDisablingInterfaceAutorotation;
 - (BOOL) _usesWindowServerHitTesting;
 - (id) _targetWindowForPathIndex:(long long)aatPoint:({CGPoint=dd})bforEvent:(id)cwindowServerHitTestWindow:(id)donScreen:(id)e;
 - (BOOL) _canAffectStatusBarAppearance;
 - (id) _focusedView;
 - (id) preferredFocusedItem;
 - (BOOL) _canBecomeKeyWindow;
 - (BOOL) isInternalWindow;
 - (id) _window;
 - (void) _setScene:(id)a;
 - (BOOL) _isSecure;
 - (void) _updateTransformLayer;
 - (void) _sceneBoundsDidChange;
 - (void) _createSystemGestureGateGestureRecognizerIfNeeded;
 - (void) _createContextIfNecessaryForCurrentApplicationState;
 - (void) _setDeferredLaunchOrientation:(long long)a;
 - (void) _installFocusEngine;
 - (void) _commonInitAttachedWindow:(BOOL)adebugName:(id)bscene:(id)c;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})aattached:(BOOL)b;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})adebugName:(id)battached:(BOOL)c;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})adebugName:(id)bscene:(id)cattached:(BOOL)d;
 - (int) bitsPerComponent;
 - (void) _updateContextOrderingAndSetLayerHidden:(BOOL)a;
 - (void) setScreen:(id)a;
 - (void) awakeFromNib;
 - (void) _setWindowInternalConstraints:(id)a;
 - (void) _setMouseDownView:(id)awithEvent:(^{__GSEvent=})b;
 - (void) _setMouseEnteredView:(id)a;
 - (void) _endKeyWindowDeferral;
 - (void) _makeKeyWindowIgnoringOldKeyWindow:(BOOL)a;
 - (void) _setTraitCollectionChangeTransitionCoordinator:(id)a;
 - (BOOL) _shouldDisableTransformLayerScalingForSnapshotting;
 - (BOOL) _isRotatedByScreenJail;
 - (BOOL) _isScaledByScreenJail;
 - (BOOL) _shouldApplyHorizontalPixelScaleTransform;
 - (BOOL) _isOffsetByScreenJail;
 - (void) _updateTransformLayerForClassicPresentation;
 - (BOOL) _isClippedByScreenJail;
 - (void) _createContextAttached:(BOOL)a;
 - (int) windowOutput;
 - (BOOL) _ignoresHitTest;
 - (BOOL) _disableGroupOpacity;
 - (BOOL) _shouldCreateContextAsSecure;
 - (void) _configureContextOptions:(id)a;
 - (BOOL) _shouldUseRemoteContext;
 - (void) _updateSceneIfNecessary;
 - (void) _destroyContextFromScreen:(id)a;
 - (void) _createContext;
 - (BOOL) keepContextInBackground;
 - (void) _destroyContext;
 - (void) _beginKeyWindowDeferral;
 - (id) _rootViewConstraints;
 - (void) _setRootViewConstraints:(id)a;
 - (void) _updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
 - (id) _rootViewConstraintsUpdateIfNecessaryForView:(id)a;
 - (void) setNeedsPreferredFocusedItemUpdate;
 - (void) makeKeyWindow;
 - (void) _resignKeyWindowStatus;
 - (void) addRootViewControllerViewIfPossible;
 - (@?) _deferredLaunchBlock;
 - (void) _updateToInterfaceOrientation:(long long)aduration:(double)bforce:(BOOL)c;
 - (void) _setHidden:(BOOL)aforced:(BOOL)b;
 - (double) _touchSloppinessFactor;
 - (double) _chargeMultiplicationFactor;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})atoWindow:(id)b;
 - (BOOL) _isScrollingEnabledForView:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})atoWindow:(id)b;
 - (void) _sendGesturesForEvent:(id)a;
 - (void) _sendTouchesForEvent:(id)a;
 - (void) _sendButtonGesturesForEvent:(id)a;
 - (void) _sendButtonsForEvent:(id)a;
 - ({CGPoint=dd}) _convertPointToSceneReferenceSpace:({CGPoint=dd})a;
 - ({CGPoint=dd}) _convertPointFromSceneReferenceSpace:({CGPoint=dd})a;
 - (id) _rootForKeyResponderCycle;
 - (void) setCenter:({CGPoint=dd})a;
 - (void) _positionHeaderView:(id)aandFooterView:(id)boutsideContentViewForInterfaceOrientation:(long long)c;
 - (void) _slideHeaderView:(id)aandFooterView:(id)boffScreen:(BOOL)cforInterfaceOrientation:(long long)d;
 - (id) _rotationViewControllers;
 - (id) _clientsForRotation;
 - (BOOL) _legacyShouldAutorotateToInterfaceOrientation:(long long)a;
 - (@?) _shouldPreventRotationHook;
 - (BOOL) _shouldAutorotateToInterfaceOrientation:(long long)acheckForDismissal:(BOOL)bisRotationDisabled:(^B)c;
 - (BOOL) isRotating;
 - (long long) _deferredLaunchOrientation;
 - (void) _setDeferredLaunchBlock:(@?)a;
 - (long long) _toWindowOrientation;
 - (void) _willChangeToSize:({CGSize=dd})aorientation:(long long)bscreen:(id)cwithTransitionCoordinator:(id)d;
 - (void) _setShouldHitTestEntireScreen:(BOOL)a;
 - (void) _updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)a;
 - (BOOL) _shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) _setRotatableViewOrientation:(long long)aduration:(double)bforce:(BOOL)c;
 - (void) _updateInterfaceOrientationFromDeviceOrientation:(BOOL)a;
 - (BOOL) isInterfaceAutorotationDisabled;
 - (void) _handleDeviceOrientationChange:(id)a;
 - (void) endDisablingInterfaceAutorotationAnimated:(BOOL)a;
 - (void) setAutorotates:(BOOL)aforceUpdateInterfaceOrientation:(BOOL)b;
 - (void) _handleStatusBarOrientationChange:(id)a;
 - (void) _setRotatableViewOrientation:(long long)aupdateStatusBar:(BOOL)bduration:(double)cforce:(BOOL)d;
 - (void) _updateStatusBarToInterfaceOrientation:(long long)aduration:(double)bfenceID:(int)canimation:(int)d;
 - (void) _setRotatableClient:(id)atoOrientation:(long long)bupdateStatusBar:(BOOL)cduration:(double)dforce:(BOOL)e;
 - (void) _setRotatableClient:(id)atoOrientation:(long long)bupdateStatusBar:(BOOL)cduration:(double)dforce:(BOOL)eisRotating:(BOOL)f;
 - (void) _setRotatableClient:(id)atoOrientation:(long long)bapplyTransformToWindow:(BOOL)cupdateStatusBar:(BOOL)dduration:(double)eforce:(BOOL)fisRotating:(BOOL)g;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _convertRectToSceneReferenceSpace:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})asendTraitNotifications:(BOOL)b;
 - (void) _rotateToBounds:({CGRect={CGPoint=dd}{CGSize=dd}})awithAnimator:(id)btransitionContext:(id)c;
 - (void) _rotateWindowToOrientation:(long long)aupdateStatusBar:(BOOL)bduration:(double)cskipCallbacks:(BOOL)d;
 - (id) __clientsForRotationCallbacks;
 - (void) _finishedFirstHalfRotation:(id)afinished:(id)bcontext:(id)c;
 - (void) _updateStatusBarToInterfaceOrientation:(long long)aduration:(double)b;
 - (void) _finishedFullRotation:(id)afinished:(id)bcontext:(id)c;
 - (void) _finishedFullRotation:(id)afinished:(id)bcontext:(id)cskipNotification:(BOOL)d;
 - (BOOL) _alwaysGetsContexts;
 - (BOOL) _shouldPrepareScreenForWindow;
 - (void) _removeFocusEngine;
 - (void) _updateWindowTraitsAndNotify:(BOOL)a;
 - (BOOL) _shouldPropigateTraitCollectionChanges;
 - (id) _traitCollectionForSize:({CGSize=dd})ascreen:(id)b;
 - (id) _traitCollectionForSize:({CGSize=dd})ascreenCollection:(id)b;
 - (id) _traitCollectionForSize:({CGSize=dd})ascreenCollection:(id)bvirtualHorizontalSizeClass:(long long)cvirtualVerticalSizeClass:(long long)d;
 - (void) _willTransitionToTraitCollection:(id)awithTransitionCoordinator:(id)b;
 - (void) _propagateTraitCollectionChangedForStateRestoration;
 - (void) _updateIsSceneSizedFlag;
 - (void) _autolayout_windowDidChangeBoundsFrom:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _autolayout_windowDidChangeCenterFrom:({CGPoint=dd})a;
 - (void) resignKeyWindow;
 - (void) becomeKeyWindow;
 - (id) _deferralPropertiesWithContextID:(unsigned int)a;
 - (BOOL) _canPromoteFromKeyWindowStack;
 - (void) undo:(id)a;
 - (void) redo:(id)a;
 - (BOOL) _isStatusBarWindow;
 - (void) handleStatusBarChangeFromHeight:(double)atoHeight:(double)b;
 - (^v) createIOSurfaceWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) _shouldResizeWithScene;
 - (void) _updateAppTintView;
 - (void) _updateCurrentTintView;
 - (BOOL) resizesToFullScreen;
 - (void) _focusedViewDidChange:(id)a;
 - (void) _setNeedsFocusItemOverlayUpdate;
 - (id) _focusEngine;
 - (void) _moveWithEvent:(id)a;
 - (BOOL) _shouldHitTestEntireScreen;
 - (BOOL) isAncestorOfItem:(id)a;
 - (void) _updateFocusItemOverlayViews;
 - (id) _debugName;
 - (id) _initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})adebugName:(id)b;
 - (id) initWithContentRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) _updateTransformLayerSizeForClassicPresentation;
 - (void) _transformLayerShouldMaskToBounds:(BOOL)a;
 - (BOOL) _hasContext;
 - (void) _orderContextToFront;
 - (BOOL) _disableViewScaling;
 - (BOOL) _legacyOrientationChecks;
 - (void) _setLegacyOrientationChecks:(BOOL)a;
 - (void) makeKeyAndOrderFront:(id)a;
 - (void) orderFront:(id)a;
 - (void) orderOut:(id)a;
 - (void) makeKey:(id)a;
 - (id) _targetForStolenStatusBarTouchesAtPoint:({CGPoint=dd})awithEvent:(id)bexcludingWindow:(id)c;
 - (void) _scrollToTopViewsUnderScreenPointIfNecessary:({CGPoint=dd})aresultHandler:(@?)b;
 - (BOOL) _disableAutomaticKeyboardBehavior;
 - (BOOL) _disableAutomaticKeyboardUI;
 - ({CGPoint=dd}) _convertOffset:({CGPoint=dd})atoWindow:(id)b;
 - ({CGPoint=dd}) _convertOffset:({CGPoint=dd})afromWindow:(id)b;
 - ({CGPoint=dd}) _convertOffsetToSceneReferenceSpace:({CGPoint=dd})a;
 - ({CGPoint=dd}) _convertOffsetFromSceneReferenceSpace:({CGPoint=dd})a;
 - (double) _convertVisualAltitude:(double)afromWindow:(id)b;
 - (double) _convertVisualAltitude:(double)atoWindow:(id)b;
 - (BOOL) _containedInAbsoluteResponderChain;
 - ({CGPoint=dd}) convertWindowToDevice:({CGPoint=dd})a;
 - ({CGPoint=dd}) convertDeviceToWindow:({CGPoint=dd})a;
 - (void) setBecomeKeyOnOrderFront:(BOOL)a;
 - (void) _slideFooterFromOrientation:(long long)atoOrientation:(long long)bstartSnapshot:(id)cendSnapshot:(id)dduration:(double)e;
 - (void) _addRotationViewController:(id)a;
 - (void) _removeRotationViewController:(id)a;
 - (void) _clearPendingKeyboardChanges;
 - (unsigned long long) _supportedInterfaceOrientationsForRootViewController;
 - (BOOL) _isAnyWindowRotating;
 - (void) _setWindowControlsStatusBarOrientation:(BOOL)a;
 - (void) _updateToInterfaceOrientation:(long long)aanimated:(BOOL)b;
 - (void) _updateInterfaceOrientationFromDeviceOrientation;
 - (void) setAutorotates:(BOOL)a;
 - (void) _setRotatableViewOrientation:(long long)aduration:(double)b;
 - (void) _setRotatableViewOrientation:(long long)aupdateStatusBar:(BOOL)bduration:(double)c;
 - (void) _forceTwoPartRotationAnimation:(BOOL)a;
 - (void) _setRotatableClient:(id)atoOrientation:(long long)bduration:(double)cforce:(BOOL)d;
 - (BOOL) autorotates;
 - (BOOL) isUsingOnePartRotationAnimation;
 - (void) _setWindowInterfaceOrientation:(long long)a;
 - (void) synchronizeDrawingWithID:(int)acount:(unsigned long long)b;
 - (id) _appearanceContainer;
 - (BOOL) _systemGestureRecognitionIsPossible;
 - (BOOL) _shouldDelayTouchForSystemGestures:(id)a;
 - (id) _traitCollectionWhenRotated;
 - ({?=qq}) __sizeClassPair;
 - (void) _screenWillTransitionToTraitCollection:(id)a;
 - (void) _makeExternalKeyWindow;
 - (void) _registerChargedView:(id)a;
 - (void) _unregisterChargedView:(id)a;
 - (id) _registeredScrollToTopViews;
 - (void) _registerScrollToTopView:(id)a;
 - (void) _unregisterScrollToTopView:(id)a;
 - (void) _setFocusEngine:(id)a;
 - (void) _setIsSettingFirstResponder:(BOOL)a;
 - (BOOL) _isSettingFirstResponder;
 - (id) _firstResponder;
 - (BOOL) _becomeFirstResponderWhenPossible;
 - (BOOL) _supportsBecomeFirstResponderWhenPossible;
 - (^v) createIOSurface;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _convertRectFromSceneReferenceSpace:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - ({CGPoint=dd}) _convertDoublePointToSceneReferenceSpace:({CGPoint=dd})a;
 - ({CGPoint=dd}) _convertDoublePointFromSceneReferenceSpace:({CGPoint=dd})a;
 - (BOOL) _isInAWindow;
 - (id) _responderWindow;
 - ({CGPoint=dd}) _transformDisplayToWindowCoordinates:({CGPoint=dd})a;
 - (void) setKeepContextInBackground:(BOOL)a;
 - (void) _registerViewForSubtreeMonitoring:(id)a;
 - (void) _unregisterViewForSubtreeMonitoring:(id)a;
 - (id) _subtreeMonitorsForView:(id)a;
 - (void) _writeLayerTreeToPath:(id)a;
 - (void) _tintViewDidChangeAppearance:(id)a;
 - (void) _updateCurrentTintViewForPotentialTintView:(id)a;
 - (void) _addTintView:(id)a;
 - (void) _removeTintView:(id)a;
 - (id) _responderSelectionContainerViewForResponder:(id)a;
 - (id) _directionalGestureRecognizers;
 - (id) _deepestPreferredFocusItem;
 - (id) _rootLayer;
 - (id) _normalInheritedTintColor;
 - (BOOL) _appearsInLoupe;
 - (id) _viewControllersInPreferredFocusedChain;
 - (id) _traitCollectionChangeTransitionCoordinator;
 - (id) _windowInternalConstraints;
 - (BOOL) _containedGestureRecognizersShouldRespectGestureServerInstructions;
 - (void) _setContainedGestureRecognizersShouldRespectGestureServerInstructions:(BOOL)a;
 - (BOOL) _usesLegacySupportedOrientationChecks;
 - (long long) _fromWindowOrientation;
 - (void) _setAnimationController:(id)a;
 - (void) _setShouldPreventRotationHook:(@?)a;
 - (id) _layoutEngineCreateIfNecessary;
 - (void) _switchToLayoutEngine:(id)a;
 - (void) updateConstraintsIfNeeded;
 - (void) _constraints_subviewWillChangeSuperview:(id)a;
 - (id) _layoutEngineIfAvailable;
 - (void) updateConstraints;
 - (BOOL) inhibitSetupOrientation;
 - (BOOL) inhibitManualTransform;
 - (double) _classicOffset;
 - (void) _matchDeviceOrientation;
 - (void) keyboardDidHide;
 - (BOOL) inhibitTextEffectsRotation;
 - (void) setupForOrientation:(long long)a;
 - (void) matchDeviceOrientation:(id)a;
 - (BOOL) isElementAccessibilityExposedToInterfaceBuilder;
 - (id) _hostingHandle;
 - (void) _invalidateWindowInternalConstraints;
 - (void) _initializeLayoutEngine;
 - (id) _uiib_candidateRedundantConstraints;
 - (id) _descendantWithAmbiguousLayout;
 - (void) exerciseAmbiguityInLayout;
 - (id) _uiib_layoutEngineCreatingIfNecessary;
 - (id) _redundantConstraints;
 - (BOOL) hasAmbiguousLayout;
 - (unsigned long long) _expectedWindowInternalConstraintsCount;
 - (void) _windowInternalConstraints_sizeDidChange;
 - (void) _windowInternalConstraints_centerDidChange;
 - (void) _uiib_invalidateWindowInternalConstraints;
 - (void) _setIsLoweringAnchoringConstraints:(BOOL)a;
 - (id) _centerExpressionInContainer:(id)avertical:(BOOL)bcontentInsetScale:(double)c;
 - (BOOL) _isLoweringAnchoringConstraints;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (id) screen;
 - (void) _commonInit;
 - (void) removeFromSuperview;
 - (id) contentView;
 - (void) setContentView:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) representation;
 - (double) level;
 - (long long) interfaceOrientation;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setLevel:(double)a;
 - (void) setBounds:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (id) firstResponder;
 - (id) undoManager;
 - (void) setHidden:(BOOL)a;
 - (id) nextResponder;
 - (BOOL) becomeFirstResponder;
 - (BOOL) isKeyWindow;
 - (void) sendEvent:(id)a;
 - (void) setRootViewController:(id)a;
 - (void) makeKeyAndVisible;


@end
