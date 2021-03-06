
@interface UIRemoteApplication : NSObject {

    NSString* _machServiceName;
    unsigned int _port;
}

 - (id) initWithBundleIdentifier:(id)a ;
 - (void) dealloc;
 - (void) updatePort;
 - (void) hideTopMostMiniAlert;
 - (void) showTopMostMiniAlertWithSynchronizationPort:(unsigned int)a ;
 - (void) statusBarWillChangeOrientation:(long long)a duration:(float)b ;
 - (void) simpleRemoteActionDidOccur:(long long)a ;
 - (void) sheetWithRemoteViewIdentifierDidDismiss:(id)a ;
 - (void) remoteNotificationRegistrationSucceededWithDeviceToken:(id)a ;
 - (void) remoteNotificationRegistrationFailedWithErrorDomain:(id)a code:(long long)b localizedDescription:(id)c ;
 - (void) remoteNotificationMessageDelivered;
 - (void) didRegisterUserNotificationSettings:(id)a ;
 - (void) localNotificationMessageDelivered:(id)a ;
 - (void) localNotificationDidSnooze:(id)a ;
 - (void) backgroundContinuationEnabledDidChange:(BOOL)a ;
 - (void) wakeTimerFired;
 - (void) didTakeScreenshot;
 - (id) initWithMachServiceName:(id)a ;


@end
