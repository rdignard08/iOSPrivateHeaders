
@interface __NSHostExtraIvars : NSObject {

    @"NSString" thingToResolve;
    i resolveType;
    @"NSObject<OS_dispatch_queue>" resolveQueue;
    @"NSObject<OS_dispatch_queue>" cacheAccessQueue;
    @"NSObject<OS_dispatch_queue>" callbackQueue;
    BOOL startedResolving;
}
@property (nonatomic, retain, readwrite) NSString* thingToResolve;
@property (nonatomic, assign, readwrite) NSNumber* resolveType;
@property (atomic, assign, readonly) NSNumber* resolveQueue;
@property (atomic, assign, readonly) NSNumber* cacheAccessQueue;
@property (atomic, assign, readonly) NSNumber* callbackQueue;
@property (atomic, assign, readwrite) NSNumber* startedResolving;

 - (void) dealloc;
 - (void) finalize;
 - (id) init;
 - (void) cleanup;
 - (i) resolveType;
 - (void) setResolveType:(i)a;
 - (id) thingToResolve;
 - (void) setThingToResolve:(id)a;
 - (id) resolveQueue;
 - (id) cacheAccessQueue;
 - (id) callbackQueue;
 - (BOOL) startedResolving;
 - (void) setStartedResolving:(BOOL)a;


@end
