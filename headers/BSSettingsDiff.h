
@protocol NSCopying, BSXPCCoding;
@interface BSSettingsDiff : NSObject <NSCopying, BSXPCCoding> {

    <BSSettingDescriptionProvider> _descriptionProvider;
    BSMutableSettings _changes;
    NSHashTable _flagRemovals;
    NSHashTable _objectRemovals;
}
 + (id) diffFromSettings:(id)atoSettings:(id)b;
 + (id) _newHashTableWithInitialCapacity:(unsigned long long)a;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) init;
 - (void) applyToSettings:(id)a;
 - (void) inspectChangesWithBlock:(@?)a;
 - (void) encodeWithXPCDictionary:(id)a;
 - (id) initWithXPCDictionary:(id)a;
 - (id) _initWithChanges:(id)aflagRemovals:(id)bobjectRemovals:(id)c;
 - (void) _enumerateSettingsInTable:(id)awithBlock:(@?)b;
 - (id) allSettings;
 - (unsigned long long) _diffTypesForSetting:(unsigned long long)a;
 - (id) descriptionOfSettingsWithMultilinePrefix:(id)aproviderBlock:(@?)b;


@end
