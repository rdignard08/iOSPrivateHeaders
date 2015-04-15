
@interface UIStatusBarViewController : UIViewController {

    BOOL _iPhoneWS;
    @"UIWindow" _window;
    @"UIView" _statusBar;
    @"UIClassicStatusBarView" _statusBarBackgroundView;
    BOOL _keyboardVisible;
}
 + (d) statusBarOrientationAnimationDurationFrom:(q)ato:(q)b;

 - (void) dealloc;
 - (void) setStatusBarStyle:(q)aanimationParameters:(id)b;
 - (void) setStatusBarHidden:(BOOL)aanimationParameters:(id)b;
 - (void) setStatusBarOrientation:(q)aanimationParameters:(id)b;
 - (void) loadView;
 - (BOOL) isClassicControlWindow:(id)a;
 - (void) _updateStatusBarForRotationFromInterfaceOrientation:(q)atoInterfaceOrientation:(q)bstyle:(q)chidden:(BOOL)dslideUp:(BOOL)e;
 - (void) _changeStatusBarOrientationFrom:(q)atoOrientation:(q)b;
 - (void) _prepareForZoom:(BOOL)a;
 - (void) _zoom:(BOOL)aanimated:(BOOL)b;
 - (void) _statusBarViewControllerKeyboardWillShow:(id)a;
 - (void) _statusBarViewControllerKeyboardDidHide:(id)a;
 - (void) _statusBarHideAnimationFinished:(id)afinished:(BOOL)bhidden:(id)c;
 - (void) _updateStatusBarGeometryForRotationFromInterfaceOrientation:(q)atoInterfaceOrientation:(q)bhidden:(BOOL)cslideUp:(BOOL)d;
 - (void) _changeStatusBarOrientationFinished:(id)afinished:(BOOL)bcontext:(^v)c;
 - (void) _finishStatusBarOrientationChange;
 - ({CGSize=dd}) _statusBarSizeForOrientation:(q)a;
 - (id) init;
 - (id) window;


@end
