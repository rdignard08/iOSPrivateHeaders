
@interface BKSApplicationDataStoreClientFactory : NSObject {

    unsigned long long _count;
    NSObject<OS_dispatch_queue>* _queue;
    BKSApplicationDataStoreRepositoryClient* _sharedClient;
}
 + (id) sharedInstance;

 - (void) dealloc;
 - (id) init;
 - (id) checkout;
 - (void) checkin;


@end
