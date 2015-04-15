
@protocol NSCopying, NSMutableCopying, BSXPCCoding;
@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding> {

    @"<BSSettingDescriptionProvider>" _descriptionProvider;
    @"NSMapTable" _settingToFlagMap;
    @"NSMapTable" _settingToObjectMap;
}
@property (nonatomic, weak, readwrite) NSNumber* descriptionProvider;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (q) flagForSetting:(Q)a;
 - (void) enumerateFlagsWithBlock:(@?)a;
 - (id) objectForSetting:(Q)a;
 - (void) enumerateObjectsWithBlock:(@?)a;
 - (void) _enumerateSettingsForFlagsWithBlock:(@?)a;
 - (void) _enumerateSettingsForObjectsWithBlock:(@?)a;
 - (id) allSettings;
 - (void) setDescriptionProvider:(id)a;
 - (id) basicDescriptionWithPrefix:(id)a;
 - (void) _setFlag:(q)aforSetting:(Q)b;
 - (void) _setObject:(id)aforSetting:(Q)b;
 - (void) _enumerateSettingsInMap:(id)awithBlock:(@?)b;
 - (id) _keyDescriptionForSetting:(Q)a;
 - (id) _valueDescriptionForFlag:(q)aobject:(id)bofSetting:(Q)c;
 - (id) _newMapTable;
 - (void) _applyToSettings:(id)a;
 - (id) descriptionProvider;
 - (BOOL) boolForSetting:(Q)a;


@end
