
@interface _EditScriptIndexed : _EditScript {

    _EditScriptIndexedAtom* _currentScriptAtom;
}
 + (id) editScriptFromArray:(id)atoArray:(id)borderAtomsAscending:(BOOL)coperationPrecedence:(long long)d;
 + (id) editScriptFromArray:(id)atoArray:(id)b;

 - (void) dealloc;
 - (id) initWithOperationPrecedence:(long long)adataClass:(Class)bfromArray:(id)ctoArray:(id)dorderAtomsAscending:(BOOL)e;
 - (void) finalizeCurrentScriptAtom;
 - (id) applyToArray:(id)a;
 - (void) initializeCurrentScriptAtom;
 - (void) addToCurrentScriptAtomEditOperation:(long long)aeditIndex:(unsigned long long)bnewText:(id)cindexInArrayB:(unsigned long long)d;


@end
