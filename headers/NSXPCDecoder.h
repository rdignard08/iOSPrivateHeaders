
@interface NSXPCDecoder : NSXPCCoder {

    NSObject<OS_xpc_object>* _oolObjects;
    NSXPCInterface* _interface;
    SEL _replyToSelector;
    unsigned long long _genericIndex;
    ^^v _decoder;
    NSXPCConnection* _connection;
    [128^{?}] _collections;
    {?="offset"Q"type"i} _rootObject;
    unsigned int _collectionPointer;
    [128@] _allowedClassesList;
    long long _allowedClassesIndex;
}
 + (id) _createXPCObjectWithData:(id)a;

 - (id) _decodeArrayOfObjectsForKey:(id)a;
 - (int) decodeIntForKey:(id)a;
 - (void) _validateAllowedClass:(Class)aforKey:(id)ballowingInvocations:(BOOL)c;
 - (float) decodeFloatForKey:(id)a;
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
 - (long long) decodeInt64ForKey:(id)a;
 - (int) decodeInt32ForKey:(id)a;
 - (id) debugDescription;
 - (void) decodeValueOfObjCType:(r*)aat:(^v)b;
 - (id) decodeObject;
 - (long long) decodeIntegerForKey:(id)a;
 - (double) decodeDoubleForKey:(id)a;
 - (BOOL) decodeBoolForKey:(id)a;
 - (BOOL) containsValueForKey:(id)a;
 - (id) decodeObjectOfClass:(Class)aforKey:(id)b;
 - (id) allowedClasses;
 - (id) decodeObjectOfClasses:(id)aforKey:(id)b;


@end
