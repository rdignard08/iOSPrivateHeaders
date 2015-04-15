
@interface WebHighlightLayer : CALayer {

    WebNodeHighlightView _view;
    WebView _webView;
}

 - (id) actionForKey:(id)a;
 - (void) layoutSublayers;
 - (id) initWithHighlightView:(id)awebView:(id)b;


@end
