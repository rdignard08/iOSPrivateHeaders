
@protocol NSFileAccessArbiter;
@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter> {

    @"NSObject<OS_dispatch_queue>" _queue;
    BOOL _isSubarbiter;
    @"NSMutableDictionary" _accessClaimsByID;
    @"NSMutableDictionary" _subarbitrationClaimsByID;
    @"NSMutableDictionary" _reactorsByID;
    @"NSFileAccessNode" _rootNode;
    @"NSObject<OS_xpc_object>" _superarbitrationServer;
}

 - (void) cancelAccessClaimForID:(id)a;
 - (id) grantAccessClaim:(id)asynchronouslyIfPossible:(BOOL)b;
 - (void) revokeAccessClaimForID:(id)a;
 - (void) tiePresenterForID:(id)atoItemAtURL:(id)b;
 - (void) writerWithPurposeID:(id)adidMoveItemAtURL:(id)btoURL:(id)c;
 - (void) writerWithPurposeID:(id)adidChangeUbiquityOfItemAtURL:(id)b;
 - (void) writerWithPurposeID:(id)adidMakeItemDisappearAtURL:(id)b;
 - (void) writerWithPurposeID:(id)adidChangeItemAtURL:(id)b;
 - (id) initWithQueue:(id)aisSubarbiter:(BOOL)blistener:(id)c;
 - (void) stopArbitrating;
 - (void) revokeSubarbitrationClaimForID:(id)a;
 - (void) grantSubarbitrationClaim:(id)awithServer:(id)b;
 - (void) writerWithPurposeID:(id)adidDisconnectItemAtURL:(id)b;
 - (void) writerWithPurposeID:(id)adidReconnectItemAtURL:(id)b;
 - (void) writerWithPurposeID:(id)adidVersionChangeOfKind:(id)btoItemAtURL:(id)cwithClientID:(id)dname:(id)e;
 - (void) _handleMessage:(id)afromClient:(id)b;
 - (void) _handleCanceledClient:(id)a;
 - (void) _registerForDebugInfoRequests;
 - (void) _handleMessage:(id)aforSubarbitrationClaim:(id)bserver:(id)c;
 - (void) _grantAccessClaim:(id)a;
 - (void) _writerWithPurposeID:(id)adidMoveItemAtURL:(id)btoURL:(id)c;
 - (void) _sendSubarbitersMessageWithKind:(id)aparameters:(id)b;
 - (void) _revokeAccessClaimForID:(id)afromLocal:(BOOL)b;
 - (void) _grantSubarbitrationClaim:(id)awithServer:(id)b;
 - (void) _cancelAccessClaimForID:(id)a;
 - (void) _writerWithPurposeID:(id)adidDisconnectItemAtURL:(id)b;
 - (void) _writerWithPurposeID:(id)adidReconnectItemAtURL:(id)b;
 - (void) _writerWithPurposeID:(id)adidChangeUbiquityOfItemAtURL:(id)b;
 - (void) _writerWithPurposeID:(id)adidMakeItemDisappearAtURL:(id)b;
 - (void) _writerWithPurposeID:(id)adidChangeItemAtURL:(id)b;
 - (void) _writerWithPurposeID:(id)adidVersionChangeOfKind:(id)btoItemAtURL:(id)cwithClientID:(id)dname:(id)e;
 - (void) _tiePresenterForID:(id)atoItemAtURL:(id)b;
 - (BOOL) _handleMessage:(id)aofKind:(id)bwithParameters:(id)cembeddedServer:(id)dfromClient:(id)e;
 - (void) _addPresenter:(id)aofItemAtURL:(id)bwatchingFile:(BOOL)cwithLastEventID:(id)d;
 - (void) _removeReactorForID:(id)a;
 - (void) _addProvider:(id)aofItemsAtURL:(id)b;
 - (void) _startArbitratingItemsAtURLs:(id)awithSuperarbitrationServer:(id)b;
 - (void) _getDebugInformationWithString:(id)afromPid:(int)bthenContinue:(@?)c;
 - (id) rootNode;
 - (void) dealloc;
 - (void) finalize;


@end
