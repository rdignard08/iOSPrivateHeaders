
@interface _UIBackgroundTaskInfo : NSObject {

    unsigned long long _taskId;
    @? _expireHandler;
    BKSProcessAssertion _processAssertion;
    int _count;
}
 + (id) backgroundTaskAssertionQueue;

 - (void) dealloc;
 - (void) invalidate;
 - (id) initWithProcessAssertion:(id)aexpirationHandler:(@?)b;
 - (void) fireExpirationHandler;


@end
