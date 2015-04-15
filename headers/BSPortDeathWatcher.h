
@interface BSPortDeathWatcher : NSObject {

    NSObject<OS_dispatch_queue>* _queue;
    BSDispatchSource* _source;
    BSMachSendRight* _sendRight;
    @? _handler;
}
@property (nonatomic, copy, readonly) BSMachSendRight* sendRight;

 - (void) dealloc;
 - (void) invalidate;
 - (id) sendRight;
 - (id) initWithSendRight:(id)a queue:(id)b deathHandler:(@?)c ;
 - (void) queue_handlePortDeathEvent;
 - (id) initWithPort:(unsigned int)a queue:(id)b deathHandler:(@?)c ;


@end
