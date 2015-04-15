
@protocol SBSStatusBarStyleOverridesAssertionClient;
@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <SBSStatusBarStyleOverridesAssertionClient> {

    NSHashTable* _assertions;
    NSXPCConnection* _sbXPCConnection;
    NSObject<OS_dispatch_queue>* _internalQueue;
}
@property (nonatomic, retain, readwrite) NSHashTable* assertions;
@property (nonatomic, retain, readwrite) NSXPCConnection* sbXPCConnection;
@property (nonatomic, retain, readwrite) NSNumber* internalQueue;
 + (id) sharedInstance;

 - (void) dealloc;
 - (id) init;
 - (void) removeStatusBarStyleOverridesAssertion:(id)a ;
 - (void) addStatusBarStyleOverridesAssertion:(id)a withHandler:(@?)b onQueue:(id)c ;
 - (void) invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)a ;
 - (void) _reactivateAssertions;
 - (void) _tearDownXPCConnection;
 - (void) _internalQueue_removeStatusBarStyleOverridesAssertionMatchingData:(id)a invalidate:(BOOL)b ;
 - (void) _invalidateStatusBarStyleOverridesAssertionsWithData:(id)a ;
 - (id) assertions;
 - (void) setAssertions:(id)a ;
 - (id) sbXPCConnection;
 - (void) setSbXPCConnection:(id)a ;
 - (id) internalQueue;
 - (void) setInternalQueue:(id)a ;


@end
