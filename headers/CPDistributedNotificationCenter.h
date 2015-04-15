
@interface CPDistributedNotificationCenter : NSObject {

    @"NSString" _centerName;
    @"NSLock" _lock;
    ^{__CFRunLoopSource=} _receiveNotificationSource;
    BOOL _isServer;
    ^{__CFDictionary=} _sendPorts;
    Q _startCount;
    @"NSObject<OS_dispatch_queue>" _queue;
}
 + (id) _serverPortToNotificationCenterMapDispatchQueue;
 + (^{__CFDictionary=}) _serverPortToNotificationCenterMap;
 + (void) setCenter:(id)aforServerPort:(I)b;
 + (id) centerForServerPort:(I)a;
 + (id) centerNamed:(id)a;

 - (void) dealloc;
 - (id) name;
 - (id) _initWithServerName:(id)a;
 - (void) _checkOutAndRemoveSource;
 - (void) _checkIn;
 - (void) startDeliveringNotificationsToRunLoop:(^{__CFRunLoop=})a;
 - (void) _createReceiveSourceForRunLoop:(^{__CFRunLoop=})a;
 - (void) deliverNotification:(id)auserInfo:(id)b;
 - (void) runServer;
 - (BOOL) postNotificationName:(id)auserInfo:(id)btoBundleIdentifier:(id)c;
 - (void) _receivedCheckIn:(I)aauditToken:(^{?=[8I]})b;
 - (void) _notificationServerWasRestarted;
 - (void) startDeliveringNotificationsToMainThread;
 - (void) stopDeliveringNotifications;
 - (void) runServerOnCurrentThread;
 - (void) postNotificationName:(id)a;
 - (void) postNotificationName:(id)auserInfo:(id)b;


@end
