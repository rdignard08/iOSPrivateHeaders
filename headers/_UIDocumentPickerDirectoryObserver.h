
@protocol NSMetadataQueryDelegate;
@interface _UIDocumentPickerDirectoryObserver : NSObject <NSMetadataQueryDelegate> {

    NSArray* _sortDescriptors;
    NSOrderedSet* _staticItems;
    id _weak_updateHandlerWeakSelf;
    BOOL _afterInitialUpdate;
    NSMetadataQuery* _query;
    NSArray* _scopes;
    @? _handler;
    NSOrderedSet* _lastSnapshot;
    NSDate* _lastSnapshotDate;
    NSObject<OS_dispatch_queue>* _queryQueue;
    NSOperationQueue* _queryWorkerQueue;
    Class _itemClass;
}
@property (nonatomic, retain, readwrite) NSOrderedSet* staticItems;
@property (nonatomic, retain, readwrite) NSArray* sortDescriptors;
@property (nonatomic, retain, readwrite) NSPredicate* predicate;
@property (nonatomic, assign, readwrite) NSNumber* afterInitialUpdate;
@property (nonatomic, retain, readwrite) NSMetadataQuery* query;
@property (nonatomic, retain, readwrite) NSArray* scopes;
@property (nonatomic, copy, readwrite) NSNumber* handler;
@property (nonatomic, retain, readwrite) NSOrderedSet* lastSnapshot;
@property (nonatomic, retain, readwrite) NSDate* lastSnapshotDate;
@property (nonatomic, retain, readwrite) NSNumber* queryQueue;
@property (nonatomic, retain, readwrite) NSOperationQueue* queryWorkerQueue;
@property (nonatomic, assign, readwrite) NSObject* itemClass;
@property (nonatomic, weak, readwrite) NSNumber* updateHandlerWeakSelf;

 - (id) metadataQuery:(id)a replacementObjectForResultObject:(id)b ;
 - (void) setPredicate:(id)a ;
 - (id) sortDescriptors;
 - (void) setQueryQueue:(id)a ;
 - (void) dealloc;
 - (void) invalidate;
 - (id) query;
 - (void) setScopes:(id)a ;
 - (void) setUpdateHandlerWeakSelf:(id)a ;
 - (void) setItemClass:(Class)a ;
 - (Class) itemClass;
 - (void) _updateObservers:(id)a reloadAll:(BOOL)b ;
 - (void) setQuery:(id)a ;
 - (id) queryWorkerQueue;
 - (id) scopes;
 - (void) _initialGatherFinished:(id)a ;
 - (void) _queryUpdated:(id)a ;
 - (id) _queryResults;
 - (void) _processResults:(id)a changedItems:(id)b reloadAll:(BOOL)c ;
 - (id) lastSnapshotDate;
 - (id) _computeUpdatesFromOld:(id)a toNew:(id)b changedItems:(id)c ;
 - (void) setLastSnapshot:(id)a ;
 - (void) setLastSnapshotDate:(id)a ;
 - (void) setAfterInitialUpdate:(BOOL)a ;
 - (id) updateHandlerWeakSelf;
 - (id) initWithScopes:(id)a weakSelf:(id)b updateHandler:(@?)c itemClass:(Class)d ;
 - (void) setSortDescriptors:(id)a ;
 - (void) setStaticItems:(id)a ;
 - (id) staticItems;
 - (BOOL) afterInitialUpdate;
 - (id) lastSnapshot;
 - (id) queryQueue;
 - (void) setQueryWorkerQueue:(id)a ;
 - (id) predicate;
 - (@?) handler;
 - (void) setHandler:(@?)a ;


@end
