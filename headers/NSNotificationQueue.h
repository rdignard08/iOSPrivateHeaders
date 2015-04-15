
@interface NSNotificationQueue : NSObject {

    id _notificationCenter;
    id _asapQueue;
    id _asapObs;
    id _idleQueue;
    id _idleObs;
}
 + (id) defaultQueue;

 - (id) initWithNotificationCenter:(id)a ;
 - (void) _flushNotificationQueue;
 - (void) enqueueNotification:(id)a postingStyle:(unsigned long long)b coalesceMask:(unsigned long long)c forModes:(id)d ;
 - (void) enqueueNotification:(id)a postingStyle:(unsigned long long)b ;
 - (void) dequeueNotificationsMatching:(id)a coalesceMask:(unsigned long long)b ;
 - (void) dealloc;
 - (id) init;


@end
