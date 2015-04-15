
@interface BSBaseXPCServer : NSObject {

    NSObject<OS_dispatch_queue>* _queue;
    NSObject<OS_xpc_object>* _listenerConnection;
    NSMutableSet* _clients;
    BOOL _connectionResumed;
    BOOL _usesAnonymousConnection;
    NSString* _serviceName;
    int _notifyToken;
}
@property (nonatomic, assign, readwrite, getter=usesAnonymousConnection) NSNumber* usesAnonymousConnection;

 - (id) _connection;
 - (void) dealloc;
 - (void) run;
 - (void) _invalidate;
 - (id) initWithServiceName:(id)a;
 - (id) _getStringFromMessage:(id)akey:(char*)b;
 - (id) initWithServiceName:(id)aonQueue:(id)b;
 - (void) registerServerSuspended;
 - (void) resumeServer;
 - (void) _addClientConnection:(id)a;
 - (id) _notifyTokenName;
 - (BOOL) queue_shouldAcceptNewConnection:(id)a;
 - (id) queue_newClientForConnection:(id)a;
 - (void) _queue_removeClientConnection:(id)a;
 - (id) _queue_clientForConnection:(id)a;
 - (void) queue_clientRemoved:(id)a;
 - (Class) queue_classForNewClientConnection:(id)a;
 - (id) queue;
 - (void) queue_handleMessage:(id)a;
 - (void) queue_clientAdded:(id)a;
 - (id) _clients;
 - (id) _copyEndpoint;
 - (BOOL) usesAnonymousConnection;
 - (void) setUsesAnonymousConnection:(BOOL)a;
 - (void) _sendReply:(id)amessagePacker:(@?)b;


@end
