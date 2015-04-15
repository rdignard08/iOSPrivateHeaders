
@interface _EditScriptRanged : _EditScript {

    long long _options;
    _EditScriptRangedAtom* _currentScriptAtom;
}
 + (id) editScriptFromString:(id)atoString:(id)bchunkSize:(long long)corderAtomsAscending:(BOOL)doperationPrecedence:(long long)eoptions:(long long)f;
 + (id) editScriptFromString:(id)atoString:(id)b;
 + (id) editScriptForSmallestSingleEditFromString:(id)atoString:(id)b;

 - (void) dealloc;
 - (void) finalizeCurrentScriptAtom;
 - (void) initializeCurrentScriptAtom;
 - (void) addToCurrentScriptAtomEditOperation:(long long)a editIndex:(unsigned long long)b newText:(id)c indexInArrayB:(unsigned long long)d ;
 - (id) initWithOperationPrecedence:(long long)a dataClass:(Class)b chunkSize:(long long)c stringA:(id)d stringB:(id)e orderAtomsAscending:(BOOL)f options:(long long)g ;
 - (void) removeAnyOverlapBetweenIndexOfFirstDifference:(^q)a andReverseIndexOfLastDifference:(^q)b shouldShortenFirstDifference:(BOOL)c ;
 - (void) computeSmallestSingleEdit;
 - (id) stringA;
 - (id) stringB;
 - (id) applyToString:(id)a ;


@end
