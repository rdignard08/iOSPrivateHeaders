
@interface OperationQueueInvocationTrampoline : InvocationTrampoline {

    NSOperationQueue* _queue;
    long long _priority;
}

 - (void) dealloc;
 - (void) forwardInvocation:(id)a ;
 - (id) initWithTarget:(id)a operationQueue:(id)b priority:(long long)c ;


@end
