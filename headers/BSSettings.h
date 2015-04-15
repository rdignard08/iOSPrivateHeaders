
@protocol NSCopying, NSMutableCopying, BSXPCCoding;
@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding> {

    <BSSettingDescriptionProvider> _descriptionProvider;
    NSMapTable _settingToFlagMap;
    NSMapTable _settingToObjectMap;
}
@property (nonatomic, weak, readwrite) NSNumber* descriptionProvider;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (BOOL) isEmpty;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (long long) flagForSetting:(unsigned long long)a;
 - (void) enumerateFlagsWithBlock:(@?)a;
 - (id) objectForSetting:(unsigned long long)a;
 - (void) enumerateObjectsWithBlock:(@?)a;
 - (void) _enumerateSettingsForFlagsWithBlock:(@?)a;
 - (void) _enumerateSettingsForObjectsWithBlock:(@?)a;
 - (id) allSettings;
 - (void) setDescriptionProvider:(id)a;
 - (id) basicDescriptionWithPrefix:(id)a;
 - (void) _setFlag:(long long)aforSetting:(unsigned long long)b;
 - (void) _setObject:(id)aforSetting:(unsigned long long)b;
 - (void) _enumerateSettingsInMap:(id)awithBlock:(@?)b;
 - (id) _keyDescriptionForSetting:(unsigned long long)a;
 - (id) _valueDescriptionForFlag:(long long)aobject:(id)bofSetting:(unsigned long long)c;
 - (id) _newMapTable;
 - (void) _applyToSettings:(id)a;
 - (id) descriptionProvider;
 - (BOOL) boolForSetting:(unsigned long long)a;


@end
