
@interface _UIServiceWebView : UIWebView {

    BOOL _shouldDecidePolicyRemotely;
    _UIServiceWebViewController* _serviceWebViewController;
}

 - (BOOL) _webView:(id)a presentViewController:(id)b animated:(BOOL)c completion:(@?)d ;
 - (void) _webView:(id)a dismissViewControllerAnimated:(BOOL)b completion:(@?)c ;
 - (id) _makeAlertView;
 - (void) setShouldDecidePolicyRemotely:(BOOL)a ;
 - (void) setServiceWebViewController:(id)a ;
 - (id) serviceWebViewController;
 - (BOOL) shouldDecidePolicyRemotely;
 - (void) webView:(id)a decidePolicyForNavigationAction:(id)b request:(id)c frame:(id)d decisionListener:(id)e ;


@end
