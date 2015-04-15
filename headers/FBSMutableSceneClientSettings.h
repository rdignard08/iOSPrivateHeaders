
@interface FBSMutableSceneClientSettings : FBSSceneClientSettings {

}
 + (BOOL) _isMutable;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) otherSettings;
 - (void) setOcclusions:(id)a;
 - (void) setPreferredLevel:(d)a;
 - (void) setPreferredInterfaceOrientation:(q)a;


@end
