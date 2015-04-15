
@interface WebDefaultUIKitDelegate : NSObject {

}
 + (id) sharedUIKitDelegate;

 - (void) webView:(id)aaddMessageToConsole:(id)bwithSource:(id)c;
 - (id) supportedPasteboardTypesForCurrentSelection;
 - (void) webView:(id)adidStartProvisionalLoadForFrame:(id)b;
 - (void) webView:(id)adidCommitLoadForFrame:(id)b;
 - (void) webView:(id)adidFinishLoadForFrame:(id)b;
 - (void) webView:(id)adidFailLoadWithError:(id)bforFrame:(id)c;
 - (void) webView:(id)adidChangeLocationWithinPageForFrame:(id)b;
 - (void) webView:(id)awillCloseFrame:(id)b;
 - (void) webView:(id)adidFirstLayoutInFrame:(id)b;
 - (void) webView:(id)adidFinishDocumentLoadForFrame:(id)b;
 - (void) webView:(id)adidFirstVisuallyNonEmptyLayoutInFrame:(id)b;
 - (void) writeDataToPasteboard:(id)a;
 - (id) readDataFromPasteboard:(id)awithIndex:(long long)b;
 - (BOOL) hasRichlyEditableSelection;
 - (long long) getPasteboardItemsCount;
 - (BOOL) performsTwoStepPaste:(id)a;
 - (long long) getPasteboardChangeCount;
 - (id) checkSpellingOfString:(id)a;
 - (void) webView:(id)asaveStateToHistoryItem:(id)bforFrame:(id)c;
 - (void) webView:(id)arestoreStateFromHistoryItem:(id)bforFrame:(id)cforce:(BOOL)d;
 - (void) webViewDidRestoreFromPageCache:(id)a;
 - (BOOL) webView:(id)ashouldScrollToPoint:({CGPoint=dd})bforFrame:(id)c;
 - (void) webView:(id)awillAddPlugInView:(id)b;
 - (void) deleteFromInput;
 - (void) addInputString:(id)awithFlags:(unsigned long long)b;
 - ({CGPoint=dd}) contentsPointForWebView:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) documentVisibleRectForWebView:(id)a;
 - (void) webView:(id)adidReceiveViewportArguments:(id)b;
 - (void) webView:(id)aneedsScrollNotifications:(id)bforFrame:(id)c;
 - (void) webView:(id)adidObserveDeferredContentChange:(int)bforFrame:(id)c;
 - (void) webViewDidPreventDefaultForEvent:(id)a;
 - (void) webView:(id)aelementDidFocusNode:(id)b;
 - (void) webView:(id)aelementDidBlurNode:(id)b;
 - (void) webViewDidReceiveMobileDocType:(id)a;
 - (id) webView:(id)aplugInViewWithArguments:(id)bfromPlugInPackage:(id)c;
 - (void) webView:(id)awillShowFullScreenForPlugInView:(id)b;
 - (void) webView:(id)adidHideFullScreenForPlugInView:(id)b;
 - (void) webView:(id)adidReceiveMessage:(id)b;
 - (void) deleteFromInputwithFlags:(unsigned long long)a;
 - (void) _webthread_webView:(id)aattachRootLayer:(id)b;
 - (void) webViewDidCommitCompositingLayerChanges:(id)a;
 - (void) webView:(id)adidCreateOrUpdateScrollingLayer:(id)bwithContentsLayer:(id)cscrollSize:(id)dforNode:(id)eallowHorizontalScrollbar:(BOOL)fallowVerticalScrollbar:(BOOL)g;
 - (void) webView:(id)awillRemoveScrollingLayer:(id)bwithContentsLayer:(id)cforNode:(id)d;
 - (void) revealedSelectionByScrollingWebFrame:(id)a;
 - (void) webViewDidLayout:(id)a;
 - (void) webViewDidStartOverflowScroll:(id)a;
 - (void) webViewDidEndOverflowScroll:(id)a;
 - (void) webView:(id)arunOpenPanelForFileButtonWithResultListener:(id)ballowMultipleFiles:(BOOL)cacceptMIMETypes:(id)d;
 - ({CGPoint=dd}) interactionLocation;
 - (void) showPlaybackTargetPicker:(BOOL)afromRect:({CGRect={CGPoint=dd}{CGSize=dd}})b;
 - (int) deviceOrientation;
 - (BOOL) isUnperturbedDictationResultMarker:(id)a;
 - (void) webViewDidDrawTiles:(id)a;


@end
