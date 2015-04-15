
@interface UIDocumentStorageManager : NSObject {

    NSObject<OS_dispatch_queue> _ivarQueue;
    _UIDocumentStorage _storage;
    NSMutableSet _observers;
    NSMetadataQuery _query;
    NSDictionary _identifiersToURLMap;
    NSURL _defaultURL;
}
@property (atomic, assign, readonly) NSNumber* usesUbiquitousStorage;
@property (atomic, assign, readonly) NSURL* documentStorageURL;
@property (atomic, assign, readonly) NSURL* dataStorageURL;
 + (void) requestSharedManager:(@?)a;

 - (id) _queryResults;
 - (id) documentStorageURL;
 - (id) _initWithCompletionHandler:(@?)a;
 - (void) _ubiquityIdentityTokenChanged;
 - (void) runSetupProcessWithCompletionHandler:(@?)a;
 - (id) dataStorageURL;
 - (id) _userICloudChoiceForIdentityToken:(id)a;
 - (void) _finishSetupWithDecision:(BOOL)acompletionHandler:(@?)b;
 - (void) _loadUserICloudChoiceWithCompletionHandler:(@?)a;
 - (void) _setStorage:(id)a;
 - (void) _resetQuery;
 - (id) _userICloudChoiceArray;
 - (void) _initialGatherFinished;
 - (void) _updateObservers;
 - (void) _queryUpdated;
 - (id) _observeContentsOfDirectories:(id)asortedWithDescriptors:(id)bupdateHandler:(@?)c;
 - (BOOL) usesUbiquitousStorage;
 - (id) _identifierToURLMap;
 - (void) _appActivated:(id)a;
 - (void) _storeUserICloudChoice:(BOOL)aforIdentityToken:(id)b;
 - (void) willAddURL:(id)a;
 - (void) willRemoveURL:(id)a;
 - (void) willMoveURL:(id)atoURL:(id)b;
 - (id) observeContentsOfDirectory:(id)asortedWithDescriptors:(id)bupdateHandler:(@?)c;
 - (id) observeContentsOfUbiquitousContainersWithIdentifiers:(id)asortedWithDescriptors:(id)bupdateHandler:(@?)c;
 - (void) updateObserver:(id)awithSortDescriptors:(id)b;
 - (id) init;
 - (void) removeObserver:(id)a;


@end
