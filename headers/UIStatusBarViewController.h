
@interface UIStatusBarViewController : UIViewController {

    BOOL _iPhoneWS;
    UIWindow _window;
    UIView _statusBar;
    UIClassicStatusBarView _statusBarBackgroundView;
    BOOL _keyboardVisible;
}
 + (double) statusBarOrientationAnimationDurationFrom:(long long)ato:(long long)b;

 - (void) dealloc;
 - (void) setStatusBarStyle:(long long)aanimationParameters:(id)b;
 - (void) setStatusBarHidden:(BOOL)aanimationParameters:(id)b;
 - (void) setStatusBarOrientation:(long long)aanimationParameters:(id)b;
 - (void) loadView;
 - (BOOL) isClassicControlWindow:(id)a;
 - (void) _updateStatusBarForRotationFromInterfaceOrientation:(long long)atoInterfaceOrientation:(long long)bstyle:(long long)chidden:(BOOL)dslideUp:(BOOL)e;
 - (void) _changeStatusBarOrientationFrom:(long long)atoOrientation:(long long)b;
 - (void) _prepareForZoom:(BOOL)a;
 - (void) _zoom:(BOOL)aanimated:(BOOL)b;
 - (void) _statusBarViewControllerKeyboardWillShow:(id)a;
 - (void) _statusBarViewControllerKeyboardDidHide:(id)a;
 - (void) _statusBarHideAnimationFinished:(id)afinished:(BOOL)bhidden:(id)c;
 - (void) _updateStatusBarGeometryForRotationFromInterfaceOrientation:(long long)atoInterfaceOrientation:(long long)bhidden:(BOOL)cslideUp:(BOOL)d;
 - (void) _changeStatusBarOrientationFinished:(id)afinished:(BOOL)bcontext:(^v)c;
 - (void) _finishStatusBarOrientationChange;
 - ({CGSize=dd}) _statusBarSizeForOrientation:(long long)a;
 - (id) init;
 - (id) window;


@end
