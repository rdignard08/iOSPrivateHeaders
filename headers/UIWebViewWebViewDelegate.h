
@interface UIWebViewWebViewDelegate : NSObject {

    UIWebView* uiWebView;
}

 - (id) initWithUIWebView:(id)a ;
 - (void) _clearUIWebView;
 - (id) webView:(id)a createWebViewWithRequest:(id)b ;
 - (void) webView:(id)a runJavaScriptAlertPanelWithMessage:(id)b initiatedByFrame:(id)c ;
 - (BOOL) webView:(id)a runJavaScriptConfirmPanelWithMessage:(id)b initiatedByFrame:(id)c ;
 - (id) webView:(id)a runJavaScriptTextInputPanelWithPrompt:(id)b defaultText:(id)c initiatedByFrame:(id)d ;
 - (void) webView:(id)a printFrameView:(id)b ;
 - (void) webView:(id)a frame:(id)b exceededDatabaseQuotaForSecurityOrigin:(id)c database:(id)d ;
 - (void) webView:(id)a exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)b totalSpaceNeeded:(unsigned long long)c ;
 - (void) webView:(id)a unableToImplementPolicyWithError:(id)b frame:(id)c ;
 - (void) webView:(id)a decidePolicyForMIMEType:(id)b request:(id)c frame:(id)d decisionListener:(id)e ;
 - (void) webView:(id)a decidePolicyForNavigationAction:(id)b request:(id)c frame:(id)d decisionListener:(id)e ;
 - (void) webView:(id)a decidePolicyForNewWindowAction:(id)b request:(id)c newFrameName:(id)d decisionListener:(id)e ;
 - (void) webViewClose:(id)a ;
 - (void) webViewSupportedOrientationsUpdated:(id)a ;
 - (void) webView:(id)a didStartProvisionalLoadForFrame:(id)b ;
 - (void) webView:(id)a didReceiveServerRedirectForProvisionalLoadForFrame:(id)b ;
 - (void) webView:(id)a didFailProvisionalLoadWithError:(id)b forFrame:(id)c ;
 - (void) webView:(id)a didCommitLoadForFrame:(id)b ;
 - (void) webView:(id)a didReceiveTitle:(id)b forFrame:(id)c ;
 - (void) webView:(id)a didFinishLoadForFrame:(id)b ;
 - (void) webView:(id)a didFailLoadWithError:(id)b forFrame:(id)c ;
 - (void) webView:(id)a didChangeLocationWithinPageForFrame:(id)b ;
 - (void) webView:(id)a didClearWindowObject:(id)b forFrame:(id)c ;
 - (void) webView:(id)a didFirstLayoutInFrame:(id)b ;
 - (id) webView:(id)a identifierForInitialRequest:(id)b fromDataSource:(id)c ;
 - (id) webThreadWebView:(id)a resource:(id)b willSendRequest:(id)c redirectResponse:(id)d fromDataSource:(id)e ;
 - (void) webView:(id)a resource:(id)b didReceiveAuthenticationChallenge:(id)c fromDataSource:(id)d ;
 - (BOOL) webView:(id)a resource:(id)b canAuthenticateAgainstProtectionSpace:(id)c forDataSource:(id)d ;
 - (id) webView:(id)a connectionPropertiesForResource:(id)b dataSource:(id)c ;
 - (void) webView:(id)a resource:(id)b didCancelAuthenticationChallenge:(id)c fromDataSource:(id)d ;
 - (void) webView:(id)a resource:(id)b didFinishLoadingFromDataSource:(id)c ;
 - (void) webView:(id)a resource:(id)b didFailLoadingWithError:(id)c fromDataSource:(id)d ;
 - (void) webView:(id)a decidePolicyForGeolocationRequestFromOrigin:(id)b frame:(id)c listener:(id)d ;


@end
