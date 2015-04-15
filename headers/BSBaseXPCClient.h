
@interface BSBaseXPCClient : NSObject {

    NSObject<OS_dispatch_queue> _queue;
    NSObject<OS_xpc_object> _connection;
    BSSignal _invalidationSignal;
    NSObject<OS_xpc_object> _serverEndpoint;
    NSString _serviceName;
    BOOL _suspended;
    BOOL _clientInvalidated;
    int _notifyToken;
}
@property (nonatomic, assign, readonly, getter=isSuspended) NSNumber* suspended;

 - (id) _connection;
 - (void) dealloc;
 - (void) invalidate;
 - (id) initWithServiceName:(id)a;
 - (id) _getStringFromMessage:(id)akey:(char*)b;
 - (id) _notifyTokenName;
 - (void) queue_handleMessage:(id)a;
 - (id) initWithServiceName:(id)aendpoint:(id)b;
 - (void) queue_invalidate;
 - (BOOL) queue_isSuspended;
 - (void) queue_registerWithServerIfNecessary;
 - (void) queue_suspendConnection;
 - (void) queue_resumeConnection;
 - (void) _sendMessage:(@?)awithReplyHandler:(@?)bwaitForReply:(BOOL)cwaitDuration:(unsigned long long)d;
 - (void) queue_connectionWasResumed;
 - (void) queue_connectionWasSuspended;
 - (id) _connectionInstanceUUID;
 - (void) queue_connectionWasInterrupted;
 - (void) queue_reregister;
 - (void) queue_connectionWasInvalidated;
 - (void) queue_reconnectToResumedServerIfNecessary;
 - (void) queue_connectionWasCreated;
 - (void) reconnectIfNecessary;
 - (void) queue_connectionWasDestroyed;
 - (void) suspendConnection;
 - (void) resumeConnection;
 - (id) _errorFromMessageIfAny:(id)a;
 - (void) _sendMessage:(@?)a;
 - (void) _setEndpoint:(id)a;
 - (id) queue_connection;
 - (void) _sendReply:(id)amessagePacker:(@?)b;
 - (id) initWithEndpoint:(id)a;
 - (BOOL) isSuspended;


@end
