
@interface UIDocumentStorageManager : NSObject {

    NSObject<OS_dispatch_queue>* _ivarQueue;
    _UIDocumentStorage* _storage;
    NSMutableSet* _observers;
    NSMetadataQuery* _query;
    NSDictionary* _identifiersToURLMap;
    NSURL* _defaultURL;
}
@property (atomic, assign, readonly) NSNumber* usesUbiquitousStorage;
@property (atomic, assign, readonly) NSURL* documentStorageURL;
@property (atomic, assign, readonly) NSURL* dataStorageURL;
 + (void) requestSharedManager:(@?)a;

 - (id) _queryResults;
 - (id) documentStorageURL;
 - (id) _initWithCompletionHandler:(@?)a ;
 - (void) _ubiquityIdentityTokenChanged;
 - (void) runSetupProcessWithCompletionHandler:(@?)a ;
 - (id) dataStorageURL;
 - (id) _userICloudChoiceForIdentityToken:(id)a ;
 - (void) _finishSetupWithDecision:(BOOL)a completionHandler:(@?)b ;
 - (void) _loadUserICloudChoiceWithCompletionHandler:(@?)a ;
 - (void) _setStorage:(id)a ;
 - (void) _resetQuery;
 - (id) _userICloudChoiceArray;
 - (void) _initialGatherFinished;
 - (void) _updateObservers;
 - (void) _queryUpdated;
 - (id) _observeContentsOfDirectories:(id)a sortedWithDescriptors:(id)b updateHandler:(@?)c ;
 - (BOOL) usesUbiquitousStorage;
 - (id) _identifierToURLMap;
 - (void) _appActivated:(id)a ;
 - (void) _storeUserICloudChoice:(BOOL)a forIdentityToken:(id)b ;
 - (void) willAddURL:(id)a ;
 - (void) willRemoveURL:(id)a ;
 - (void) willMoveURL:(id)a toURL:(id)b ;
 - (id) observeContentsOfDirectory:(id)a sortedWithDescriptors:(id)b updateHandler:(@?)c ;
 - (id) observeContentsOfUbiquitousContainersWithIdentifiers:(id)a sortedWithDescriptors:(id)b updateHandler:(@?)c ;
 - (void) updateObserver:(id)a withSortDescriptors:(id)b ;
 - (id) init;
 - (void) removeObserver:(id)a ;


@end
