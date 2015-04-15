
@interface ThreadedInvocationTrampoline : InvocationTrampoline {

    NSThread* _thread;
    BOOL _immediateForMatchingThread;
}

 - (void) dealloc;
 - (void) forwardInvocation:(id)a ;
 - (id) initWithTarget:(id)a thread:(id)b immediateForMatchingThread:(BOOL)c ;


@end
