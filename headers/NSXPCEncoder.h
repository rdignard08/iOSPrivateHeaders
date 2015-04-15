
@interface NSXPCEncoder : NSXPCCoder {

    NSObject<OS_xpc_object> _oolObjects;
    NSXPCConnection _connection;
    ^{__CFDictionary=} _replacedObjects;
    ^{__CFDictionary=} _replacedByDelegateObjects;
    <NSXPCEncoderDelegate> _delegate;
    BOOL _askForReplacement;
    ^^v _encoder;
    unsigned long long _genericIndex;
}
 + (id) _dataWithXPCObject:(id)a;

 - (void) encodeDataObject:(id)a;
 - (void) _encodeArrayOfObjects:(id)aforKey:(id)b;
 - (void) encodeInt:(int)aforKey:(id)b;
 - (void) encodeConditionalObject:(id)aforKey:(id)b;
 - (void) encodeXPCObject:(id)aforKey:(id)b;
 - (id) _connection;
 - (void) encodeInvocation:(id)a;
 - (void) set_connection:(id)a;
 - (void) _insertIntoXPCObject:(id)a;
 - (void) _encodeCString:(r*)aforKey:(id)b;
 - (id) _replaceObject:(id)a;
 - (void) _checkObject:(id)a;
 - (void) _encodeObject:(id)a;
 - (id) _createRootXPCObject;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) allowsKeyedCoding;
 - (void) encodeInteger:(long long)aforKey:(id)b;
 - (void) encodeInt64:(long long)aforKey:(id)b;
 - (void) encodeObject:(id)aforKey:(id)b;
 - (void) encodeBool:(BOOL)aforKey:(id)b;
 - (void) setDelegate:(id)a;
 - (void) encodeBytes:(r*)alength:(unsigned long long)bforKey:(id)c;
 - (void) encodeInt32:(int)aforKey:(id)b;
 - (id) debugDescription;
 - (id) init;
 - (void) encodeValueOfObjCType:(r*)aat:(r^v)b;
 - (void) encodeObject:(id)a;
 - (id) delegate;
 - (void) encodeDouble:(double)aforKey:(id)b;
 - (void) encodeFloat:(float)aforKey:(id)b;


@end
