
@protocol NSFileAccessArbiter;
@interface NSFileAccessArbiterProxy : NSObject <NSFileAccessArbiter> {

    NSObject<OS_xpc_object> _server;
    NSObject<OS_dispatch_queue> _serverQueue;
    @? _serverEventHandler;
    NSObject<OS_dispatch_queue> _queue;
    NSMutableDictionary _presentersByID;
    NSMutableDictionary _providersByID;
}
 + (id) _idForReactor:(id)a;
 + (id) _fileReactorDebuggingInformation;
 + (void) _accessPresenterOperationRecordsUsingBlock:(@?)a;
 + (id) _willBeginOperationForReactor:(id)awithDescription:(id)b;

 - (void) addFilePresenter:(id)a;
 - (void) removeFilePresenter:(id)a;
 - (id) filePresenters;
 - (id) idForFileReactor:(id)a;
 - (void) cancelAccessClaimForID:(id)a;
 - (id) grantAccessClaim:(id)asynchronouslyIfPossible:(BOOL)b;
 - (void) revokeAccessClaimForID:(id)a;
 - (void) tiePresenterForID:(id)atoItemAtURL:(id)b;
 - (void) writerWithPurposeID:(id)adidMoveItemAtURL:(id)btoURL:(id)c;
 - (void) writerWithPurposeID:(id)adidChangeUbiquityOfItemAtURL:(id)b;
 - (void) writerWithPurposeID:(id)adidMakeItemDisappearAtURL:(id)b;
 - (void) writerWithPurposeID:(id)adidChangeItemAtURL:(id)b;
 - (void) revokeSubarbitrationClaimForID:(id)a;
 - (void) grantSubarbitrationClaim:(id)awithServer:(id)b;
 - (void) writerWithPurposeID:(id)adidDisconnectItemAtURL:(id)b;
 - (void) writerWithPurposeID:(id)adidReconnectItemAtURL:(id)b;
 - (void) writerWithPurposeID:(id)adidVersionChangeOfKind:(id)btoItemAtURL:(id)cwithClientID:(id)dname:(id)e;
 - (void) addFileProvider:(id)acompletionHandler:(@?)b;
 - (void) removeFileProvider:(id)a;
 - (id) fileProviders;
 - (void) getDebugInfoWithCompletionHandler:(@?)a;
 - (void) handleMessage:(id)a;
 - (void) handleCanceledServer;
 - (id) initWithServer:(id)aqueue:(id)beventHandler:(@?)c;
 - (void) _makePresenter:(id)asaveChangesWithCompletionHandler:(@?)b;
 - (id) _readRelinquishmentForPresenter:(id)a;
 - (void) _makePresenter:(id)arelinquishToAccessClaimWithID:(id)bifNecessaryUsingSelector:(SEL)crecordingRelinquishment:(id)dcontinuer:(@?)e;
 - (void) _makePresenter:(id)aaccommodateDeletionWithSubitemURL:(id)bcompletionHandler:(@?)c;
 - (void) _makePresenter:(id)aaccommodateDisconnectionWithCompletionHandler:(@?)b;
 - (id) _writeRelinquishmentForPresenter:(id)a;
 - (void) _makePresenter:(id)arelinquishToReadingClaimWithID:(id)boptions:(unsigned long long)ccompletionHandler:(@?)d;
 - (void) _makePresenter:(id)arelinquishToWritingClaimWithID:(id)boptions:(unsigned long long)csubitemURL:(id)dcompletionHandler:(@?)e;
 - (void) _makePresenter:(id)areacquireFromReadingClaimForID:(id)b;
 - (void) _makePresenter:(id)areacquireFromWritingClaimForID:(id)b;
 - (void) _makePresenter:(id)aobserveChangeWithSubitemURL:(id)b;
 - (void) _makePresenter:(id)aobserveMoveToURL:(id)bwithSubitemURL:(id)c;
 - (void) _makePresenterObserveDisconnection:(id)a;
 - (void) _makePresenterObserveReconnection:(id)a;
 - (void) _makePresenter:(id)aobserveUbiquityChangeWithSubitemURL:(id)b;
 - (void) _makePresenter:(id)aobserveVersionChangeOfKind:(id)bwithClientID:(id)cname:(id)dsubitemURL:(id)e;
 - (void) _makePresenter:(id)asetLastPresentedItemEventIdentifier:(unsigned long long)b;
 - (void) _makeProvider:(id)aprovideItemAtURL:(id)bforAccessClaimWithID:(id)cprocessIdentifier:(int)dcompletionHandler:(@?)e;
 - (void) _makeProvider:(id)acancelProvidingItemAtURL:(id)bforAccessClaimWithID:(id)c;
 - (void) _makeProvider:(id)aprovidePhysicalURLForURL:(id)bcompletionHandler:(@?)c;
 - (void) _makeProvider:(id)aobservePresentationChangeOfKind:(id)bwithPresenterID:(id)cprocessIdentifier:(int)durl:(id)enewURL:(id)fcompletionHandler:(@?)g;
 - (void) _makeProvider:(id)aobserveEndOfWriteAtURL:(id)bforAccessClaimWithID:(id)cprocessIdentifier:(int)d;
 - (void) dealloc;
 - (void) finalize;


@end
