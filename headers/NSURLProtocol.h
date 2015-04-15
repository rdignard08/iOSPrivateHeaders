
@interface NSURLProtocol : NSObject {

    NSURLProtocolInternal _internal;
}
@property (atomic, retain, readonly) NSNumber* client;
@property (atomic, copy, readonly) NSURLRequest* request;
@property (atomic, copy, readonly) NSCachedURLResponse* cachedResponse;
 + (BOOL) canInitWithTask:(id)a;
 + (Class) _protocolClassForRequest:(id)a;
 + (id) canonicalRequestForRequest:(id)a;
 + (id) canonicalRequestForRequest:(id)atask:(id)b;
 + (BOOL) requestIsCacheEquivalent:(id)atoRequest:(id)b;
 + (BOOL) canInitWithRequest:(id)a;
 + (BOOL) registerClass:(Class)a;
 + (void) unregisterClass:(Class)a;
 + (id) propertyForKey:(id)ainRequest:(id)b;
 + (void) setProperty:(id)aforKey:(id)binRequest:(id)c;
 + (void) removePropertyForKey:(id)ainRequest:(id)b;
 + (id) _makeRequestCanonicalByMakingRequestURLCanonical:(id)a;

 - (void) dealloc;
 - (void) startLoading;
 - (void) stopLoading;
 - (id) initWithRequest:(id)acachedResponse:(id)bclient:(id)c;
 - (id) client;
 - (id) request;
 - (id) cachedResponse;
 - (id) initWithTask:(id)acachedResponse:(id)bclient:(id)c;


@end
