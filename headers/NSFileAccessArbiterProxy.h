
@protocol NSFileAccessArbiter;
@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {

    NSObject<OS_xpc_object>* _server;
    NSObject<OS_dispatch_queue>* _serverQueue;
    @? _serverEventHandler;
    NSObject<OS_dispatch_queue>* _queue;
    NSMutableDictionary* _presentersByID;
    NSMutableDictionary* _providersByID;
}
 + (id) _idForReactor:(id)a;
 + (id) _fileReactorDebuggingInformation;
 + (void) _accessPresenterOperationRecordsUsingBlock:(@?)a;
 + (id) _willBeginOperationForReactor:(id)awithDescription:(id)b;

 - (void) addFilePresenter:(id)a ;
 - (void) removeFilePresenter:(id)a ;
 - (id) filePresenters;
 - (id) idForFileReactor:(id)a ;
 - (void) cancelAccessClaimForID:(id)a ;
 - (id) grantAccessClaim:(id)a synchronouslyIfPossible:(BOOL)b ;
 - (void) revokeAccessClaimForID:(id)a ;
 - (void) tiePresenterForID:(id)a toItemAtURL:(id)b ;
 - (void) writerWithPurposeID:(id)a didMoveItemAtURL:(id)b toURL:(id)c ;
 - (void) writerWithPurposeID:(id)a didChangeUbiquityOfItemAtURL:(id)b ;
 - (void) writerWithPurposeID:(id)a didMakeItemDisappearAtURL:(id)b ;
 - (void) writerWithPurposeID:(id)a didChangeItemAtURL:(id)b ;
 - (void) revokeSubarbitrationClaimForID:(id)a ;
 - (void) grantSubarbitrationClaim:(id)a withServer:(id)b ;
 - (void) writerWithPurposeID:(id)a didDisconnectItemAtURL:(id)b ;
 - (void) writerWithPurposeID:(id)a didReconnectItemAtURL:(id)b ;
 - (void) writerWithPurposeID:(id)a didVersionChangeOfKind:(id)b toItemAtURL:(id)c withClientID:(id)d name:(id)e ;
 - (void) addFileProvider:(id)a completionHandler:(@?)b ;
 - (void) removeFileProvider:(id)a ;
 - (id) fileProviders;
 - (void) getDebugInfoWithCompletionHandler:(@?)a ;
 - (void) handleMessage:(id)a ;
 - (void) handleCanceledServer;
 - (id) initWithServer:(id)a queue:(id)b eventHandler:(@?)c ;
 - (void) _makePresenter:(id)a saveChangesWithCompletionHandler:(@?)b ;
 - (id) _readRelinquishmentForPresenter:(id)a ;
 - (void) _makePresenter:(id)a relinquishToAccessClaimWithID:(id)b ifNecessaryUsingSelector:(SEL)c recordingRelinquishment:(id)d continuer:(@?)e ;
 - (void) _makePresenter:(id)a accommodateDeletionWithSubitemURL:(id)b completionHandler:(@?)c ;
 - (void) _makePresenter:(id)a accommodateDisconnectionWithCompletionHandler:(@?)b ;
 - (id) _writeRelinquishmentForPresenter:(id)a ;
 - (void) _makePresenter:(id)a relinquishToReadingClaimWithID:(id)b options:(unsigned long long)c completionHandler:(@?)d ;
 - (void) _makePresenter:(id)a relinquishToWritingClaimWithID:(id)b options:(unsigned long long)c subitemURL:(id)d completionHandler:(@?)e ;
 - (void) _makePresenter:(id)a reacquireFromReadingClaimForID:(id)b ;
 - (void) _makePresenter:(id)a reacquireFromWritingClaimForID:(id)b ;
 - (void) _makePresenter:(id)a observeChangeWithSubitemURL:(id)b ;
 - (void) _makePresenter:(id)a observeMoveToURL:(id)b withSubitemURL:(id)c ;
 - (void) _makePresenterObserveDisconnection:(id)a ;
 - (void) _makePresenterObserveReconnection:(id)a ;
 - (void) _makePresenter:(id)a observeUbiquityChangeWithSubitemURL:(id)b ;
 - (void) _makePresenter:(id)a observeVersionChangeOfKind:(id)b withClientID:(id)c name:(id)d subitemURL:(id)e ;
 - (void) _makePresenter:(id)a setLastPresentedItemEventIdentifier:(unsigned long long)b ;
 - (void) _makeProvider:(id)a provideItemAtURL:(id)b forAccessClaimWithID:(id)c processIdentifier:(int)d completionHandler:(@?)e ;
 - (void) _makeProvider:(id)a cancelProvidingItemAtURL:(id)b forAccessClaimWithID:(id)c ;
 - (void) _makeProvider:(id)a providePhysicalURLForURL:(id)b completionHandler:(@?)c ;
 - (void) _makeProvider:(id)a observePresentationChangeOfKind:(id)b withPresenterID:(id)c processIdentifier:(int)d url:(id)e newURL:(id)f completionHandler:(@?)g ;
 - (void) _makeProvider:(id)a observeEndOfWriteAtURL:(id)b forAccessClaimWithID:(id)c processIdentifier:(int)d ;
 - (void) dealloc;
 - (void) finalize;


@end
