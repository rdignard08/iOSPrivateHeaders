
@interface _EditScriptIndexed : _EditScript {

    _EditScriptIndexedAtom* _currentScriptAtom;
}
 + (id) editScriptFromArray:(id)atoArray:(id)borderAtomsAscending:(BOOL)coperationPrecedence:(long long)d;
 + (id) editScriptFromArray:(id)atoArray:(id)b;

 - (void) dealloc;
 - (id) initWithOperationPrecedence:(long long)a dataClass:(Class)b fromArray:(id)c toArray:(id)d orderAtomsAscending:(BOOL)e ;
 - (void) finalizeCurrentScriptAtom;
 - (id) applyToArray:(id)a ;
 - (void) initializeCurrentScriptAtom;
 - (void) addToCurrentScriptAtomEditOperation:(long long)a editIndex:(unsigned long long)b newText:(id)c indexInArrayB:(unsigned long long)d ;


@end
