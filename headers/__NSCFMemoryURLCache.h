
@interface __NSCFMemoryURLCache : NSURLCache {

    id _internal;
    unsigned long long _memoryCapacity;
    unsigned long long _currentLength;
    NSMutableDictionary* _memoryStorage;
    NSMutableArray* _memoryStorageLRU;
    NSObject<OS_dispatch_queue>* _memoryQueue;
}
 + (void) initialize;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) currentDiskUsage;
 - (id) initByCallingSuperSuperInit;
 - (id) initWithMemoryCapacity:(unsigned long long)a diskCapacity:(unsigned long long)b diskPath:(id)c ;
 - (void) removeAllCachedResponses;
 - (id) initEmptyCache;
 - (id) initMemoryCache;
 - (id) cachedResponseForRequest:(id)a ;
 - (void) storeCachedResponse:(id)a forRequest:(id)b ;
 - (void) removeCachedResponseForRequest:(id)a ;
 - (unsigned long long) memoryCapacity;
 - (unsigned long long) diskCapacity;
 - (void) setMemoryCapacity:(unsigned long long)a ;
 - (void) setDiskCapacity:(unsigned long long)a ;
 - (unsigned long long) currentMemoryUsage;


@end
