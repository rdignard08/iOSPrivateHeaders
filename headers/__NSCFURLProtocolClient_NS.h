
@protocol NSURLProtocolClient;
@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient> {

    ^{URLProtocolClient=^^?} _cf;
    ^{URLProtocol=^^?^^?^{CoreSchedulingSet}dCCCCCCCCqqqCiq@^{URLProtocolClient}^{_CFCachedURLResponse}} _prot;
    NSURLAuthenticationChallenge* _challenge;
    ^{_CFURLAuthChallenge=} _cfChallenge;
}

 - (void) dealloc;
 - (void) URLProtocol:(id)a wasRedirectedToRequest:(id)b redirectResponse:(id)c ;
 - (void) URLProtocol:(id)a cachedResponseIsValid:(id)b ;
 - (void) URLProtocol:(id)a didReceiveResponse:(id)b cacheStoragePolicy:(unsigned long long)c ;
 - (void) URLProtocol:(id)a didLoadData:(id)b ;
 - (void) URLProtocolDidFinishLoading:(id)a ;
 - (void) URLProtocol:(id)a didFailWithError:(id)b ;
 - (void) URLProtocol:(id)a didReceiveAuthenticationChallenge:(id)b ;
 - (void) URLProtocol:(id)a didCancelAuthenticationChallenge:(id)b ;
 - (id) initWithCFClient:(^{URLProtocolClient=^^?})a prot:(^{URLProtocol=^^?^^?^{CoreSchedulingSet}dCCCCCCCCqqqCiq@^{URLProtocolClient}^{_CFCachedURLResponse}})b ;
 - (void) teardown;
 - (id) challenge;
 - (^{_CFURLAuthChallenge=}) cfChallenge;


@end
