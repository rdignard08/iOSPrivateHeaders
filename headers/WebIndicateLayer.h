
@interface WebIndicateLayer : CALayer {

    WebView* _webView;
}

 - (id) actionForKey:(id)a;
 - (void) layoutSublayers;
 - (id) initWithWebView:(id)a;


@end
