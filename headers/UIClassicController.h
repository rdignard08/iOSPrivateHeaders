
@interface UIClassicController : NSObject {

    @"UIWindow" _window;
    @"UIView" _chromeView;
    @"UIStatusBarViewController" _statusBarViewController;
    @"UIZoomViewController" _zoomViewController;
    BOOL _hidesClassicChrome;
    BOOL _hidesStatusBarFiller;
}
 + (id) sharedClassicController;

 - (void) dealloc;
 - (void) _initializeStatusBarOrientation;
 - (void) setStatusBarStyle:(long long)aanimationParameters:(id)b;
 - (void) setStatusBarHidden:(BOOL)aanimationParameters:(id)b;
 - (void) setStatusBarOrientation:(long long)aanimationParameters:(id)b;
 - (id) _window;
 - (void) _setupWindow;
 - (BOOL) isClassicControlWindow:(id)a;
 - (void) setZoomed:(BOOL)aanimated:(BOOL)b;
 - (BOOL) _supportsZoom;
 - (BOOL) _shouldHideStatusBar;
 - (BOOL) isZoomed;
 - (void) setZoomed:(BOOL)a;
 - (void) _classicChangeStatusBarOrientation:(id)a;
 - (void) _classicChangeStatusBarOrientationFinished:(id)afinished:(BOOL)bcontext:(id)c;
 - (BOOL) drawsStatusBarFiller;
 - (void) setDrawsStatusBarFiller:(BOOL)a;


@end
