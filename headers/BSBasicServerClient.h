
@protocol BSXPCServerClient;
@interface BSBasicServerClient : NSObject <BSXPCServerClient> {

    NSObject<OS_xpc_object>* _connection;
}
@property (nonatomic, retain, readwrite) NSNumber* connection;
 + (id) wrapperWithConnection:(id)a;

 - (id) connection;
 - (id) description;
 - (void) dealloc;
 - (void) invalidate;
 - (void) sendMessage:(id)a ;
 - (void) setConnection:(id)a ;
 - (id) initWithConnection:(id)a ;
 - (void) sendMessageWithPacker:(@?)a replyHandler:(@?)b onQueue:(id)c ;
 - (void) sendMessageWithPacker:(@?)a ;


@end
