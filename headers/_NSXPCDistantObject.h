
@protocol NSXPCProxyCreating, NSSecureCoding;
@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding> {

    NSXPCConnection* _connection;
    NSXPCInterface* _remoteInterface;
    ^{__CFDictionary=} _knownSelectors;
    int _selectorLock;
    unsigned long long _proxyNumber;
    unsigned long long _generationCount;
    BOOL _exported;
}
@property (atomic, assign, readwrite) NSNumber* _proxyNumber;
@property (atomic, assign, readwrite) NSNumber* _generationCount;
@property (atomic, retain, readwrite) NSXPCConnection* _connection;
@property (atomic, retain, readwrite) NSXPCInterface* _remoteInterface;
@property (atomic, assign, readwrite) NSNumber* _exported;
 + (BOOL) supportsSecureCoding;

 - (id) _connection;
 - (void) set_connection:(id)a ;
 - (id) _initWithConnection:(id)a exportedObject:(id)b interface:(id)c ;
 - (unsigned long long) _proxyNumber;
 - (unsigned long long) _generationCount;
 - (id) _initWithConnection:(id)a proxyNumber:(unsigned long long)b generationCount:(unsigned long long)c interface:(id)d ;
 - (id) remoteObjectProxyWithUserInfo:(id)a errorHandler:(@?)b ;
 - (id) remoteObjectProxyWithTimeout:(double)a errorHandler:(@?)b ;
 - (void) set_remoteInterface:(id)a ;
 - (void) set_proxyNumber:(unsigned long long)a ;
 - (void) set_generationCount:(unsigned long long)a ;
 - (id) _remoteInterface;
 - (BOOL) _exported;
 - (void) set_exported:(BOOL)a ;
 - (void) dealloc;
 - (void) finalize;
 - (void) forwardInvocation:(id)a ;
 - (BOOL) conformsToProtocol:(id)a ;
 - (id) methodSignatureForSelector:(SEL)a ;
 - (id) init;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) remoteObjectProxy;
 - (id) remoteObjectProxyWithErrorHandler:(@?)a ;


@end
