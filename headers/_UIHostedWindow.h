
@interface _UIHostedWindow : UIWindow {

    BOOL _wantsTraitPropigation;
    long long _hostTintAdjustmentMode;
    UITraitCollection* _hostTraitCollection;
    long long _toWindowOrientation;
    long long _fromWindowOrientation;
}

 - (void) dealloc;
 - (BOOL) _needsShakesWhenInactive;
 - (BOOL) _isWindowServerHostingManaged;
 - (BOOL) _isConstrainedByScreenJail;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _sceneBounds;
 - (BOOL) _usesWindowServerHitTesting;
 - (void) setScreen:(id)a;
 - (BOOL) _isRotatedByScreenJail;
 - (BOOL) _isScaledByScreenJail;
 - (BOOL) _isOffsetByScreenJail;
 - (void) _updateTransformLayerForClassicPresentation;
 - (BOOL) _isClippedByScreenJail;
 - (void) _configureContextOptions:(id)a;
 - (long long) _toWindowOrientation;
 - (BOOL) _shouldPropigateTraitCollectionChanges;
 - (id) _traitCollectionForSize:({CGSize=dd})ascreenCollection:(id)bvirtualHorizontalSizeClass:(long long)cvirtualVerticalSizeClass:(long long)d;
 - (BOOL) _canPromoteFromKeyWindowStack;
 - (void) _updateAppTintView;
 - (void) _registerScrollToTopView:(id)a;
 - (void) _unregisterScrollToTopView:(id)a;
 - (long long) _fromWindowOrientation;
 - (long long) _defaultTintAdjustmentMode;
 - (id) hostingHandle;
 - (long long) _hostTintAdjustmentMode;
 - (void) _setWantsTraitPropigation:(BOOL)a;
 - (void) _setHostTintAdjustmentMode:(long long)a;
 - (void) _setHostTraitCollection:(id)a;
 - (BOOL) _presentActionSheet:(id)ainView:(id)bfromYCoordinate:(double)c;
 - (id) _hostTraitCollection;
 - (BOOL) _wantsTraitPropigation;
 - (void) _setToWindowOrientation:(long long)a;
 - (void) _setFromWindowOrientation:(long long)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (unsigned int) contextID;


@end
