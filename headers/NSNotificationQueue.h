
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
 - (void) enqueueNotification:(id)apostingStyle:(Q)bcoalesceMask:(Q)cforModes:(id)d;
 - (void) enqueueNotification:(id)apostingStyle:(Q)b;
 - (void) dequeueNotificationsMatching:(id)acoalesceMask:(Q)b;
 - (void) dealloc;
 - (id) init;


@end