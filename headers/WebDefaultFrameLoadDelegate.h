
@interface WebDefaultFrameLoadDelegate : NSObject {

}
 + (id) sharedFrameLoadDelegate;

 - (void) webView:(id)adidStartProvisionalLoadForFrame:(id)b;
 - (void) webView:(id)adidReceiveServerRedirectForProvisionalLoadForFrame:(id)b;
 - (void) webView:(id)adidFailProvisionalLoadWithError:(id)bforFrame:(id)c;
 - (void) webView:(id)adidCommitLoadForFrame:(id)b;
 - (void) webView:(id)adidReceiveTitle:(id)bforFrame:(id)c;
 - (void) webView:(id)adidFinishLoadForFrame:(id)b;
 - (void) webView:(id)adidFailLoadWithError:(id)bforFrame:(id)c;
 - (void) webView:(id)adidChangeLocationWithinPageForFrame:(id)b;
 - (void) webView:(id)awillPerformClientRedirectToURL:(id)bdelay:(double)cfireDate:(id)dforFrame:(id)e;
 - (void) webView:(id)adidCancelClientRedirectForFrame:(id)b;
 - (void) webView:(id)awillCloseFrame:(id)b;
 - (void) webView:(id)adidClearWindowObject:(id)bforFrame:(id)c;
 - (void) webView:(id)awindowScriptObjectAvailable:(id)b;
 - (void) webView:(id)adidCreateJavaScriptContext:(id)bforFrame:(id)c;
 - (void) webViewDidDisplayInsecureContent:(id)a;
 - (void) webView:(id)adidRunInsecureContent:(id)b;
 - (void) webView:(id)adidDetectXSS:(id)b;
 - (void) webView:(id)adidClearWindowObjectForFrame:(id)binScriptWorld:(id)c;
 - (void) webView:(id)adidPushStateWithinPageForFrame:(id)b;
 - (void) webView:(id)adidReplaceStateWithinPageForFrame:(id)b;
 - (void) webView:(id)adidPopStateWithinPageForFrame:(id)b;
 - (void) webView:(id)adidFirstLayoutInFrame:(id)b;
 - (void) webView:(id)adidFinishDocumentLoadForFrame:(id)b;
 - (void) webView:(id)adidHandleOnloadEventsForFrame:(id)b;
 - (void) webView:(id)adidFirstVisuallyNonEmptyLayoutInFrame:(id)b;
 - (void) webView:(id)adidClearInspectorWindowObject:(id)bforFrame:(id)c;
 - (void) webView:(id)adidRemoveFrameFromHierarchy:(id)b;
 - (void) webView:(id)adidLayout:(unsigned long long)b;


@end
