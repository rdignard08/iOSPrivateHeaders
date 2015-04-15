
@interface __NSCFMemoryURLCache : NSURLCache {

    id _internal;
    Q _memoryCapacity;
    Q _currentLength;
    @"NSMutableDictionary" _memoryStorage;
    @"NSMutableArray" _memoryStorageLRU;
    @"NSObject<OS_dispatch_queue>" _memoryQueue;
}
 + (void) initialize;

 - (id) description;
 - (void) dealloc;
 - (Q) currentDiskUsage;
 - (id) initByCallingSuperSuperInit;
 - (id) initWithMemoryCapacity:(Q)adiskCapacity:(Q)bdiskPath:(id)c;
 - (void) removeAllCachedResponses;
 - (id) initEmptyCache;
 - (id) initMemoryCache;
 - (id) cachedResponseForRequest:(id)a;
 - (void) storeCachedResponse:(id)aforRequest:(id)b;
 - (void) removeCachedResponseForRequest:(id)a;
 - (Q) memoryCapacity;
 - (Q) diskCapacity;
 - (void) setMemoryCapacity:(Q)a;
 - (void) setDiskCapacity:(Q)a;
 - (Q) currentMemoryUsage;


@end
