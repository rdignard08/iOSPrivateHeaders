
@interface NSURLCache : NSObject {

    NSURLCacheInternal* _internal;
}
@property (atomic, assign, readwrite) NSNumber* memoryCapacity;
@property (atomic, assign, readwrite) NSNumber* diskCapacity;
@property (atomic, assign, readonly) NSNumber* currentMemoryUsage;
@property (atomic, assign, readonly) NSNumber* currentDiskUsage;
 + (id) sharedURLCache;
 + (void) setSharedURLCache:(id)a;

 - (void) dealloc;
 - (id) init;
 - (unsigned long long) currentDiskUsage;
 - (void) storeCachedResponse:(id)a forDataTask:(id)b ;
 - (id) initWithMemoryCapacity:(unsigned long long)a diskCapacity:(unsigned long long)b diskPath:(id)c ;
 - (void) removeAllCachedResponses;
 - (id) cachedResponseForRequest:(id)a ;
 - (void) storeCachedResponse:(id)a forRequest:(id)b ;
 - (void) removeCachedResponseForRequest:(id)a ;
 - (unsigned long long) memoryCapacity;
 - (unsigned long long) diskCapacity;
 - (void) setMemoryCapacity:(unsigned long long)a ;
 - (void) setDiskCapacity:(unsigned long long)a ;
 - (unsigned long long) currentMemoryUsage;
 - (void) getCachedResponseForDataTask:(id)a completionHandler:(@?)b ;
 - (void) removeCachedResponseForDataTask:(id)a ;
 - (id) _initWithExistingCFURLCache:(^{_CFURLCache={__CFRuntimeBase=Q[4C]I}^{__CFURLCache}})a ;
 - (id) _diskCacheDefaultPath;
 - (id) _cacheDirectory;
 - (^{_CFCachedURLResponse={__CFRuntimeBase=Q[4C]I}^{__CFCachedURLResponse}}) _nscfBridgeURLCacheCopyResponseForRequest:(^{_CFURLRequest=})a ;
 - (void) _nscfBridgeURLCacheStoreCachedResponse:(^{_CFCachedURLResponse={__CFRuntimeBase=Q[4C]I}^{__CFCachedURLResponse}})a forRequest:(^{_CFURLRequest=})b ;
 - (long long) _nscfBridgeURLCacheDiskCapacity;
 - (void) _nscfBridgeURLCacheSetMemoryCapacity:(long long)a ;
 - (void) _nscfBridgeURLCacheSetDiskCapacity:(long long)a ;
 - (void) _nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)a ;
 - (void) _nscfBridgeURLCacheRemoveAllCachedResponses;
 - (long long) _nscfBridgeURLCacheMemoryCapacity;
 - (long long) _nscfBridgeURLCacheCurrentMemoryUsage;
 - (long long) _nscfBridgeURLCacheCurrentDiskUsage;
 - (id) _initWithIdentifier:(id)a memoryCapacity:(long long)b diskCapacity:(long long)c private:(BOOL)d ;
 - (id) initWithExistingSharedCFURLCache:(^{_CFURLCache={__CFRuntimeBase=Q[4C]I}^{__CFURLCache}})a ;
 - (id) _initWithMemoryCapacity:(unsigned long long)a diskCapacity:(unsigned long long)b relativePath:(id)c ;
 - (void) flushWithCompletion:(@?)a ;
 - (void) removeCachedResponsesSinceDate:(id)a ;
 - (^{_CFURLCache={__CFRuntimeBase=Q[4C]I}^{__CFURLCache}}) _CFURLCache;


@end
