
@interface WebDefaultEditingDelegate : NSObject {

}
 + (id) sharedEditingDelegate;

 - (BOOL) webView:(id)a shouldBeginEditingInDOMRange:(id)b ;
 - (BOOL) webView:(id)a shouldEndEditingInDOMRange:(id)b ;
 - (BOOL) webView:(id)a shouldInsertNode:(id)b replacingDOMRange:(id)c givenAction:(long long)d ;
 - (BOOL) webView:(id)a shouldInsertText:(id)b replacingDOMRange:(id)c givenAction:(long long)d ;
 - (BOOL) webView:(id)a shouldDeleteDOMRange:(id)b ;
 - (BOOL) webView:(id)a shouldChangeSelectedDOMRange:(id)b toDOMRange:(id)c affinity:(int)d stillSelecting:(BOOL)e ;
 - (BOOL) webView:(id)a shouldApplyStyle:(id)b toElementsInDOMRange:(id)c ;
 - (BOOL) webView:(id)a shouldMoveRangeAfterDelete:(id)b replacingRange:(id)c ;
 - (BOOL) webView:(id)a shouldChangeTypingStyle:(id)b toStyle:(id)c ;
 - (BOOL) webView:(id)a doCommandBySelector:(SEL)b ;
 - (id) supportedPasteboardTypesForCurrentSelection;
 - (id) documentFragmentForPasteboardItemAtIndex:(long long)a ;
 - (void) webViewDidBeginEditing:(id)a ;
 - (void) webViewDidChange:(id)a ;
 - (void) webViewDidEndEditing:(id)a ;
 - (void) webViewDidChangeTypingStyle:(id)a ;
 - (void) webViewDidChangeSelection:(id)a ;
 - (id) undoManagerForWebView:(id)a ;


@end
