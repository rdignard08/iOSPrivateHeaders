
@interface WebNodeHighlighter : NSObject {

    WebView* _inspectedWebView;
    WebNodeHighlight* _currentHighlight;
}

 - (void) dealloc;
 - (id) initWithInspectedWebView:(id)a ;
 - (void) highlight;
 - (void) hideHighlight;
 - (void) didAttachWebNodeHighlight:(id)a ;
 - (void) willDetachWebNodeHighlight:(id)a ;


@end
