
@interface NSXPCListener : NSObject {

    ^v _xconnection;
    NSObject<OS_dispatch_queue>* _userQueue;
    ^v reserved0;
    <NSXPCListenerDelegate>* _delegate;
    NSString* _serviceName;
    unsigned long long _state;
    id _reserved1;
    id _reserved2;
}
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, retain, readonly) NSXPCListenerEndpoint* endpoint;
 + (id) serviceListener;
 + (void) enableTransactions;
 + (id) anonymousListener;
 + (id) _UUID;

 - (void) stop;
 - (id) serviceName;
 - (void) _setQueue:(id)a ;
 - (id) _initShared;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) invalidate;
 - (void) setDelegate:(id)a ;
 - (id) _queue;
 - (id) _xpcConnection;
 - (void) suspend;
 - (id) delegate;
 - (void) setOptions:(unsigned long long)a ;
 - (id) initWithMachServiceName:(id)a ;
 - (void) resume;
 - (id) initWithServiceName:(id)a ;
 - (id) endpoint;


@end
