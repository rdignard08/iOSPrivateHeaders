
@interface NSDistributedNotificationCenter : NSNotificationCenter {

}
 + (id) notificationCenterForType:(id)a;
 + (id) defaultCenter;

 - (void) postNotification:(id)a ;
 - (void) addObserver:(id)a selector:(SEL)b name:(id)c object:(id)d suspensionBehavior:(unsigned long long)e ;
 - (id) addObserverForName:(id)a object:(id)b suspensionBehavior:(unsigned long long)c queue:(id)d usingBlock:(@?)e ;
 - (void) postNotificationName:(id)a object:(id)b userInfo:(id)c options:(unsigned long long)d ;
 - (void) postNotificationName:(id)a object:(id)b userInfo:(id)c deliverImmediately:(BOOL)d ;
 - (BOOL) suspended;
 - (void) setSuspended:(BOOL)a ;
 - (id) init;
 - (void) postNotificationName:(id)a object:(id)b ;
 - (void) postNotificationName:(id)a object:(id)b userInfo:(id)c ;
 - (void) removeObserver:(id)a name:(id)b object:(id)c ;
 - (void) addObserver:(id)a selector:(SEL)b name:(id)c object:(id)d ;
 - (id) addObserverForName:(id)a object:(id)b queue:(id)c usingBlock:(@?)d ;


@end
