
@interface BSPortDeathWatcher : NSObject {

    @"NSObject<OS_dispatch_queue>" _queue;
    @"BSDispatchSource" _source;
    @"BSMachSendRight" _sendRight;
    @? _handler;
}
@property (nonatomic, copy, readonly) BSMachSendRight* sendRight;

 - (void) dealloc;
 - (void) invalidate;
 - (id) sendRight;
 - (id) initWithSendRight:(id)aqueue:(id)bdeathHandler:(@?)c;
 - (void) queue_handlePortDeathEvent;
 - (id) initWithPort:(I)aqueue:(id)bdeathHandler:(@?)c;


@end
