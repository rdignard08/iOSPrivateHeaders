
@protocol NSCopying;
@interface NSKeyValueProperty : NSObject <NSCopying> {

    @"NSKeyValueContainerClass" _containerClass;
    @"NSString" _keyPath;
}

 - (id) keyPath;
 - (id) dependentValueKeyOrKeysIsASet:(^B)a;
 - (void) object:(id)adidAddObservance:(id)brecurse:(BOOL)c;
 - (Class) isaForAutonotifying;
 - (void) object:(id)adidRemoveObservance:(id)brecurse:(BOOL)c;
 - (id) restOfKeyPathIfContainedByValueForKeyPath:(id)a;
 - (BOOL) matchesWithoutOperatorComponentsKeyPath:(id)a;
 - (void) object:(id)awithObservance:(id)bdidChangeValueForKeyOrKeys:(id)crecurse:(BOOL)dforwardingValues:({?=@@})e;
 - (id) keyPathIfAffectedByValueForMemberOfKeys:(id)a;
 - (id) keyPathIfAffectedByValueForKey:(id)aexactMatch:(^B)b;
 - (BOOL) object:(id)awithObservance:(id)bwillChangeValueForKeyOrKeys:(id)crecurse:(BOOL)dforwardingValues:(^{?=@@})e;
 - (id) _initWithContainerClass:(id)akeyPath:(id)bpropertiesBeingInitialized:(^{__CFSet=})c;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;


@end
