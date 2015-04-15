
@protocol NSXPCProxyCreating, NSSecureCoding;
@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding> {

    @"NSXPCConnection" _connection;
    @"NSXPCInterface" _remoteInterface;
    ^{__CFDictionary=} _knownSelectors;
    i _selectorLock;
    Q _proxyNumber;
    Q _generationCount;
    BOOL _exported;
}
@property (atomic, assign, readwrite) NSNumber* _proxyNumber;
@property (atomic, assign, readwrite) NSNumber* _generationCount;
@property (atomic, retain, readwrite) NSXPCConnection* _connection;
@property (atomic, retain, readwrite) NSXPCInterface* _remoteInterface;
@property (atomic, assign, readwrite) NSNumber* _exported;
 + (BOOL) supportsSecureCoding;

 - (id) _connection;
 - (void) set_connection:(id)a;
 - (id) _initWithConnection:(id)aexportedObject:(id)binterface:(id)c;
 - (Q) _proxyNumber;
 - (Q) _generationCount;
 - (id) _initWithConnection:(id)aproxyNumber:(Q)bgenerationCount:(Q)cinterface:(id)d;
 - (id) remoteObjectProxyWithUserInfo:(id)aerrorHandler:(@?)b;
 - (id) remoteObjectProxyWithTimeout:(d)aerrorHandler:(@?)b;
 - (void) set_remoteInterface:(id)a;
 - (void) set_proxyNumber:(Q)a;
 - (void) set_generationCount:(Q)a;
 - (id) _remoteInterface;
 - (BOOL) _exported;
 - (void) set_exported:(BOOL)a;
 - (void) dealloc;
 - (void) finalize;
 - (void) forwardInvocation:(id)a;
 - (BOOL) conformsToProtocol:(id)a;
 - (id) methodSignatureForSelector:(SEL)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) remoteObjectProxy;
 - (id) remoteObjectProxyWithErrorHandler:(@?)a;


@end
