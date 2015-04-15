
@interface NSNotificationQueue : NSObject {

    id _notificationCenter;
    id _asapQueue;
    id _asapObs;
    id _idleQueue;
    id _idleObs;
}
 + (id) defaultQueue;

 - (id) initWithNotificationCenter:(id)a;
 - (void) _flushNotificationQueue;
 - (void) enqueueNotification:(id)apostingStyle:(unsigned long long)bcoalesceMask:(unsigned long long)cforModes:(id)d;
 - (void) enqueueNotification:(id)apostingStyle:(unsigned long long)b;
 - (void) dequeueNotificationsMatching:(id)acoalesceMask:(unsigned long long)b;
 - (void) dealloc;
 - (id) init;


@end
