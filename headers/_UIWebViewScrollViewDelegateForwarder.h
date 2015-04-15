
@protocol UIScrollViewDelegate;
@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {

    @"<UIScrollViewDelegate>" _delegate;
    @"UIWebView" _webView;
}
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, assign, readwrite) UIWebView* webView;

 - (void) forwardInvocation:(id)a;
 - (void) setDelegate:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (void) setWebView:(id)a;
 - (id) delegate;
 - (id) webView;


@end
