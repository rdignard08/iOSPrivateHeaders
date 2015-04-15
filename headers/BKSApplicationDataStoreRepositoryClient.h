
@interface BKSApplicationDataStoreRepositoryClient : BSBaseXPCClient {

    NSMutableDictionary* _prefetchedKeyCounts;
    NSMutableDictionary* _prefetchedKeyValues;
    NSMutableDictionary* _pendingChangesToPrefetchedKeys;
    NSObject<OS_dispatch_queue>* _prefetchedDataQueue;
}

 - (void) dealloc;
 - (void) invalidate;
 - (id) init;
 - (void) queue_handleMessage:(id)a;
 - (void) queue_connectionWasCreated;
 - (void) availableDataStores:(@?)a;
 - (void) synchronizeWithCompletion:(@?)a;
 - (void) addPrefetchedKeys:(id)awithCompletion:(@?)b;
 - (BOOL) _prefetchedObjectIfAvailableForKey:(id)aapplication:(id)boutObject:(^@)c;
 - (void) objectForKey:(id)aforApplication:(id)bwithResult:(@?)ccheckPrefetch:(BOOL)duseBSXPCCoding:(BOOL)e;
 - (void) objectForKey:(id)aforApplication:(id)buseBSXPCCoding:(BOOL)cwithResult:(@?)d;
 - (void) setObject:(id)aforKey:(id)bforApplication:(id)cuseBSXPCCoding:(BOOL)dwithCompletion:(@?)e;
 - (void) removeObjectForKey:(id)aforApplication:(id)bwithCompletion:(@?)c;
 - (void) removeAllObjectsForApplication:(id)awithCompletion:(@?)b;
 - (id) initWithEndpoint:(id)a;
 - (void) _sendPrefetchedKeys:(id)awithCompletion:(@?)b;
 - (void) fireCompletion:(@?)aerror:(id)b;
 - (void) fireCompletion:(@?)aarrayResults:(id)berror:(id)c;
 - (void) fireCompletion:(@?)aresult:(id)berror:(id)c;
 - (void) _setPrefetchedObjectIfNecessary:(id)aforKey:(id)bapplication:(id)c;
 - (void) _setChangeInFlight:(BOOL)aforPrefetchedKey:(id)bapplication:(id)c;
 - (void) _handleValueChanged:(id)a;
 - (void) _handleStoreInvalidated:(id)a;
 - (BOOL) _isChangeInFlightForPrefetchedKey:(id)aapplication:(id)b;
 - (id) clientCallbackQueue;
 - (void) removePrefetchedKeys:(id)awithCompletion:(@?)b;
 - (id) _allPrefetchedChangesInFlightForApplication:(id)a;
 - (void) _sendMessageType:(int)awithMessage:(@?)bwithReplyHandler:(@?)cwaitForReply:(BOOL)d;


@end
