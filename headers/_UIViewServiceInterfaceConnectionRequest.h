
@interface _UIViewServiceInterfaceConnectionRequest : NSObject {

    @? _connectionHandler;
    NSString* _serviceBundleIdentifier;
    _UIRemoteViewService* _service;
    NSObject<OS_dispatch_queue>* _queue;
    BOOL _isCancelled;
    NSError* _cancellationError;
    _UIAsyncInvocation* _cancellationInvocation;
    int _sessionRequestNotifyToken;
    BKSProcessAssertion* _serviceProcessAssertion;
    NSXPCConnection* _serviceSessionConnection;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}
 + (id) _connectToViewServiceWithBundleIdentifier:(id)aservice:(id)bconnectionHandler:(@?)c;
 + (id) connectToViewServiceWithBundleIdentifier:(id)aconnectionHandler:(@?)b;
 + (id) connectToViewService:(id)aconnectionHandler:(@?)b;

 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (int) __automatic_invalidation_logic;
 - (void) _cancelUnconditionallyThen:(@?)a ;
 - (void) _cancelWithError:(id)a ;
 - (void) _launchService;
 - (void) _createPlugInProcessAssertion;
 - (void) _createProcessAssertion;
 - (void) _createAndEstablishConnection;
 - (void) _createProcessAssertionForPID:(int)a aquiredHandler:(@?)b ;
 - (void) _establishConnection;
 - (void) _didConnectToService;


@end
