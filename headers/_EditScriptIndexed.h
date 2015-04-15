
@interface _EditScriptIndexed : _EditScript {

    @"_EditScriptIndexedAtom" _currentScriptAtom;
}
 + (id) editScriptFromArray:(id)atoArray:(id)borderAtomsAscending:(BOOL)coperationPrecedence:(q)d;
 + (id) editScriptFromArray:(id)atoArray:(id)b;

 - (void) dealloc;
 - (id) initWithOperationPrecedence:(q)adataClass:(Class)bfromArray:(id)ctoArray:(id)dorderAtomsAscending:(BOOL)e;
 - (void) finalizeCurrentScriptAtom;
 - (id) applyToArray:(id)a;
 - (void) initializeCurrentScriptAtom;
 - (void) addToCurrentScriptAtomEditOperation:(q)aeditIndex:(Q)bnewText:(id)cindexInArrayB:(Q)d;


@end
