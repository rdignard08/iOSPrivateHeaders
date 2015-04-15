
@interface WebDefaultResourceLoadDelegate : NSObject {

}
 + (id) sharedResourceLoadDelegate;

 - (void) webView:(id)adidLoadResourceFromMemoryCache:(id)bresponse:(id)clength:(q)dfromDataSource:(id)e;
 - (id) webView:(id)aidentifierForInitialRequest:(id)bfromDataSource:(id)c;
 - (id) webView:(id)aresource:(id)bwillSendRequest:(id)credirectResponse:(id)dfromDataSource:(id)e;
 - (BOOL) webView:(id)aresource:(id)bshouldUseCredentialStorageForDataSource:(id)c;
 - (void) webView:(id)aresource:(id)bdidReceiveAuthenticationChallenge:(id)cfromDataSource:(id)d;
 - (BOOL) webView:(id)aresource:(id)bcanAuthenticateAgainstProtectionSpace:(id)cforDataSource:(id)d;
 - (id) webView:(id)aconnectionPropertiesForResource:(id)bdataSource:(id)c;
 - (void) webView:(id)aresource:(id)bdidCancelAuthenticationChallenge:(id)cfromDataSource:(id)d;
 - (void) webView:(id)aresource:(id)bdidReceiveResponse:(id)cfromDataSource:(id)d;
 - (id) webView:(id)aresource:(id)bwillCacheResponse:(id)cfromDataSource:(id)d;
 - (void) webView:(id)aresource:(id)bdidReceiveContentLength:(q)cfromDataSource:(id)d;
 - (void) webView:(id)aresource:(id)bdidFinishLoadingFromDataSource:(id)c;
 - (void) webView:(id)aresource:(id)bdidFailLoadingWithError:(id)cfromDataSource:(id)d;
 - (void) webView:(id)aplugInFailedWithError:(id)bdataSource:(id)c;


@end
