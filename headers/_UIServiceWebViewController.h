
@protocol _UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate;
@interface _UIServiceWebViewController : UIViewController <_UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate> {

    _UIServiceWebView* _uiWebView;
    WebUIBrowserLoadingController* _loadingController;
}
 + (id) _exportedInterface;
 + (id) _remoteViewControllerInterface;

 - (void) dealloc;
 - (id) initWithNibName:(id)a bundle:(id)b ;
 - (void) loadView;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(long long)a ;
 - (void) willRotateToInterfaceOrientation:(long long)a duration:(double)b ;
 - (void) didRotateFromInterfaceOrientation:(long long)a ;
 - (void) loadHTMLString:(id)a baseURL:(id)b ;
 - (id) _makeAlertView;
 - (void) _willAppearInRemoteViewController;
 - (void) loadEncodedRequest:(id)a ;
 - (void) loadUserTypedAddress:(id)a ;
 - (void) setShouldDecidePolicyRemotely:(BOOL)a ;
 - (void) configureWithEncodedSettings:(id)a ;
 - (void) _webContentSizeWithReplyHandler:(@?)a ;
 - (BOOL) _isInternalInstall;
 - (void) browserLoadingControllerDidUpdateURLString:(id)a ;
 - (void) browserLoadingControllerDidUpdateTitle:(id)a ;
 - (void) browserLoadingControllerDidUpdateBackForward:(id)a ;
 - (void) browserLoadingControllerDidUpdateEstimatedProgress:(id)a ;
 - (void) browserLoadingControllerDidStartLoading:(id)a ;
 - (void) browserLoadingController:(id)a didFinishLoadingWithError:(id)b dataSource:(id)c ;
 - (void) _remotelyDecidePolicyForRequest:(id)a inMainFrame:(BOOL)b navigationType:(id)c decisionHandler:(@?)d ;
 - (void) _remotelyDispatchWillPresentViewControllerWithCompletionHandler:(@?)a ;
 - (void) _remotelyDispatchDidDismissViewController;
 - (void) stopLoading;
 - (void) goBack;
 - (void) goForward;
 - (void) reload;


@end
