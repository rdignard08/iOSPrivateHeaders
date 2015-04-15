
@interface NSKeyedArchiver : NSCoder {

    ^v _stream;
    Q _flags;
    id _delegate;
    id _containers;
    id _objects;
    id _objRefMap;
    id _replacementMap;
    id _classNameMap;
    id _conditionals;
    id _classes;
    Q _genericKey;
    ^v _cache;
    Q _cacheSize;
    Q _estimatedCount;
    ^v _reserved2;
    id _visited;
    ^v _reserved0;
}
 + (BOOL) archiveRootObject:(id)atoFile:(id)b;
 + (void) setClassName:(id)aforClass:(Class)b;
 + (id) classNameForClass:(Class)a;
 + (void) initialize;
 + (id) archivedDataWithRootObject:(id)a;

 - (void) encodeArrayOfObjCType:(r*)acount:(Q)bat:(r^v)c;
 - (id) initForWritingWithMutableData:(id)a;
 - (void) encodeRootObject:(id)a;
 - (void) replaceObject:(id)awithObject:(id)b;
 - (q) versionForClassName:(id)a;
 - (void) encodeValuesOfObjCTypes:(r*)a;
 - (void) encodeBytes:(r^v)alength:(Q)b;
 - (void) encodeDataObject:(id)a;
 - (void) encodeBycopyObject:(id)a;
 - (void) _encodeArrayOfObjects:(id)aforKey:(id)b;
 - (void) encodeInt:(i)aforKey:(id)b;
 - (void) encodeByrefObject:(id)a;
 - (void) encodeConditionalObject:(id)aforKey:(id)b;
 - (void) setClassName:(id)aforClass:(Class)b;
 - (id) _initWithOutput:(id)a;
 - (void) finishEncoding;
 - (Q) outputFormat;
 - (id) classNameForClass:(Class)a;
 - (void) _setBlobForCurrentObject:(id)a;
 - (id) _blobForCurrentObject;
 - (void) setOutputFormat:(Q)a;
 - (void) setRequiresSecureCoding:(BOOL)a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) allowsKeyedCoding;
 - (void) encodeInt64:(q)aforKey:(id)b;
 - (void) _encodePropertyList:(id)aforKey:(id)b;
 - (void) encodeObject:(id)aforKey:(id)b;
 - (void) encodeBool:(BOOL)aforKey:(id)b;
 - (void) setDelegate:(id)a;
 - (void) encodeBytes:(r*)alength:(Q)bforKey:(id)c;
 - (void) encodeInt32:(i)aforKey:(id)b;
 - (I) systemVersion;
 - (void) encodeConditionalObject:(id)a;
 - (id) init;
 - (BOOL) requiresSecureCoding;
 - (void) encodeValueOfObjCType:(r*)aat:(r^v)b;
 - (void) encodeObject:(id)a;
 - (id) delegate;
 - (void) encodeDouble:(d)aforKey:(id)b;
 - (void) encodeFloat:(f)aforKey:(id)b;


@end
