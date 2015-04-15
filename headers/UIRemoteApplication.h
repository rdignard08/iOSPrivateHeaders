
@interface UIRemoteApplication : NSObject {

    @"NSString" _machServiceName;
    I _port;
}

 - (id) initWithBundleIdentifier:(id)a;
 - (void) dealloc;
 - (void) updatePort;
 - (void) hideTopMostMiniAlert;
 - (void) showTopMostMiniAlertWithSynchronizationPort:(I)a;
 - (void) statusBarWillChangeOrientation:(q)aduration:(f)b;
 - (void) simpleRemoteActionDidOccur:(q)a;
 - (void) sheetWithRemoteViewIdentifierDidDismiss:(id)a;
 - (void) remoteNotificationRegistrationSucceededWithDeviceToken:(id)a;
 - (void) remoteNotificationRegistrationFailedWithErrorDomain:(id)acode:(q)blocalizedDescription:(id)c;
 - (void) remoteNotificationMessageDelivered;
 - (void) didRegisterUserNotificationSettings:(id)a;
 - (void) localNotificationMessageDelivered:(id)a;
 - (void) localNotificationDidSnooze:(id)a;
 - (void) backgroundContinuationEnabledDidChange:(BOOL)a;
 - (void) wakeTimerFired;
 - (void) didTakeScreenshot;
 - (id) initWithMachServiceName:(id)a;


@end
