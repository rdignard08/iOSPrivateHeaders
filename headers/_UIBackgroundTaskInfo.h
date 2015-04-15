
@interface _UIBackgroundTaskInfo : NSObject {

    Q _taskId;
    @? _expireHandler;
    @"BKSProcessAssertion" _processAssertion;
    i _count;
}
 + (id) backgroundTaskAssertionQueue;

 - (void) dealloc;
 - (void) invalidate;
 - (id) initWithProcessAssertion:(id)aexpirationHandler:(@?)b;
 - (void) fireExpirationHandler;


@end
