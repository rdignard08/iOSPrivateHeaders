
@interface UIWebViewWebViewDelegate : NSObject {

    UIWebView uiWebView;
}

 - (id) initWithUIWebView:(id)a;
 - (void) _clearUIWebView;
 - (id) webView:(id)acreateWebViewWithRequest:(id)b;
 - (void) webView:(id)arunJavaScriptAlertPanelWithMessage:(id)binitiatedByFrame:(id)c;
 - (BOOL) webView:(id)arunJavaScriptConfirmPanelWithMessage:(id)binitiatedByFrame:(id)c;
 - (id) webView:(id)arunJavaScriptTextInputPanelWithPrompt:(id)bdefaultText:(id)cinitiatedByFrame:(id)d;
 - (void) webView:(id)aprintFrameView:(id)b;
 - (void) webView:(id)aframe:(id)bexceededDatabaseQuotaForSecurityOrigin:(id)cdatabase:(id)d;
 - (void) webView:(id)aexceededApplicationCacheOriginQuotaForSecurityOrigin:(id)btotalSpaceNeeded:(unsigned long long)c;
 - (void) webView:(id)aunableToImplementPolicyWithError:(id)bframe:(id)c;
 - (void) webView:(id)adecidePolicyForMIMEType:(id)brequest:(id)cframe:(id)ddecisionListener:(id)e;
 - (void) webView:(id)adecidePolicyForNavigationAction:(id)brequest:(id)cframe:(id)ddecisionListener:(id)e;
 - (void) webView:(id)adecidePolicyForNewWindowAction:(id)brequest:(id)cnewFrameName:(id)ddecisionListener:(id)e;
 - (void) webViewClose:(id)a;
 - (void) webViewSupportedOrientationsUpdated:(id)a;
 - (void) webView:(id)adidStartProvisionalLoadForFrame:(id)b;
 - (void) webView:(id)adidReceiveServerRedirectForProvisionalLoadForFrame:(id)b;
 - (void) webView:(id)adidFailProvisionalLoadWithError:(id)bforFrame:(id)c;
 - (void) webView:(id)adidCommitLoadForFrame:(id)b;
 - (void) webView:(id)adidReceiveTitle:(id)bforFrame:(id)c;
 - (void) webView:(id)adidFinishLoadForFrame:(id)b;
 - (void) webView:(id)adidFailLoadWithError:(id)bforFrame:(id)c;
 - (void) webView:(id)adidChangeLocationWithinPageForFrame:(id)b;
 - (void) webView:(id)adidClearWindowObject:(id)bforFrame:(id)c;
 - (void) webView:(id)adidFirstLayoutInFrame:(id)b;
 - (id) webView:(id)aidentifierForInitialRequest:(id)bfromDataSource:(id)c;
 - (id) webThreadWebView:(id)aresource:(id)bwillSendRequest:(id)credirectResponse:(id)dfromDataSource:(id)e;
 - (void) webView:(id)aresource:(id)bdidReceiveAuthenticationChallenge:(id)cfromDataSource:(id)d;
 - (BOOL) webView:(id)aresource:(id)bcanAuthenticateAgainstProtectionSpace:(id)cforDataSource:(id)d;
 - (id) webView:(id)aconnectionPropertiesForResource:(id)bdataSource:(id)c;
 - (void) webView:(id)aresource:(id)bdidCancelAuthenticationChallenge:(id)cfromDataSource:(id)d;
 - (void) webView:(id)aresource:(id)bdidFinishLoadingFromDataSource:(id)c;
 - (void) webView:(id)aresource:(id)bdidFailLoadingWithError:(id)cfromDataSource:(id)d;
 - (void) webView:(id)adecidePolicyForGeolocationRequestFromOrigin:(id)bframe:(id)clistener:(id)d;


@end
