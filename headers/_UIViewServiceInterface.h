
@protocol NSXPCConnectionDelegate;
@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate> {

    i _terminationStateLock;
    @"NSError" _terminationError;
    @? _terminationHandler;
    BOOL _isTerminated;
    @"_UIAsyncInvocation" _terminateInvocation;
    @"NSString" _serviceBundleIdentifier;
    @"_UIRemoteViewService" _service;
    @"BKSProcessAssertion" _serviceProcessAssertion;
    @"NSXPCConnection" _serviceConnection;
    i __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}
@property (nonatomic, assign, readonly) NSNumber* servicePID;
@property (nonatomic, assign, readonly) NSNumber* serviceAuditToken;
 + (id) connectToViewServiceWithBundleIdentifier:(id)adeputyInterfaces:(id)bconnectionHandler:(@?)c;
 + (id) connectToViewService:(id)adeputyInterfaces:(id)bconnectionHandler:(@?)c;

 - (id) disconnect;
 - (void) connection:(id)ahandleInvocation:(id)bisReply:(BOOL)c;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (i) __automatic_invalidation_logic;
 - (id) connectToDeputyWithInterface:(id)afromExportedHostingObject:(id)bconnectionHandler:(@?)c;
 - (id) _terminateWithError:(id)a;
 - (void) setTerminationHandler:(@?)a;
 - (void) _terminateUnconditionallyThen:(@?)a;
 - (i) servicePID;
 - ({?=[8I]}) serviceAuditToken;
 - (id) _initWithConnectionInfo:({?=@@})aserviceBundleIdentifier:(id)bdeputyInterfaces:(id)c;
 - (id) _initWithConnectionInfo:({?=@@})aservice:(id)bdeputyInterfaces:(id)c;
 - (id) _initWithConnectionInfo:({?=@@})aserviceBundleIdentifier:(id)bservice:(id)cdeputyInterfaces:(id)d;


@end
