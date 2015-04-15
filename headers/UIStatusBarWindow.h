
@interface UIStatusBarWindow : UIWindow {

    @"UIStatusBar" _statusBar;
    q _orientation;
    @"UIStatusBarCorners" _topCorners;
    d _topCornersOffset;
    @"UIStatusBarCorners" _bottomCorners;
    BOOL _cornersHidden;
}
 + (BOOL) _isSystemWindow;
 + (BOOL) isIncludedInClassicJail;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) _defaultStatusBarSceneReferenceBounds;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) _defaultStatusBarSceneBoundsForOrientation:(q)a;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) _defaultStatusBarSceneBounds;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) statusBarWindowFrame;

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})awithEvent:(id)b;
 - (void) setStatusBar:(id)a;
 - (void) setOrientation:(q)aanimationParameters:(id)b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _sceneReferenceBounds;
 - (BOOL) _shouldZoom;
 - (BOOL) _canActAsKeyWindowForScreen:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _sceneBounds;
 - (void) _updateTransformLayerForClassicPresentation;
 - (BOOL) _disableGroupOpacity;
 - (BOOL) _isStatusBarWindow;
 - (BOOL) _disableViewScaling;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) statusBarWindowFrame;
 - (void) _rotate;
 - (void) setCornersHidden:(BOOL)aanimationParameters:(id)b;
 - (void) setTopCornerStyle:(i)atopCornersOffset:(d)bbottomCornerStyle:(i)canimationParameters:(id)d;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (q) orientation;


@end
