
@protocol _UIViewServiceViewControllerOperatorDelegate;
@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate> {

    NSObject<OS_dispatch_queue>* _queue;
    _UIAsyncInvocation* _invalidationInvocation;
    NSMutableDictionary* _connectionHandlers;
    NSLock* _connectionHandlersLock;
    NSMutableSet* _deputies;
    @? _terminationHandler;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    id _delegate;
}
@property (atomic, assign, readwrite) NSNumber* delegate;
 + (id) exportedInterfaceSupportingDeputyInterfaces:(id)a;

 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (void) invalidate;
 - (void) setDelegate:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (int) __automatic_invalidation_logic;
 - (void) _invalidateUnconditionallyThen:(@?)a;
 - (Class) _deputyClassForConnectionSelector:(SEL)a;
 - (void) __prototype_requestConnectionToDeputyFromHostObject:(id)areplyHandler:(@?)b;
 - (void) checkDeputyForRotation:(id)a;
 - (void) __requestConnectionToDeputyOfClass:(Class)afromHostObject:(R)breplyHandler:(id)c;
 - (void) unregisterDeputyClass:(Class)a;
 - (void) registerDeputyClass:(Class)awithConnectionHandler:(@?)b;
 - (void) viewControllerOperator:(id)adidCreateServiceViewControllerOfClass:(Class)b;
 - (id) init;
 - (id) delegate;


@end
