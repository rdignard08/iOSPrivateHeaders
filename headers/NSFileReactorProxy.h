
@interface NSFileReactorProxy : NSObject {

    NSObject<OS_xpc_object>* _client;
    id _reactorID;
    @? _messageSender;
    NSFileAccessNode* _itemLocation;
}

 - (id) descriptionWithIndenting:(id)a ;
 - (id) initWithClient:(id)a reactorID:(id)b messageSender:(@?)c ;
 - (id) reactorID;
 - (@?) messageSender;
 - (void) setItemLocation:(id)a ;
 - (id) itemLocation;
 - (void) forwardUsingMessageSender:(@?)a ;
 - (void) collectDebuggingInformationWithCompletionHandler:(@?)a ;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) client;


@end
