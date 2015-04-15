
@protocol UIApplicationSceneSettings;
@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings> {

}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (BOOL) isUISubclass;
 - (BOOL) underLock;
 - (i) statusBarStyleOverridesToSuppress;
 - (void) setUnderLock:(BOOL)a;
 - (void) setStatusBarStyleOverridesToSuppress:(i)a;
 - (id) keyDescriptionForSetting:(Q)a;
 - (id) valueDescriptionForFlag:(q)aobject:(id)bofSetting:(Q)c;


@end
