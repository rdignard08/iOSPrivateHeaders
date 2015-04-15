
@interface NSOperation : NSObject {

    id _private;
    i _private1;
    i _private1b;
}
@property (nonatomic, assign, readwrite) NSNumber* tag;
@property (atomic, assign, readonly, isCancelled) NSNumber* cancelled;
@property (atomic, assign, readonly, isExecuting) NSNumber* executing;
@property (atomic, assign, readonly, isFinished) NSNumber* finished;
@property (atomic, assign, readonly, isConcurrent) NSNumber* concurrent;
@property (atomic, assign, readonly, isAsynchronous) NSNumber* asynchronous;
@property (atomic, assign, readonly, isReady) NSNumber* ready;
@property (atomic, copy, readonly) NSArray* dependencies;
@property (atomic, assign, readwrite) NSNumber* queuePriority;
@property (atomic, copy, readwrite) NSNumber* completionBlock;
@property (atomic, assign, readwrite) NSNumber* threadPriority;
@property (atomic, assign, readwrite) NSNumber* qualityOfService;
@property (atomic, copy, readwrite) NSString* name;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) currentOperation;

 - (void) setTag:(Q)a;
 - (Q) tag;
 - (void) addDependency:(id)a;
 - (id) _activity;
 - (BOOL) isCancelled;
 - (void) main;
 - (^v) observationInfo;
 - (id) _implicitObservationInfo;
 - (BOOL) isFinished;
 - (BOOL) isReady;
 - (d) threadPriority;
 - (void) setThreadPriority:(d)a;
 - (@?) completionBlock;
 - (void) setCompletionBlock:(@?)a;
 - (BOOL) isExecuting;
 - (id) __;
 - (BOOL) isConcurrent;
 - (BOOL) isAsynchronous;
 - (q) _effQoS;
 - (q) queuePriority;
 - (q) qualityOfService;
 - (void) setQualityOfService:(q)a;
 - (void) waitUntilFinishedOrTimeout:(d)a;
 - (void) removeDependency:(id)a;
 - (id) dependencies;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) name;
 - (void) waitUntilFinished;
 - (void) setObservationInfo:(^v)a;
 - (id) init;
 - (void) cancel;
 - (void) start;
 - (void) setName:(id)a;
 - (void) setQueuePriority:(q)a;


@end
