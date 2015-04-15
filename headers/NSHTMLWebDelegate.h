
@interface NSHTMLWebDelegate : NSObject {

    BOOL _loadDidFinish;
    BOOL _loadDidSucceed;
    NSURL* _baseURL;
}

 - (void) dealloc;
 - (id) init;
 - (void) decidePolicyForRequest:(id)adecisionListener:(id)b;
 - (id) initWithBaseURL:(id)a;
 - (BOOL) loadDidFinish;
 - (BOOL) loadDidSucceed;
 - (void) webView:(id)adecidePolicyForMIMEType:(id)brequest:(id)cframe:(id)ddecisionListener:(id)e;
 - (void) webView:(id)adecidePolicyForNavigationAction:(id)brequest:(id)cframe:(id)ddecisionListener:(id)e;
 - (void) webView:(id)adecidePolicyForNewWindowAction:(id)brequest:(id)cnewFrameName:(id)ddecisionListener:(id)e;
 - (void) webView:(id)adidStartProvisionalLoadForFrame:(id)b;
 - (void) webView:(id)adidFailProvisionalLoadWithError:(id)bforFrame:(id)c;
 - (void) webView:(id)adidCommitLoadForFrame:(id)b;
 - (void) webView:(id)adidFinishLoadForFrame:(id)b;
 - (void) webView:(id)adidFailLoadWithError:(id)bforFrame:(id)c;
 - (id) webView:(id)aidentifierForInitialRequest:(id)bfromDataSource:(id)c;
 - (id) webView:(id)aresource:(id)bwillSendRequest:(id)credirectResponse:(id)dfromDataSource:(id)e;
 - (void) webView:(id)aresource:(id)bdidReceiveAuthenticationChallenge:(id)cfromDataSource:(id)d;
 - (void) webView:(id)aresource:(id)bdidFinishLoadingFromDataSource:(id)c;
 - (void) webView:(id)aresource:(id)bdidFailLoadingWithError:(id)cfromDataSource:(id)d;


@end
