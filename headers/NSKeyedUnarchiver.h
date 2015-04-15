
@interface NSKeyedUnarchiver : NSCoder {

    id _delegate;
    unsigned int _flags;
    id _objRefMap;
    id _replacementMap;
    id _nameClassMap;
    id _tmpRefObjMap;
    id _refObjMap;
    int _genericKey;
    id _data;
    ^v _offsetData;
    id _containers;
    id _objects;
    r* _bytes;
    unsigned long long _len;
    id _helper;
    ^v _reserved0;
}
 + (id) unarchiveObjectWithFile:(id)a;
 + (void) setClass:(Class)aforClassName:(id)b;
 + (Class) classForClassName:(id)a;
 + (void) initialize;
 + (id) unarchiveObjectWithData:(id)a;

 - (void) decodeArrayOfObjCType:(r*)acount:(unsigned long long)bat:(^v)c;
 - (void) replaceObject:(id)awithObject:(id)b;
 - (long long) versionForClassName:(id)a;
 - (id) initForReadingWithData:(id)a;
 - (void) decodeValuesOfObjCTypes:(r*)a;
 - (^v) decodeBytesWithReturnedLength:(^Q)a;
 - (id) decodeDataObject;
 - (id) _decodeArrayOfObjectsForKey:(id)a;
 - (int) decodeIntForKey:(id)a;
 - (id) _decodePropertyListForKey:(id)a;
 - (float) decodeFloatForKey:(id)a;
 - (id) _blobForCurrentObject;
 - (void) setRequiresSecureCoding:(BOOL)a;
 - (void) setClass:(Class)aforClassName:(id)b;
 - (id) _initWithStream:(^{__CFReadStream=})adata:(id)btopDict:(^{__CFDictionary=})c;
 - (void) finishDecoding;
 - (void) _setAllowedClassNames:(id)a;
 - (void) _temporaryMapReplaceObject:(id)awithObject:(id)b;
 - (Class) classForClassName:(id)a;
 - (id) initWithStream:(id)a;
 - (id) _allowedClassNames;
 - (void) _replaceObject:(id)awithObject:(id)b;
 - (unsigned int) _currentUniqueIdentifier;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) allowsKeyedCoding;
 - (void) setDelegate:(id)a;
 - (r*) decodeBytesForKey:(id)areturnedLength:(^Q)b;
 - (id) decodeObjectForKey:(id)a;
 - (long long) decodeInt64ForKey:(id)a;
 - (int) decodeInt32ForKey:(id)a;
 - (unsigned int) systemVersion;
 - (id) init;
 - (void) decodeValueOfObjCType:(r*)aat:(^v)b;
 - (id) decodeObject;
 - (BOOL) requiresSecureCoding;
 - (id) delegate;
 - (double) decodeDoubleForKey:(id)a;
 - (BOOL) decodeBoolForKey:(id)a;
 - (BOOL) containsValueForKey:(id)a;
 - (id) decodeObjectOfClass:(Class)aforKey:(id)b;
 - (id) allowedClasses;
 - (id) decodeObjectOfClasses:(id)aforKey:(id)b;
 - (void) setAllowedClasses:(id)a;


@end
