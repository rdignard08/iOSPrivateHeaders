
@interface NSXPCDecoder : NSXPCCoder {

    @"NSObject<OS_xpc_object>" _oolObjects;
    @"NSXPCInterface" _interface;
    SEL _replyToSelector;
    Q _genericIndex;
    ^^v _decoder;
    @"NSXPCConnection" _connection;
    [128^{?}] _collections;
    {?="offset"Q"type"i} _rootObject;
    I _collectionPointer;
    [128@] _allowedClassesList;
    q _allowedClassesIndex;
}
 + (id) _createXPCObjectWithData:(id)a;

 - (id) _decodeArrayOfObjectsForKey:(id)a;
 - (i) decodeIntForKey:(id)a;
 - (void) _validateAllowedClass:(Class)aforKey:(id)ballowingInvocations:(BOOL)c;
 - (f) decodeFloatForKey:(id)a;
 - (id) decodeXPCObjectOfType:(^{_xpc_type_s=})aforKey:(id)b;
 - (id) _connection;
 - (id) decodeInvocation;
 - (id) _initWithRootXPCObject:(id)a;
 - (id) interface;
 - (void) setInterface:(id)a;
 - (void) setReplyToSelector:(SEL)a;
 - (void) set_connection:(id)a;
 - (id) decodeXPCObjectForKey:(id)a;
 - (r*) _decodeCStringForKey:(id)a;
 - (SEL) replyToSelector;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) allowsKeyedCoding;
 - (r*) decodeBytesForKey:(id)areturnedLength:(^Q)b;
 - (id) decodeObjectForKey:(id)a;
 - (q) decodeInt64ForKey:(id)a;
 - (i) decodeInt32ForKey:(id)a;
 - (id) debugDescription;
 - (void) decodeValueOfObjCType:(r*)aat:(^v)b;
 - (id) decodeObject;
 - (q) decodeIntegerForKey:(id)a;
 - (d) decodeDoubleForKey:(id)a;
 - (BOOL) decodeBoolForKey:(id)a;
 - (BOOL) containsValueForKey:(id)a;
 - (id) decodeObjectOfClass:(Class)aforKey:(id)b;
 - (id) allowedClasses;
 - (id) decodeObjectOfClasses:(id)aforKey:(id)b;


@end
