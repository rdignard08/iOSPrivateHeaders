
@interface NSKeyValueComputedProperty : NSKeyValueProperty {

    @"NSString" _operationName;
    @"NSString" _operationArgumentKeyPath;
    @"NSKeyValueProperty" _operationArgumentProperty;
}

 - (void) object:(id)adidAddObservance:(id)brecurse:(BOOL)c;
 - (void) object:(id)adidRemoveObservance:(id)brecurse:(BOOL)c;
 - (BOOL) matchesWithoutOperatorComponentsKeyPath:(id)a;
 - (void) object:(id)awithObservance:(id)bdidChangeValueForKeyOrKeys:(id)crecurse:(BOOL)dforwardingValues:({?=@@})e;
 - (BOOL) object:(id)awithObservance:(id)bwillChangeValueForKeyOrKeys:(id)crecurse:(BOOL)dforwardingValues:(^{?=@@})e;
 - (Class) _isaForAutonotifying;
 - (id) _keyPathIfAffectedByValueForKey:(id)aexactMatch:(^B)b;
 - (id) _keyPathIfAffectedByValueForMemberOfKeys:(id)a;
 - (id) _initWithContainerClass:(id)akeyPath:(id)bpropertiesBeingInitialized:(^{__CFSet=})c;
 - (void) _givenPropertiesBeingInitialized:(^{__CFSet=})agetAffectingProperties:(id)b;
 - (void) _addDependentValueKey:(id)a;
 - (id) description;
 - (void) dealloc;


@end
