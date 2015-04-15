
@protocol UIApplicationSceneClientSettings;
@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings> {

}

 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (BOOL) isUISubclass;
 - (BOOL) statusBarHidden;
 - (q) statusBarStyle;
 - (Q) proximityDetectionModes;
 - (q) compatibilityMode;
 - (id) defaultPNGName;
 - (q) defaultStatusBarStyle;
 - (BOOL) defaultStatusBarHidden;
 - (d) defaultPNGExpirationTime;
 - (BOOL) idleTimerDisabled;
 - (BOOL) orientationEnabled;
 - (q) controlCenterRevealMode;
 - (q) notificationCenterRevealMode;
 - (id) keyDescriptionForSetting:(Q)a;
 - (id) valueDescriptionForFlag:(q)aobject:(id)bofSetting:(Q)c;


@end
