
@protocol NSXPCListenerDelegate;
@interface _UIViewServiceSessionManager : NSObject <NSXPCListenerDelegate> {

    int _lock;
    NSXPCListener _listener;
    NSMutableArray _sessions;
    int _connectionNotificationToken;
}
 + (BOOL) hasActiveSessions;
 + (id) __serviceSessionManager;
 + (void) startViewServiceSessionManagerAsPlugin:(BOOL)a;

 - (BOOL) listener:(id)ashouldAcceptNewConnection:(id)b;
 - (void) dealloc;
 - (id) _initAsPlugIn:(BOOL)a;
 - (BOOL) _hasActiveSessions;
 - (void) _startListener;
 - (void) _startListenerWithName:(id)a;
 - (void) _registerSessionForDefaultDeputies:(id)a;
 - (void) _startOrStopSystemsForBackgroundRunning;
 - (void) _configureSessionForConnection:(id)a;
 - (id) init;


@end
