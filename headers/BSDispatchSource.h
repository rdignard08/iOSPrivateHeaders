
@interface BSDispatchSource : NSObject {

    NSObject<OS_dispatch_source> _source;
    NSObject<OS_dispatch_queue> _queue;
    BOOL _invalidated;
    @? _eventHandler;
    @? _cancelHandler;
}
@property (nonatomic, copy, readwrite) NSNumber* eventHandler;
@property (nonatomic, copy, readwrite) NSNumber* cancelHandler;
@property (nonatomic, retain, readonly) NSNumber* queue;

 - (void) dealloc;
 - (void) invalidate;
 - (void) resume;
 - (id) queue;
 - (void) setCancelHandler:(@?)a;
 - (void) setEventHandler:(@?)a;
 - (id) initWithType:(^{dispatch_source_type_s=})ahandle:(unsigned long long)bmask:(unsigned long long)cqueue:(id)dconfigureSourceBlock:(@?)e;
 - (@?) eventHandler;
 - (@?) cancelHandler;


@end
