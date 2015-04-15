
@protocol NSProgressSubscriber;
@interface _NSProgressSubscriber : NSObject <NSProgressSubscriber> {

    @? _publishingHandler;
    @"NSString" _subscriberID;
    @"NSMutableDictionary" _proxiesByPublisherID;
    @"NSXPCConnection" _connection;
    @"NSLock" _lock;
}

 - (void) stop;
 - (Vv) observePublisherForID:(id)avalue:(id)bforKey:(id)cinUserInfo:(BOOL)d;
 - (Vv) removePublisherForID:(id)a;
 - (id) initWithPublishingHandler:(@?)a;
 - (void) startForFileURL:(id)a;
 - (void) startForCategory:(id)a;
 - (Vv) addPublisher:(id)aforID:(id)bwithValues:(id)cisOld:(BOOL)d;
 - (void) dealloc;


@end
