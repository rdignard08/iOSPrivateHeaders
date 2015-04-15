
@interface NSFileAccessClaim : NSObject {

    NSObject<OS_xpc_object> _client;
    NSString _claimID;
    NSString _purposeIDOrNil;
    BOOL _cameFromSuperarbiter;
    unsigned long long _blockageCount;
    BOOL _didWait;
    BOOL _isRevoked;
    NSMutableArray _claimerBlockageReasons;
    NSError _claimerError;
    NSMutableOrderedSet _pendingClaims;
    NSMutableSet _blockingClaims;
    NSMutableSet _blockingReactorIDs;
    NSMutableArray _providerCancellationProcedures;
    NSMutableDictionary _reacquisitionProceduresByPresenterID;
    NSMutableArray _revocationProcedures;
    NSMutableArray _devaluationProcedures;
    NSMutableArray _finishingProcedures;
    id _claimerOrNil;
    NSObject<OS_dispatch_semaphore> _claimerWaiterOrNull;
    NSMutableArray _sandboxTokens;
}
 + (BOOL) canReadingItemAtLocation:(id)aoptions:(unsigned long long)bsafelyOverlapWritingItemAtLocation:(id)coptions:(unsigned long long)d;
 + (BOOL) canWritingItemAtLocation:(id)aoptions:(unsigned long long)bsafelyOverlapWritingItemAtLocation:(id)coptions:(unsigned long long)d;
 + (BOOL) readingItemAtLocation:(id)awithPurposeID:(id)brequiresOnlyPhysicalItemWithOptions:(unsigned long long)c;
 + (BOOL) writingItemAtLocation:(id)awithPurposeID:(id)brequiresOnlyPhysicalItemWithOptions:(unsigned long long)c;

 - (void) block;
 - (id) descriptionWithIndenting:(id)a;
 - (id) claimID;
 - (id) purposeID;
 - (void) setClaimerError:(id)a;
 - (void) unblockClaimerForReason:(id)a;
 - (BOOL) shouldBeRevokedPriorToInvokingAccessor;
 - (void) granted;
 - (void) invokeClaimer;
 - (BOOL) claimerInvokingIsBlockedByReactorWithID:(id)a;
 - (BOOL) isBlockedByClaimWithPurposeID:(id)a;
 - (void) blockClaimerForReason:(id)a;
 - (void) whenDevaluedPerformProcedure:(@?)a;
 - (void) addPendingClaim:(id)a;
 - (void) unblock;
 - (BOOL) _writeArchiveOfDirectoryAtURL:(id)atoURL:(id)berror:(^@)c;
 - (void) whenFinishedPerformProcedure:(@?)a;
 - (void) cancelled;
 - (void) devalueSelf;
 - (id) initWithClient:(id)aclaimID:(id)bpurposeID:(id)c;
 - (id) initWithClient:(id)amessageParameters:(id)breplySender:(@?)c;
 - (void) forwardUsingMessageSender:(@?)acrashHandler:(@?)b;
 - (void) setCameFromSuperarbiter;
 - (BOOL) cameFromSuperarbiter;
 - (BOOL) didWait;
 - (id) claimerError;
 - (BOOL) evaluateSelfWithRootNode:(id)acheckSubarbitrability:(BOOL)b;
 - (void) whenRevokedPerformProcedure:(@?)a;
 - (void) evaluateNewClaim:(id)a;
 - (id) pendingClaims;
 - (void) removePendingClaims:(id)a;
 - (BOOL) isBlockedByReadingItemAtLocation:(id)aoptions:(unsigned long long)b;
 - (BOOL) isBlockedByWritingItemAtLocation:(id)aoptions:(unsigned long long)b;
 - (void) makeProviderOfItemAtLocation:(id)aprovideThenContinue:(@?)b;
 - (void) makeProviderOfItemAtLocation:(id)aprovidePhysicalURLThenContinue:(@?)b;
 - (void) makePresentersOfItemAtLocation:(id)aorContainedItem:(BOOL)brelinquishUsingProcedureGetter:(@?)c;
 - (BOOL) canAccessLocations:(id)aforReading:(BOOL)berror:(^@)c;
 - (void) prepareItemForUploadingFromURL:(id)athenContinue:(@?)b;
 - (id) newClaimerWaiter;
 - (void) revoked;
 - (void) devalueOldClaim:(id)a;
 - (BOOL) isGranted;
 - (BOOL) isRevoked;
 - (void) itemAtLocation:(id)awasReplacedByItemAtLocation:(id)b;
 - (BOOL) checkIfSymbolicLinkAtURL:(id)awithResolutionCount:(^q)bandIfSoThenReevaluateSelf:(@?)c;
 - (id) purposeIDOfClaimOnItemAtLocation:(id)aforMessagingPresenter:(id)b;
 - (id) description;
 - (void) dealloc;
 - (void) finalize;
 - (id) client;
 - (void) finished;


@end
