
@protocol UIApplicationSceneSettings;
@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings> {

}

 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (BOOL) isUISubclass;
 - (BOOL) underLock;
 - (int) statusBarStyleOverridesToSuppress;
 - (id) keyDescriptionForSetting:(unsigned long long)a;
 - (id) valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;


@end
