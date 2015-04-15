
@interface NSMutableDictionary : NSDictionary {

}
 + (id) _dictionaryWithContentsOfDictionaries:(id)a;
 + (id) dictionaryWithSharedKeySet:(id)a;
 + (id) dictionaryWithCapacity:(Q)a;

 - (void) mergeWithDictionary:(id)a;
 - (void) addEntriesFromDictionaryWithRecursion:(id)a;
 - (id) MCValidateAndRemoveArrayOfClass:(Class)awithKey:(id)bisRequired:(BOOL)coutError:(^@)d;
 - (id) MCValidateAndRemoveObjectOfClass:(Class)awithKey:(id)bisRequired:(BOOL)coutError:(^@)d;
 - (id) MCValidateAndRemoveNonZeroLengthStringWithKey:(id)aisRequired:(BOOL)boutError:(^@)c;
 - (id) MCMutableDictionaryContainingValidatedKeysAndClasses:(id)aremoveKeys:(BOOL)boutError:(^@)c;
 - (void) MCFixUpRestrictionsDictionaryForMDMReporting;
 - (void) MCDeepCopyEntriesFromDictionary:(id)a;
 - (void) MCDeepCopyMissingEntriesFromDictionary:(id)a;
 - (void) MCSetObjectIfNotNil:(id)aforKey:(id)b;
 - (void) MCSetBoolRestriction:(id)avalue:(BOOL)b;
 - (void) MCDeleteBoolRestriction:(id)a;
 - (void) MCSetValueRestriction:(id)avalue:(id)b;
 - (void) MCSetIntersectionRestriction:(id)avalues:(id)b;
 - (void) MCSetUnionRestriction:(id)avalues:(id)b;
 - (void) setObject:(id)aforKeyedSubscript:(id)b;
 - (void) _webkit_setInt:(i)aforKey:(id)b;
 - (void) _webkit_setFloat:(f)aforKey:(id)b;
 - (void) _webkit_setBool:(BOOL)aforKey:(id)b;
 - (void) _webkit_setLongLong:(q)aforKey:(id)b;
 - (void) _webkit_setUnsignedLongLong:(Q)aforKey:(id)b;
 - (void) _webkit_setUnsignedInt:(I)aforKey:(id)b;
 - (void) _web_setObjectIfNotNil:(id)aforKey:(id)b;
 - (void) sbs_setSafeObject:(id)aforKey:(id)b;
 - (id) bs_takeObjectForKey:(id)a;
 - (void) bs_setSafeObject:(id)aforKey:(id)b;
 - (void) _web_setInt:(i)aforKey:(id)b;
 - (void) _web_setBool:(BOOL)aforKey:(id)b;
 - (void) _web_setObject:(id)aforUncopiedKey:(id)b;
 - (void) setValue:(id)aforKey:(id)b;
 - (Class) classForCoder;
 - (id) initWithContentsOfFile:(id)a;
 - (id) initWithContentsOfURL:(id)a;
 - (void) setDictionary:(id)a;
 - (void) removeAllObjects;
 - (void) invert;
 - (void) __addObject:(id)aforKey:(id)b;
 - (void) replaceObject:(id)aforKey:(id)b;
 - (void) __setObject:(id)aforKey:(id)b;
 - (void) removeObjectForKey:(id)a;
 - (id) initWithCapacity:(Q)a;
 - (void) _mutate;
 - (id) initWithObjects:(r^@)aforKeys:(r^@)bcount:(Q)c;
 - (void) setObject:(id)aforKey:(id)b;
 - (void) addObject:(id)aforKey:(id)b;
 - (void) removeEntriesWithOptions:(Q)apassingTest:(@?)b;
 - (void) addObjects:(r^@)aforKeys:(r^@)bcount:(Q)c;
 - (void) addObjects:(id)aforKeys:(id)b;
 - (void) removeEntriesInDictionary:(id)a;
 - (void) removeEntriesPassingTest:(@?)a;
 - (void) removeKeysForObject:(id)a;
 - (void) replaceObjects:(r^@)aforKeys:(r^@)bcount:(Q)c;
 - (void) replaceObjects:(id)aforKeys:(id)b;
 - (void) setEntriesFromDictionary:(id)a;
 - (void) setObjects:(r^@)aforKeys:(r^@)bcount:(Q)c;
 - (void) setObjects:(id)aforKeys:(id)b;
 - (void) removeObjectsForKeys:(id)a;
 - (void) addEntriesFromDictionary:(id)a;
 - (void) setObject:(id)aforKeyedSubscript:(id)b;


@end
