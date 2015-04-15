
@interface _NSCFTranslatedFileURLProtocol : NSURLProtocol {

    r^{CFURLProtocolInstanceCallbacks=q^?^?^?^?^?^?^?^?^?^?^?^?^v} _callbacks;
    {CFURLProtocolClient="version"q"client"^v"retain"^?"release"^?"copyDescription"^?"wasRedirected"^?"cacheResponseIsValid"^?"didReceiveResponse"^?"didLoadData"^?"didFinishLoading"^?"didFail"^?"didReceiveAuthenticationChallenge"^?} _cfurlClient;
    r^v _info;
}
 + (id) canonicalRequestForRequest:(id)a;
 + (BOOL) requestIsCacheEquivalent:(id)atoRequest:(id)b;
 + (r^{CFURLProtocolImplementation=q^v^?^?^?^?^?^?^?}) pimpl;
 + (BOOL) canInitWithRequest:(id)a;

 - (id) .cxx_construct;
 - (void) dealloc;
 - (void) startLoading;
 - (void) stopLoading;
 - (id) initWithRequest:(id)a cachedResponse:(id)b client:(id)c ;
 - (^{CFURLProtocolClient=q^v^?^?^?^?^?^?^?^?^?^?}) cfurlClient;


@end
