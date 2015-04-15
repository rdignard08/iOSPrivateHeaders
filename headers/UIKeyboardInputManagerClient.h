
@interface UIKeyboardInputManagerClient : NSObject {

    NSXPCConnection* _connection;
}
@property (nonatomic, retain, readwrite) NSXPCConnection* connection;
 + (BOOL) instancesRespondToSelector:(SEL)a;

 - (id) connection;
 - (void) dealloc;
 - (void) forwardInvocation:(id)a ;
 - (BOOL) isKindOfClass:(Class)a ;
 - (BOOL) respondsToSelector:(SEL)a ;
 - (BOOL) conformsToProtocol:(id)a ;
 - (id) methodSignatureForSelector:(SEL)a ;
 - (void) handleRequest:(id)a ;
 - (void) handleError:(id)a forRequest:(id)b ;
 - (id) init;
 - (void) setConnection:(id)a ;


@end
