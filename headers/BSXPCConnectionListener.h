
@interface BSXPCConnectionListener : NSObject {

    @"NSObject<OS_xpc_object>" _connection;
    @"<BSXPCConnectionListenerHandler>" _handler;
    @"NSString" _service;
    @"NSObject<OS_dispatch_queue>" _queue;
}
@property (atomic, retain, readonly) NSNumber* handler;
@property (atomic, copy, readonly) NSString* service;
@property (atomic, assign, readonly) NSNumber* queue;

 - (id) description;
 - (void) dealloc;
 - (void) invalidate;
 - (id) queue;
 - (id) initWithConnection:(id)aforService:(id)bwithHandler:(id)conQueue:(id)d;
 - (id) handler;
 - (id) service;


@end
