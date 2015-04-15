
@interface BSTimer : NSObject {

    @"NSObject<OS_dispatch_queue>" _queue;
    @? _handler;
    @"BSDispatchSource" _source;
    double _fireInterval;
    double _repeatInterval;
    double _leewayInterval;
}
 + (id) scheduledTimerWithFireInterval:(double)aqueue:(id)bhandler:(@?)c;

 - (void) dealloc;
 - (void) cancel;
 - (id) initWithFireInterval:(double)aqueue:(id)bhandler:(@?)c;
 - (void) schedule;
 - (id) initWithFireInterval:(double)arepeatInterval:(double)bleewayInterval:(double)cqueue:(id)dhandler:(@?)e;


@end
