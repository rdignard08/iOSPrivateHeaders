
@interface NSUbiquitousKeyValueStore : NSObject {

    id _private1;
    id _private2;
    id _private3;
    ^v _private4;
    [3^v] _reserved;
    int _daemonWakeToken;
}
@property (atomic, copy, readonly) NSDictionary* dictionaryRepresentation;
 + (void) _synchronizeStoresForced:(BOOL)a;
 + (id) additionalStoreWithIdentifier:(id)a;
 + (void) _appWillDeactivate;
 + (void) _appWillActivate;
 + (id) defaultStore;

 - (double) doubleForKey:(id)a;
 - (BOOL) boolForKey:(id)a;
 - (id) dictionaryRepresentation;
 - (id) dataForKey:(id)a;
 - (void) setDouble:(double)aforKey:(id)b;
 - (id) initWithBundleIdentifier:(id)astoreIdentifier:(id)badditionalStore:(BOOL)c;
 - (void) _scheduleRemoteSynchronization;
 - (void) _sourceDidChange:(id)a;
 - (void) _configurationDidChange;
 - (void) _registerToDaemon;
 - (void) _pleaseSynchronize:(id)a;
 - (id) initWithBundleIdentifier:(id)astoreIdentifier:(id)b;
 - (id) initWithBundleIdentifier:(id)a;
 - (void) _setShouldAvoidSynchronize:(BOOL)a;
 - (int) _storeChangeFromSourceChange:(int)a;
 - (BOOL) _hasPendingSynchronize;
 - (void) _setHasPendingSynchronize:(BOOL)a;
 - (void) _rethrowException:(id)a;
 - (BOOL) synchronizeWithSourceForced:(BOOL)a;
 - (BOOL) _postDidChangeNotificationExternalChanges:(id)asourceChangeCount:(long long)b;
 - (void) _syncConcurrentlyForced:(BOOL)a;
 - (void) _syncConcurrently;
 - (void) _adjustTimer:(id)a;
 - (void) _adjustTimerForAutosync;
 - (BOOL) _synchronizeForced:(BOOL)anotificationQueue:(id)b;
 - (BOOL) _shouldAvoidSynchronize;
 - (BOOL) _synchronizeForced:(BOOL)a;
 - (unsigned long long) maximumKeyCount;
 - (unsigned long long) maximumKeyLength;
 - (unsigned long long) maximumDataLengthPerKey;
 - (unsigned long long) maximumTotalDataLength;
 - (void) _useSourceAsyncWithBlock:(@?)a;
 - (void) _useSourceSyncWithBlock:(@?)a;
 - (void) registerDefaultValues:(id)a;
 - (void) synchronizeWithCompletionHandler:(@?)a;
 - (void) _unregisterFromDaemon;
 - (void) setString:(id)aforKey:(id)b;
 - (void) setArray:(id)aforKey:(id)b;
 - (void) setDictionary:(id)aforKey:(id)b;
 - (void) setData:(id)aforKey:(id)b;
 - (long long) longLongForKey:(id)a;
 - (void) setLongLong:(long long)aforKey:(id)b;
 - (void) dealloc;
 - (void) finalize;
 - (BOOL) synchronize;
 - (id) objectForKey:(id)a;
 - (void) removeObjectForKey:(id)a;
 - (void) setObject:(id)aforKey:(id)b;
 - (id) dictionaryForKey:(id)a;
 - (id) init;
 - (id) stringForKey:(id)a;
 - (void) setBool:(BOOL)aforKey:(id)b;
 - (id) arrayForKey:(id)a;


@end
