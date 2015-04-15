
@interface FBSSerialQueue : NSObject {

    NSObject<OS_dispatch_queue> _queue;
    NSObject<OS_dispatch_queue> _targetQueue;
    NSArray _mainRunLoopModes;
    ^{__CFRunLoopSource=} _runLoopSource;
    NSObject<OS_dispatch_semaphore> _runLoopSemaphore;
}
 + (id) queueWithMainRunLoopModes:(id)a;
 + (id) queueWithDispatchQueue:(id)a;

 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (void) performAsync:(@?)a;
 - (id) _initWithDispatchQueue:(id)amainRunLoopModes:(id)b;
 - (void) assertOnQueue;


@end
