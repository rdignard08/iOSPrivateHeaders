
@protocol _UIScreenBasedObject;
@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject> {

    BOOL _inDealloc;
    Q _activeEffectsCount;
    Q _hostedUseCount;
    d _defaultWindowLevel;
    {CGPoint="x"d"y"d} _hostedWindowOffset;
    @"NSDictionary" _perScreenOptions;
    Q _activeRemoteViewCount;
    Q _windowLevelCount;
    [5d] _windowLevelStack;
}
 + (BOOL) _isSystemWindow;
 + (id) activeTextEffectsWindowForScreen:(id)a;
 + (id) sharedTextEffectsWindowForScreen:(id)a;
 + (id) _sharedTextEffectsWindowforScreen:(id)aaboveStatusBar:(BOOL)ballowHosted:(BOOL)cmatchesStatusBarOrientationOnAccess:(BOOL)d;
 + (id) sharedTextEffectsWindow;
 + (id) sharedTextEffectsWindowAboveStatusBar;
 + (void) releaseSharedInstances;
 + (void) raiseTextEffectsWindowsForShowNotificationCenter;
 + (void) lowerTextEffectsWindowsForHideNotificationCenter;

 - (id) _options;
 - (void) dealloc;
 - (void) bringSubviewToFront:(id)a;
 - (void) sendSubviewToBack:(id)a;
 - (BOOL) _isTextEffectsWindow;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _sceneReferenceBounds;
 - (BOOL) _shouldTintStatusBar;
 - (BOOL) _canActAsKeyWindowForScreen:(id)a;
 - (BOOL) _shouldParticipateInVirtualResizing;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})afromWindow:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _sceneBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})afromWindow:(id)b;
 - (BOOL) _canAffectStatusBarAppearance;
 - (BOOL) isInternalWindow;
 - (void) _createSystemGestureGateGestureRecognizerIfNeeded;
 - (void) _updateTransformLayerForClassicPresentation;
 - (void) _configureContextOptions:(id)a;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})atoWindow:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})atoWindow:(id)b;
 - (BOOL) _shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) _handleStatusBarOrientationChange:(id)a;
 - (void) handleStatusBarChangeFromHeight:(d)atoHeight:(d)b;
 - (BOOL) _shouldResizeWithScene;
 - (BOOL) _disableViewScaling;
 - (void) didAddSubview:(id)a;
 - (void) _didRemoveSubview:(id)a;
 - ({CGPoint=dd}) hostedWindowOffset;
 - (BOOL) useHostedInstance;
 - (void) _matchDeviceOrientation;
 - (id) _basicInitWithScreen:(id)aoptions:(id)b;
 - (void) setDefaultWindowLevel:(d)a;
 - (d) defaultWindowLevel;
 - (id) _initWithScreen:(id)aoptions:(id)b;
 - (BOOL) _matchingOptions:(id)a;
 - (id) _intendedScreen;
 - (void) applicationWindowRotated:(id)a;
 - ({CGPoint=dd}) _adjustPointForHostedDisplay:({CGPoint=dd})ahasTarget:(BOOL)binset:(BOOL)c;
 - (void) delayHideWindow;
 - (void) sortSubviews;
 - (void) updateForOrientation:(q)a;
 - (void) updateForOrientation:(q)aforceResetTransform:(BOOL)b;
 - (id) aboveStatusBarWindow;
 - (void) setUseHostedInstance:(BOOL)a;
 - (void) _setWindowLevel:(d)a;
 - (void) _restoreWindowLevel;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) hostedFrame;
 - ({CGPoint=dd}) classicWindowPointForPoint:({CGPoint=dd})a;
 - ({CGPoint=dd}) magnifierScreenPointForPoint:({CGPoint=dd})atargetWindow:(id)b;
 - (void) resetTransform;
 - (void) updateSubviewOrdering;
 - (id) nonHostedWindow;
 - (void) setHostedWindowOffset:({CGPoint=dd})a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})atoView:(id)b;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (q) interfaceOrientation;
 - (I) contextID;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})afromView:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})afromView:(id)b;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})atoView:(id)b;


@end
