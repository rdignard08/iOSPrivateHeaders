
@interface __NSBundleTables : NSObject {

    NSLock* _lock;
    NSMutableSet* _staticFrameworks;
    NSMutableSet* _loadedBundles;
    NSMutableSet* _loadedFrameworks;
    NSMutableDictionary* _resolvedPathToBundles;
    ^{__CFDictionary=} _bundleForClassMap;
}
 + (id) bundleTables;

 - (void) removeBundle:(id)a forPath:(id)b type:(unsigned long long)c ;
 - (id) bundleForClass:(Class)a ;
 - (void) setBundle:(id)a forClass:(Class)b ;
 - (id) loadedBundles;
 - (id) allBundles;
 - (void) addStaticFrameworkBundles:(id)a ;
 - (id) allFrameworks;
 - (id) bundleForPath:(id)a ;
 - (void) addBundle:(id)a type:(unsigned long long)b ;
 - (id) addBundle:(id)a forPath:(id)b ;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
