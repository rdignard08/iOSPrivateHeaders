
@interface WebCookieStorageObjCAdapter : NSObject {

    ^? m_cookieChangeCallback;
}

 - (void) notifyCookiesChangedOnMainThread;
 - (void) cookiesChangedNotificationHandler:(id)a ;
 - (void) startListeningForCookieChangeNotificationsWithCallback:(^?)a ;
 - (void) stopListeningForCookieChangeNotifications;


@end
