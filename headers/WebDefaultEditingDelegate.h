
@interface WebDefaultEditingDelegate : NSObject {

}
 + (id) sharedEditingDelegate;

 - (BOOL) webView:(id)ashouldBeginEditingInDOMRange:(id)b;
 - (BOOL) webView:(id)ashouldEndEditingInDOMRange:(id)b;
 - (BOOL) webView:(id)ashouldInsertNode:(id)breplacingDOMRange:(id)cgivenAction:(q)d;
 - (BOOL) webView:(id)ashouldInsertText:(id)breplacingDOMRange:(id)cgivenAction:(q)d;
 - (BOOL) webView:(id)ashouldDeleteDOMRange:(id)b;
 - (BOOL) webView:(id)ashouldChangeSelectedDOMRange:(id)btoDOMRange:(id)caffinity:(i)dstillSelecting:(BOOL)e;
 - (BOOL) webView:(id)ashouldApplyStyle:(id)btoElementsInDOMRange:(id)c;
 - (BOOL) webView:(id)ashouldMoveRangeAfterDelete:(id)breplacingRange:(id)c;
 - (BOOL) webView:(id)ashouldChangeTypingStyle:(id)btoStyle:(id)c;
 - (BOOL) webView:(id)adoCommandBySelector:(SEL)b;
 - (id) supportedPasteboardTypesForCurrentSelection;
 - (id) documentFragmentForPasteboardItemAtIndex:(q)a;
 - (void) webViewDidBeginEditing:(id)a;
 - (void) webViewDidChange:(id)a;
 - (void) webViewDidEndEditing:(id)a;
 - (void) webViewDidChangeTypingStyle:(id)a;
 - (void) webViewDidChangeSelection:(id)a;
 - (id) undoManagerForWebView:(id)a;


@end
