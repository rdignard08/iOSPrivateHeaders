
@protocol NSCopying, NSMutableCopying;
@interface FBSSceneSettings : NSObject <NSCopying, NSMutableCopying> {

    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _frame;
    {CGPoint="x"d"y"d} _contentOffset;
    double _level;
    long long _interfaceOrientation;
    BOOL _backgrounded;
    BOOL _occluded;
    BOOL _occludedHasBeenCalculated;
    NSSet _ignoreOcclusionReasons;
    NSArray _occlusions;
    BSSettings _otherSettings;
    BSSettings _transientLocalSettings;
}
@property (nonatomic, assign, readonly) NSNumber* frame;
@property (nonatomic, assign, readonly) NSNumber* level;
@property (nonatomic, assign, readonly) NSNumber* interfaceOrientation;
@property (nonatomic, assign, readonly, getter=isBackgrounded) NSNumber* backgrounded;
@property (nonatomic, copy, readonly) NSArray* occlusions;
@property (nonatomic, assign, readonly) NSNumber* contentOffset;
 + (id) settings;
 + (BOOL) _isMutable;

 - (BOOL) isUISubclass;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (double) level;
 - (id) _descriptionOfSettingsWithMultilinePrefix:(id)a;
 - (id) otherSettings;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) frame;
 - (long long) interfaceOrientation;
 - (BOOL) isBackgrounded;
 - (id) occlusions;
 - (id) initWithSettings:(id)a;
 - ({CGPoint=dd}) contentOffset;
 - (id) transientLocalSettings;
 - (id) ignoreOcclusionReasons;
 - (BOOL) isOccluded;
 - (BOOL) isIgnoringOcclusions;
 - (id) keyDescriptionForSetting:(unsigned long long)a;
 - (id) valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;


@end
