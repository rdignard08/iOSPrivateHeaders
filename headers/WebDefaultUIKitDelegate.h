
@interface WebDefaultUIKitDelegate : NSObject {

}
 + (id) sharedUIKitDelegate;

 - (void) webView:(id)a addMessageToConsole:(id)b withSource:(id)c ;
 - (id) supportedPasteboardTypesForCurrentSelection;
 - (void) webView:(id)a didStartProvisionalLoadForFrame:(id)b ;
 - (void) webView:(id)a didCommitLoadForFrame:(id)b ;
 - (void) webView:(id)a didFinishLoadForFrame:(id)b ;
 - (void) webView:(id)a didFailLoadWithError:(id)b forFrame:(id)c ;
 - (void) webView:(id)a didChangeLocationWithinPageForFrame:(id)b ;
 - (void) webView:(id)a willCloseFrame:(id)b ;
 - (void) webView:(id)a didFirstLayoutInFrame:(id)b ;
 - (void) webView:(id)a didFinishDocumentLoadForFrame:(id)b ;
 - (void) webView:(id)a didFirstVisuallyNonEmptyLayoutInFrame:(id)b ;
 - (void) writeDataToPasteboard:(id)a ;
 - (id) readDataFromPasteboard:(id)a withIndex:(long long)b ;
 - (BOOL) hasRichlyEditableSelection;
 - (long long) getPasteboardItemsCount;
 - (BOOL) performsTwoStepPaste:(id)a ;
 - (long long) getPasteboardChangeCount;
 - (id) checkSpellingOfString:(id)a ;
 - (void) webView:(id)a saveStateToHistoryItem:(id)b forFrame:(id)c ;
 - (void) webView:(id)a restoreStateFromHistoryItem:(id)b forFrame:(id)c force:(BOOL)d ;
 - (void) webViewDidRestoreFromPageCache:(id)a ;
 - (BOOL) webView:(id)a shouldScrollToPoint:({CGPoint=dd})b forFrame:(id)c ;
 - (void) webView:(id)a willAddPlugInView:(id)b ;
 - (void) deleteFromInput;
 - (void) addInputString:(id)a withFlags:(unsigned long long)b ;
 - ({CGPoint=dd}) contentsPointForWebView:(id)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) documentVisibleRectForWebView:(id)a ;
 - (void) webView:(id)a didReceiveViewportArguments:(id)b ;
 - (void) webView:(id)a needsScrollNotifications:(id)b forFrame:(id)c ;
 - (void) webView:(id)a didObserveDeferredContentChange:(int)b forFrame:(id)c ;
 - (void) webViewDidPreventDefaultForEvent:(id)a ;
 - (void) webView:(id)a elementDidFocusNode:(id)b ;
 - (void) webView:(id)a elementDidBlurNode:(id)b ;
 - (void) webViewDidReceiveMobileDocType:(id)a ;
 - (id) webView:(id)a plugInViewWithArguments:(id)b fromPlugInPackage:(id)c ;
 - (void) webView:(id)a willShowFullScreenForPlugInView:(id)b ;
 - (void) webView:(id)a didHideFullScreenForPlugInView:(id)b ;
 - (void) webView:(id)a didReceiveMessage:(id)b ;
 - (void) deleteFromInputwithFlags:(unsigned long long)a ;
 - (void) _webthread_webView:(id)a attachRootLayer:(id)b ;
 - (void) webViewDidCommitCompositingLayerChanges:(id)a ;
 - (void) webView:(id)a didCreateOrUpdateScrollingLayer:(id)b withContentsLayer:(id)c scrollSize:(id)d forNode:(id)e allowHorizontalScrollbar:(BOOL)f allowVerticalScrollbar:(BOOL)g ;
 - (void) webView:(id)a willRemoveScrollingLayer:(id)b withContentsLayer:(id)c forNode:(id)d ;
 - (void) revealedSelectionByScrollingWebFrame:(id)a ;
 - (void) webViewDidLayout:(id)a ;
 - (void) webViewDidStartOverflowScroll:(id)a ;
 - (void) webViewDidEndOverflowScroll:(id)a ;
 - (void) webView:(id)a runOpenPanelForFileButtonWithResultListener:(id)b allowMultipleFiles:(BOOL)c acceptMIMETypes:(id)d ;
 - ({CGPoint=dd}) interactionLocation;
 - (void) showPlaybackTargetPicker:(BOOL)a fromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b ;
 - (int) deviceOrientation;
 - (BOOL) isUnperturbedDictationResultMarker:(id)a ;
 - (void) webViewDidDrawTiles:(id)a ;


@end
