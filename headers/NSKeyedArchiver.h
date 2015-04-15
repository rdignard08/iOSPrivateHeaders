
@interface NSKeyedArchiver : NSCoder {

    ^v _stream;
    unsigned long long _flags;
    id _delegate;
    id _containers;
    id _objects;
    id _objRefMap;
    id _replacementMap;
    id _classNameMap;
    id _conditionals;
    id _classes;
    unsigned long long _genericKey;
    ^v _cache;
    unsigned long long _cacheSize;
    unsigned long long _estimatedCount;
    ^v _reserved2;
    id _visited;
    ^v _reserved0;
}
 + (BOOL) archiveRootObject:(id)atoFile:(id)b;
 + (void) setClassName:(id)aforClass:(Class)b;
 + (id) classNameForClass:(Class)a;
 + (void) initialize;
 + (id) archivedDataWithRootObject:(id)a;

 - (void) encodeArrayOfObjCType:(r*)acount:(unsigned long long)bat:(r^v)c;
 - (id) initForWritingWithMutableData:(id)a;
 - (void) encodeRootObject:(id)a;
 - (void) replaceObject:(id)awithObject:(id)b;
 - (long long) versionForClassName:(id)a;
 - (void) encodeValuesOfObjCTypes:(r*)a;
 - (void) encodeBytes:(r^v)alength:(unsigned long long)b;
 - (void) encodeDataObject:(id)a;
 - (void) encodeBycopyObject:(id)a;
 - (void) _encodeArrayOfObjects:(id)aforKey:(id)b;
 - (void) encodeInt:(int)aforKey:(id)b;
 - (void) encodeByrefObject:(id)a;
 - (void) encodeConditionalObject:(id)aforKey:(id)b;
 - (void) setClassName:(id)aforClass:(Class)b;
 - (id) _initWithOutput:(id)a;
 - (void) finishEncoding;
 - (unsigned long long) outputFormat;
 - (id) classNameForClass:(Class)a;
 - (void) _setBlobForCurrentObject:(id)a;
 - (id) _blobForCurrentObject;
 - (void) setOutputFormat:(unsigned long long)a;
 - (void) setRequiresSecureCoding:(BOOL)a;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) allowsKeyedCoding;
 - (void) encodeInt64:(long long)aforKey:(id)b;
 - (void) _encodePropertyList:(id)aforKey:(id)b;
 - (void) encodeObject:(id)aforKey:(id)b;
 - (void) encodeBool:(BOOL)aforKey:(id)b;
 - (void) setDelegate:(id)a;
 - (void) encodeBytes:(r*)alength:(unsigned long long)bforKey:(id)c;
 - (void) encodeInt32:(int)aforKey:(id)b;
 - (unsigned int) systemVersion;
 - (void) encodeConditionalObject:(id)a;
 - (id) init;
 - (BOOL) requiresSecureCoding;
 - (void) encodeValueOfObjCType:(r*)aat:(r^v)b;
 - (void) encodeObject:(id)a;
 - (id) delegate;
 - (void) encodeDouble:(double)aforKey:(id)b;
 - (void) encodeFloat:(float)aforKey:(id)b;


@end
