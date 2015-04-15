
@protocol UIApplicationSceneSettings;
@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings> {

}

 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (BOOL) isUISubclass;
 - (BOOL) underLock;
 - (int) statusBarStyleOverridesToSuppress;
 - (id) keyDescriptionForSetting:(unsigned long long)a ;
 - (id) valueDescriptionForFlag:(long long)a object:(id)b ofSetting:(unsigned long long)c ;


@end
