
@protocol _UISettingsGroupObserver, _UISettingsKeyPathObserver, NSCopying;
@interface _UISettings : NSObject <_UISettingsGroupObserver, _UISettingsKeyPathObserver, NSCopying> {

    NSHashTable _internal_keyObservers;
    NSHashTable _internal_keyPathObservers;
    NSSet _internal_childKeys;
    NSSet _internal_leafKeys;
    NSDictionary _internal_keyClasses;
    NSDictionary _internal_keyStructs;
    BOOL _internal_isObservingPropertiesAndChildren;
}
 + (id) settingsFromArchiveDictionary:(id)a;
 + (id) settingsFromArchiveFile:(id)aerror:(^@)b;

 - (void) observeValueForKeyPath:(id)aofObject:(id)bchange:(id)ccontext:(^v)d;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) initWithDefaultValues;
 - (id) archiveDictionary;
 - (void) setValuesFromModel:(id)a;
 - (id) _startInit;
 - (void) _continueInitBySettingDefaultValues;
 - (void) _completeInitByApplyingArchiveDictionary:(id)a;
 - (void) _introspectKeys;
 - (void) setDefaultValues;
 - (void) _setAssociatedName:(id)a;
 - (void) applyArchiveValue:(id)aforKey:(id)b;
 - (id) _initWithArchiveDictionary:(id)a;
 - (void) _stopObservingPropertiesAndChildren;
 - (id) _allKeys;
 - (id) archiveValueForKey:(id)a;
 - (void) _addInternalEntriesToArchiveDictionary:(id)a;
 - (void) _startOrStopObservingPropertiesAndChildren;
 - (id) _colorForKey:(id)afromDictionary:(id)b;
 - (id) _fontForKey:(id)afromDictionary:(id)b;
 - (id) _structValueForKey:(id)aofType:(id)bfromDictionary:(id)c;
 - (id) _dictionaryForColorKey:(id)a;
 - (id) _dictionaryForFontKey:(id)a;
 - (id) _dictionaryForStructKey:(id)aofType:(id)b;
 - (void) _startObservingChild:(id)a;
 - (void) _stopObservingChild:(id)a;
 - (BOOL) _hasObservers;
 - (void) _startObservingPropertiesAndChildren;
 - (id) _associatedNameOrNilIfDefault;
 - (id) _associatedName;
 - (void) addKeyPathObserver:(id)a;
 - (void) removeKeyPathObserver:(id)a;
 - (void) _sendKeyChanged:(id)a;
 - (void) _sendKeyPathChanged:(id)a;
 - (id) _keyForChild:(id)a;
 - (void) _handleChildGroupChange:(id)a;
 - (void) settings:(id)achangedValueForKeyPath:(id)b;
 - (void) settingsGroup:(id)adidInsertSettings:(id)batIndex:(unsigned long long)c;
 - (void) settingsGroup:(id)adidRemoveSettings:(id)batIndex:(unsigned long long)c;
 - (void) settingsGroup:(id)adidMoveSettings:(id)bfromIndex:(unsigned long long)ctoIndex:(unsigned long long)d;
 - (BOOL) archiveToFile:(id)aerror:(^@)b;
 - (void) restoreDefaultValues;
 - (void) restoreFromArchiveDictionary:(id)a;
 - (BOOL) restoreFromArchiveFile:(id)aerror:(^@)b;
 - (void) addKeyObserver:(id)a;
 - (void) removeKeyObserver:(id)a;
 - (BOOL) _isObservingPropertiesAndChildren;
 - (id) init;


@end
