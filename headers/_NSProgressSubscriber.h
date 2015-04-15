
@protocol NSProgressSubscriber;
@interface _NSProgressSubscriber : NSObject <NSProgressSubscriber> {

    @? _publishingHandler;
    NSString* _subscriberID;
    NSMutableDictionary* _proxiesByPublisherID;
    NSXPCConnection* _connection;
    NSLock* _lock;
}

 - (void) stop;
 - (Vv) observePublisherForID:(id)a value:(id)b forKey:(id)c inUserInfo:(BOOL)d ;
 - (Vv) removePublisherForID:(id)a ;
 - (id) initWithPublishingHandler:(@?)a ;
 - (void) startForFileURL:(id)a ;
 - (void) startForCategory:(id)a ;
 - (Vv) addPublisher:(id)a forID:(id)b withValues:(id)c isOld:(BOOL)d ;
 - (void) dealloc;


@end
