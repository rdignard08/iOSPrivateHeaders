
@interface SBSRemoteNotificationClient : NSObject {

}
 + (void) registerForRemoteNotifications;
 + (BOOL) isRegisteredForRemoteNotifications;
 + (void) unregisterForRemoteNotifications;
 + (unsigned char) legacyRegisteredRemoteNotificationTypes;
 + (void) registerForRemoteNotificationsWithLegacyTypes:(unsigned char)a;
 + (id) getPendingNotificationUserInfo;
 + (id) getNotificationUserInfoForToken:(int)a;
 + (void) getSupportedBundleIdentifiers:(^@)aenabledBundleIdentifiers:(^@)b;
 + (void) setAllowed:(BOOL)aforBundleIdentifier:(id)b;
 + (unsigned int) _remoteNotificationServerPort;



@end
