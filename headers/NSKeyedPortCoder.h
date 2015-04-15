
@interface NSKeyedPortCoder : NSConcretePortCoder {

    id sndPort;
    id rcvPort;
    NSMutableDictionary* root;
    NSMutableArray* containers;
    NSMutableArray* components;
    BOOL mainDataFinished;
    unsigned long long nextGenericIndex;
    unsigned long long nextOutOfLineGenericIndex;
    BOOL isBycopy;
    BOOL isByref;
    BOOL isValid;
    NSMutableArray* importedObjects;
}

 - (long long) versionForClassName:(id)a ;
 - (void) encodeBytes:(r^v)a length:(unsigned long long)b ;
 - (void) encodeDataObject:(id)a ;
 - (^v) decodeBytesWithReturnedLength:(^Q)a ;
 - (id) decodeDataObject;
 - (void) encodeBycopyObject:(id)a ;
 - (void) encodeInt:(int)a forKey:(id)b ;
 - (int) decodeIntForKey:(id)a ;
 - (id) _decodePropertyListForKey:(id)a ;
 - (void) encodeByrefObject:(id)a ;
 - (void) encodeConditionalObject:(id)a forKey:(id)b ;
 - (float) decodeFloatForKey:(id)a ;
 - (id) initWithReceivePort:(id)a sendPort:(id)b components:(id)c ;
 - (id) connection;
 - (id) importedObjects;
 - (id) decodePortObject;
 - (void) encodePortObject:(id)a ;
 - (void) encodeReturnValueOfInvocation:(id)a forKey:(id)b ;
 - (void) decodeReturnValueOfInvocation:(id)a forKey:(id)b ;
 - (id) finishedComponents;
 - (void) importObject:(id)a ;
 - (BOOL) isByref;
 - (id) _proxyForLocalObject:(id)a ;
 - (BOOL) isBycopy;
 - (void) dispatch;
 - (void) encodeInvocation:(id)a ;
 - (id) decodeInvocation;
 - (void) _buildMainData;
 - (id) _topContainer;
 - (void) _addObjectToTop:(id)a forKey:(id)b ;
 - (void) _prepareToEncodeObjectForKey:(id)a ;
 - (void) _finishUpObject;
 - (void) _addOutOfLineObject:(id)a forKey:(id)b ;
 - (id) _getObjectFromTopForKey:(id)a ;
 - (id) _getOutOfLineObjectForKey:(id)a ;
 - (void) encodeDataObject:(id)a forKey:(id)b ;
 - (void) encodePortObject:(id)a forKey:(id)b ;
 - (void) _encodeObjectNoKey:(id)a ;
 - (id) decodeDataObjectForKey:(id)a ;
 - (id) decodePortObjectForKey:(id)a ;
 - (id) _decodeObjectNoKey;
 - (void) _setBycopy:(BOOL)a ;
 - (void) _setByref:(BOOL)a ;
 - (void) dealloc;
 - (void) invalidate;
 - (BOOL) allowsKeyedCoding;
 - (void) encodeInteger:(long long)a forKey:(id)b ;
 - (void) encodeInt64:(long long)a forKey:(id)b ;
 - (void) _encodePropertyList:(id)a forKey:(id)b ;
 - (void) encodeObject:(id)a forKey:(id)b ;
 - (void) encodeBool:(BOOL)a forKey:(id)b ;
 - (void) encodeBytes:(r*)a length:(unsigned long long)b forKey:(id)c ;
 - (r*) decodeBytesForKey:(id)a returnedLength:(^Q)b ;
 - (id) decodeObjectForKey:(id)a ;
 - (long long) decodeInt64ForKey:(id)a ;
 - (void) encodeInt32:(int)a forKey:(id)b ;
 - (int) decodeInt32ForKey:(id)a ;
 - (void) encodeConditionalObject:(id)a ;
 - (id) debugDescription;
 - (void) decodeValueOfObjCType:(r*)a at:(^v)b ;
 - (id) decodeObject;
 - (void) encodeValueOfObjCType:(r*)a at:(r^v)b ;
 - (void) encodeObject:(id)a ;
 - (void) encodeDouble:(double)a forKey:(id)b ;
 - (long long) decodeIntegerForKey:(id)a ;
 - (double) decodeDoubleForKey:(id)a ;
 - (BOOL) decodeBoolForKey:(id)a ;
 - (BOOL) containsValueForKey:(id)a ;
 - (void) encodeFloat:(float)a forKey:(id)b ;


@end
