
@protocol NSFastEnumeration;
@interface _UISettingsGroup : _UISettings <NSFastEnumeration> {

    NSMutableArray* _internal_group;
    NSHashTable* _internal_groupObservers;
}

 - (id) valueForUndefinedKey:(id)a ;
 - (void) dealloc;
 - (unsigned long long) count;
 - (unsigned long long) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})a objects:(^@)b count:(unsigned long long)c ;
 - (id) archiveDictionary;
 - (void) setValuesFromModel:(id)a ;
 - (id) _startInit;
 - (void) _continueInitBySettingDefaultValues;
 - (void) _completeInitByApplyingArchiveDictionary:(id)a ;
 - (void) _stopObservingPropertiesAndChildren;
 - (void) _addInternalEntriesToArchiveDictionary:(id)a ;
 - (BOOL) _hasObservers;
 - (void) _startObservingPropertiesAndChildren;
 - (void) addGroupObserver:(id)a ;
 - (void) removeGroupObserver:(id)a ;
 - (void) settings:(id)a changedValueForKeyPath:(id)b ;
 - (unsigned long long) indexOfSettings:(id)a ;
 - (void) insertSettings:(id)a atIndex:(unsigned long long)b ;
 - (void) _sendInsert:(id)a atIndex:(unsigned long long)b ;
 - (void) removeSettingsAtIndex:(unsigned long long)a ;
 - (void) _sendRemove:(id)a atIndex:(unsigned long long)b ;
 - (void) moveSettingsAtIndex:(unsigned long long)a toIndex:(unsigned long long)b ;
 - (void) _sendMove:(id)a fromIndex:(unsigned long long)b toIndex:(unsigned long long)c ;
 - (id) settingsAtIndex:(unsigned long long)a ;
 - (BOOL) containsSettings:(id)a ;
 - (void) addSettings:(id)a ;
 - (void) removeSettings:(id)a ;
 - (void) moveSettings:(id)a toIndex:(unsigned long long)b ;
 - (void) enumerateSettingsUsingBlock:(@?)a ;


@end
