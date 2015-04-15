
@interface BSTimer : NSObject {

    @"NSObject<OS_dispatch_queue>" _queue;
    @? _handler;
    @"BSDispatchSource" _source;
    d _fireInterval;
    d _repeatInterval;
    d _leewayInterval;
}
 + (id) scheduledTimerWithFireInterval:(d)aqueue:(id)bhandler:(@?)c;

 - (void) dealloc;
 - (void) cancel;
 - (id) initWithFireInterval:(d)aqueue:(id)bhandler:(@?)c;
 - (void) schedule;
 - (id) initWithFireInterval:(d)arepeatInterval:(d)bleewayInterval:(d)cqueue:(id)dhandler:(@?)e;


@end
