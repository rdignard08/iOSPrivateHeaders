
@interface _NSCFURLProtocol : NSURLProtocol {

    ^{_CFURLProtocol=} _prot;
    ^{NSCFURLProtocolClient=^^?^^?@@} _client;
}
 + (BOOL) canInitWithTask:(id)a;
 + (id) canonicalRequestForRequest:(id)a;
 + (id) canonicalRequestForRequest:(id)atask:(id)b;
 + (BOOL) requestIsCacheEquivalent:(id)atoRequest:(id)b;
 + (r^{InternalProtocolImplementation=q^v^?^?^?^?^?^?^?}) _cf_internalImpl;

 - (void) dealloc;
 - (void) startLoading;
 - (void) stopLoading;
 - (id) initWithRequest:(id)a cachedResponse:(id)b client:(id)c ;


@end
