
@interface UIKeyboardInputManagerMux : NSObject {

    @"NSMutableArray" _clients;
    @"<_UIIVCResponseDelegateImpl>" _responseDelegate;
    @"<TIKeyboardInputManager>" _systemInputManager;
}
@property (nonatomic, assign, readonly) NSNumber* hasSystemInputManager;
@property (nonatomic, retain, readwrite) NSNumber* responseDelegate;
@property (nonatomic, retain, readwrite) NSNumber* systemInputManager;
 + (id) sharedInstance;
 + (BOOL) instancesRespondToSelector:(SEL)a;

 - (void) dealloc;
 - (void) forwardInvocation:(id)a;
 - (BOOL) isKindOfClass:(Class)a;
 - (BOOL) respondsToSelector:(SEL)a;
 - (BOOL) conformsToProtocol:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) responseDelegate;
 - (void) setResponseDelegate:(id)a;
 - (BOOL) hasSystemInputManager;
 - (void) setSystemInputManagerFromKeyboardState:(id)a;
 - (void) releaseConnectedClients;
 - (void) addClient:(id)a;
 - (void) removeClient:(id)a;
 - (id) systemInputManager;
 - (void) setSystemInputManager:(id)a;
 - (BOOL) _systemHasKbd;
 - (void) updateClientResponseDelegatesWithDelegate:(id)a;
 - (void) removeAllClients;


@end
