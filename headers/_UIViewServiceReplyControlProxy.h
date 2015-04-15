
@protocol _UIViewServiceProxy_ReplyControl;
@interface _UIViewServiceReplyControlProxy : NSObject <_UIViewServiceProxy_ReplyControl> {

    id _target;
    @"_UIViewServiceReplyControlTrampoline" _controlTrampoline;
    @"_UIViewServiceReplyAwaitingTrampoline" _awaitingTrampoline;
    @"NSLock" _lock;
}
 + (id) proxyWithTarget:(id)a;

 - (void) dealloc;
 - (BOOL) respondsToSelector:(SEL)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) forwardingTargetForSelector:(SEL)a;
 - (id) _deliveringRepliesAsynchronously;
 - (id) _awaitingReply;


@end
