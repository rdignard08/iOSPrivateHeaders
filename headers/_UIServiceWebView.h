
@interface _UIServiceWebView : UIWebView {

    BOOL _shouldDecidePolicyRemotely;
    _UIServiceWebViewController _serviceWebViewController;
}

 - (BOOL) _webView:(id)apresentViewController:(id)banimated:(BOOL)ccompletion:(@?)d;
 - (void) _webView:(id)adismissViewControllerAnimated:(BOOL)bcompletion:(@?)c;
 - (id) _makeAlertView;
 - (void) setShouldDecidePolicyRemotely:(BOOL)a;
 - (void) setServiceWebViewController:(id)a;
 - (id) serviceWebViewController;
 - (BOOL) shouldDecidePolicyRemotely;
 - (void) webView:(id)adecidePolicyForNavigationAction:(id)brequest:(id)cframe:(id)ddecisionListener:(id)e;


@end
