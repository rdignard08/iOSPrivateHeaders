
@interface NSKeyValueUnnestedProperty : NSKeyValueProperty {

    NSArray* _affectingProperties;
    BOOL _cachedIsaForAutonotifyingIsValid;
    Class _cachedIsaForAutonotifying;
}

 - (void) object:(id)a didAddObservance:(id)b recurse:(BOOL)c ;
 - (Class) isaForAutonotifying;
 - (void) object:(id)a didRemoveObservance:(id)b recurse:(BOOL)c ;
 - (BOOL) matchesWithoutOperatorComponentsKeyPath:(id)a ;
 - (void) object:(id)a withObservance:(id)b didChangeValueForKeyOrKeys:(id)c recurse:(BOOL)d forwardingValues:({?=@@})e ;
 - (id) keyPathIfAffectedByValueForMemberOfKeys:(id)a ;
 - (id) keyPathIfAffectedByValueForKey:(id)a exactMatch:(^B)b ;
 - (BOOL) object:(id)a withObservance:(id)b willChangeValueForKeyOrKeys:(id)c recurse:(BOOL)d forwardingValues:(^{?=@@})e ;
 - (Class) _isaForAutonotifying;
 - (id) _keyPathIfAffectedByValueForKey:(id)a exactMatch:(^B)b ;
 - (id) _keyPathIfAffectedByValueForMemberOfKeys:(id)a ;
 - (void) _givenPropertiesBeingInitialized:(^{__CFSet=})a getAffectingProperties:(id)b ;
 - (void) _addDependentValueKey:(id)a ;
 - (id) _initWithContainerClass:(id)a key:(id)b propertiesBeingInitialized:(^{__CFSet=})c ;
 - (id) description;
 - (void) dealloc;


@end
