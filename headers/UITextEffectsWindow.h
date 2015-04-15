
@protocol _UIScreenBasedObject;
@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject> {

    BOOL _inDealloc;
    unsigned long long _activeEffectsCount;
    unsigned long long _hostedUseCount;
    double _defaultWindowLevel;
    {CGPoint="x"d"y"d} _hostedWindowOffset;
    NSDictionary* _perScreenOptions;
    unsigned long long _activeRemoteViewCount;
    unsigned long long _windowLevelCount;
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
 - (void) bringSubviewToFront:(id)a ;
 - (void) sendSubviewToBack:(id)a ;
 - (BOOL) _isTextEffectsWindow;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _sceneReferenceBounds;
 - (BOOL) _shouldTintStatusBar;
 - (BOOL) _canActAsKeyWindowForScreen:(id)a ;
 - (BOOL) _shouldParticipateInVirtualResizing;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a fromWindow:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _sceneBounds;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fromWindow:(id)b ;
 - (BOOL) _canAffectStatusBarAppearance;
 - (BOOL) isInternalWindow;
 - (void) _createSystemGestureGateGestureRecognizerIfNeeded;
 - (void) _updateTransformLayerForClassicPresentation;
 - (void) _configureContextOptions:(id)a ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a toWindow:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a toWindow:(id)b ;
 - (BOOL) _shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) _handleStatusBarOrientationChange:(id)a ;
 - (void) handleStatusBarChangeFromHeight:(double)a toHeight:(double)b ;
 - (BOOL) _shouldResizeWithScene;
 - (BOOL) _disableViewScaling;
 - (void) didAddSubview:(id)a ;
 - (void) _didRemoveSubview:(id)a ;
 - ({CGPoint=dd}) hostedWindowOffset;
 - (BOOL) useHostedInstance;
 - (void) _matchDeviceOrientation;
 - (id) _basicInitWithScreen:(id)a options:(id)b ;
 - (void) setDefaultWindowLevel:(double)a ;
 - (double) defaultWindowLevel;
 - (id) _initWithScreen:(id)a options:(id)b ;
 - (BOOL) _matchingOptions:(id)a ;
 - (id) _intendedScreen;
 - (void) applicationWindowRotated:(id)a ;
 - ({CGPoint=dd}) _adjustPointForHostedDisplay:({CGPoint=dd})a hasTarget:(BOOL)b inset:(BOOL)c ;
 - (void) delayHideWindow;
 - (void) sortSubviews;
 - (void) updateForOrientation:(long long)a ;
 - (void) updateForOrientation:(long long)a forceResetTransform:(BOOL)b ;
 - (id) aboveStatusBarWindow;
 - (void) setUseHostedInstance:(BOOL)a ;
 - (void) _setWindowLevel:(double)a ;
 - (void) _restoreWindowLevel;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) hostedFrame;
 - ({CGPoint=dd}) classicWindowPointForPoint:({CGPoint=dd})a ;
 - ({CGPoint=dd}) magnifierScreenPointForPoint:({CGPoint=dd})a targetWindow:(id)b ;
 - (void) resetTransform;
 - (void) updateSubviewOrdering;
 - (id) nonHostedWindow;
 - (void) setHostedWindowOffset:({CGPoint=dd})a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a toView:(id)b ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (long long) interfaceOrientation;
 - (unsigned int) contextID;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a fromView:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) convertRect:({CGRect={CGPoint=dd}{CGSize=dd}})a fromView:(id)b ;
 - ({CGPoint=dd}) convertPoint:({CGPoint=dd})a toView:(id)b ;


@end
