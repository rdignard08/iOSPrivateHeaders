
@protocol NSXPCConnectionDelegate;
@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate> {

    int _terminationStateLock;
    NSError* _terminationError;
    @? _terminationHandler;
    BOOL _isTerminated;
    _UIAsyncInvocation* _terminateInvocation;
    NSString* _serviceBundleIdentifier;
    _UIRemoteViewService* _service;
    BKSProcessAssertion* _serviceProcessAssertion;
    NSXPCConnection* _serviceConnection;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}
@property (nonatomic, assign, readonly) NSNumber* servicePID;
@property (nonatomic, assign, readonly) NSNumber* serviceAuditToken;
 + (id) connectToViewServiceWithBundleIdentifier:(id)adeputyInterfaces:(id)bconnectionHandler:(@?)c;
 + (id) connectToViewService:(id)adeputyInterfaces:(id)bconnectionHandler:(@?)c;

 - (id) disconnect;
 - (void) connection:(id)a handleInvocation:(id)b isReply:(BOOL)c ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (int) __automatic_invalidation_logic;
 - (id) connectToDeputyWithInterface:(id)a fromExportedHostingObject:(id)b connectionHandler:(@?)c ;
 - (id) _terminateWithError:(id)a ;
 - (void) setTerminationHandler:(@?)a ;
 - (void) _terminateUnconditionallyThen:(@?)a ;
 - (int) servicePID;
 - ({?=[8I]}) serviceAuditToken;
 - (id) _initWithConnectionInfo:({?=@@})a serviceBundleIdentifier:(id)b deputyInterfaces:(id)c ;
 - (id) _initWithConnectionInfo:({?=@@})a service:(id)b deputyInterfaces:(id)c ;
 - (id) _initWithConnectionInfo:({?=@@})a serviceBundleIdentifier:(id)b service:(id)c deputyInterfaces:(id)d ;


@end
