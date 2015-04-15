
@interface FBSMutableSceneSettings : FBSSceneSettings {

}
 + (BOOL) _isMutable;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) setContentOffset:({CGPoint=dd})a;
 - (id) otherSettings;
 - (void) setBackgrounded:(BOOL)a;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setLevel:(d)a;
 - (void) setInterfaceOrientation:(q)a;
 - (void) setOcclusions:(id)a;
 - (id) transientLocalSettings;
 - (id) ignoreOcclusionReasons;


@end
