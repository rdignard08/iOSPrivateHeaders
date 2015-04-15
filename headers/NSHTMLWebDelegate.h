
@interface NSHTMLWebDelegate : NSObject {

    BOOL _loadDidFinish;
    BOOL _loadDidSucceed;
    NSURL* _baseURL;
}

 - (void) dealloc;
 - (id) init;
 - (void) decidePolicyForRequest:(id)a decisionListener:(id)b ;
 - (id) initWithBaseURL:(id)a ;
 - (BOOL) loadDidFinish;
 - (BOOL) loadDidSucceed;
 - (void) webView:(id)a decidePolicyForMIMEType:(id)b request:(id)c frame:(id)d decisionListener:(id)e ;
 - (void) webView:(id)a decidePolicyForNavigationAction:(id)b request:(id)c frame:(id)d decisionListener:(id)e ;
 - (void) webView:(id)a decidePolicyForNewWindowAction:(id)b request:(id)c newFrameName:(id)d decisionListener:(id)e ;
 - (void) webView:(id)a didStartProvisionalLoadForFrame:(id)b ;
 - (void) webView:(id)a didFailProvisionalLoadWithError:(id)b forFrame:(id)c ;
 - (void) webView:(id)a didCommitLoadForFrame:(id)b ;
 - (void) webView:(id)a didFinishLoadForFrame:(id)b ;
 - (void) webView:(id)a didFailLoadWithError:(id)b forFrame:(id)c ;
 - (id) webView:(id)a identifierForInitialRequest:(id)b fromDataSource:(id)c ;
 - (id) webView:(id)a resource:(id)b willSendRequest:(id)c redirectResponse:(id)d fromDataSource:(id)e ;
 - (void) webView:(id)a resource:(id)b didReceiveAuthenticationChallenge:(id)c fromDataSource:(id)d ;
 - (void) webView:(id)a resource:(id)b didFinishLoadingFromDataSource:(id)c ;
 - (void) webView:(id)a resource:(id)b didFailLoadingWithError:(id)c fromDataSource:(id)d ;


@end
