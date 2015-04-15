
@protocol NSCopying, NSMutableCopying;
@interface FBSSceneSettings : NSObject <NSCopying, NSMutableCopying> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frame;
    {CGPoint="x"d"y"d} _contentOffset;
    d _level;
    q _interfaceOrientation;
    BOOL _backgrounded;
    BOOL _occluded;
    BOOL _occludedHasBeenCalculated;
    @"NSSet" _ignoreOcclusionReasons;
    @"NSArray" _occlusions;
    @"BSSettings" _otherSettings;
    @"BSSettings" _transientLocalSettings;
}
@property (nonatomic, assign, readonly) NSNumber* frame;
@property (nonatomic, assign, readonly) NSNumber* level;
@property (nonatomic, assign, readonly) NSNumber* interfaceOrientation;
@property (nonatomic, assign, readonly, isBackgrounded) NSNumber* backgrounded;
@property (nonatomic, copy, readonly) NSArray* occlusions;
@property (nonatomic, assign, readonly) NSNumber* contentOffset;
 + (id) settings;
 + (BOOL) _isMutable;

 - (BOOL) isUISubclass;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (d) level;
 - (id) _descriptionOfSettingsWithMultilinePrefix:(id)a;
 - (id) otherSettings;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (q) interfaceOrientation;
 - (BOOL) isBackgrounded;
 - (id) occlusions;
 - (id) initWithSettings:(id)a;
 - ({CGPoint=dd}) contentOffset;
 - (id) transientLocalSettings;
 - (id) ignoreOcclusionReasons;
 - (BOOL) isOccluded;
 - (BOOL) isIgnoringOcclusions;
 - (id) keyDescriptionForSetting:(Q)a;
 - (id) valueDescriptionForFlag:(q)aobject:(id)bofSetting:(Q)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;


@end
