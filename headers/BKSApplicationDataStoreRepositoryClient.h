
@interface BKSApplicationDataStoreRepositoryClient : BSBaseXPCClient {

    NSMutableDictionary* _prefetchedKeyCounts;
    NSMutableDictionary* _prefetchedKeyValues;
    NSMutableDictionary* _pendingChangesToPrefetchedKeys;
    NSObject<OS_dispatch_queue>* _prefetchedDataQueue;
}

 - (void) dealloc;
 - (void) invalidate;
 - (id) init;
 - (void) queue_handleMessage:(id)a ;
 - (void) queue_connectionWasCreated;
 - (void) availableDataStores:(@?)a ;
 - (void) synchronizeWithCompletion:(@?)a ;
 - (void) addPrefetchedKeys:(id)a withCompletion:(@?)b ;
 - (BOOL) _prefetchedObjectIfAvailableForKey:(id)a application:(id)b outObject:(^@)c ;
 - (void) objectForKey:(id)a forApplication:(id)b withResult:(@?)c checkPrefetch:(BOOL)d useBSXPCCoding:(BOOL)e ;
 - (void) objectForKey:(id)a forApplication:(id)b useBSXPCCoding:(BOOL)c withResult:(@?)d ;
 - (void) setObject:(id)a forKey:(id)b forApplication:(id)c useBSXPCCoding:(BOOL)d withCompletion:(@?)e ;
 - (void) removeObjectForKey:(id)a forApplication:(id)b withCompletion:(@?)c ;
 - (void) removeAllObjectsForApplication:(id)a withCompletion:(@?)b ;
 - (id) initWithEndpoint:(id)a ;
 - (void) _sendPrefetchedKeys:(id)a withCompletion:(@?)b ;
 - (void) fireCompletion:(@?)a error:(id)b ;
 - (void) fireCompletion:(@?)a arrayResults:(id)b error:(id)c ;
 - (void) fireCompletion:(@?)a result:(id)b error:(id)c ;
 - (void) _setPrefetchedObjectIfNecessary:(id)a forKey:(id)b application:(id)c ;
 - (void) _setChangeInFlight:(BOOL)a forPrefetchedKey:(id)b application:(id)c ;
 - (void) _handleValueChanged:(id)a ;
 - (void) _handleStoreInvalidated:(id)a ;
 - (BOOL) _isChangeInFlightForPrefetchedKey:(id)a application:(id)b ;
 - (id) clientCallbackQueue;
 - (void) removePrefetchedKeys:(id)a withCompletion:(@?)b ;
 - (id) _allPrefetchedChangesInFlightForApplication:(id)a ;
 - (void) _sendMessageType:(int)a withMessage:(@?)b withReplyHandler:(@?)c waitForReply:(BOOL)d ;


@end
