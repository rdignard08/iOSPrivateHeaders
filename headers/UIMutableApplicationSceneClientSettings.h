
@protocol UIApplicationSceneClientSettings;
@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings> {

}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) setIdleTimerDisabled:(BOOL)a;
 - (BOOL) isUISubclass;
 - (BOOL) statusBarHidden;
 - (q) statusBarStyle;
 - (void) setStatusBarStyle:(q)a;
 - (void) setStatusBarHidden:(BOOL)a;
 - (void) setDefaultStatusBarStyle:(q)a;
 - (void) setDefaultStatusBarHidden:(BOOL)a;
 - (void) setDefaultPNGName:(id)a;
 - (void) setDefaultPNGExpirationTime:(d)a;
 - (void) setCompatibilityMode:(q)a;
 - (Q) proximityDetectionModes;
 - (void) setProximityDetectionModes:(Q)a;
 - (q) compatibilityMode;
 - (id) defaultPNGName;
 - (void) setOrientationEnabled:(BOOL)a;
 - (q) defaultStatusBarStyle;
 - (BOOL) defaultStatusBarHidden;
 - (d) defaultPNGExpirationTime;
 - (BOOL) idleTimerDisabled;
 - (BOOL) orientationEnabled;
 - (q) controlCenterRevealMode;
 - (q) notificationCenterRevealMode;
 - (void) setControlCenterRevealMode:(q)a;
 - (void) setNotificationCenterRevealMode:(q)a;
 - (id) keyDescriptionForSetting:(Q)a;
 - (id) valueDescriptionForFlag:(q)aobject:(id)bofSetting:(Q)c;


@end
