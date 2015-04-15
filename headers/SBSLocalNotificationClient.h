
@interface SBSLocalNotificationClient : NSObject {

}
 + (id) currentUserNotificationSettings;
 + (void) registerUserNotificationSettings:(id)a;
 + (void) scheduleLocalNotification:(id)a;
 + (void) cancelLocalNotification:(id)a;
 + (void) cancelAllLocalNotifications;
 + (void) setScheduledLocalNotifications:(id)a;
 + (id) scheduledLocalNotifications;
 + (id) currentUserNotificationSettingsForBundleID:(id)a;
 + (void) _scheduleLocalNotifications:(id)acancel:(BOOL)breplace:(BOOL)coptionalBundleIdentifier:(id)dwaitUntilDone:(BOOL)e;
 + (void) _scheduleLocalNotifications:(id)acancel:(BOOL)breplace:(BOOL)coptionalBundleIdentifier:(id)d;
 + (id) scheduledLocalNotificationsForBundleIdentifier:(id)a;
 + (void) registerUserNotificationSettings:(id)abundleIdentifier:(id)b;
 + (void) migrateUserNotificationSettingsForBundleIdentifierPushSettingsPairs:(id)a;
 + (id) getPendingNotification;
 + (void) scheduleLocalNotification:(id)abundleIdentifier:(id)b;
 + (void) scheduleLocalNotification:(id)abundleIdentifier:(id)bwaitUntilDone:(BOOL)c;
 + (void) cancelLocalNotification:(id)abundleIdentifier:(id)b;
 + (void) cancelLocalNotification:(id)abundleIdentifier:(id)bwaitUntilDone:(BOOL)c;
 + (void) cancelAllLocalNotificationsForBundleIdentifier:(id)a;
 + (void) setScheduledLocalNotifications:(id)abundleIdentifier:(id)b;
 + (I) currentAllowedNotificationTypesForBundleID:(id)a;



@end
