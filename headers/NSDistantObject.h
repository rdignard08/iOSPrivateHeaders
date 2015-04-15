
@protocol NSCoding;
@interface NSDistantObject : NSProxy <NSCoding> {

    id _knownSelectors;
    unsigned long long _wireCount;
    unsigned long long _refCount;
    id _proto;
    unsigned short ___2;
    unsigned char ___1;
    unsigned char _wireType;
    id _remoteClass;
}
 + (void) _enableLogging:(BOOL)a;
 + (id) proxyWithTarget:(id)aconnection:(id)b;
 + (id) proxyWithLocal:(id)aconnection:(id)b;
 + (id) newDistantObjectWithCoder:(id)a;
 + (void) initialize;

 - (Class) classForCoder;
 - (^{_NSZone=}) zone;
 - (void) _releaseWireCount:(unsigned long long)a;
 - (void) retainWireCount;
 - (id) initWithTarget:(id)aconnection:(id)b;
 - (id) initWithLocal:(id)aconnection:(id)b;
 - (id) connectionForProxy;
 - (void) setProtocolForProxy:(id)a;
 - (id) protocolForProxy;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (id) copy;
 - (void) finalize;
 - (void) forwardInvocation:(id)a;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) mutableCopy;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) appendFormat:(id)a;
 - (BOOL) conformsToProtocol:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (Class) class;
 - (id) stringByAppendingFormat:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
