
@interface NSThread : NSObject {

    id _private;
    [44C] _bytes;
}
@property (atomic, retain, readonly) NSMutableDictionary* threadDictionary;
@property (atomic, assign, readwrite) NSNumber* threadPriority;
@property (atomic, assign, readwrite) NSNumber* qualityOfService;
@property (atomic, copy, readwrite) NSString* name;
@property (atomic, assign, readwrite) NSNumber* stackSize;
@property (atomic, assign, readonly) NSNumber* isMainThread;
@property (atomic, assign, readonly, isExecuting) NSNumber* executing;
@property (atomic, assign, readonly, isFinished) NSNumber* finished;
@property (atomic, assign, readonly, isCancelled) NSNumber* cancelled;
 + (id) currentThread;
 + (double) threadPriority;
 + (BOOL) setThreadPriority:(double)a;
 + (BOOL) isDying;
 + (id) mainThread;
 + (BOOL) isMainThread;
 + (BOOL) isMultiThreaded;
 + (void) sleepUntilDate:(id)a;
 + (void) exit;
 + (id) callStackReturnAddresses;
 + (id) callStackSymbols;
 + (void) detachNewThreadSelector:(SEL)atoTarget:(id)bwithObject:(id)c;
 + (void) sleepForTimeInterval:(double)a;

 - (id) threadDictionary;
 - (BOOL) isCancelled;
 - (void) main;
 - (BOOL) isFinished;
 - (double) threadPriority;
 - (void) setThreadPriority:(double)a;
 - (BOOL) isExecuting;
 - (long long) qualityOfService;
 - (void) setQualityOfService:(long long)a;
 - (id) initWithTarget:(id)aselector:(SEL)bobject:(id)c;
 - (BOOL) isDying;
 - (BOOL) isMainThread;
 - (id) runLoop;
 - (void) setStackSize:(unsigned long long)a;
 - (unsigned long long) stackSize;
 - (void) _nq:(id)a;
 - (id) description;
 - (void) dealloc;
 - (id) name;
 - (id) init;
 - (void) cancel;
 - (void) start;
 - (void) setName:(id)a;


@end
