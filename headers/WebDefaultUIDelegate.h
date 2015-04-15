
@interface WebDefaultUIDelegate : NSObject {

}
 + (id) sharedUIDelegate;

 - (void) webViewFocus:(id)a;
 - (void) webViewUnfocus:(id)a;
 - (id) webView:(id)acreateWebViewWithRequest:(id)bwindowFeatures:(id)c;
 - (void) webViewShow:(id)a;
 - (void) webView:(id)asetToolbarsVisible:(BOOL)b;
 - (BOOL) webViewAreToolbarsVisible:(id)a;
 - (void) webView:(id)asetStatusBarVisible:(BOOL)b;
 - (BOOL) webViewIsStatusBarVisible:(id)a;
 - (void) webView:(id)asetResizable:(BOOL)b;
 - (void) webView:(id)arunJavaScriptAlertPanelWithMessage:(id)binitiatedByFrame:(id)c;
 - (BOOL) webView:(id)arunJavaScriptConfirmPanelWithMessage:(id)binitiatedByFrame:(id)c;
 - (id) webView:(id)arunJavaScriptTextInputPanelWithPrompt:(id)bdefaultText:(id)cinitiatedByFrame:(id)d;
 - (void) webView:(id)asetStatusText:(id)b;
 - (void) webView:(id)aprintFrameView:(id)b;
 - (void) webView:(id)aexceededApplicationCacheOriginQuotaForSecurityOrigin:(id)btotalSpaceNeeded:(unsigned long long)c;
 - (void) webView:(id)arunOpenPanelForFileButtonWithResultListener:(id)b;
 - (id) webViewFirstResponder:(id)a;
 - (void) webView:(id)amakeFirstResponder:(id)b;
 - (BOOL) webView:(id)ashouldReplaceUploadFile:(id)busingGeneratedFilename:(^@)c;
 - (id) webView:(id)agenerateReplacementFile:(id)b;
 - (id) webView:(id)acreateWebViewWithRequest:(id)buserGesture:(BOOL)c;
 - (void) webViewClose:(id)a;
 - (id) webViewStatusText:(id)a;
 - (void) webView:(id)amouseDidMoveOverElement:(id)bmodifierFlags:(unsigned long long)c;
 - (BOOL) webViewIsResizable:(id)a;
 - (void) webView:(id)asetFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) webViewFrame:(id)a;
 - (void) webView:(id)adidDrawRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (void) webView:(id)adidScrollDocumentInFrameView:(id)b;
 - (void) webViewSupportedOrientationsUpdated:(id)a;


@end
