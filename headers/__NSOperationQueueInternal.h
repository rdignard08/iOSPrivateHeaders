
@interface __NSOperationQueueInternal : NSObject {

    {_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} __queueLock;
    @"NSOperation" __firstOperation;
    @"NSOperation" __lastOperation;
    @"NSOperation" __pendingFirstOperation;
    @"NSOperation" __pendingLastOperation;
    [5@"NSOperation"] __firstPriOperation;
    [5@"NSOperation"] __lastPriOperation;
    @"NSObject<OS_dispatch_queue>" __pending_barrier;
    long long __maxNumOps;
    int __actualMaxNumOps;
    int __numExecOps;
    unsigned int __unused2;
    unsigned char __mainQ;
    unsigned char __suspended;
    unsigned char __overcommit;
    char __propertyQOS;
    @"NSObject<OS_dispatch_queue>" __dispatch_queue;
    [160c] __nameBuffer;
}

 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
