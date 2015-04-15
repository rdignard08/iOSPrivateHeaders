
@interface NSNetServicesInternal : NSObject {

    NSMutableArray* _monitors;
    NSObject<OS_tcp_listener>* _listener;
    ^{__CFRunLoop=} _scheduledRunLoop;
    ^{__CFString=} _scheduledMode;
}
@property (atomic, retain, readwrite) NSMutableArray* monitors;

 - (void) dealloc;
 - (void) finalize;
 - (void) copyScheduledRunLoop:(^^{__CFRunLoop})a andMode:(r^^{__CFString})b ;
 - (void) setScheduledRunLoop:(^{__CFRunLoop=})a andMode:(^{__CFString=})b ;
 - (id) listener;
 - (void) setListener:(id)a ;
 - (id) monitors;
 - (void) setMonitors:(id)a ;


@end
