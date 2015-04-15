
@interface __NSOperationQueueInternal : NSObject {

    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} __queueLock;
    @"NSOperation" __firstOperation;
    @"NSOperation" __lastOperation;
    @"NSOperation" __pendingFirstOperation;
    @"NSOperation" __pendingLastOperation;
    [5@"NSOperation"] __firstPriOperation;
    [5@"NSOperation"] __lastPriOperation;
    @"NSObject<OS_dispatch_queue>" __pending_barrier;
    q __maxNumOps;
    i __actualMaxNumOps;
    i __numExecOps;
    I __unused2;
    C __mainQ;
    C __suspended;
    C __overcommit;
    c __propertyQOS;
    @"NSObject<OS_dispatch_queue>" __dispatch_queue;
    [160c] __nameBuffer;
}

 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
