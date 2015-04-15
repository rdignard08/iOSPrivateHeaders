
@interface BSXPCMessage : NSObject {

    NSObject<OS_xpc_object>* _message;
    @? _replyHandler;
    NSObject<OS_dispatch_queue>* _replyQueue;
}
 + (void) sendMessageWithPacker:(@?)atoConnection:(id)b;
 + (void) sendMessageWithPacker:(@?)atoConnection:(id)breplyHandler:(@?)creplyQueue:(id)d;
 + (void) sendMessage:(long long)atoConnection:(id)bwithMessagePacker:(@?)creplyHandler:(@?)dreplyQueue:(id)e;
 + (id) message:(long long)awithPacker:(@?)breplyHandler:(@?)creplyQueue:(id)d;
 + (r*) messageTypeKey;
 + (void) sendMessage:(long long)atoConnection:(id)bwithMessagePacker:(@?)c;
 + (id) message:(long long)awithPacker:(@?)b;
 + (id) messageWithPacker:(@?)areplyHandler:(@?)breplyQueue:(id)c;

 - (void) dealloc;
 - (id) initWithMessagePacker:(@?)a replyHandler:(@?)b replyQueue:(id)c ;
 - (void) sendToConnection:(id)a ;
 - (id) initWithMessage:(long long)a packer:(@?)b replyHandler:(@?)c replyQueue:(id)d ;
 - (id) initWithMessage:(id)a replyHandler:(@?)b replyQueue:(id)c ;
 - (void) forcefullyInvokeReplyHandler:(id)a ;


@end
