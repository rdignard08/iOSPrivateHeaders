
@interface _EditScriptRanged : _EditScript {

    long long _options;
    @"_EditScriptRangedAtom" _currentScriptAtom;
}
 + (id) editScriptFromString:(id)atoString:(id)bchunkSize:(long long)corderAtomsAscending:(BOOL)doperationPrecedence:(long long)eoptions:(long long)f;
 + (id) editScriptFromString:(id)atoString:(id)b;
 + (id) editScriptForSmallestSingleEditFromString:(id)atoString:(id)b;

 - (void) dealloc;
 - (void) finalizeCurrentScriptAtom;
 - (void) initializeCurrentScriptAtom;
 - (void) addToCurrentScriptAtomEditOperation:(long long)aeditIndex:(unsigned long long)bnewText:(id)cindexInArrayB:(unsigned long long)d;
 - (id) initWithOperationPrecedence:(long long)adataClass:(Class)bchunkSize:(long long)cstringA:(id)dstringB:(id)eorderAtomsAscending:(BOOL)foptions:(long long)g;
 - (void) removeAnyOverlapBetweenIndexOfFirstDifference:(^q)aandReverseIndexOfLastDifference:(^q)bshouldShortenFirstDifference:(BOOL)c;
 - (void) computeSmallestSingleEdit;
 - (id) stringA;
 - (id) stringB;
 - (id) applyToString:(id)a;


@end
