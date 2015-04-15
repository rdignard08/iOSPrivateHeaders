
@interface UIStatusBarViewController : UIViewController {

    BOOL _iPhoneWS;
    UIWindow* _window;
    UIView* _statusBar;
    UIClassicStatusBarView* _statusBarBackgroundView;
    BOOL _keyboardVisible;
}
 + (double) statusBarOrientationAnimationDurationFrom:(long long)ato:(long long)b;

 - (void) dealloc;
 - (void) setStatusBarStyle:(long long)a animationParameters:(id)b ;
 - (void) setStatusBarHidden:(BOOL)a animationParameters:(id)b ;
 - (void) setStatusBarOrientation:(long long)a animationParameters:(id)b ;
 - (void) loadView;
 - (BOOL) isClassicControlWindow:(id)a ;
 - (void) _updateStatusBarForRotationFromInterfaceOrientation:(long long)a toInterfaceOrientation:(long long)b style:(long long)c hidden:(BOOL)d slideUp:(BOOL)e ;
 - (void) _changeStatusBarOrientationFrom:(long long)a toOrientation:(long long)b ;
 - (void) _prepareForZoom:(BOOL)a ;
 - (void) _zoom:(BOOL)a animated:(BOOL)b ;
 - (void) _statusBarViewControllerKeyboardWillShow:(id)a ;
 - (void) _statusBarViewControllerKeyboardDidHide:(id)a ;
 - (void) _statusBarHideAnimationFinished:(id)a finished:(BOOL)b hidden:(id)c ;
 - (void) _updateStatusBarGeometryForRotationFromInterfaceOrientation:(long long)a toInterfaceOrientation:(long long)b hidden:(BOOL)c slideUp:(BOOL)d ;
 - (void) _changeStatusBarOrientationFinished:(id)a finished:(BOOL)b context:(^v)c ;
 - (void) _finishStatusBarOrientationChange;
 - ({CGSize=dd}) _statusBarSizeForOrientation:(long long)a ;
 - (id) init;
 - (id) window;


@end
