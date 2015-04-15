
@protocol NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate;
@interface _UIViewServiceSession : NSObject <NSXPCConnectionDelegate, _UIViewServiceDeputyManagerDelegate, _UIViewServiceViewControllerOperatorDelegate> {

    @"NSObject<OS_dispatch_queue>" _queue;
    @"NSXPCConnection" _connection;
    @"_UIViewServiceDeputyManager" _deputyManager;
    @"_UIAsyncInvocation" _invalidationInvocation;
    @? _terminationHandler;
    i __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}
@property (nonatomic, copy, readwrite) NSNumber* terminationHandler;
 + (id) sessionWithConnection:(id)a;

 - (@?) terminationHandler;
 - (void) connection:(id)ahandleInvocation:(id)bisReply:(BOOL)c;
 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (i) __automatic_invalidation_logic;
 - (void) _invalidateUnconditionallyThen:(@?)a;
 - (void) deputyManager:(id)adidUpdateExportedInterface:(id)b;
 - (void) unregisterDeputyClass:(Class)a;
 - (void) registerDeputyClass:(Class)awithConnectionHandler:(@?)b;
 - (void) viewControllerOperator:(id)adidCreateServiceViewControllerOfClass:(Class)b;
 - (void) setTerminationHandler:(@?)a;
 - (void) deputy:(id)adidFailWithError:(id)b;


@end
