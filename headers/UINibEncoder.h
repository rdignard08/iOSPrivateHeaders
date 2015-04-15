
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

 - (void) encodeArrayOfObjCType:(r*)acount:(unsigned long long)bat:(r^v)c;
 - (id) initForWritingWithMutableData:(id)a;
 - (void) encodeRootObject:(id)a;
 - (long long) versionForClassName:(id)a;
 - (void) encodeValuesOfObjCTypes:(r*)a;
 - (void) encodeBytes:(r^v)alength:(unsigned long long)b;
 - (void) encodeBycopyObject:(id)a;
 - (void) encodeInt:(int)aforKey:(id)b;
 - (void) encodeByrefObject:(id)a;
 - (void) encodeConditionalObject:(id)aforKey:(id)b;
 - (void) finishEncoding;
 - (void) serializeObject:(id)a;
 - (void) dealloc;
 - (BOOL) allowsKeyedCoding;
 - (void) encodeInteger:(long long)aforKey:(id)b;
 - (void) encodeInt64:(long long)aforKey:(id)b;
 - (void) encodeObject:(id)aforKey:(id)b;
 - (void) encodeBool:(BOOL)aforKey:(id)b;
 - (void) setDelegate:(id)a;
 - (void) encodeBytes:(r*)alength:(unsigned long long)bforKey:(id)c;
 - (void) encodeInt32:(int)aforKey:(id)b;
 - (unsigned int) systemVersion;
 - (void) encodeCGRect:({CGRect={CGPoint=dd}{CGSize=dd}})aforKey:(id)b;
 - (void) encodeCGAffineTransform:({CGAffineTransform=dddddd})aforKey:(id)b;
 - (void) encodeUIEdgeInsets:({UIEdgeInsets=dddd})aforKey:(id)b;
 - (id) nextGenericKey;
 - (id) assignObjectIDForObject:(id)a;
 - (id) objectIDForObject:(id)a;
 - (Class) encodedClassForObject:(id)a;
 - (id) encodedClassNameForClass:(Class)a;
 - (BOOL) object:(id)aencodesWithCoderFromClass:(Class)b;
 - (BOOL) object:(id)aencodesAsMemberAndWithCoderOfClass:(Class)b;
 - (BOOL) shouldUniqueObjectByValue:(id)a;
 - (void) serializeArray:(id)a;
 - (void) serializeDictionary:(id)a;
 - (void) serializeSet:(id)a;
 - (id) replacementObjectForObject:(id)aforKey:(id)b;
 - (void) appendValue:(id)a;
 - (void) encodeArrayOfDoubles:(^d)acount:(long long)bforKey:(id)c;
 - (void) encodeArrayOfCGFloats:(^d)acount:(long long)bforKey:(id)c;
 - (BOOL) previouslyCodedObject:(id)a;
 - (id) encodedClassNameForObject:(id)a;
 - (void) encodeArrayOfFloats:(^f)acount:(long long)bforKey:(id)c;
 - (void) encodeConditionalObject:(id)a;
 - (void) encodeValueOfObjCType:(r*)aat:(r^v)b;
 - (void) encodeObject:(id)a;
 - (id) delegate;
 - (void) encodeDouble:(double)aforKey:(id)b;
 - (void) encodeCGPoint:({CGPoint=dd})aforKey:(id)b;
 - (void) encodeCGSize:({CGSize=dd})aforKey:(id)b;
 - (void) encodeFloat:(float)aforKey:(id)b;


@end
