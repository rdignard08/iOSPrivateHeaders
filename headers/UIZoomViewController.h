
@interface UIZoomViewController : UIViewController {

    @"UIWindow" _window;
    @"UIButton" _zoomButton;
}

 - (void) dealloc;
 - (void) loadView;
 - (BOOL) isClassicControlWindow:(id)a;
 - (void) _setupPositioningAndRotationForInterfaceOrientation:(q)aoffscreen:(BOOL)b;
 - (void) _zoomOrientationChange:(id)a;
 - (void) _applicationDidFinishLaunching:(id)a;
 - (void) _suspendAnimationStarted:(id)a;
 - (void) _updateZoomButtonTitle;
 - (id) _zoomText:(BOOL)a;
 - (void) _changeZoom:(id)a;
 - (void) _zoomOrientationAnimationFinished:(id)afinished:(BOOL)bcontext:(^v)c;
 - (void) _getRotationContentSettings:(^{?=BBBBBdi})aforWindow:(id)b;
 - (id) init;
 - (id) window;
 - (id) screen;


@end
