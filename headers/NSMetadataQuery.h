
@interface NSMetadataQuery : NSObject {

    unsigned long long _flags;
    double _interval;
    [11@] _private;
    ^v _reserved;
}
@property (atomic, assign, readwrite) NSNumber* delegate;
@property (atomic, copy, readwrite) NSPredicate* predicate;
@property (atomic, copy, readwrite) NSArray* sortDescriptors;
@property (atomic, copy, readwrite) NSArray* valueListAttributes;
@property (atomic, copy, readwrite) NSArray* groupingAttributes;
@property (atomic, assign, readwrite) NSNumber* notificationBatchingInterval;
@property (atomic, copy, readwrite) NSArray* searchScopes;
@property (atomic, copy, readwrite) NSArray* searchItems;
@property (atomic, retain, readwrite) NSOperationQueue* operationQueue;
@property (atomic, assign, readonly, getter=isStarted) NSNumber* started;
@property (atomic, assign, readonly, getter=isGathering) NSNumber* gathering;
@property (atomic, assign, readonly, getter=isStopped) NSNumber* stopped;
@property (atomic, assign, readonly) NSNumber* resultCount;
@property (atomic, copy, readonly) NSArray* results;
@property (atomic, copy, readonly) NSDictionary* valueLists;
@property (atomic, copy, readonly) NSArray* groupedResults;
 + (BOOL) automaticallyNotifiesObserversForKey:(id)a;
 + (id) keyPathsForValuesAffectingValueForKey:(id)a;
 + (void) didEndPossibleFileOperation:(id)a;
 + (Class) _stitchingClass;
 + (id) willBeginPossibleMoveOfItemAtURL:(id)atoURL:(id)b;
 + (id) willBeginPossibleDeletionOfItemAtURL:(id)a;
 + (id) willBeginPossibleCreationOfItemAtURL:(id)a;

 - (id) operationQueue;
 - (void) _validateInvocationContext;
 - (void) _validatePredicate:(id)awithScopes:(id)b;
 - (void) _recreateQuery;
 - (id) valueListAttributes;
 - (id) groupingAttributes;
 - (id) _sortingAttributes;
 - (void) _setBatchingParams;
 - (void) setPredicate:(id)a;
 - (id) searchItems;
 - (void) setSearchItems:(id)a;
 - (id) _externalDocumentsBundleIdentifier;
 - (void) _postNotificationName:(id)auserInfo:(id)b;
 - (void) _update;
 - (void) _disableAutoUpdates;
 - (void) _resetQueryState;
 - (void) _noteNote1:(id)a;
 - (void) _noteNote2:(id)a;
 - (void) _noteNote3:(id)a;
 - (void) _noteNote4:(id)a;
 - (void) _inOriginalContextInvokeBlock:(@?)a;
 - (void) _noteNote5:(id)a;
 - (unsigned long long) resultCount;
 - (void) enumerateResultsWithOptions:(unsigned long long)ausingBlock:(@?)b;
 - (void) disableUpdates;
 - (void) enableUpdates;
 - (void) _enableAutoUpdates;
 - (id) valueOfAttribute:(id)aforResultAtIndex:(unsigned long long)b;
 - (id) sortDescriptors;
 - (void) setValueListAttributes:(id)a;
 - (void) setGroupingAttributes:(id)a;
 - (id) _allAttributes;
 - (double) notificationBatchingInterval;
 - (void) setNotificationBatchingInterval:(double)a;
 - (id) searchScopes;
 - (id) searchItemURLs;
 - (void) setSearchItemURLs:(id)a;
 - (void) _setExternalDocumentsBundleIdentifier:(id)a;
 - (id) _queryString;
 - (BOOL) isGathering;
 - (BOOL) isStopped;
 - (id) resultAtIndex:(unsigned long long)a;
 - (void) enumerateResultsUsingBlock:(@?)a;
 - (void) _zapResultArrayIfIdenticalTo:(id)a;
 - (unsigned long long) indexOfResult:(id)a;
 - (id) valueLists;
 - (id) groupedResults;
 - (void) dealloc;
 - (void) finalize;
 - (void) setDelegate:(id)a;
 - (void) stopQuery;
 - (void) setOperationQueue:(id)a;
 - (void) setSearchScopes:(id)a;
 - (BOOL) startQuery;
 - (id) results;
 - (void) setSortDescriptors:(id)a;
 - (BOOL) isStarted;
 - (id) init;
 - (id) delegate;
 - (id) predicate;


@end
