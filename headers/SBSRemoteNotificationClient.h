
@interface SBSRemoteNotificationClient : NSObject {

}
 + (void) registerForRemoteNotifications;
 + (BOOL) isRegisteredForRemoteNotifications;
 + (void) unregisterForRemoteNotifications;
 + (C) legacyRegisteredRemoteNotificationTypes;
 + (void) registerForRemoteNotificationsWithLegacyTypes:(C)a;
 + (id) getPendingNotificationUserInfo;
 + (id) getNotificationUserInfoForToken:(i)a;
 + (void) getSupportedBundleIdentifiers:(^@)aenabledBundleIdentifiers:(^@)b;
 + (void) setAllowed:(BOOL)aforBundleIdentifier:(id)b;
 + (I) _remoteNotificationServerPort;



@end
