
@interface _UIWebViewScrollView : UIWebScrollView {

    _UIWebViewScrollViewDelegateForwarder* _forwarder;
    BOOL _bouncesSetExplicitly;
    UIWebBrowserView* _browserView;
}

 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setContentInset:({UIEdgeInsets=dddd})a;
 - (void) setBounces:(BOOL)a;
 - (void) setBouncesHorizontally:(BOOL)a;
 - (void) setBouncesVertically:(BOOL)a;
 - (void) _weaklySetBouncesHorizontally:(BOOL)a;
 - (void) _setWebView:(id)a;
 - (id) delegate;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
