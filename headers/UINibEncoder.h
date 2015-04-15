
@interface UINibEncoder : NSCoder {

    ^{__CFDictionary=} objectsToObjectIDs;
    ^{__CFDictionary=} objectIDsToObjects;
    ^{__CFArray=} values;
    ^{__CFSet=} encodedObjects;
    NSMutableData* data;
    ^{__CFDictionary=} replacements;
    unsigned int nextObjectID;
    {?="currentObjectID"I"nextAnonymousKey"I} recursiveState;
    NSMutableSet* objectsUniquedByValue;
    ^{__CFSet=} objectsReplacedWithNil;
    id delegate;
}
 + (BOOL) archiveRootObject:(id)atoFile:(id)b;
 + (id) archivedDataWithRootObject:(id)a;

 - (void) encodeArrayOfObjCType:(r*)a count:(unsigned long long)b at:(r^v)c ;
 - (id) initForWritingWithMutableData:(id)a ;
 - (void) encodeRootObject:(id)a ;
 - (long long) versionForClassName:(id)a ;
 - (void) encodeValuesOfObjCTypes:(r*)a ;
 - (void) encodeBytes:(r^v)a length:(unsigned long long)b ;
 - (void) encodeBycopyObject:(id)a ;
 - (void) encodeInt:(int)a forKey:(id)b ;
 - (void) encodeByrefObject:(id)a ;
 - (void) encodeConditionalObject:(id)a forKey:(id)b ;
 - (void) finishEncoding;
 - (void) serializeObject:(id)a ;
 - (void) dealloc;
 - (BOOL) allowsKeyedCoding;
 - (void) encodeInteger:(long long)a forKey:(id)b ;
 - (void) encodeInt64:(long long)a forKey:(id)b ;
 - (void) encodeObject:(id)a forKey:(id)b ;
 - (void) encodeBool:(BOOL)a forKey:(id)b ;
 - (void) setDelegate:(id)a ;
 - (void) encodeBytes:(r*)a length:(unsigned long long)b forKey:(id)c ;
 - (void) encodeInt32:(int)a forKey:(id)b ;
 - (unsigned int) systemVersion;
 - (void) encodeCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})a forKey:(id)b ;
 - (void) encodeCGAffineTransform:({CGAffineTransform=dddddd})a forKey:(id)b ;
 - (void) encodeUIEdgeInsets:({UIEdgeInsets=dddd})a forKey:(id)b ;
 - (id) nextGenericKey;
 - (id) assignObjectIDForObject:(id)a ;
 - (id) objectIDForObject:(id)a ;
 - (Class) encodedClassForObject:(id)a ;
 - (id) encodedClassNameForClass:(Class)a ;
 - (BOOL) object:(id)a encodesWithCoderFromClass:(Class)b ;
 - (BOOL) object:(id)a encodesAsMemberAndWithCoderOfClass:(Class)b ;
 - (BOOL) shouldUniqueObjectByValue:(id)a ;
 - (void) serializeArray:(id)a ;
 - (void) serializeDictionary:(id)a ;
 - (void) serializeSet:(id)a ;
 - (id) replacementObjectForObject:(id)a forKey:(id)b ;
 - (void) appendValue:(id)a ;
 - (void) encodeArrayOfDoubles:(^d)a count:(long long)b forKey:(id)c ;
 - (void) encodeArrayOfCGFloats:(^d)a count:(long long)b forKey:(id)c ;
 - (BOOL) previouslyCodedObject:(id)a ;
 - (id) encodedClassNameForObject:(id)a ;
 - (void) encodeArrayOfFloats:(^f)a count:(long long)b forKey:(id)c ;
 - (void) encodeConditionalObject:(id)a ;
 - (void) encodeValueOfObjCType:(r*)a at:(r^v)b ;
 - (void) encodeObject:(id)a ;
 - (id) delegate;
 - (void) encodeDouble:(double)a forKey:(id)b ;
 - (void) encodeCGPoint:({CGPoint=dd})a forKey:(id)b ;
 - (void) encodeCGSize:({CGSize=dd})a forKey:(id)b ;
 - (void) encodeFloat:(float)a forKey:(id)b ;


@end
