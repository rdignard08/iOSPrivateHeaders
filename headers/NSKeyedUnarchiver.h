
@interface NSKeyedUnarchiver : NSCoder {

    id _delegate;
    I _flags;
    id _objRefMap;
    id _replacementMap;
    id _nameClassMap;
    id _tmpRefObjMap;
    id _refObjMap;
    i _genericKey;
    id _data;
    ^v _offsetData;
    id _containers;
    id _objects;
    r* _bytes;
    Q _len;
    id _helper;
    ^v _reserved0;
}
 + (id) unarchiveObjectWithFile:(id)a;
 + (void) setClass:(Class)aforClassName:(id)b;
 + (Class) classForClassName:(id)a;
 + (void) initialize;
 + (id) unarchiveObjectWithData:(id)a;

 - (void) decodeArrayOfObjCType:(r*)acount:(Q)bat:(^v)c;
 - (void) replaceObject:(id)awithObject:(id)b;
 - (q) versionForClassName:(id)a;
 - (id) initForReadingWithData:(id)a;
 - (void) decodeValuesOfObjCTypes:(r*)a;
 - (^v) decodeBytesWithReturnedLength:(^Q)a;
 - (id) decodeDataObject;
 - (id) _decodeArrayOfObjectsForKey:(id)a;
 - (i) decodeIntForKey:(id)a;
 - (id) _decodePropertyListForKey:(id)a;
 - (f) decodeFloatForKey:(id)a;
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
 - (I) _currentUniqueIdentifier;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) allowsKeyedCoding;
 - (void) setDelegate:(id)a;
 - (r*) decodeBytesForKey:(id)areturnedLength:(^Q)b;
 - (id) decodeObjectForKey:(id)a;
 - (q) decodeInt64ForKey:(id)a;
 - (i) decodeInt32ForKey:(id)a;
 - (I) systemVersion;
 - (id) init;
 - (void) decodeValueOfObjCType:(r*)aat:(^v)b;
 - (id) decodeObject;
 - (BOOL) requiresSecureCoding;
 - (id) delegate;
 - (d) decodeDoubleForKey:(id)a;
 - (BOOL) decodeBoolForKey:(id)a;
 - (BOOL) containsValueForKey:(id)a;
 - (id) decodeObjectOfClass:(Class)aforKey:(id)b;
 - (id) allowedClasses;
 - (id) decodeObjectOfClasses:(id)aforKey:(id)b;
 - (void) setAllowedClasses:(id)a;


@end
