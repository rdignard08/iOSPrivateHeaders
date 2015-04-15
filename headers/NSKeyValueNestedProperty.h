
@interface NSKeyValueNestedProperty : NSKeyValueProperty {

    NSString _relationshipKey;
    NSString _keyPathFromRelatedObject;
    NSKeyValueUnnestedProperty _relationshipProperty;
    NSString _keyPathWithoutOperatorComponents;
    BOOL _isAllowedToResultInForwarding;
    id _dependentValueKeyOrKeys;
    BOOL _dependentValueKeyOrKeysIsASet;
}

 - (id) dependentValueKeyOrKeysIsASet:(^B)a;
 - (void) object:(id)adidAddObservance:(id)brecurse:(BOOL)c;
 - (void) object:(id)adidRemoveObservance:(id)brecurse:(BOOL)c;
 - (BOOL) matchesWithoutOperatorComponentsKeyPath:(id)a;
 - (void) object:(id)awithObservance:(id)bdidChangeValueForKeyOrKeys:(id)crecurse:(BOOL)dforwardingValues:({?=@@})e;
 - (BOOL) object:(id)awithObservance:(id)bwillChangeValueForKeyOrKeys:(id)crecurse:(BOOL)dforwardingValues:(^{?=@@})e;
 - (Class) _isaForAutonotifying;
 - (id) _keyPathIfAffectedByValueForKey:(id)aexactMatch:(^B)b;
 - (id) _keyPathIfAffectedByValueForMemberOfKeys:(id)a;
 - (void) _givenPropertiesBeingInitialized:(^{__CFSet=})agetAffectingProperties:(id)b;
 - (void) _addDependentValueKey:(id)a;
 - (id) _initWithContainerClass:(id)akeyPath:(id)bfirstDotIndex:(unsigned long long)cpropertiesBeingInitialized:(^{__CFSet=})d;
 - (id) description;
 - (void) dealloc;


@end
