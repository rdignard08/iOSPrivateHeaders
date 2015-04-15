
@interface WebDefaultFrameLoadDelegate : NSObject {

}
 + (id) sharedFrameLoadDelegate;

 - (void) webView:(id)a didStartProvisionalLoadForFrame:(id)b ;
 - (void) webView:(id)a didReceiveServerRedirectForProvisionalLoadForFrame:(id)b ;
 - (void) webView:(id)a didFailProvisionalLoadWithError:(id)b forFrame:(id)c ;
 - (void) webView:(id)a didCommitLoadForFrame:(id)b ;
 - (void) webView:(id)a didReceiveTitle:(id)b forFrame:(id)c ;
 - (void) webView:(id)a didFinishLoadForFrame:(id)b ;
 - (void) webView:(id)a didFailLoadWithError:(id)b forFrame:(id)c ;
 - (void) webView:(id)a didChangeLocationWithinPageForFrame:(id)b ;
 - (void) webView:(id)a willPerformClientRedirectToURL:(id)b delay:(double)c fireDate:(id)d forFrame:(id)e ;
 - (void) webView:(id)a didCancelClientRedirectForFrame:(id)b ;
 - (void) webView:(id)a willCloseFrame:(id)b ;
 - (void) webView:(id)a didClearWindowObject:(id)b forFrame:(id)c ;
 - (void) webView:(id)a windowScriptObjectAvailable:(id)b ;
 - (void) webView:(id)a didCreateJavaScriptContext:(id)b forFrame:(id)c ;
 - (void) webViewDidDisplayInsecureContent:(id)a ;
 - (void) webView:(id)a didRunInsecureContent:(id)b ;
 - (void) webView:(id)a didDetectXSS:(id)b ;
 - (void) webView:(id)a didClearWindowObjectForFrame:(id)b inScriptWorld:(id)c ;
 - (void) webView:(id)a didPushStateWithinPageForFrame:(id)b ;
 - (void) webView:(id)a didReplaceStateWithinPageForFrame:(id)b ;
 - (void) webView:(id)a didPopStateWithinPageForFrame:(id)b ;
 - (void) webView:(id)a didFirstLayoutInFrame:(id)b ;
 - (void) webView:(id)a didFinishDocumentLoadForFrame:(id)b ;
 - (void) webView:(id)a didHandleOnloadEventsForFrame:(id)b ;
 - (void) webView:(id)a didFirstVisuallyNonEmptyLayoutInFrame:(id)b ;
 - (void) webView:(id)a didClearInspectorWindowObject:(id)b forFrame:(id)c ;
 - (void) webView:(id)a didRemoveFrameFromHierarchy:(id)b ;
 - (void) webView:(id)a didLayout:(unsigned long long)b ;


@end
