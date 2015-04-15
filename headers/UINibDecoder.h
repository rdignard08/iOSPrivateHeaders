
@interface UINibDecoder : NSCoder {

    Class arrayClass;
    Class setClass;
    Class dictionaryClass;
    ^# classes;
    ^@ missingClasses;
    ^{UINibDecoderObjectEntry=II} objects;
    ^{UINibDecoderValue=II} values;
    char* valueTypes;
    ^v valueData;
    unsigned long long valueDataSize;
    {UINibDecoderHeader="type"[10C]"formatVersion"I"coderVersion"I"objects"{UINibArchiveTableInfo="count"I"offset"I}"keys"{UINibArchiveTableInfo="count"I"offset"I}"values"{UINibArchiveTableInfo="count"I"offset"I}"classes"{UINibArchiveTableInfo="count"I"offset"I}} header;
    ^@ objectsByObjectID;
    ^I longObjectClassIDs;
    char* shortObjectClassIDs;
    ^I keyMasks;
    long long inlinedValueKey;
    {UINibDecoderRecursiveState="objectID"q"nextGenericKey"q"nextValueSearchIndex"I"replaced"B} recursiveState;
    UINibStringIDTable* keyIDTable;
    id delegate;
    {UIKeyToKeyIDCache="previousKey"[64@"NSString"]"previousKeyID"[64^v]"previousKeyExists"[64B]"hashHits"q"hashHotMisses"q"hashColdMisses"q} keyIDCache;
    {UIKeyAndScopeToValueCache="previousScope"I"previousKey"I"previousValue"^{UINibDecoderValue}} valueCache;
    long long lookupRounds;
    long long maxPossibleLookupRounds;
    long long failedByKeyMask;
    long long savedByKeyMask;
}
 + (id) unarchiveObjectWithFile:(id)a;
 + (id) unarchiveObjectWithData:(id)a;

 - (void) decodeArrayOfObjCType:(r*)a count:(unsigned long long)b at:(^v)c ;
 - (void) replaceObject:(id)a withObject:(id)b ;
 - (long long) versionForClassName:(id)a ;
 - (id) initForReadingWithData:(id)a ;
 - (void) decodeValuesOfObjCTypes:(r*)a ;
 - (^v) decodeBytesWithReturnedLength:(^Q)a ;
 - (id) decodeDataObject;
 - (int) decodeIntForKey:(id)a ;
 - (float) decodeFloatForKey:(id)a ;
 - (void) finishDecoding;
 - (void) dealloc;
 - (BOOL) allowsKeyedCoding;
 - (void) setDelegate:(id)a ;
 - (r*) decodeBytesForKey:(id)a returnedLength:(^Q)b ;
 - (id) decodeObjectForKey:(id)a ;
 - (long long) decodeInt64ForKey:(id)a ;
 - (int) decodeInt32ForKey:(id)a ;
 - (unsigned int) systemVersion;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) decodeCGRectForKey:(id)a ;
 - ({CGAffineTransform=dddddd}) decodeCGAffineTransformForKey:(id)a ;
 - ({UIEdgeInsets=dddd}) decodeUIEdgeInsetsForKey:(id)a ;
 - (id) initForReadingWithData:(id)a error:(^@)b ;
 - (BOOL) validateAndIndexData:(id)a error:(^@)b ;
 - (BOOL) validateAndIndexClasses:(r^v)a length:(unsigned long long)b ;
 - (BOOL) validateAndIndexKeys:(r^v)a length:(unsigned long long)b ;
 - (BOOL) validateAndIndexValues:(r^v)a length:(unsigned long long)b ;
 - (BOOL) validateAndIndexObjects:(r^v)a length:(unsigned long long)b ;
 - (BOOL) decodeArrayOfCGFloats:(^d)a count:(long long)b forKey:(id)c ;
 - (id) nextGenericKey;
 - (BOOL) decodeArrayOfFloats:(^f)a count:(long long)b forKey:(id)c ;
 - (BOOL) decodeArrayOfDoubles:(^d)a count:(long long)b forKey:(id)c ;
 - (id) decodeNXObject;
 - (id) decodePropertyList;
 - (void) decodeValueOfObjCType:(r*)a at:(^v)b ;
 - (id) decodeObject;
 - (id) delegate;
 - (long long) decodeIntegerForKey:(id)a ;
 - (double) decodeDoubleForKey:(id)a ;
 - (BOOL) decodeBoolForKey:(id)a ;
 - (BOOL) containsValueForKey:(id)a ;
 - ({CGPoint=dd}) decodeCGPointForKey:(id)a ;
 - ({CGSize=dd}) decodeCGSizeForKey:(id)a ;


@end
