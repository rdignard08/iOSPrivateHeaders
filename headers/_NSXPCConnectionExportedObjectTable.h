
@interface _NSXPCConnectionExportedObjectTable : NSObject {

    @"NSLock" _lock;
    ^{__CFDictionary=} _proxyNumberToObject;
    ^{__CFDictionary=} _objectToProxyNumber;
    Q _next;
    BOOL _valid;
}

 - (id) exportedObjectForProxyNumber:(Q)a;
 - (id) interfaceForProxyNumber:(Q)a;
 - (void) setExportedObject:(id)aforProxyNumber:(Q)b;
 - (void) setInterface:(id)aforProxyNumber:(Q)b;
 - (void) releaseExportedObject:(Q)a;
 - (Q) proxyNumberForExportedObject:(id)ainterface:(id)b;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) invalidate;
 - (id) init;


@end
