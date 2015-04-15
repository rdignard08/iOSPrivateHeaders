
@interface BKSApplicationDataStore : NSObject {

    NSString* _bundleId;
    BKSApplicationDataStoreRepositoryClient* _client;
    BOOL _clientNeedsCheckin;
}
 + (void) synchronize;
 + (void) _doWithClassClient:(@?)a;
 + (id) storeForApplication:(id)a;
 + (id) applicationsWithAvailableStores;
 + (void) setPrefetchedKeys:(id)a;
 + (void) _setClassClient:(id)a;

 - (id) initWithBundleIdentifier:(id)a ;
 - (void) dealloc;
 - (void) removeAllObjects;
 - (id) objectForKey:(id)a ;
 - (void) removeObjectForKey:(id)a ;
 - (void) setObject:(id)a forKey:(id)b ;
 - (id) init;
 - (id) _initWithBundleId:(id)a client:(id)b ;
 - (id) _makeSafe:(id)a forType:(Class)b ;
 - (void) objectForKey:(id)a withResult:(@?)b ;
 - (id) safeObjectForKey:(id)a ofType:(Class)b ;
 - (void) safeObjectForKey:(id)a ofType:(Class)b withResult:(@?)c ;
 - (id) archivedObjectForKey:(id)a ;
 - (void) archivedObjectForKey:(id)a withResult:(@?)b ;
 - (id) safeArchivedObjectForKey:(id)a ofType:(Class)b ;
 - (void) safeArchivedObjectForKey:(id)a ofType:(Class)b withResult:(@?)c ;
 - (void) setArchivedObject:(id)a forKey:(id)b ;
 - (id) archivedXPCCodableObjectForKey:(id)a ofType:(Class)b ;
 - (void) archivedXPCCodableObjectForKey:(id)a ofType:(Class)b withResult:(@?)c ;
 - (void) setArchivedXPCCodableObject:(id)a forKey:(id)b ;


@end
