
@protocol NSFastEnumeration;
@interface _UISettingsGroup : _UISettings <NSFastEnumeration> {

    @"NSMutableArray" _internal_group;
    @"NSHashTable" _internal_groupObservers;
}

 - (id) valueForUndefinedKey:(id)a;
 - (void) dealloc;
 - (Q) count;
 - (Q) countByEnumeratingWithState:(^{?=Q^@^Q[5Q]})aobjects:(^@)bcount:(Q)c;
 - (id) archiveDictionary;
 - (void) setValuesFromModel:(id)a;
 - (id) _startInit;
 - (void) _continueInitBySettingDefaultValues;
 - (void) _completeInitByApplyingArchiveDictionary:(id)a;
 - (void) _stopObservingPropertiesAndChildren;
 - (void) _addInternalEntriesToArchiveDictionary:(id)a;
 - (BOOL) _hasObservers;
 - (void) _startObservingPropertiesAndChildren;
 - (void) addGroupObserver:(id)a;
 - (void) removeGroupObserver:(id)a;
 - (void) settings:(id)achangedValueForKeyPath:(id)b;
 - (Q) indexOfSettings:(id)a;
 - (void) insertSettings:(id)aatIndex:(Q)b;
 - (void) _sendInsert:(id)aatIndex:(Q)b;
 - (void) removeSettingsAtIndex:(Q)a;
 - (void) _sendRemove:(id)aatIndex:(Q)b;
 - (void) moveSettingsAtIndex:(Q)atoIndex:(Q)b;
 - (void) _sendMove:(id)afromIndex:(Q)btoIndex:(Q)c;
 - (id) settingsAtIndex:(Q)a;
 - (BOOL) containsSettings:(id)a;
 - (void) addSettings:(id)a;
 - (void) removeSettings:(id)a;
 - (void) moveSettings:(id)atoIndex:(Q)b;
 - (void) enumerateSettingsUsingBlock:(@?)a;


@end
