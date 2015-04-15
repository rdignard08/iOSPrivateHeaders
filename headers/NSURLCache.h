
@interface NSURLCache : NSObject {

    @"NSURLCacheInternal" _internal;
}
@property (atomic, assign, readwrite) NSNumber* memoryCapacity;
@property (atomic, assign, readwrite) NSNumber* diskCapacity;
@property (atomic, assign, readonly) NSNumber* currentMemoryUsage;
@property (atomic, assign, readonly) NSNumber* currentDiskUsage;
 + (id) sharedURLCache;
 + (void) setSharedURLCache:(id)a;

 - (void) dealloc;
 - (id) init;
 - (Q) currentDiskUsage;
 - (void) storeCachedResponse:(id)aforDataTask:(id)b;
 - (id) initWithMemoryCapacity:(Q)adiskCapacity:(Q)bdiskPath:(id)c;
 - (void) removeAllCachedResponses;
 - (id) cachedResponseForRequest:(id)a;
 - (void) storeCachedResponse:(id)aforRequest:(id)b;
 - (void) removeCachedResponseForRequest:(id)a;
 - (Q) memoryCapacity;
 - (Q) diskCapacity;
 - (void) setMemoryCapacity:(Q)a;
 - (void) setDiskCapacity:(Q)a;
 - (Q) currentMemoryUsage;
 - (void) getCachedResponseForDataTask:(id)acompletionHandler:(@?)b;
 - (void) removeCachedResponseForDataTask:(id)a;
 - (id) _initWithExistingCFURLCache:(^{_CFURLCache={__CFRuntimeBase=Q[4C]I}^{__CFURLCache}})a;
 - (id) _diskCacheDefaultPath;
 - (id) _cacheDirectory;
 - (^{_CFCachedURLResponse={__CFRuntimeBase=Q[4C]I}^{__CFCachedURLResponse}}) _nscfBridgeURLCacheCopyResponseForRequest:(^{_CFURLRequest=})a;
 - (void) _nscfBridgeURLCacheStoreCachedResponse:(^{_CFCachedURLResponse={__CFRuntimeBase=Q[4C]I}^{__CFCachedURLResponse}})aforRequest:(^{_CFURLRequest=})b;
 - (q) _nscfBridgeURLCacheDiskCapacity;
 - (void) _nscfBridgeURLCacheSetMemoryCapacity:(q)a;
 - (void) _nscfBridgeURLCacheSetDiskCapacity:(q)a;
 - (void) _nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)a;
 - (void) _nscfBridgeURLCacheRemoveAllCachedResponses;
 - (q) _nscfBridgeURLCacheMemoryCapacity;
 - (q) _nscfBridgeURLCacheCurrentMemoryUsage;
 - (q) _nscfBridgeURLCacheCurrentDiskUsage;
 - (id) _initWithIdentifier:(id)amemoryCapacity:(q)bdiskCapacity:(q)cprivate:(BOOL)d;
 - (id) initWithExistingSharedCFURLCache:(^{_CFURLCache={__CFRuntimeBase=Q[4C]I}^{__CFURLCache}})a;
 - (id) _initWithMemoryCapacity:(Q)adiskCapacity:(Q)brelativePath:(id)c;
 - (void) flushWithCompletion:(@?)a;
 - (void) removeCachedResponsesSinceDate:(id)a;
 - (^{_CFURLCache={__CFRuntimeBase=Q[4C]I}^{__CFURLCache}}) _CFURLCache;


@end
