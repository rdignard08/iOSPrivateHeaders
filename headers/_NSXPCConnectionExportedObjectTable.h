
@interface _NSXPCConnectionExportedObjectTable : NSObject {

    NSLock _lock;
    ^{__CFDictionary=} _proxyNumberToObject;
    ^{__CFDictionary=} _objectToProxyNumber;
    unsigned long long _next;
    BOOL _valid;
}

 - (id) exportedObjectForProxyNumber:(unsigned long long)a;
 - (id) interfaceForProxyNumber:(unsigned long long)a;
 - (void) setExportedObject:(id)aforProxyNumber:(unsigned long long)b;
 - (void) setInterface:(id)aforProxyNumber:(unsigned long long)b;
 - (void) releaseExportedObject:(unsigned long long)a;
 - (unsigned long long) proxyNumberForExportedObject:(id)ainterface:(id)b;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (void) invalidate;
 - (id) init;


@end
