
@protocol UIApplicationSceneClientSettings;
@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings> {

}

 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (BOOL) isUISubclass;
 - (BOOL) statusBarHidden;
 - (long long) statusBarStyle;
 - (unsigned long long) proximityDetectionModes;
 - (long long) compatibilityMode;
 - (id) defaultPNGName;
 - (long long) defaultStatusBarStyle;
 - (BOOL) defaultStatusBarHidden;
 - (double) defaultPNGExpirationTime;
 - (BOOL) idleTimerDisabled;
 - (BOOL) orientationEnabled;
 - (long long) controlCenterRevealMode;
 - (long long) notificationCenterRevealMode;
 - (id) keyDescriptionForSetting:(unsigned long long)a;
 - (id) valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;


@end
