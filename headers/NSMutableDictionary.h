
@interface NSMutableDictionary : NSDictionary {

}
 + (id) _dictionaryWithContentsOfDictionaries:(id)a;
 + (id) dictionaryWithSharedKeySet:(id)a;
 + (id) dictionaryWithCapacity:(unsigned long long)a;

 - (void) mergeWithDictionary:(id)a ;
 - (void) addEntriesFromDictionaryWithRecursion:(id)a ;
 - (id) MCValidateAndRemoveArrayOfClass:(Class)a withKey:(id)b isRequired:(BOOL)c outError:(^@)d ;
 - (id) MCValidateAndRemoveObjectOfClass:(Class)a withKey:(id)b isRequired:(BOOL)c outError:(^@)d ;
 - (id) MCValidateAndRemoveNonZeroLengthStringWithKey:(id)a isRequired:(BOOL)b outError:(^@)c ;
 - (id) MCMutableDictionaryContainingValidatedKeysAndClasses:(id)a removeKeys:(BOOL)b outError:(^@)c ;
 - (void) MCFixUpRestrictionsDictionaryForMDMReporting;
 - (void) MCDeepCopyEntriesFromDictionary:(id)a ;
 - (void) MCDeepCopyMissingEntriesFromDictionary:(id)a ;
 - (void) MCSetObjectIfNotNil:(id)a forKey:(id)b ;
 - (void) MCSetBoolRestriction:(id)a value:(BOOL)b ;
 - (void) MCDeleteBoolRestriction:(id)a ;
 - (void) MCSetValueRestriction:(id)a value:(id)b ;
 - (void) MCSetIntersectionRestriction:(id)a values:(id)b ;
 - (void) MCSetUnionRestriction:(id)a values:(id)b ;
 - (void) setObject:(id)a forKeyedSubscript:(id)b ;
 - (void) _webkit_setInt:(int)a forKey:(id)b ;
 - (void) _webkit_setFloat:(float)a forKey:(id)b ;
 - (void) _webkit_setBool:(BOOL)a forKey:(id)b ;
 - (void) _webkit_setLongLong:(long long)a forKey:(id)b ;
 - (void) _webkit_setUnsignedLongLong:(unsigned long long)a forKey:(id)b ;
 - (void) _webkit_setUnsignedInt:(unsigned int)a forKey:(id)b ;
 - (void) _web_setObjectIfNotNil:(id)a forKey:(id)b ;
 - (void) sbs_setSafeObject:(id)a forKey:(id)b ;
 - (id) bs_takeObjectForKey:(id)a ;
 - (void) bs_setSafeObject:(id)a forKey:(id)b ;
 - (void) _web_setInt:(int)a forKey:(id)b ;
 - (void) _web_setBool:(BOOL)a forKey:(id)b ;
 - (void) _web_setObject:(id)a forUncopiedKey:(id)b ;
 - (void) setValue:(id)a forKey:(id)b ;
 - (Class) classForCoder;
 - (id) initWithContentsOfFile:(id)a ;
 - (id) initWithContentsOfURL:(id)a ;
 - (void) setDictionary:(id)a ;
 - (void) removeAllObjects;
 - (void) invert;
 - (void) __addObject:(id)a forKey:(id)b ;
 - (void) replaceObject:(id)a forKey:(id)b ;
 - (void) __setObject:(id)a forKey:(id)b ;
 - (void) removeObjectForKey:(id)a ;
 - (id) initWithCapacity:(unsigned long long)a ;
 - (void) _mutate;
 - (id) initWithObjects:(r^@)a forKeys:(r^@)b count:(unsigned long long)c ;
 - (void) setObject:(id)a forKey:(id)b ;
 - (void) addObject:(id)a forKey:(id)b ;
 - (void) removeEntriesWithOptions:(unsigned long long)a passingTest:(@?)b ;
 - (void) addObjects:(r^@)a forKeys:(r^@)b count:(unsigned long long)c ;
 - (void) addObjects:(id)a forKeys:(id)b ;
 - (void) removeEntriesInDictionary:(id)a ;
 - (void) removeEntriesPassingTest:(@?)a ;
 - (void) removeKeysForObject:(id)a ;
 - (void) replaceObjects:(r^@)a forKeys:(r^@)b count:(unsigned long long)c ;
 - (void) replaceObjects:(id)a forKeys:(id)b ;
 - (void) setEntriesFromDictionary:(id)a ;
 - (void) setObjects:(r^@)a forKeys:(r^@)b count:(unsigned long long)c ;
 - (void) setObjects:(id)a forKeys:(id)b ;
 - (void) removeObjectsForKeys:(id)a ;
 - (void) addEntriesFromDictionary:(id)a ;
 - (void) setObject:(id)a forKeyedSubscript:(id)b ;


@end
