
@interface _UIHostedWindow : UIWindow {

    BOOL _wantsTraitPropigation;
    q _hostTintAdjustmentMode;
    @"UITraitCollection" _hostTraitCollection;
    q _toWindowOrientation;
    q _fromWindowOrientation;
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
 - (q) _toWindowOrientation;
 - (BOOL) _shouldPropigateTraitCollectionChanges;
 - (id) _traitCollectionForSize:({CGSize=dd})ascreenCollection:(id)bvirtualHorizontalSizeClass:(q)cvirtualVerticalSizeClass:(q)d;
 - (BOOL) _canPromoteFromKeyWindowStack;
 - (void) _updateAppTintView;
 - (void) _registerScrollToTopView:(id)a;
 - (void) _unregisterScrollToTopView:(id)a;
 - (q) _fromWindowOrientation;
 - (q) _defaultTintAdjustmentMode;
 - (id) hostingHandle;
 - (q) _hostTintAdjustmentMode;
 - (void) _setWantsTraitPropigation:(BOOL)a;
 - (void) _setHostTintAdjustmentMode:(q)a;
 - (void) _setHostTraitCollection:(id)a;
 - (BOOL) _presentActionSheet:(id)ainView:(id)bfromYCoordinate:(d)c;
 - (id) _hostTraitCollection;
 - (BOOL) _wantsTraitPropigation;
 - (void) _setToWindowOrientation:(q)a;
 - (void) _setFromWindowOrientation:(q)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (I) contextID;


@end
