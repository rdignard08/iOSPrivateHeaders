
@interface JSVirtualMachine : NSObject {

    ^{OpaqueJSContextGroup=} m_group;
    NSMapTable* m_contextCache;
    NSMapTable* m_externalObjectGraph;
    NSMapTable* m_externalRememberedSet;
}
 + (id) virtualMachineWithContextGroupRef:(^{OpaqueJSContextGroup=})a;

 - (void) dealloc;
 - (id) init;
 - (void) addContext:(id)a forGlobalContextRef:(^{OpaqueJSContext=})b ;
 - (id) contextForGlobalContextRef:(^{OpaqueJSContext=})a ;
 - (void) addManagedReference:(id)a withOwner:(id)b ;
 - (void) removeManagedReference:(id)a withOwner:(id)b ;
 - (id) initWithContextGroupRef:(^{OpaqueJSContextGroup=})a ;
 - (BOOL) isOldExternalObject:(id)a ;
 - (void) addExternalRememberedObject:(id)a ;
 - (id) externalObjectGraph;
 - (id) externalRememberedSet;


@end
