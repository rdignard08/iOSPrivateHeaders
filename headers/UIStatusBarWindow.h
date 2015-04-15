
@interface UIStatusBarWindow : UIWindow {

    UIStatusBar* _statusBar;
    long long _orientation;
    UIStatusBarCorners* _topCorners;
    double _topCornersOffset;
    UIStatusBarCorners* _bottomCorners;
    BOOL _cornersHidden;
}
 + (BOOL) _isSystemWindow;
 + (BOOL) isIncludedInClassicJail;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) _defaultStatusBarSceneReferenceBounds;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) _defaultStatusBarSceneBoundsForOrientation:(long long)a;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) _defaultStatusBarSceneBounds;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) statusBarWindowFrame;

 - (void) dealloc;
 - (id) hitTest:({CGPoint=dd})a withEvent:(id)b ;
 - (void) setStatusBar:(id)a ;
 - (void) setOrientation:(long long)a animationParameters:(id)b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _sceneReferenceBounds;
 - (BOOL) _shouldZoom;
 - (BOOL) _canActAsKeyWindowForScreen:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) _sceneBounds;
 - (void) _updateTransformLayerForClassicPresentation;
 - (BOOL) _disableGroupOpacity;
 - (BOOL) _isStatusBarWindow;
 - (BOOL) _disableViewScaling;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) statusBarWindowFrame;
 - (void) _rotate;
 - (void) setCornersHidden:(BOOL)a animationParameters:(id)b ;
 - (void) setTopCornerStyle:(int)a topCornersOffset:(double)b bottomCornerStyle:(int)c animationParameters:(id)d ;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (long long) orientation;


@end
