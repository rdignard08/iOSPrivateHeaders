
@protocol _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate;
@interface _UIRemoteKeyboards : NSObject <_UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate> {

    NSHashTable _windowControllers;
    BOOL _currentKeyboard;
    NSXPCConnection _connection;
    _UIKeyboardChangedInformation _currentState;
}
@property (atomic, assign, readonly) NSNumber* keyboardVisible;
@property (atomic, assign, readonly) UIWindow* keyboardWindow;
@property (atomic, assign, readonly) NSNumber* intersectionHeight;
@property (atomic, assign, readonly) NSNumber* keyboardActive;
@property (atomic, retain, readwrite) NSXPCConnection* connection;
@property (atomic, assign, readonly) NSNumber* proxy;
@property (atomic, retain, readwrite) _UIKeyboardChangedInformation* currentState;
@property (atomic, assign, readwrite) NSNumber* currentKeyboard;
 + (id) sharedRemoteKeyboards;
 + (BOOL) enabled;

 - (id) connection;
 - (void) dealloc;
 - (void) keyboardChanged:(id)a;
 - (id) keyboardWindow;
 - (BOOL) keyboardVisible;
 - (void) performOnControllers:(@?)a;
 - (void) prepareToMoveKeyboard:({CGRect={CGPoint=dd}{CGSize=dd}})ashowing:(BOOL)bforScreen:(id)c;
 - (BOOL) keyboardActive;
 - (double) intersectionHeight;
 - (void) willResume:(id)a;
 - (void) didSuspend:(id)a;
 - (void) completeMoveKeyboardForScreen:(id)a;
 - (void) startConnection;
 - (void) willDeactivate:(id)a;
 - (void) didActivate:(id)a;
 - (void) stopConnection;
 - (id) proxy;
 - (BOOL) currentKeyboard;
 - (void) setCurrentKeyboard:(BOOL)a;
 - (void) setWindowEnabled:(BOOL)a;
 - (void) controllerDidLayoutSubviews:(id)a;
 - (void) registerController:(id)a;
 - (void) unregisterController:(id)a;
 - (id) prepareForHostedWindow;
 - (void) setHostedWindowView:(id)a;
 - (id) init;
 - (void) setConnection:(id)a;
 - (id) currentState;
 - (void) setCurrentState:(id)a;


@end
