
@interface UIClassicController : NSObject {

    UIWindow* _window;
    UIView* _chromeView;
    UIStatusBarViewController* _statusBarViewController;
    UIZoomViewController* _zoomViewController;
    BOOL _hidesClassicChrome;
    BOOL _hidesStatusBarFiller;
}
 + (id) sharedClassicController;

 - (void) dealloc;
 - (void) _initializeStatusBarOrientation;
 - (void) setStatusBarStyle:(long long)a animationParameters:(id)b ;
 - (void) setStatusBarHidden:(BOOL)a animationParameters:(id)b ;
 - (void) setStatusBarOrientation:(long long)a animationParameters:(id)b ;
 - (id) _window;
 - (void) _setupWindow;
 - (BOOL) isClassicControlWindow:(id)a ;
 - (void) setZoomed:(BOOL)a animated:(BOOL)b ;
 - (BOOL) _supportsZoom;
 - (BOOL) _shouldHideStatusBar;
 - (BOOL) isZoomed;
 - (void) setZoomed:(BOOL)a ;
 - (void) _classicChangeStatusBarOrientation:(id)a ;
 - (void) _classicChangeStatusBarOrientationFinished:(id)a finished:(BOOL)b context:(id)c ;
 - (BOOL) drawsStatusBarFiller;
 - (void) setDrawsStatusBarFiller:(BOOL)a ;


@end
