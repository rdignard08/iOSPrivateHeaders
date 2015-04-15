
@interface __NSBundleTables : NSObject {

    @"NSLock" _lock;
    @"NSMutableSet" _staticFrameworks;
    @"NSMutableSet" _loadedBundles;
    @"NSMutableSet" _loadedFrameworks;
    @"NSMutableDictionary" _resolvedPathToBundles;
    ^{__CFDictionary=} _bundleForClassMap;
}
 + (id) bundleTables;

 - (void) removeBundle:(id)aforPath:(id)btype:(Q)c;
 - (id) bundleForClass:(Class)a;
 - (void) setBundle:(id)aforClass:(Class)b;
 - (id) loadedBundles;
 - (id) allBundles;
 - (void) addStaticFrameworkBundles:(id)a;
 - (id) allFrameworks;
 - (id) bundleForPath:(id)a;
 - (void) addBundle:(id)atype:(Q)b;
 - (id) addBundle:(id)aforPath:(id)b;
 - (void) dealloc;
 - (void) finalize;
 - (id) init;


@end
