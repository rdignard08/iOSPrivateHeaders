
@interface NSOperation : NSObject {

    id _private;
    int _private1;
    int _private1b;
}
@property (nonatomic, assign, readwrite) NSNumber* tag;
@property (atomic, assign, readonly, getter=isCancelled) NSNumber* cancelled;
@property (atomic, assign, readonly, getter=isExecuting) NSNumber* executing;
@property (atomic, assign, readonly, getter=isFinished) NSNumber* finished;
@property (atomic, assign, readonly, getter=isConcurrent) NSNumber* concurrent;
@property (atomic, assign, readonly, getter=isAsynchronous) NSNumber* asynchronous;
@property (atomic, assign, readonly, getter=isReady) NSNumber* ready;
@property (atomic, copy, readonly) NSArray* dependencies;
@property (atomic, assign, readwrite) NSNumber* queuePriority;
@property (atomic, copy, readwrite) NSNumber* completionBlock;
@property (atomic, assign, readwrite) NSNumber* threadPriority;
@property (atomic, assign, readwrite) NSNumber* qualityOfService;
@property (atomic, copy, readwrite) NSString* name;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) currentOperation;

 - (void) setTag:(unsigned long long)a ;
 - (unsigned long long) tag;
 - (void) addDependency:(id)a ;
 - (id) _activity;
 - (BOOL) isCancelled;
 - (void) main;
 - (^v) observationInfo;
 - (id) _implicitObservationInfo;
 - (BOOL) isFinished;
 - (BOOL) isReady;
 - (double) threadPriority;
 - (void) setThreadPriority:(double)a ;
 - (@?) completionBlock;
 - (void) setCompletionBlock:(@?)a ;
 - (BOOL) isExecuting;
 - (id) __;
 - (BOOL) isConcurrent;
 - (BOOL) isAsynchronous;
 - (long long) _effQoS;
 - (long long) queuePriority;
 - (long long) qualityOfService;
 - (void) setQualityOfService:(long long)a ;
 - (void) waitUntilFinishedOrTimeout:(double)a ;
 - (void) removeDependency:(id)a ;
 - (id) dependencies;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) name;
 - (void) waitUntilFinished;
 - (void) setObservationInfo:(^v)a ;
 - (id) init;
 - (void) cancel;
 - (void) start;
 - (void) setName:(id)a ;
 - (void) setQueuePriority:(long long)a ;


@end
