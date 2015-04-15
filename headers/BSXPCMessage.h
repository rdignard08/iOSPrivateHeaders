
@interface BSXPCMessage : NSObject {

    @"NSObject<OS_xpc_object>" _message;
    @? _replyHandler;
    @"NSObject<OS_dispatch_queue>" _replyQueue;
}
 + (void) sendMessageWithPacker:(@?)atoConnection:(id)b;
 + (void) sendMessageWithPacker:(@?)atoConnection:(id)breplyHandler:(@?)creplyQueue:(id)d;
 + (void) sendMessage:(q)atoConnection:(id)bwithMessagePacker:(@?)creplyHandler:(@?)dreplyQueue:(id)e;
 + (id) message:(q)awithPacker:(@?)breplyHandler:(@?)creplyQueue:(id)d;
 + (r*) messageTypeKey;
 + (void) sendMessage:(q)atoConnection:(id)bwithMessagePacker:(@?)c;
 + (id) message:(q)awithPacker:(@?)b;
 + (id) messageWithPacker:(@?)areplyHandler:(@?)breplyQueue:(id)c;

 - (void) dealloc;
 - (id) initWithMessagePacker:(@?)areplyHandler:(@?)breplyQueue:(id)c;
 - (void) sendToConnection:(id)a;
 - (id) initWithMessage:(q)apacker:(@?)breplyHandler:(@?)creplyQueue:(id)d;
 - (id) initWithMessage:(id)areplyHandler:(@?)breplyQueue:(id)c;
 - (void) forcefullyInvokeReplyHandler:(id)a;


@end
