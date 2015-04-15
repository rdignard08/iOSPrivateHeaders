
@interface __NSOperationInternal : NSObject {

    [8C] __pad1;
    NSOperation __outerOp;
    NSOperation __prevOp;
    NSOperation __nextOp;
    NSOperation __nextPriOp;
    NSOperationQueue __queue;
    id __dependencies;
    id __down_dependencies;
    long long __unfinished_deps;
    @? __completion;
    ^v __obsInfo;
    ^v __implicitObsInfo;
    long long __seqno;
    double __thread_prio;
    id __children;
    int __RC;
    int __state;
    char __prio;
    unsigned char __cached_isReady;
    unsigned char __isCancelled;
    unsigned char __isBarrier;
    int __qoses;
    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} __wait_mutex;
    {_opaque_pthread_cond_t="__sig"q"__opaque"[40c]} __wait_cond;
    ^{_opaque_pthread_t=q^{__darwin_pthread_handler_rec}[8176c]} __pthread;
    char* __nameBuffer;
    id __activity;
    ^{pthread_override_s=} __ov;
    [0C] __pad3;
}
 + (void) _observeValueForKeyPath:(id)aofObject:(id)bchangeKind:(unsigned long long)coldValue:(id)dnewValue:(id)eindexes:(id)fcontext:(^v)g;

 - (id) _activity;
 - (long long) _queuePriority;
 - (id) init:(id)a;
 - (BOOL) _isCancelled;
 - (void) _cancel:(id)a;
 - (BOOL) _isExecuting;
 - (BOOL) _isFinished;
 - (BOOL) _isReady;
 - (void) _setQueuePriority:(long long)aouter:(id)b;
 - (double) _threadPriority;
 - (void) _setThreadPriority:(double)aouter:(id)b;
 - (@?) _completionBlock;
 - (void) _setCompletionBlock:(@?)aouter:(id)b;
 - (id) _name;
 - (void) _setName:(id)aouter:(id)b;
 - (void) _waitUntilFinished:(id)a;
 - (void) _waitUntilFinishedOrTimeout:(double)aouter:(id)b;
 - (void) _addDependency:(id)aouter:(id)b;
 - (void) _removeDependency:(id)aouter:(id)b;
 - (id) _dependencies;
 - (void) _start:(id)a;
 - (id) __;
 - (void) dealloc;
 - (void) finalize;
 - (void) _invalidate;


@end
