
@protocol _UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate;
@interface _UIServiceWebViewController : UIViewController <_UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate> {

    _UIServiceWebView _uiWebView;
    WebUIBrowserLoadingController _loadingController;
}
 + (id) _exportedInterface;
 + (id) _remoteViewControllerInterface;

 - (void) dealloc;
 - (id) initWithNibName:(id)abundle:(id)b;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a;
 - (void) willRotateToInterfaceOrientation:(long long)aduration:(double)b;
 - (void) didRotateFromInterfaceOrientation:(long long)a;
 - (void) loadHTMLString:(id)abaseURL:(id)b;
 - (id) _makeAlertView;
 - (void) _willAppearInRemoteViewController;
 - (void) loadEncodedRequest:(id)a;
 - (void) loadUserTypedAddress:(id)a;
 - (void) setShouldDecidePolicyRemotely:(BOOL)a;
 - (void) configureWithEncodedSettings:(id)a;
 - (void) _webContentSizeWithReplyHandler:(@?)a;
 - (BOOL) _isInternalInstall;
 - (void) browserLoadingControllerDidUpdateURLString:(id)a;
 - (void) browserLoadingControllerDidUpdateTitle:(id)a;
 - (void) browserLoadingControllerDidUpdateBackForward:(id)a;
 - (void) browserLoadingControllerDidUpdateEstimatedProgress:(id)a;
 - (void) browserLoadingControllerDidStartLoading:(id)a;
 - (void) browserLoadingController:(id)adidFinishLoadingWithError:(id)bdataSource:(id)c;
 - (void) _remotelyDecidePolicyForRequest:(id)ainMainFrame:(BOOL)bnavigationType:(id)cdecisionHandler:(@?)d;
 - (void) _remotelyDispatchWillPresentViewControllerWithCompletionHandler:(@?)a;
 - (void) _remotelyDispatchDidDismissViewController;
 - (void) stopLoading;
 - (void) goBack;
 - (void) goForward;
 - (void) reload;


@end
