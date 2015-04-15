
@protocol _UISettingsGroupObserver, _UISettingsKeyPathObserver, NSCopying;
@interface _UISettings : NSObject <_UISettingsGroupObserver, _UISettingsKeyPathObserver, NSCopying> {

    NSHashTable* _internal_keyObservers;
    NSHashTable* _internal_keyPathObservers;
    NSSet* _internal_childKeys;
    NSSet* _internal_leafKeys;
    NSDictionary* _internal_keyClasses;
    NSDictionary* _internal_keyStructs;
    BOOL _internal_isObservingPropertiesAndChildren;
}
 + (id) settingsFromArchiveDictionary:(id)a;
 + (id) settingsFromArchiveFile:(id)aerror:(^@)b;

 - (void) observeValueForKeyPath:(id)a ofObject:(id)b change:(id)c context:(^v)d ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (id) initWithDefaultValues;
 - (id) archiveDictionary;
 - (void) setValuesFromModel:(id)a ;
 - (id) _startInit;
 - (void) _continueInitBySettingDefaultValues;
 - (void) _completeInitByApplyingArchiveDictionary:(id)a ;
 - (void) _introspectKeys;
 - (void) setDefaultValues;
 - (void) _setAssociatedName:(id)a ;
 - (void) applyArchiveValue:(id)a forKey:(id)b ;
 - (id) _initWithArchiveDictionary:(id)a ;
 - (void) _stopObservingPropertiesAndChildren;
 - (id) _allKeys;
 - (id) archiveValueForKey:(id)a ;
 - (void) _addInternalEntriesToArchiveDictionary:(id)a ;
 - (void) _startOrStopObservingPropertiesAndChildren;
 - (id) _colorForKey:(id)a fromDictionary:(id)b ;
 - (id) _fontForKey:(id)a fromDictionary:(id)b ;
 - (id) _structValueForKey:(id)a ofType:(id)b fromDictionary:(id)c ;
 - (id) _dictionaryForColorKey:(id)a ;
 - (id) _dictionaryForFontKey:(id)a ;
 - (id) _dictionaryForStructKey:(id)a ofType:(id)b ;
 - (void) _startObservingChild:(id)a ;
 - (void) _stopObservingChild:(id)a ;
 - (BOOL) _hasObservers;
 - (void) _startObservingPropertiesAndChildren;
 - (id) _associatedNameOrNilIfDefault;
 - (id) _associatedName;
 - (void) addKeyPathObserver:(id)a ;
 - (void) removeKeyPathObserver:(id)a ;
 - (void) _sendKeyChanged:(id)a ;
 - (void) _sendKeyPathChanged:(id)a ;
 - (id) _keyForChild:(id)a ;
 - (void) _handleChildGroupChange:(id)a ;
 - (void) settings:(id)a changedValueForKeyPath:(id)b ;
 - (void) settingsGroup:(id)a didInsertSettings:(id)b atIndex:(unsigned long long)c ;
 - (void) settingsGroup:(id)a didRemoveSettings:(id)b atIndex:(unsigned long long)c ;
 - (void) settingsGroup:(id)a didMoveSettings:(id)b fromIndex:(unsigned long long)c toIndex:(unsigned long long)d ;
 - (BOOL) archiveToFile:(id)a error:(^@)b ;
 - (void) restoreDefaultValues;
 - (void) restoreFromArchiveDictionary:(id)a ;
 - (BOOL) restoreFromArchiveFile:(id)a error:(^@)b ;
 - (void) addKeyObserver:(id)a ;
 - (void) removeKeyObserver:(id)a ;
 - (BOOL) _isObservingPropertiesAndChildren;
 - (id) init;


@end
