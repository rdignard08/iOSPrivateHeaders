
@interface BSXPCReply : NSObject {

    @"NSObject<OS_xpc_object>" _message;
}
 + (id) messageWithReply:(id)a;

 - (void) dealloc;
 - (id) message;
 - (id) initWithReply:(id)a;
 - (q) messageKind;
 - (void) sendReply:(@?)a;


@end
