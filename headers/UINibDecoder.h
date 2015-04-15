
@interface UINibDecoder : NSCoder {

    Class arrayClass;
    Class setClass;
    Class dictionaryClass;
    ^# classes;
    ^@ missingClasses;
    ^{UINibDecoderObjectEntry=II} objects;
    ^{UINibDecoderValue=II} values;
    * valueTypes;
    ^v valueData;
    Q valueDataSize;
    {UINibDecoderHeader="type"[10C]"formatVersion"I"coderVersion"I"objects"{UINibArchiveTableInfo="count"I"offset"I}"keys"{UINibArchiveTableInfo="count"I"offset"I}"values"{UINibArchiveTableInfo="count"I"offset"I}"classes"{UINibArchiveTableInfo="count"I"offset"I}} header;
    ^@ objectsByObjectID;
    ^I longObjectClassIDs;
    * shortObjectClassIDs;
    ^I keyMasks;
    q inlinedValueKey;
    {UINibDecoderRecursiveState="objectID"q"nextGenericKey"q"nextValueSearchIndex"I"replaced"B} recursiveState;
    @"UINibStringIDTable" keyIDTable;
    id delegate;
    {UIKeyToKeyIDCache="previousKey"[64@"NSString"]"previousKeyID"[64^v]"previousKeyExists"[64B]"hashHits"q"hashHotMisses"q"hashColdMisses"q} keyIDCache;
    {UIKeyAndScopeToValueCache="previousScope"I"previousKey"I"previousValue"^{UINibDecoderValue}} valueCache;
    q lookupRounds;
    q maxPossibleLookupRounds;
    q failedByKeyMask;
    q savedByKeyMask;
}
 + (id) unarchiveObjectWithFile:(id)a;
 + (id) unarchiveObjectWithData:(id)a;

 - (void) decodeArrayOfObjCType:(r*)acount:(Q)bat:(^v)c;
 - (void) replaceObject:(id)awithObject:(id)b;
 - (q) versionForClassName:(id)a;
 - (id) initForReadingWithData:(id)a;
 - (void) decodeValuesOfObjCTypes:(r*)a;
 - (^v) decodeBytesWithReturnedLength:(^Q)a;
 - (id) decodeDataObject;
 - (i) decodeIntForKey:(id)a;
 - (f) decodeFloatForKey:(id)a;
 - (void) finishDecoding;
 - (void) dealloc;
 - (BOOL) allowsKeyedCoding;
 - (void) setDelegate:(id)a;
 - (r*) decodeBytesForKey:(id)areturnedLength:(^Q)b;
 - (id) decodeObjectForKey:(id)a;
 - (q) decodeInt64ForKey:(id)a;
 - (i) decodeInt32ForKey:(id)a;
 - (I) systemVersion;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) decodeCGRectForKey:(id)a;
 - ({CGAffineTransform=dddddd}) decodeCGAffineTransformForKey:(id)a;
 - ({UIEdgeInsets=dddd}) decodeUIEdgeInsetsForKey:(id)a;
 - (id) initForReadingWithData:(id)aerror:(^@)b;
 - (BOOL) validateAndIndexData:(id)aerror:(^@)b;
 - (BOOL) validateAndIndexClasses:(r^v)alength:(Q)b;
 - (BOOL) validateAndIndexKeys:(r^v)alength:(Q)b;
 - (BOOL) validateAndIndexValues:(r^v)alength:(Q)b;
 - (BOOL) validateAndIndexObjects:(r^v)alength:(Q)b;
 - (BOOL) decodeArrayOfCGFloats:(^d)acount:(q)bforKey:(id)c;
 - (id) nextGenericKey;
 - (BOOL) decodeArrayOfFloats:(^f)acount:(q)bforKey:(id)c;
 - (BOOL) decodeArrayOfDoubles:(^d)acount:(q)bforKey:(id)c;
 - (id) decodeNXObject;
 - (id) decodePropertyList;
 - (void) decodeValueOfObjCType:(r*)aat:(^v)b;
 - (id) decodeObject;
 - (id) delegate;
 - (q) decodeIntegerForKey:(id)a;
 - (d) decodeDoubleForKey:(id)a;
 - (BOOL) decodeBoolForKey:(id)a;
 - (BOOL) containsValueForKey:(id)a;
 - ({CGPoint=dd}) decodeCGPointForKey:(id)a;
 - ({CGSize=dd}) decodeCGSizeForKey:(id)a;


@end
