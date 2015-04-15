
@protocol BKSAlternateSystemAppClientProtocol;
@interface BKSAlternateSystemApp : NSObject <BKSAlternateSystemAppClientProtocol> {

    BOOL _stateChangeWaiter;
    <BKSAlternateSystemAppDelegate> _delegate;
    NSString _bundleId;
    NSXPCConnection _connection;
    NSObject<OS_dispatch_queue> _queue;
    long long _state;
    NSObject<OS_dispatch_semaphore> _stateChangeSemaphore;
}
@property (nonatomic, assign, readwrite) NSNumber* delegate;
@property (nonatomic, copy, readwrite) NSString* bundleId;
@property (nonatomic, retain, readwrite) NSXPCConnection* connection;
@property (nonatomic, retain, readwrite) NSNumber* queue;
@property (nonatomic, assign, readwrite) NSNumber* state;
@property (nonatomic, assign, readwrite) NSNumber* stateChangeWaiter;
@property (nonatomic, retain, readwrite) NSNumber* stateChangeSemaphore;

 - (void) terminate;
 - (id) connection;
 - (void) dealloc;
 - (void) setDelegate:(id)a;
 - (void) setConnection:(id)a;
 - (long long) state;
 - (void) setState:(long long)a;
 - (id) delegate;
 - (void) _invalidate;
 - (id) queue;
 - (void) setBundleId:(id)a;
 - (void) setQueue:(id)a;
 - (void) setStateChangeSemaphore:(id)a;
 - (void) _queue_ensureConnection;
 - (void) _queue_changeState:(long long)a;
 - (void) _waitForState:(long long)a;
 - (void) didBlockSystemAppForAlternateSystemApp;
 - (void) didUnblockSystemAppForAlternateSystemApp;
 - (void) alternateSystemAppWithBundleID:(id)afailedToOpenWithResult:(id)b;
 - (void) alternateSystemAppWithBundleID:(id)adidExitWithReason:(unsigned long long)b;
 - (void) alternateSystemAppWithBundleIDDidOpen:(id)a;
 - (void) alternateSystemAppWithBundleIDDidTerminate:(id)a;
 - (void) _handleInterruptedConnection;
 - (void) _handleInvalidatedConnection;
 - (void) activate;
 - (id) initWithBundleId:(id)a;
 - (id) bundleId;
 - (BOOL) stateChangeWaiter;
 - (void) setStateChangeWaiter:(BOOL)a;
 - (id) stateChangeSemaphore;


@end
