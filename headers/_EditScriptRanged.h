
@interface _EditScriptRanged : _EditScript {

    q _options;
    @"_EditScriptRangedAtom" _currentScriptAtom;
}
 + (id) editScriptFromString:(id)atoString:(id)bchunkSize:(q)corderAtomsAscending:(BOOL)doperationPrecedence:(q)eoptions:(q)f;
 + (id) editScriptFromString:(id)atoString:(id)b;
 + (id) editScriptForSmallestSingleEditFromString:(id)atoString:(id)b;

 - (void) dealloc;
 - (void) finalizeCurrentScriptAtom;
 - (void) initializeCurrentScriptAtom;
 - (void) addToCurrentScriptAtomEditOperation:(q)aeditIndex:(Q)bnewText:(id)cindexInArrayB:(Q)d;
 - (id) initWithOperationPrecedence:(q)adataClass:(Class)bchunkSize:(q)cstringA:(id)dstringB:(id)eorderAtomsAscending:(BOOL)foptions:(q)g;
 - (void) removeAnyOverlapBetweenIndexOfFirstDifference:(^q)aandReverseIndexOfLastDifference:(^q)bshouldShortenFirstDifference:(BOOL)c;
 - (void) computeSmallestSingleEdit;
 - (id) stringA;
 - (id) stringB;
 - (id) applyToString:(id)a;


@end
