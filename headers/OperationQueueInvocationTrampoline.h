
@interface OperationQueueInvocationTrampoline : InvocationTrampoline {

    NSOperationQueue _queue;
    long long _priority;
}

 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (id) initWithTarget:(id)aoperationQueue:(id)bpriority:(long long)c;


@end
