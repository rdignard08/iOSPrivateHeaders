
@interface NSXPCEncoder : NSXPCCoder {

    NSObject<OS_xpc_object>* _oolObjects;
    NSXPCConnection* _connection;
    ^{__CFDictionary=} _replacedObjects;
    ^{__CFDictionary=} _replacedByDelegateObjects;
    <NSXPCEncoderDelegate>* _delegate;
    BOOL _askForReplacement;
    ^^v _encoder;
    unsigned long long _genericIndex;
}
 + (id) _dataWithXPCObject:(id)a;

 - (void) encodeDataObject:(id)a ;
 - (void) _encodeArrayOfObjects:(id)a forKey:(id)b ;
 - (void) encodeInt:(int)a forKey:(id)b ;
 - (void) encodeConditionalObject:(id)a forKey:(id)b ;
 - (void) encodeXPCObject:(id)a forKey:(id)b ;
 - (id) _connection;
 - (void) encodeInvocation:(id)a ;
 - (void) set_connection:(id)a ;
 - (void) _insertIntoXPCObject:(id)a ;
 - (void) _encodeCString:(r*)a forKey:(id)b ;
 - (id) _replaceObject:(id)a ;
 - (void) _checkObject:(id)a ;
 - (void) _encodeObject:(id)a ;
 - (id) _createRootXPCObject;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) allowsKeyedCoding;
 - (void) encodeInteger:(long long)a forKey:(id)b ;
 - (void) encodeInt64:(long long)a forKey:(id)b ;
 - (void) encodeObject:(id)a forKey:(id)b ;
 - (void) encodeBool:(BOOL)a forKey:(id)b ;
 - (void) setDelegate:(id)a ;
 - (void) encodeBytes:(r*)a length:(unsigned long long)b forKey:(id)c ;
 - (void) encodeInt32:(int)a forKey:(id)b ;
 - (id) debugDescription;
 - (id) init;
 - (void) encodeValueOfObjCType:(r*)a at:(r^v)b ;
 - (void) encodeObject:(id)a ;
 - (id) delegate;
 - (void) encodeDouble:(double)a forKey:(id)b ;
 - (void) encodeFloat:(float)a forKey:(id)b ;


@end
