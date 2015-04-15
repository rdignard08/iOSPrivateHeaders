
@interface NSHTTPCookieStorageInternal : NSObject {

    ^{OpaqueCFHTTPCookieStorage=} storage;
    ^{OpaqueCFHTTPCookieStorage=} privateStorage;
    NSRecursiveLock* dataLock;
    BOOL privateBrowsing;
}

 - (void) dealloc;
 - (id) _initWithIdentifier:(id)aprivate:(BOOL)b;
 - (void) _syncCookies;
 - (void) registerForPostingNotifications;
 - (id) initInternalWithCFStorage:(^{OpaqueCFHTTPCookieStorage=})a;


@end
