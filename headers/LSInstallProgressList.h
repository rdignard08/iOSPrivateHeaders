
@interface LSInstallProgressList : NSObject {

    NSMutableDictionary* _progresses;
    NSMutableDictionary* _subscriptions;
}

 - (id) progressForBundleID:(id)a ;
 - (id) subscriberForBundleID:(id)a andPublishingKey:(id)b ;
 - (void) setProgress:(id)a forBundleID:(id)b ;
 - (void) addSubscriber:(id)a forPublishingKey:(id)b andBundleID:(id)c ;
 - (void) removeProgressForBundleID:(id)a ;
 - (void) removeSubscriberForPublishingKey:(id)a andBundleID:(id)b ;
 - (id) description;
 - (void) dealloc;
 - (id) init;


@end
