
@interface FBSMutableSceneClientSettings : FBSSceneClientSettings {

}
 + (BOOL) _isMutable;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (id) otherSettings;
 - (void) setOcclusions:(id)a ;
 - (void) setPreferredLevel:(double)a ;
 - (void) setPreferredInterfaceOrientation:(long long)a ;


@end
