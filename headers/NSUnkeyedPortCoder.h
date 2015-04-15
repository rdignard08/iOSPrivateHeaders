
@interface NSUnkeyedPortCoder : NSConcretePortCoder {

    id sndPort;
    id rcvPort;
    NSDOStreamData* doStreamData;
    NSMutableArray* components;
    NSMutableArray* importedObjects;
    unsigned long long componentIndex;
    BOOL isBycopy;
    BOOL isByref;
    BOOL isValid;
}
 + (void) _enableLogging:(BOOL)a;
 + (id) allocWithZone:(^{_NSZone=})a;

 - (long long) versionForClassName:(id)a ;
 - (void) encodeBytes:(r^v)a length:(unsigned long long)b ;
 - (void) encodeDataObject:(id)a ;
 - (^v) decodeBytesWithReturnedLength:(^Q)a ;
 - (id) decodeDataObject;
 - (void) encodeBycopyObject:(id)a ;
 - (void) encodeByrefObject:(id)a ;
 - (id) components;
 - (id) initWithReceivePort:(id)a sendPort:(id)b components:(id)c ;
 - (id) connection;
 - (id) importedObjects;
 - (id) decodePortObject;
 - (void) encodePortObject:(id)a ;
 - (void) encodeReturnValue:(id)a ;
 - (void) decodeReturnValue:(id)a ;
 - (id) finishedComponents;
 - (void) importObject:(id)a ;
 - (BOOL) isByref;
 - (id) _proxyForLocalObject:(id)a ;
 - (BOOL) isBycopy;
 - (void) dispatch;
 - (void) encodeObject:(id)a isBycopy:(BOOL)b isByref:(BOOL)c ;
 - (id) decodeRetainedObject;
 - (void) encodeInvocation:(id)a ;
 - (id) decodeInvocation;
 - (void) dealloc;
 - (void) invalidate;
 - (id) debugDescription;
 - (void) decodeValueOfObjCType:(r*)a at:(^v)b ;
 - (void) encodeValueOfObjCType:(r*)a at:(r^v)b ;


@end
