
@interface NSKeyedPortCoder : NSConcretePortCoder {

    id sndPort;
    id rcvPort;
    @"NSMutableDictionary" root;
    @"NSMutableArray" containers;
    @"NSMutableArray" components;
    BOOL mainDataFinished;
    Q nextGenericIndex;
    Q nextOutOfLineGenericIndex;
    BOOL isBycopy;
    BOOL isByref;
    BOOL isValid;
    @"NSMutableArray" importedObjects;
}

 - (q) versionForClassName:(id)a;
 - (void) encodeBytes:(r^v)alength:(Q)b;
 - (void) encodeDataObject:(id)a;
 - (^v) decodeBytesWithReturnedLength:(^Q)a;
 - (id) decodeDataObject;
 - (void) encodeBycopyObject:(id)a;
 - (void) encodeInt:(i)aforKey:(id)b;
 - (i) decodeIntForKey:(id)a;
 - (id) _decodePropertyListForKey:(id)a;
 - (void) encodeByrefObject:(id)a;
 - (void) encodeConditionalObject:(id)aforKey:(id)b;
 - (f) decodeFloatForKey:(id)a;
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
 - (void) encodeInteger:(q)aforKey:(id)b;
 - (void) encodeInt64:(q)aforKey:(id)b;
 - (void) _encodePropertyList:(id)aforKey:(id)b;
 - (void) encodeObject:(id)aforKey:(id)b;
 - (void) encodeBool:(BOOL)aforKey:(id)b;
 - (void) encodeBytes:(r*)alength:(Q)bforKey:(id)c;
 - (r*) decodeBytesForKey:(id)areturnedLength:(^Q)b;
 - (id) decodeObjectForKey:(id)a;
 - (q) decodeInt64ForKey:(id)a;
 - (void) encodeInt32:(i)aforKey:(id)b;
 - (i) decodeInt32ForKey:(id)a;
 - (void) encodeConditionalObject:(id)a;
 - (id) debugDescription;
 - (void) decodeValueOfObjCType:(r*)aat:(^v)b;
 - (id) decodeObject;
 - (void) encodeValueOfObjCType:(r*)aat:(r^v)b;
 - (void) encodeObject:(id)a;
 - (void) encodeDouble:(d)aforKey:(id)b;
 - (q) decodeIntegerForKey:(id)a;
 - (d) decodeDoubleForKey:(id)a;
 - (BOOL) decodeBoolForKey:(id)a;
 - (BOOL) containsValueForKey:(id)a;
 - (void) encodeFloat:(f)aforKey:(id)b;


@end
