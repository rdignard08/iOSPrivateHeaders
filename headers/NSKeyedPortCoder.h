
@interface NSKeyedPortCoder : NSConcretePortCoder {

    id sndPort;
    id rcvPort;
    NSMutableDictionary root;
    NSMutableArray containers;
    NSMutableArray components;
    BOOL mainDataFinished;
    unsigned long long nextGenericIndex;
    unsigned long long nextOutOfLineGenericIndex;
    BOOL isBycopy;
    BOOL isByref;
    BOOL isValid;
    NSMutableArray importedObjects;
}

 - (long long) versionForClassName:(id)a;
 - (void) encodeBytes:(r^v)alength:(unsigned long long)b;
 - (void) encodeDataObject:(id)a;
 - (^v) decodeBytesWithReturnedLength:(^Q)a;
 - (id) decodeDataObject;
 - (void) encodeBycopyObject:(id)a;
 - (void) encodeInt:(int)aforKey:(id)b;
 - (int) decodeIntForKey:(id)a;
 - (id) _decodePropertyListForKey:(id)a;
 - (void) encodeByrefObject:(id)a;
 - (void) encodeConditionalObject:(id)aforKey:(id)b;
 - (float) decodeFloatForKey:(id)a;
 - (id) initWithReceivePort:(id)asendPort:(id)bcomponents:(id)c;
 - (id) connection;
 - (id) importedObjects;
 - (id) decodePortObject;
 - (void) encodePortObject:(id)a;
 - (void) encodeReturnValueOfInvocation:(id)aforKey:(id)b;
 - (void) decodeReturnValueOfInvocation:(id)aforKey:(id)b;
 - (id) finishedComponents;
 - (void) importObject:(id)a;
 - (BOOL) isByref;
 - (id) _proxyForLocalObject:(id)a;
 - (BOOL) isBycopy;
 - (void) dispatch;
 - (void) encodeInvocation:(id)a;
 - (id) decodeInvocation;
 - (void) _buildMainData;
 - (id) _topContainer;
 - (void) _addObjectToTop:(id)aforKey:(id)b;
 - (void) _prepareToEncodeObjectForKey:(id)a;
 - (void) _finishUpObject;
 - (void) _addOutOfLineObject:(id)aforKey:(id)b;
 - (id) _getObjectFromTopForKey:(id)a;
 - (id) _getOutOfLineObjectForKey:(id)a;
 - (void) encodeDataObject:(id)aforKey:(id)b;
 - (void) encodePortObject:(id)aforKey:(id)b;
 - (void) _encodeObjectNoKey:(id)a;
 - (id) decodeDataObjectForKey:(id)a;
 - (id) decodePortObjectForKey:(id)a;
 - (id) _decodeObjectNoKey;
 - (void) _setBycopy:(BOOL)a;
 - (void) _setByref:(BOOL)a;
 - (void) dealloc;
 - (void) invalidate;
 - (BOOL) allowsKeyedCoding;
 - (void) encodeInteger:(long long)aforKey:(id)b;
 - (void) encodeInt64:(long long)aforKey:(id)b;
 - (void) _encodePropertyList:(id)aforKey:(id)b;
 - (void) encodeObject:(id)aforKey:(id)b;
 - (void) encodeBool:(BOOL)aforKey:(id)b;
 - (void) encodeBytes:(r*)alength:(unsigned long long)bforKey:(id)c;
 - (r*) decodeBytesForKey:(id)areturnedLength:(^Q)b;
 - (id) decodeObjectForKey:(id)a;
 - (long long) decodeInt64ForKey:(id)a;
 - (void) encodeInt32:(int)aforKey:(id)b;
 - (int) decodeInt32ForKey:(id)a;
 - (void) encodeConditionalObject:(id)a;
 - (id) debugDescription;
 - (void) decodeValueOfObjCType:(r*)aat:(^v)b;
 - (id) decodeObject;
 - (void) encodeValueOfObjCType:(r*)aat:(r^v)b;
 - (void) encodeObject:(id)a;
 - (void) encodeDouble:(double)aforKey:(id)b;
 - (long long) decodeIntegerForKey:(id)a;
 - (double) decodeDoubleForKey:(id)a;
 - (BOOL) decodeBoolForKey:(id)a;
 - (BOOL) containsValueForKey:(id)a;
 - (void) encodeFloat:(float)aforKey:(id)b;


@end
