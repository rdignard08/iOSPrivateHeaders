
@protocol NSCopying, NSMutableCopying;
@interface FBSSceneClientSettings : NSObject <NSCopying, NSMutableCopying> {

    double _preferredLevel;
    long long _preferredInterfaceOrientation;
    NSSet _occlusions;
    BSSettings _otherSettings;
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
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) init;
 - (id) _descriptionOfSettingsWithMultilinePrefix:(id)a;
 - (id) otherSettings;
 - (id) occlusions;
 - (id) initWithSettings:(id)a;
 - (double) preferredLevel;
 - (long long) preferredInterfaceOrientation;
 - (id) keyDescriptionForSetting:(unsigned long long)a;
 - (id) valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;


@end
