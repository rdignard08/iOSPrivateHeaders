
@protocol NSURLProtocolClient;
@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient> {

    ^{URLProtocolClient=^^?} _cf;
    ^{URLProtocol=^^?^^?^{CoreSchedulingSet}dCCCCCCCCqqqCiq@^{URLProtocolClient}^{_CFCachedURLResponse}} _prot;
    @"NSURLAuthenticationChallenge" _challenge;
    ^{_CFURLAuthChallenge=} _cfChallenge;
}

 - (void) dealloc;
 - (void) URLProtocol:(id)awasRedirectedToRequest:(id)bredirectResponse:(id)c;
 - (void) URLProtocol:(id)acachedResponseIsValid:(id)b;
 - (void) URLProtocol:(id)adidReceiveResponse:(id)bcacheStoragePolicy:(Q)c;
 - (void) URLProtocol:(id)adidLoadData:(id)b;
 - (void) URLProtocolDidFinishLoading:(id)a;
 - (void) URLProtocol:(id)adidFailWithError:(id)b;
 - (void) URLProtocol:(id)adidReceiveAuthenticationChallenge:(id)b;
 - (void) URLProtocol:(id)adidCancelAuthenticationChallenge:(id)b;
 - (id) initWithCFClient:(^{URLProtocolClient=^^?})aprot:(^{URLProtocol=^^?^^?^{CoreSchedulingSet}dCCCCCCCCqqqCiq@^{URLProtocolClient}^{_CFCachedURLResponse}})b;
 - (void) teardown;
 - (id) challenge;
 - (^{_CFURLAuthChallenge=}) cfChallenge;


@end
