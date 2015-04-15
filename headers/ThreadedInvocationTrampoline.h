
@interface ThreadedInvocationTrampoline : InvocationTrampoline {

    NSThread _thread;
    BOOL _immediateForMatchingThread;
}

 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (id) initWithTarget:(id)athread:(id)bimmediateForMatchingThread:(BOOL)c;


@end
