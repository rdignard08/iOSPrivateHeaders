
@interface _NSXPCConnectionImportInfo : NSObject {

    unsigned long long _generationCount;
    NSLock* _lock;
    ^{__CFDictionary=} _proxyNumberToCount;
    ^{__CFSet=} _knownProxies;
}

 - (void) addProxy:(id)a;
 - (BOOL) removeProxy:(id)a;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
