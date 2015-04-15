
@interface OperationQueueInvocationTrampoline : InvocationTrampoline {

    @"NSOperationQueue" _queue;
    q _priority;
}

 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (id) initWithTarget:(id)aoperationQueue:(id)bpriority:(q)c;


@end
