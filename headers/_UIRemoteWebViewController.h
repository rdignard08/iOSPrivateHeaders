
@interface _UIRemoteWebViewController : _UIRemoteViewController {

    @"_UIWebViewController" _webViewController;
}
 + (id) exportedInterface;
 + (id) serviceViewControllerInterface;

 - (void) forwardInvocation:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (BOOL) shouldAutorotateToInterfaceOrientation:(q)a;
 - (void) viewServiceDidTerminateWithError:(id)a;
 - (id) webViewController;
 - (void) setWebViewController:(id)a;


@end
