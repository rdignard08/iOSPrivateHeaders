
@interface WebDefaultResourceLoadDelegate : NSObject {

}
 + (id) sharedResourceLoadDelegate;

 - (void) webView:(id)a didLoadResourceFromMemoryCache:(id)b response:(id)c length:(long long)d fromDataSource:(id)e ;
 - (id) webView:(id)a identifierForInitialRequest:(id)b fromDataSource:(id)c ;
 - (id) webView:(id)a resource:(id)b willSendRequest:(id)c redirectResponse:(id)d fromDataSource:(id)e ;
 - (BOOL) webView:(id)a resource:(id)b shouldUseCredentialStorageForDataSource:(id)c ;
 - (void) webView:(id)a resource:(id)b didReceiveAuthenticationChallenge:(id)c fromDataSource:(id)d ;
 - (BOOL) webView:(id)a resource:(id)b canAuthenticateAgainstProtectionSpace:(id)c forDataSource:(id)d ;
 - (id) webView:(id)a connectionPropertiesForResource:(id)b dataSource:(id)c ;
 - (void) webView:(id)a resource:(id)b didCancelAuthenticationChallenge:(id)c fromDataSource:(id)d ;
 - (void) webView:(id)a resource:(id)b didReceiveResponse:(id)c fromDataSource:(id)d ;
 - (id) webView:(id)a resource:(id)b willCacheResponse:(id)c fromDataSource:(id)d ;
 - (void) webView:(id)a resource:(id)b didReceiveContentLength:(long long)c fromDataSource:(id)d ;
 - (void) webView:(id)a resource:(id)b didFinishLoadingFromDataSource:(id)c ;
 - (void) webView:(id)a resource:(id)b didFailLoadingWithError:(id)c fromDataSource:(id)d ;
 - (void) webView:(id)a plugInFailedWithError:(id)b dataSource:(id)c ;


@end
