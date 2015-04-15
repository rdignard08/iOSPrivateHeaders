
@protocol NSCopying, NSMutableCopying;
@interface FBSSceneClientSettings : NSObject <NSCopying, NSMutableCopying> {

    d _preferredLevel;
    q _preferredInterfaceOrientation;
    @"NSSet" _occlusions;
    @"BSSettings" _otherSettings;
}
@property (nonatomic, assign, readonly) NSNumber* preferredLevel;
@property (nonatomic, assign, readonly) NSNumber* preferredInterfaceOrientation;
@property (nonatomic, copy, readonly) NSSet* occlusions;
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
 - (id) _descriptionOfSettingsWithMultilinePrefix:(id)a;
 - (id) otherSettings;
 - (id) occlusions;
 - (id) initWithSettings:(id)a;
 - (d) preferredLevel;
 - (q) preferredInterfaceOrientation;
 - (id) keyDescriptionForSetting:(Q)a;
 - (id) valueDescriptionForFlag:(q)aobject:(id)bofSetting:(Q)c;


@end
