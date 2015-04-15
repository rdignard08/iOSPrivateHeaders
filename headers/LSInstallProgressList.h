
@interface LSInstallProgressList : NSObject {

    NSMutableDictionary _progresses;
    NSMutableDictionary _subscriptions;
}

 - (id) progressForBundleID:(id)a;
 - (id) subscriberForBundleID:(id)aandPublishingKey:(id)b;
 - (void) setProgress:(id)aforBundleID:(id)b;
 - (void) addSubscriber:(id)aforPublishingKey:(id)bandBundleID:(id)c;
 - (void) removeProgressForBundleID:(id)a;
 - (void) removeSubscriberForPublishingKey:(id)aandBundleID:(id)b;
 - (id) description;
 - (void) dealloc;
 - (id) init;


@end
