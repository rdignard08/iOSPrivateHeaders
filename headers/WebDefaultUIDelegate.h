
@interface WebDefaultUIDelegate : NSObject {

}
 + (id) sharedUIDelegate;

 - (void) webViewFocus:(id)a ;
 - (void) webViewUnfocus:(id)a ;
 - (id) webView:(id)a createWebViewWithRequest:(id)b windowFeatures:(id)c ;
 - (void) webViewShow:(id)a ;
 - (void) webView:(id)a setToolbarsVisible:(BOOL)b ;
 - (BOOL) webViewAreToolbarsVisible:(id)a ;
 - (void) webView:(id)a setStatusBarVisible:(BOOL)b ;
 - (BOOL) webViewIsStatusBarVisible:(id)a ;
 - (void) webView:(id)a setResizable:(BOOL)b ;
 - (void) webView:(id)a runJavaScriptAlertPanelWithMessage:(id)b initiatedByFrame:(id)c ;
 - (BOOL) webView:(id)a runJavaScriptConfirmPanelWithMessage:(id)b initiatedByFrame:(id)c ;
 - (id) webView:(id)a runJavaScriptTextInputPanelWithPrompt:(id)b defaultText:(id)c initiatedByFrame:(id)d ;
 - (void) webView:(id)a setStatusText:(id)b ;
 - (void) webView:(id)a printFrameView:(id)b ;
 - (void) webView:(id)a exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)b totalSpaceNeeded:(unsigned long long)c ;
 - (void) webView:(id)a runOpenPanelForFileButtonWithResultListener:(id)b ;
 - (id) webViewFirstResponder:(id)a ;
 - (void) webView:(id)a makeFirstResponder:(id)b ;
 - (BOOL) webView:(id)a shouldReplaceUploadFile:(id)b usingGeneratedFilename:(^@)c ;
 - (id) webView:(id)a generateReplacementFile:(id)b ;
 - (id) webView:(id)a createWebViewWithRequest:(id)b userGesture:(BOOL)c ;
 - (void) webViewClose:(id)a ;
 - (id) webViewStatusText:(id)a ;
 - (void) webView:(id)a mouseDidMoveOverElement:(id)b modifierFlags:(unsigned long long)c ;
 - (BOOL) webViewIsResizable:(id)a ;
 - (void) webView:(id)a setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) webViewFrame:(id)a ;
 - (void) webView:(id)a didDrawRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (void) webView:(id)a didScrollDocumentInFrameView:(id)b ;
 - (void) webViewSupportedOrientationsUpdated:(id)a ;


@end
