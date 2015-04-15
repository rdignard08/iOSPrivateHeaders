
@interface NSOperationQueue : NSObject {

    id _private;
    ^v _reserved;
}
@property (atomic, copy, readonly) NSArray* operations;
@property (atomic, assign, readonly) NSNumber* operationCount;
@property (atomic, assign, readwrite) NSNumber* maxConcurrentOperationCount;
@property (atomic, assign, readwrite, isSuspended) NSNumber* suspended;
@property (atomic, copy, readwrite) NSString* name;
@property (atomic, assign, readwrite) NSNumber* qualityOfService;
@property (atomic, assign, readwrite) NSNumber* underlyingQueue;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) currentQueue;
 + (id) mainQueue;

 - (void) executeAndWaitForBlock:(@?)a;
 - (id) __;
 - (q) qualityOfService;
 - (void) setQualityOfService:(q)a;
 - (void) addOperations:(id)awaitUntilFinished:(BOOL)b;
 - (q) maxConcurrentOperationCount;
 - (BOOL) overcommitsOperations;
 - (void) setOvercommitsOperations:(BOOL)a;
 - (id) underlyingQueue;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (void) addOperation:(id)a;
 - (void) addOperationWithBlock:(@?)a;
 - (void) setUnderlyingQueue:(id)a;
 - (void) cancelAllOperations;
 - (void) waitUntilAllOperationsAreFinished;
 - (id) operations;
 - (Q) operationCount;
 - (void) setSuspended:(BOOL)a;
 - (id) init;
 - (void) setMaxConcurrentOperationCount:(q)a;
 - (void) setName:(id)a;
 - (BOOL) isSuspended;


@end
