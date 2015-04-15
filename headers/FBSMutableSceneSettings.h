
@interface FBSMutableSceneSettings : FBSSceneSettings {

}
 + (BOOL) _isMutable;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) mutableCopyWithZone:(^{_NSZone=})a ;
 - (void) setContentOffset:({CGPoint=dd})a ;
 - (id) otherSettings;
 - (void) setBackgrounded:(BOOL)a ;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a ;
 - (void) setLevel:(double)a ;
 - (void) setInterfaceOrientation:(long long)a ;
 - (void) setOcclusions:(id)a ;
 - (id) transientLocalSettings;
 - (id) ignoreOcclusionReasons;


@end
