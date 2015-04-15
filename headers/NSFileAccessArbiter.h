
@protocol NSFileAccessArbiter;
@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter> {

    NSObject<OS_dispatch_queue>* _queue;
    BOOL _isSubarbiter;
    NSMutableDictionary* _accessClaimsByID;
    NSMutableDictionary* _subarbitrationClaimsByID;
    NSMutableDictionary* _reactorsByID;
    NSFileAccessNode* _rootNode;
    NSObject<OS_xpc_object>* _superarbitrationServer;
}

 - (void) cancelAccessClaimForID:(id)a ;
 - (id) grantAccessClaim:(id)a synchronouslyIfPossible:(BOOL)b ;
 - (void) revokeAccessClaimForID:(id)a ;
 - (void) tiePresenterForID:(id)a toItemAtURL:(id)b ;
 - (void) writerWithPurposeID:(id)a didMoveItemAtURL:(id)b toURL:(id)c ;
 - (void) writerWithPurposeID:(id)a didChangeUbiquityOfItemAtURL:(id)b ;
 - (void) writerWithPurposeID:(id)a didMakeItemDisappearAtURL:(id)b ;
 - (void) writerWithPurposeID:(id)a didChangeItemAtURL:(id)b ;
 - (id) initWithQueue:(id)a isSubarbiter:(BOOL)b listener:(id)c ;
 - (void) stopArbitrating;
 - (void) revokeSubarbitrationClaimForID:(id)a ;
 - (void) grantSubarbitrationClaim:(id)a withServer:(id)b ;
 - (void) writerWithPurposeID:(id)a didDisconnectItemAtURL:(id)b ;
 - (void) writerWithPurposeID:(id)a didReconnectItemAtURL:(id)b ;
 - (void) writerWithPurposeID:(id)a didVersionChangeOfKind:(id)b toItemAtURL:(id)c withClientID:(id)d name:(id)e ;
 - (void) _handleMessage:(id)a fromClient:(id)b ;
 - (void) _handleCanceledClient:(id)a ;
 - (void) _registerForDebugInfoRequests;
 - (void) _handleMessage:(id)a forSubarbitrationClaim:(id)b server:(id)c ;
 - (void) _grantAccessClaim:(id)a ;
 - (void) _writerWithPurposeID:(id)a didMoveItemAtURL:(id)b toURL:(id)c ;
 - (void) _sendSubarbitersMessageWithKind:(id)a parameters:(id)b ;
 - (void) _revokeAccessClaimForID:(id)a fromLocal:(BOOL)b ;
 - (void) _grantSubarbitrationClaim:(id)a withServer:(id)b ;
 - (void) _cancelAccessClaimForID:(id)a ;
 - (void) _writerWithPurposeID:(id)a didDisconnectItemAtURL:(id)b ;
 - (void) _writerWithPurposeID:(id)a didReconnectItemAtURL:(id)b ;
 - (void) _writerWithPurposeID:(id)a didChangeUbiquityOfItemAtURL:(id)b ;
 - (void) _writerWithPurposeID:(id)a didMakeItemDisappearAtURL:(id)b ;
 - (void) _writerWithPurposeID:(id)a didChangeItemAtURL:(id)b ;
 - (void) _writerWithPurposeID:(id)a didVersionChangeOfKind:(id)b toItemAtURL:(id)c withClientID:(id)d name:(id)e ;
 - (void) _tiePresenterForID:(id)a toItemAtURL:(id)b ;
 - (BOOL) _handleMessage:(id)a ofKind:(id)b withParameters:(id)c embeddedServer:(id)d fromClient:(id)e ;
 - (void) _addPresenter:(id)a ofItemAtURL:(id)b watchingFile:(BOOL)c withLastEventID:(id)d ;
 - (void) _removeReactorForID:(id)a ;
 - (void) _addProvider:(id)a ofItemsAtURL:(id)b ;
 - (void) _startArbitratingItemsAtURLs:(id)a withSuperarbitrationServer:(id)b ;
 - (void) _getDebugInformationWithString:(id)a fromPid:(int)b thenContinue:(@?)c ;
 - (id) rootNode;
 - (void) dealloc;
 - (void) finalize;


@end
