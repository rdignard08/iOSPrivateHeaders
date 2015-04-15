
@protocol UIApplicationSceneSettings;
@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings> {

}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isUISubclass;
 - (BOOL) underLock;
 - (int) statusBarStyleOverridesToSuppress;
 - (void) setUnderLock:(BOOL)a;
 - (void) setStatusBarStyleOverridesToSuppress:(int)a;
 - (id) keyDescriptionForSetting:(unsigned long long)a;
 - (id) valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;


@end
