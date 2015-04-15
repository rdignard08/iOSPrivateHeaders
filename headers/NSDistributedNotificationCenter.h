
@interface NSDistributedNotificationCenter : NSNotificationCenter {

}
 + (id) notificationCenterForType:(id)a;
 + (id) defaultCenter;

 - (void) postNotification:(id)a;
 - (void) addObserver:(id)aselector:(SEL)bname:(id)cobject:(id)dsuspensionBehavior:(Q)e;
 - (id) addObserverForName:(id)aobject:(id)bsuspensionBehavior:(Q)cqueue:(id)dusingBlock:(@?)e;
 - (void) postNotificationName:(id)aobject:(id)buserInfo:(id)coptions:(Q)d;
 - (void) postNotificationName:(id)aobject:(id)buserInfo:(id)cdeliverImmediately:(BOOL)d;
 - (BOOL) suspended;
 - (void) setSuspended:(BOOL)a;
 - (id) init;
 - (void) postNotificationName:(id)aobject:(id)b;
 - (void) postNotificationName:(id)aobject:(id)buserInfo:(id)c;
 - (void) removeObserver:(id)aname:(id)bobject:(id)c;
 - (void) addObserver:(id)aselector:(SEL)bname:(id)cobject:(id)d;
 - (id) addObserverForName:(id)aobject:(id)bqueue:(id)cusingBlock:(@?)d;


@end
