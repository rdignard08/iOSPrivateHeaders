
@protocol NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate;
@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate> {

    NSObject<OS_dispatch_queue>* _queue;
    NSXPCConnection* _connection;
    _UIViewServiceDeputyManager* _deputyManager;
    _UIAsyncInvocation* _invalidationInvocation;
    @? _terminationHandler;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}
@property (nonatomic, copy, readwrite) NSNumber* terminationHandler;
 + (id) sessionWithConnection:(id)a;

 - (@?) terminationHandler;
 - (void) connection:(id)a handleInvocation:(id)b isReply:(BOOL)c ;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (int) __automatic_invalidation_logic;
 - (void) _invalidateUnconditionallyThen:(@?)a ;
 - (void) deputyManager:(id)a didUpdateExportedInterface:(id)b ;
 - (void) unregisterDeputyClass:(Class)a ;
 - (void) registerDeputyClass:(Class)a withConnectionHandler:(@?)b ;
 - (void) viewControllerOperator:(id)a didCreateServiceViewControllerOfClass:(Class)b ;
 - (void) setTerminationHandler:(@?)a ;
 - (void) deputy:(id)a didFailWithError:(id)b ;


@end
