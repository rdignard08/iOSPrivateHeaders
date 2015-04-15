
@protocol NSCoding;
@interface NSDistantObject : NSProxy <NSCoding> {

    id _knownSelectors;
    Q _wireCount;
    Q _refCount;
    id _proto;
    S ___2;
    C ___1;
    C _wireType;
    id _remoteClass;
}
 + (void) _enableLogging:(BOOL)a;
 + (id) proxyWithTarget:(id)aconnection:(id)b;
 + (id) proxyWithLocal:(id)aconnection:(id)b;
 + (id) newDistantObjectWithCoder:(id)a;
 + (void) initialize;

 - (Class) classForCoder;
 - (^{_NSZone=}) zone;
 - (void) _releaseWireCount:(Q)a;
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
 - (Q) retainCount;
 - (void) dealloc;
 - (id) copy;
 - (void) finalize;
 - (void) forwardInvocation:(id)a;
 - (BOOL) _tryRetain;
 - (BOOL) _isDeallocating;
 - (id) mutableCopy;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) appendFormat:(id)a;
 - (BOOL) conformsToProtocol:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (Class) class;
 - (id) stringByAppendingFormat:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;


@end
