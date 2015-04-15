
@interface _UIQueueingProxy : _UITargetedProxy {

    int _lock;
    unsigned long long _suspensionCount;
    NSMutableArray* _queuedInvocations;
    @? _shouldSuspendInvocationBlock;
}
 + (id) proxyWithTarget:(id)a;
 + (id) proxyWithTarget:(id)ashouldSuspendInvocationBlock:(@?)b;

 - (id) description;
 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (void) _dispatchSuspendedMessages;
 - (void) removeAllEnqueuedInvocations;
 - (void) suspend;
 - (void) resume;


@end
