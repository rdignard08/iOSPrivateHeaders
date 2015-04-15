
@interface NSKeyValueComputedProperty : NSKeyValueProperty {

    NSString* _operationName;
    NSString* _operationArgumentKeyPath;
    NSKeyValueProperty* _operationArgumentProperty;
}

 - (void) object:(id)a didAddObservance:(id)b recurse:(BOOL)c ;
 - (void) object:(id)a didRemoveObservance:(id)b recurse:(BOOL)c ;
 - (BOOL) matchesWithoutOperatorComponentsKeyPath:(id)a ;
 - (void) object:(id)a withObservance:(id)b didChangeValueForKeyOrKeys:(id)c recurse:(BOOL)d forwardingValues:({?=@@})e ;
 - (BOOL) object:(id)a withObservance:(id)b willChangeValueForKeyOrKeys:(id)c recurse:(BOOL)d forwardingValues:(^{?=@@})e ;
 - (Class) _isaForAutonotifying;
 - (id) _keyPathIfAffectedByValueForKey:(id)a exactMatch:(^B)b ;
 - (id) _keyPathIfAffectedByValueForMemberOfKeys:(id)a ;
 - (id) _initWithContainerClass:(id)a keyPath:(id)b propertiesBeingInitialized:(^{__CFSet=})c ;
 - (void) _givenPropertiesBeingInitialized:(^{__CFSet=})a getAffectingProperties:(id)b ;
 - (void) _addDependentValueKey:(id)a ;
 - (id) description;
 - (void) dealloc;


@end
