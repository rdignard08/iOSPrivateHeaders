
@interface _UICache : NSObject {

    @"NSObject<OS_dispatch_queue>" _cacheQueue;
    @"NSMutableDictionary" _cache;
    @"NSObject<OS_dispatch_source>" _memoryWarningsSource;
    BOOL _clearsCacheOnLowMemoryWarnings;
    BOOL _clearsCacheOnApplicationBackground;
    id _noteObserver;
}
@property (nonatomic, assign, readwrite) NSNumber* clearsCacheOnLowMemoryWarnings;
@property (nonatomic, assign, readwrite) NSNumber* clearsCacheOnApplicationBackground;

 - (void) dealloc;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) init;
 - (void) setClearsCacheOnLowMemoryWarnings:(BOOL)a;
 - (void) setClearsCacheOnApplicationBackground:(BOOL)a;
 - (BOOL) clearsCacheOnLowMemoryWarnings;
 - (BOOL) clearsCacheOnApplicationBackground;


@end
