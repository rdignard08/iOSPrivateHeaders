
@interface UIApplicationSceneClientSettingsDiffInspector : FBSSceneClientSettingsDiffInspector {

}

 - (void) _observeOtherSetting:(Q)awithBlock:(@?)b;
 - (void) observeStatusBarStyleWithBlock:(@?)a;
 - (void) observeStatusBarHiddenWithBlock:(@?)a;
 - (void) observeDefaultStatusBarStyleWithBlock:(@?)a;
 - (void) observeDefaultStatusBarHiddenWithBlock:(@?)a;
 - (void) observeDefaultPNGNameWithBlock:(@?)a;
 - (void) observeDefaultPNGExpirationTimeWithBlock:(@?)a;
 - (void) observeCompatibilityModeWithBlock:(@?)a;
 - (void) observeIdleTimerDisabledWithBlock:(@?)a;
 - (void) observeOrientationEnabledWithBlock:(@?)a;
 - (void) observeProximityDetectionModesWithBlock:(@?)a;
 - (void) observeControlCenterRevealModeWithBlock:(@?)a;
 - (void) observeNotificationCenterRevealModeWithBlock:(@?)a;


@end
