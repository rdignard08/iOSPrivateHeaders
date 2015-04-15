
@interface _UIBackgroundTaskInfo : NSObject {

    unsigned long long _taskId;
    @? _expireHandler;
    BKSProcessAssertion* _processAssertion;
    int _count;
}
 + (id) backgroundTaskAssertionQueue;

 - (void) dealloc;
 - (void) invalidate;
 - (id) initWithProcessAssertion:(id)a expirationHandler:(@?)b ;
 - (void) fireExpirationHandler;


@end
