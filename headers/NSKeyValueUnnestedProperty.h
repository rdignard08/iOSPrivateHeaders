
@interface NSKeyValueUnnestedProperty : NSKeyValueProperty {

    @"NSArray" _affectingProperties;
    BOOL _cachedIsaForAutonotifyingIsValid;
    Class _cachedIsaForAutonotifying;
}

 - (void) object:(id)adidAddObservance:(id)brecurse:(BOOL)c;
 - (Class) isaForAutonotifying;
 - (void) object:(id)adidRemoveObservance:(id)brecurse:(BOOL)c;
 - (BOOL) matchesWithoutOperatorComponentsKeyPath:(id)a;
 - (void) object:(id)awithObservance:(id)bdidChangeValueForKeyOrKeys:(id)crecurse:(BOOL)dforwardingValues:({?=@@})e;
 - (id) keyPathIfAffectedByValueForMemberOfKeys:(id)a;
 - (id) keyPathIfAffectedByValueForKey:(id)aexactMatch:(^B)b;
 - (BOOL) object:(id)awithObservance:(id)bwillChangeValueForKeyOrKeys:(id)crecurse:(BOOL)dforwardingValues:(^{?=@@})e;
 - (Class) _isaForAutonotifying;
 - (id) _keyPathIfAffectedByValueForKey:(id)aexactMatch:(^B)b;
 - (id) _keyPathIfAffectedByValueForMemberOfKeys:(id)a;
 - (void) _givenPropertiesBeingInitialized:(^{__CFSet=})agetAffectingProperties:(id)b;
 - (void) _addDependentValueKey:(id)a;
 - (id) _initWithContainerClass:(id)akey:(id)bpropertiesBeingInitialized:(^{__CFSet=})c;
 - (id) description;
 - (void) dealloc;


@end
