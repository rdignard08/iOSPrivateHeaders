
@interface BKSApplicationDataStore : NSObject {

    @"NSString" _bundleId;
    @"BKSApplicationDataStoreRepositoryClient" _client;
    BOOL _clientNeedsCheckin;
}
 + (void) synchronize;
 + (void) _doWithClassClient:(@?)a;
 + (id) storeForApplication:(id)a;
 + (id) applicationsWithAvailableStores;
 + (void) setPrefetchedKeys:(id)a;
 + (void) _setClassClient:(id)a;

 - (id) initWithBundleIdentifier:(id)a;
 - (void) dealloc;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) init;
 - (id) _initWithBundleId:(id)aclient:(id)b;
 - (id) _makeSafe:(id)aforType:(Class)b;
 - (void) objectForKey:(id)awithResult:(@?)b;
 - (id) safeObjectForKey:(id)aofType:(Class)b;
 - (void) safeObjectForKey:(id)aofType:(Class)bwithResult:(@?)c;
 - (id) archivedObjectForKey:(id)a;
 - (void) archivedObjectForKey:(id)awithResult:(@?)b;
 - (id) safeArchivedObjectForKey:(id)aofType:(Class)b;
 - (void) safeArchivedObjectForKey:(id)aofType:(Class)bwithResult:(@?)c;
 - (void) setArchivedObject:(id)aforKey:(id)b;
 - (id) archivedXPCCodableObjectForKey:(id)aofType:(Class)b;
 - (void) archivedXPCCodableObjectForKey:(id)aofType:(Class)bwithResult:(@?)c;
 - (void) setArchivedXPCCodableObject:(id)aforKey:(id)b;


@end
