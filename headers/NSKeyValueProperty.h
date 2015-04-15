
@protocol NSCopying;
@interface NSKeyValueProperty : NSObject <NSCopying> {

    NSKeyValueContainerClass* _containerClass;
    NSString* _keyPath;
}

 - (id) keyPath;
 - (id) dependentValueKeyOrKeysIsASet:(^B)a ;
 - (void) object:(id)a didAddObservance:(id)b recurse:(BOOL)c ;
 - (Class) isaForAutonotifying;
 - (void) object:(id)a didRemoveObservance:(id)b recurse:(BOOL)c ;
 - (id) restOfKeyPathIfContainedByValueForKeyPath:(id)a ;
 - (BOOL) matchesWithoutOperatorComponentsKeyPath:(id)a ;
 - (void) object:(id)a withObservance:(id)b didChangeValueForKeyOrKeys:(id)c recurse:(BOOL)d forwardingValues:({?=@@})e ;
 - (id) keyPathIfAffectedByValueForMemberOfKeys:(id)a ;
 - (id) keyPathIfAffectedByValueForKey:(id)a exactMatch:(^B)b ;
 - (BOOL) object:(id)a withObservance:(id)b willChangeValueForKeyOrKeys:(id)c recurse:(BOOL)d forwardingValues:(^{?=@@})e ;
 - (id) _initWithContainerClass:(id)a keyPath:(id)b propertiesBeingInitialized:(^{__CFSet=})c ;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;


@end
