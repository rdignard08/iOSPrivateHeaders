
@interface NSKeyValueNestedProperty : NSKeyValueProperty {

    NSString* _relationshipKey;
    NSString* _keyPathFromRelatedObject;
    NSKeyValueUnnestedProperty* _relationshipProperty;
    NSString* _keyPathWithoutOperatorComponents;
    BOOL _isAllowedToResultInForwarding;
    id _dependentValueKeyOrKeys;
    BOOL _dependentValueKeyOrKeysIsASet;
}

 - (id) dependentValueKeyOrKeysIsASet:(^B)a ;
 - (void) object:(id)a didAddObservance:(id)b recurse:(BOOL)c ;
 - (void) object:(id)a didRemoveObservance:(id)b recurse:(BOOL)c ;
 - (BOOL) matchesWithoutOperatorComponentsKeyPath:(id)a ;
 - (void) object:(id)a withObservance:(id)b didChangeValueForKeyOrKeys:(id)c recurse:(BOOL)d forwardingValues:({?=@@})e ;
 - (BOOL) object:(id)a withObservance:(id)b willChangeValueForKeyOrKeys:(id)c recurse:(BOOL)d forwardingValues:(^{?=@@})e ;
 - (Class) _isaForAutonotifying;
 - (id) _keyPathIfAffectedByValueForKey:(id)a exactMatch:(^B)b ;
 - (id) _keyPathIfAffectedByValueForMemberOfKeys:(id)a ;
 - (void) _givenPropertiesBeingInitialized:(^{__CFSet=})a getAffectingProperties:(id)b ;
 - (void) _addDependentValueKey:(id)a ;
 - (id) _initWithContainerClass:(id)a keyPath:(id)b firstDotIndex:(unsigned long long)c propertiesBeingInitialized:(^{__CFSet=})d ;
 - (id) description;
 - (void) dealloc;


@end
