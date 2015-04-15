
@protocol UIApplicationSceneClientSettings;
@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings> {

}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) setIdleTimerDisabled:(BOOL)a;
 - (BOOL) isUISubclass;
 - (BOOL) statusBarHidden;
 - (long long) statusBarStyle;
 - (void) setStatusBarStyle:(long long)a;
 - (void) setStatusBarHidden:(BOOL)a;
 - (void) setDefaultStatusBarStyle:(long long)a;
 - (void) setDefaultStatusBarHidden:(BOOL)a;
 - (void) setDefaultPNGName:(id)a;
 - (void) setDefaultPNGExpirationTime:(double)a;
 - (void) setCompatibilityMode:(long long)a;
 - (unsigned long long) proximityDetectionModes;
 - (void) setProximityDetectionModes:(unsigned long long)a;
 - (long long) compatibilityMode;
 - (id) defaultPNGName;
 - (void) setOrientationEnabled:(BOOL)a;
 - (long long) defaultStatusBarStyle;
 - (BOOL) defaultStatusBarHidden;
 - (double) defaultPNGExpirationTime;
 - (BOOL) idleTimerDisabled;
 - (BOOL) orientationEnabled;
 - (long long) controlCenterRevealMode;
 - (long long) notificationCenterRevealMode;
 - (void) setControlCenterRevealMode:(long long)a;
 - (void) setNotificationCenterRevealMode:(long long)a;
 - (id) keyDescriptionForSetting:(unsigned long long)a;
 - (id) valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;


@end
