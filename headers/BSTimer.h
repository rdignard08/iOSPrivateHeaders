
@interface BSTimer : NSObject {

    NSObject<OS_dispatch_queue>* _queue;
    @? _handler;
    BSDispatchSource* _source;
    double _fireInterval;
    double _repeatInterval;
    double _leewayInterval;
}
 + (id) scheduledTimerWithFireInterval:(double)aqueue:(id)bhandler:(@?)c;

 - (void) dealloc;
 - (void) cancel;
 - (id) initWithFireInterval:(double)a queue:(id)b handler:(@?)c ;
 - (void) schedule;
 - (id) initWithFireInterval:(double)a repeatInterval:(double)b leewayInterval:(double)c queue:(id)d handler:(@?)e ;


@end
